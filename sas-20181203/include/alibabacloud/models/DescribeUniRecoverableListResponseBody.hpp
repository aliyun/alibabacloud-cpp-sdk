// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniRecoverableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniRecoverableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecoverableInfoList, recoverableInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniRecoverableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecoverableInfoList, recoverableInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUniRecoverableListResponseBody() = default ;
    DescribeUniRecoverableListResponseBody(const DescribeUniRecoverableListResponseBody &) = default ;
    DescribeUniRecoverableListResponseBody(DescribeUniRecoverableListResponseBody &&) = default ;
    DescribeUniRecoverableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniRecoverableListResponseBody() = default ;
    DescribeUniRecoverableListResponseBody& operator=(const DescribeUniRecoverableListResponseBody &) = default ;
    DescribeUniRecoverableListResponseBody& operator=(DescribeUniRecoverableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecoverableInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecoverableInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(ResetScn, resetScn_);
        DARABONBA_PTR_TO_JSON(ResetTime, resetTime_);
        DARABONBA_PTR_TO_JSON(RestoreInfo, restoreInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RecoverableInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(ResetScn, resetScn_);
        DARABONBA_PTR_FROM_JSON(ResetTime, resetTime_);
        DARABONBA_PTR_FROM_JSON(RestoreInfo, restoreInfo_);
      };
      RecoverableInfoList() = default ;
      RecoverableInfoList(const RecoverableInfoList &) = default ;
      RecoverableInfoList(RecoverableInfoList &&) = default ;
      RecoverableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecoverableInfoList() = default ;
      RecoverableInfoList& operator=(const RecoverableInfoList &) = default ;
      RecoverableInfoList& operator=(RecoverableInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firstTime_ == nullptr
        && this->lastTime_ == nullptr && this->resetScn_ == nullptr && this->resetTime_ == nullptr && this->restoreInfo_ == nullptr; };
      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline RecoverableInfoList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline RecoverableInfoList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // resetScn Field Functions 
      bool hasResetScn() const { return this->resetScn_ != nullptr;};
      void deleteResetScn() { this->resetScn_ = nullptr;};
      inline string getResetScn() const { DARABONBA_PTR_GET_DEFAULT(resetScn_, "") };
      inline RecoverableInfoList& setResetScn(string resetScn) { DARABONBA_PTR_SET_VALUE(resetScn_, resetScn) };


      // resetTime Field Functions 
      bool hasResetTime() const { return this->resetTime_ != nullptr;};
      void deleteResetTime() { this->resetTime_ = nullptr;};
      inline int64_t getResetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, 0L) };
      inline RecoverableInfoList& setResetTime(int64_t resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


      // restoreInfo Field Functions 
      bool hasRestoreInfo() const { return this->restoreInfo_ != nullptr;};
      void deleteRestoreInfo() { this->restoreInfo_ = nullptr;};
      inline string getRestoreInfo() const { DARABONBA_PTR_GET_DEFAULT(restoreInfo_, "") };
      inline RecoverableInfoList& setRestoreInfo(string restoreInfo) { DARABONBA_PTR_SET_VALUE(restoreInfo_, restoreInfo) };


    protected:
      // The timestamp of the first backup. Unit: milliseconds.
      shared_ptr<int64_t> firstTime_ {};
      // The timestamp of the last backup. Unit: milliseconds.
      shared_ptr<int64_t> lastTime_ {};
      // The identifier of the point in time for restoration in the backup version that is used. The database is an Oracle database.
      shared_ptr<string> resetScn_ {};
      // The point in time for restoration in the backup version that is used. The database is an Oracle database.
      shared_ptr<int64_t> resetTime_ {};
      // The information about the database. This parameter is available when the database is a Microsoft SQL Server (MSSQL) database. The value is a JSON string. Valid values:
      // 
      // *   **name**: the name of the database
      // *   **files**: the path to the database files
      shared_ptr<string> restoreInfo_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->database_ == nullptr && this->pageSize_ == nullptr && this->recoverableInfoList_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeUniRecoverableListResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeUniRecoverableListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeUniRecoverableListResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUniRecoverableListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recoverableInfoList Field Functions 
    bool hasRecoverableInfoList() const { return this->recoverableInfoList_ != nullptr;};
    void deleteRecoverableInfoList() { this->recoverableInfoList_ = nullptr;};
    inline const vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList> & getRecoverableInfoList() const { DARABONBA_PTR_GET_CONST(recoverableInfoList_, vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList>) };
    inline vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList> getRecoverableInfoList() { DARABONBA_PTR_GET(recoverableInfoList_, vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList>) };
    inline DescribeUniRecoverableListResponseBody& setRecoverableInfoList(const vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList> & recoverableInfoList) { DARABONBA_PTR_SET_VALUE(recoverableInfoList_, recoverableInfoList) };
    inline DescribeUniRecoverableListResponseBody& setRecoverableInfoList(vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList> && recoverableInfoList) { DARABONBA_PTR_SET_RVALUE(recoverableInfoList_, recoverableInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniRecoverableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUniRecoverableListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the database.
    shared_ptr<string> database_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // An array that consists of the backup snapshots.
    shared_ptr<vector<DescribeUniRecoverableListResponseBody::RecoverableInfoList>> recoverableInfoList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
