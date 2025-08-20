// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UnbindAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    UnbindAccountRequest() = default ;
    UnbindAccountRequest(const UnbindAccountRequest &) = default ;
    UnbindAccountRequest(UnbindAccountRequest &&) = default ;
    UnbindAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAccountRequest() = default ;
    UnbindAccountRequest& operator=(const UnbindAccountRequest &) = default ;
    UnbindAccountRequest& operator=(UnbindAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->DBClusterId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline UnbindAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UnbindAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The name of the database account.
    // 
    // >  You can call the [DescribeAccounts](https://help.aliyun.com/document_detail/612430.html) operation to query the information about database accounts of an AnalyticDB for MySQL cluster, including database account names.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
