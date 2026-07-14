// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    GetAccountRequest() = default ;
    GetAccountRequest(const GetAccountRequest &) = default ;
    GetAccountRequest(GetAccountRequest &&) = default ;
    GetAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountRequest() = default ;
    GetAccountRequest& operator=(const GetAccountRequest &) = default ;
    GetAccountRequest& operator=(GetAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBInstanceId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline GetAccountRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The name of the initial account. The name must meet the following requirements:
    // 
    // - The name can contain lowercase letters, digits, and underscores (_).
    // - The name must start with a lowercase letter and end with a lowercase letter or digit.
    // - The name cannot start with gp.
    // - The name must be 2 to 16 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The instance ID.
    // >You can specify up to 30 instance IDs for batch operations. Separate multiple instance IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
