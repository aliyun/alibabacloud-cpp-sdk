// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeAccountsRequest() = default ;
    DescribeAccountsRequest(const DescribeAccountsRequest &) = default ;
    DescribeAccountsRequest(DescribeAccountsRequest &&) = default ;
    DescribeAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsRequest() = default ;
    DescribeAccountsRequest& operator=(const DescribeAccountsRequest &) = default ;
    DescribeAccountsRequest& operator=(DescribeAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->DBClusterId_ != nullptr && this->engine_ != nullptr && this->ownerId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAccountsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAccountsRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeAccountsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The name of the database account.
    // 
    // > If you do not specify this parameter, the information about all database accounts in the cluster is returned.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database engine of the cluster. Valid values:
    // 
    // *   **AnalyticDB** (default): the AnalyticDB for MySQL engine.
    // *   **Clickhouse**: the wide table engine.
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
