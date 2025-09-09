// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDbInstanceDbsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstanceDbsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstanceDbsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    DescribeDbInstanceDbsRequest() = default ;
    DescribeDbInstanceDbsRequest(const DescribeDbInstanceDbsRequest &) = default ;
    DescribeDbInstanceDbsRequest(DescribeDbInstanceDbsRequest &&) = default ;
    DescribeDbInstanceDbsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstanceDbsRequest() = default ;
    DescribeDbInstanceDbsRequest& operator=(const DescribeDbInstanceDbsRequest &) = default ;
    DescribeDbInstanceDbsRequest& operator=(DescribeDbInstanceDbsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dbInstType_ != nullptr && this->dbInstanceId_ != nullptr && this->drdsInstanceId_ != nullptr && this->password_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeDbInstanceDbsRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDbInstanceDbsRequest& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline DescribeDbInstanceDbsRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDbInstanceDbsRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeDbInstanceDbsRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The name of the privileged account of the PolarDB-X 1.0 instance. You do not need to specify this parameter if you have no privileged account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The engine type of the storage-layer databases. Valid values: **POLARDB** and **RDS**.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The ID of the instance in which the storage-layer databases are deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The password of the privileged account. You do not need to specify this parameter if you have no privileged account.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
