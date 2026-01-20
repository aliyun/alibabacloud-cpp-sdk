// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody(DescribeBackupsResponseBody &&) = default ;
    DescribeBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody& operator=(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody& operator=(DescribeBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_TO_JSON(BackupId, backupId_);
        DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_TO_JSON(BackupSetInfo, backupSetInfo_);
        DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
        DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_FROM_JSON(BackupSetInfo, backupSetInfo_);
        DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
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
      virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupId_ == nullptr && this->backupMethod_ == nullptr && this->backupSetInfo_ == nullptr && this->backupSize_ == nullptr && this->backupStartTime_ == nullptr
        && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->DBInstanceId_ == nullptr && this->expireDate_ == nullptr; };
      // backupEndTime Field Functions 
      bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
      void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
      inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
      inline Items& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline Items& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // backupMethod Field Functions 
      bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
      void deleteBackupMethod() { this->backupMethod_ = nullptr;};
      inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
      inline Items& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


      // backupSetInfo Field Functions 
      bool hasBackupSetInfo() const { return this->backupSetInfo_ != nullptr;};
      void deleteBackupSetInfo() { this->backupSetInfo_ = nullptr;};
      inline string getBackupSetInfo() const { DARABONBA_PTR_GET_DEFAULT(backupSetInfo_, "") };
      inline Items& setBackupSetInfo(string backupSetInfo) { DARABONBA_PTR_SET_VALUE(backupSetInfo_, backupSetInfo) };


      // backupSize Field Functions 
      bool hasBackupSize() const { return this->backupSize_ != nullptr;};
      void deleteBackupSize() { this->backupSize_ = nullptr;};
      inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
      inline Items& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
      inline Items& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // backupStatus Field Functions 
      bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
      void deleteBackupStatus() { this->backupStatus_ = nullptr;};
      inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
      inline Items& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Items& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Items& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Items& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    protected:
      shared_ptr<string> backupEndTime_ {};
      shared_ptr<string> backupId_ {};
      shared_ptr<string> backupMethod_ {};
      shared_ptr<string> backupSetInfo_ {};
      shared_ptr<int64_t> backupSize_ {};
      shared_ptr<string> backupStartTime_ {};
      shared_ptr<string> backupStatus_ {};
      shared_ptr<string> backupType_ {};
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<string> expireDate_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeBackupsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeBackupsResponseBody::Items>) };
    inline vector<DescribeBackupsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeBackupsResponseBody::Items>) };
    inline DescribeBackupsResponseBody& setItems(const vector<DescribeBackupsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupsResponseBody& setItems(vector<DescribeBackupsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeBackupsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeBackupsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeBackupsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeBackupsResponseBody::Items>> items_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
