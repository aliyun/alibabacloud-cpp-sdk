// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAccountDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
    };
    ModifyAccountDescriptionRequest() = default ;
    ModifyAccountDescriptionRequest(const ModifyAccountDescriptionRequest &) = default ;
    ModifyAccountDescriptionRequest(ModifyAccountDescriptionRequest &&) = default ;
    ModifyAccountDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountDescriptionRequest() = default ;
    ModifyAccountDescriptionRequest& operator=(const ModifyAccountDescriptionRequest &) = default ;
    ModifyAccountDescriptionRequest& operator=(ModifyAccountDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountDescription_ != nullptr
        && this->accountName_ != nullptr && this->DBClusterId_ != nullptr && this->engine_ != nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline ModifyAccountDescriptionRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountDescriptionRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAccountDescriptionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ModifyAccountDescriptionRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    // The description of the database account.
    // 
    // *   The description cannot start with `http://` or `https://`.
    // *   The description must be 2 to 256 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the database account.
    // 
    // >  You can call the [DescribeAccounts](https://help.aliyun.com/document_detail/612430.html) operation to query the information about database accounts of an AnalyticDB for MySQL cluster, including database account names.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database engine of the cluster. Valid values:
    // 
    // *   **AnalyticDB** (default): the AnalyticDB for MySQL engine.
    // *   **Clickhouse**: the wide table engine.
    std::shared_ptr<string> engine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
