// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYEXPIRETIMERESPONSEBODYITEMSDBINSTANCEEXPIRETIME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYEXPIRETIMERESPONSEBODYITEMSDBINSTANCEEXPIRETIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
    };
    DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime() = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime(const DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime &) = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime(DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime &&) = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime() = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& operator=(const DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime &) = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& operator=(DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->DBInstanceStatus_ == nullptr && return this->expireTime_ == nullptr && return this->lockMode_ == nullptr && return this->payType_ == nullptr; };
    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


  protected:
    // The description of the instance.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The status of the instance. For more information, see [Instance state table](https://help.aliyun.com/document_detail/26315.html).
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The expiration time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > : Pay-as-you-go instances never expire.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The lock mode of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is not locked.
    // *   **ManualLock**: The instance is manually locked.
    // *   **LockByExpiration**: The instance is automatically locked after it expires.
    // *   **LockByRestoration**: The instance is automatically locked before it is rolled back.
    // *   **LockByDiskQuota**: The instance is automatically locked after its storage capacity is exhausted.
    // *   **LockReadInstanceByDiskQuota**: The instance is a read-only instance and is automatically locked after its storage capacity is exhausted.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> payType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
