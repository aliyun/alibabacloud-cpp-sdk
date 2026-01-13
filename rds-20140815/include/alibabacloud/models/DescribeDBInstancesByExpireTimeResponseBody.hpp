// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYEXPIRETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYEXPIRETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesByExpireTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesByExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesByExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstancesByExpireTimeResponseBody() = default ;
    DescribeDBInstancesByExpireTimeResponseBody(const DescribeDBInstancesByExpireTimeResponseBody &) = default ;
    DescribeDBInstancesByExpireTimeResponseBody(DescribeDBInstancesByExpireTimeResponseBody &&) = default ;
    DescribeDBInstancesByExpireTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesByExpireTimeResponseBody() = default ;
    DescribeDBInstancesByExpireTimeResponseBody& operator=(const DescribeDBInstancesByExpireTimeResponseBody &) = default ;
    DescribeDBInstancesByExpireTimeResponseBody& operator=(DescribeDBInstancesByExpireTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceExpireTime, DBInstanceExpireTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceExpireTime, DBInstanceExpireTime_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceExpireTime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceExpireTime& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceExpireTime& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
        };
        DBInstanceExpireTime() = default ;
        DBInstanceExpireTime(const DBInstanceExpireTime &) = default ;
        DBInstanceExpireTime(DBInstanceExpireTime &&) = default ;
        DBInstanceExpireTime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceExpireTime() = default ;
        DBInstanceExpireTime& operator=(const DBInstanceExpireTime &) = default ;
        DBInstanceExpireTime& operator=(DBInstanceExpireTime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBInstanceStatus_ == nullptr && this->expireTime_ == nullptr && this->lockMode_ == nullptr && this->payType_ == nullptr; };
        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstanceExpireTime& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstanceExpireTime& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline DBInstanceExpireTime& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBInstanceExpireTime& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstanceExpireTime& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBInstanceExpireTime& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      protected:
        // The description of the instance.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The status of the instance. For more information, see [Instance state table](https://help.aliyun.com/document_detail/26315.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The expiration time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > : Pay-as-you-go instances never expire.
        shared_ptr<string> expireTime_ {};
        // The lock mode of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked after it expires.
        // *   **LockByRestoration**: The instance is automatically locked before it is rolled back.
        // *   **LockByDiskQuota**: The instance is automatically locked after its storage capacity is exhausted.
        // *   **LockReadInstanceByDiskQuota**: The instance is a read-only instance and is automatically locked after its storage capacity is exhausted.
        shared_ptr<string> lockMode_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go.
        // *   **Prepaid**: subscription.
        shared_ptr<string> payType_ {};
      };

      virtual bool empty() const override { return this->DBInstanceExpireTime_ == nullptr; };
      // DBInstanceExpireTime Field Functions 
      bool hasDBInstanceExpireTime() const { return this->DBInstanceExpireTime_ != nullptr;};
      void deleteDBInstanceExpireTime() { this->DBInstanceExpireTime_ = nullptr;};
      inline const vector<Items::DBInstanceExpireTime> & getDBInstanceExpireTime() const { DARABONBA_PTR_GET_CONST(DBInstanceExpireTime_, vector<Items::DBInstanceExpireTime>) };
      inline vector<Items::DBInstanceExpireTime> getDBInstanceExpireTime() { DARABONBA_PTR_GET(DBInstanceExpireTime_, vector<Items::DBInstanceExpireTime>) };
      inline Items& setDBInstanceExpireTime(const vector<Items::DBInstanceExpireTime> & dBInstanceExpireTime) { DARABONBA_PTR_SET_VALUE(DBInstanceExpireTime_, dBInstanceExpireTime) };
      inline Items& setDBInstanceExpireTime(vector<Items::DBInstanceExpireTime> && dBInstanceExpireTime) { DARABONBA_PTR_SET_RVALUE(DBInstanceExpireTime_, dBInstanceExpireTime) };


    protected:
      shared_ptr<vector<Items::DBInstanceExpireTime>> DBInstanceExpireTime_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesByExpireTimeResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesByExpireTimeResponseBody::Items) };
    inline DescribeDBInstancesByExpireTimeResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancesByExpireTimeResponseBody::Items) };
    inline DescribeDBInstancesByExpireTimeResponseBody& setItems(const DescribeDBInstancesByExpireTimeResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesByExpireTimeResponseBody& setItems(DescribeDBInstancesByExpireTimeResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesByExpireTimeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstancesByExpireTimeResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesByExpireTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstancesByExpireTimeResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of the instances.
    shared_ptr<DescribeDBInstancesByExpireTimeResponseBody::Items> items_ {};
    // The page number of the returned page. Valid values: any **non-zero** positive integer.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of instances returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
