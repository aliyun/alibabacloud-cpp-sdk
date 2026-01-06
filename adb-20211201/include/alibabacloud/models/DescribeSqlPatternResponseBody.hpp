// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSqlPatternResponseBody() = default ;
    DescribeSqlPatternResponseBody(const DescribeSqlPatternResponseBody &) = default ;
    DescribeSqlPatternResponseBody(DescribeSqlPatternResponseBody &&) = default ;
    DescribeSqlPatternResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternResponseBody() = default ;
    DescribeSqlPatternResponseBody& operator=(const DescribeSqlPatternResponseBody &) = default ;
    DescribeSqlPatternResponseBody& operator=(DescribeSqlPatternResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AccessIP, accessIP_);
        DARABONBA_PTR_TO_JSON(AvgCpuTime, avgCpuTime_);
        DARABONBA_PTR_TO_JSON(AvgPeakMemory, avgPeakMemory_);
        DARABONBA_PTR_TO_JSON(AvgScanSize, avgScanSize_);
        DARABONBA_PTR_TO_JSON(AvgStageCount, avgStageCount_);
        DARABONBA_PTR_TO_JSON(AvgTaskCount, avgTaskCount_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MaxCpuTime, maxCpuTime_);
        DARABONBA_PTR_TO_JSON(MaxPeakMemory, maxPeakMemory_);
        DARABONBA_PTR_TO_JSON(MaxScanSize, maxScanSize_);
        DARABONBA_PTR_TO_JSON(MaxStageCount, maxStageCount_);
        DARABONBA_PTR_TO_JSON(MaxTaskCount, maxTaskCount_);
        DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
        DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessIP, accessIP_);
        DARABONBA_PTR_FROM_JSON(AvgCpuTime, avgCpuTime_);
        DARABONBA_PTR_FROM_JSON(AvgPeakMemory, avgPeakMemory_);
        DARABONBA_PTR_FROM_JSON(AvgScanSize, avgScanSize_);
        DARABONBA_PTR_FROM_JSON(AvgStageCount, avgStageCount_);
        DARABONBA_PTR_FROM_JSON(AvgTaskCount, avgTaskCount_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MaxCpuTime, maxCpuTime_);
        DARABONBA_PTR_FROM_JSON(MaxPeakMemory, maxPeakMemory_);
        DARABONBA_PTR_FROM_JSON(MaxScanSize, maxScanSize_);
        DARABONBA_PTR_FROM_JSON(MaxStageCount, maxStageCount_);
        DARABONBA_PTR_FROM_JSON(MaxTaskCount, maxTaskCount_);
        DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
        DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      virtual bool empty() const override { return this->accessIP_ == nullptr
        && this->avgCpuTime_ == nullptr && this->avgPeakMemory_ == nullptr && this->avgScanSize_ == nullptr && this->avgStageCount_ == nullptr && this->avgTaskCount_ == nullptr
        && this->instanceName_ == nullptr && this->maxCpuTime_ == nullptr && this->maxPeakMemory_ == nullptr && this->maxScanSize_ == nullptr && this->maxStageCount_ == nullptr
        && this->maxTaskCount_ == nullptr && this->pattern_ == nullptr && this->queryCount_ == nullptr && this->reportDate_ == nullptr && this->user_ == nullptr; };
      // accessIP Field Functions 
      bool hasAccessIP() const { return this->accessIP_ != nullptr;};
      void deleteAccessIP() { this->accessIP_ = nullptr;};
      inline string getAccessIP() const { DARABONBA_PTR_GET_DEFAULT(accessIP_, "") };
      inline Items& setAccessIP(string accessIP) { DARABONBA_PTR_SET_VALUE(accessIP_, accessIP) };


      // avgCpuTime Field Functions 
      bool hasAvgCpuTime() const { return this->avgCpuTime_ != nullptr;};
      void deleteAvgCpuTime() { this->avgCpuTime_ = nullptr;};
      inline string getAvgCpuTime() const { DARABONBA_PTR_GET_DEFAULT(avgCpuTime_, "") };
      inline Items& setAvgCpuTime(string avgCpuTime) { DARABONBA_PTR_SET_VALUE(avgCpuTime_, avgCpuTime) };


      // avgPeakMemory Field Functions 
      bool hasAvgPeakMemory() const { return this->avgPeakMemory_ != nullptr;};
      void deleteAvgPeakMemory() { this->avgPeakMemory_ = nullptr;};
      inline string getAvgPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(avgPeakMemory_, "") };
      inline Items& setAvgPeakMemory(string avgPeakMemory) { DARABONBA_PTR_SET_VALUE(avgPeakMemory_, avgPeakMemory) };


      // avgScanSize Field Functions 
      bool hasAvgScanSize() const { return this->avgScanSize_ != nullptr;};
      void deleteAvgScanSize() { this->avgScanSize_ = nullptr;};
      inline string getAvgScanSize() const { DARABONBA_PTR_GET_DEFAULT(avgScanSize_, "") };
      inline Items& setAvgScanSize(string avgScanSize) { DARABONBA_PTR_SET_VALUE(avgScanSize_, avgScanSize) };


      // avgStageCount Field Functions 
      bool hasAvgStageCount() const { return this->avgStageCount_ != nullptr;};
      void deleteAvgStageCount() { this->avgStageCount_ = nullptr;};
      inline string getAvgStageCount() const { DARABONBA_PTR_GET_DEFAULT(avgStageCount_, "") };
      inline Items& setAvgStageCount(string avgStageCount) { DARABONBA_PTR_SET_VALUE(avgStageCount_, avgStageCount) };


      // avgTaskCount Field Functions 
      bool hasAvgTaskCount() const { return this->avgTaskCount_ != nullptr;};
      void deleteAvgTaskCount() { this->avgTaskCount_ = nullptr;};
      inline string getAvgTaskCount() const { DARABONBA_PTR_GET_DEFAULT(avgTaskCount_, "") };
      inline Items& setAvgTaskCount(string avgTaskCount) { DARABONBA_PTR_SET_VALUE(avgTaskCount_, avgTaskCount) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // maxCpuTime Field Functions 
      bool hasMaxCpuTime() const { return this->maxCpuTime_ != nullptr;};
      void deleteMaxCpuTime() { this->maxCpuTime_ = nullptr;};
      inline string getMaxCpuTime() const { DARABONBA_PTR_GET_DEFAULT(maxCpuTime_, "") };
      inline Items& setMaxCpuTime(string maxCpuTime) { DARABONBA_PTR_SET_VALUE(maxCpuTime_, maxCpuTime) };


      // maxPeakMemory Field Functions 
      bool hasMaxPeakMemory() const { return this->maxPeakMemory_ != nullptr;};
      void deleteMaxPeakMemory() { this->maxPeakMemory_ = nullptr;};
      inline string getMaxPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(maxPeakMemory_, "") };
      inline Items& setMaxPeakMemory(string maxPeakMemory) { DARABONBA_PTR_SET_VALUE(maxPeakMemory_, maxPeakMemory) };


      // maxScanSize Field Functions 
      bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
      void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
      inline string getMaxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, "") };
      inline Items& setMaxScanSize(string maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


      // maxStageCount Field Functions 
      bool hasMaxStageCount() const { return this->maxStageCount_ != nullptr;};
      void deleteMaxStageCount() { this->maxStageCount_ = nullptr;};
      inline string getMaxStageCount() const { DARABONBA_PTR_GET_DEFAULT(maxStageCount_, "") };
      inline Items& setMaxStageCount(string maxStageCount) { DARABONBA_PTR_SET_VALUE(maxStageCount_, maxStageCount) };


      // maxTaskCount Field Functions 
      bool hasMaxTaskCount() const { return this->maxTaskCount_ != nullptr;};
      void deleteMaxTaskCount() { this->maxTaskCount_ = nullptr;};
      inline string getMaxTaskCount() const { DARABONBA_PTR_GET_DEFAULT(maxTaskCount_, "") };
      inline Items& setMaxTaskCount(string maxTaskCount) { DARABONBA_PTR_SET_VALUE(maxTaskCount_, maxTaskCount) };


      // pattern Field Functions 
      bool hasPattern() const { return this->pattern_ != nullptr;};
      void deletePattern() { this->pattern_ = nullptr;};
      inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
      inline Items& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      // queryCount Field Functions 
      bool hasQueryCount() const { return this->queryCount_ != nullptr;};
      void deleteQueryCount() { this->queryCount_ = nullptr;};
      inline string getQueryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, "") };
      inline Items& setQueryCount(string queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


      // reportDate Field Functions 
      bool hasReportDate() const { return this->reportDate_ != nullptr;};
      void deleteReportDate() { this->reportDate_ = nullptr;};
      inline string getReportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, "") };
      inline Items& setReportDate(string reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Items& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The IP address of the client.
      // 
      // >  This parameter is returned only when **Type** is set to **accessip**.
      shared_ptr<string> accessIP_ {};
      // The average execution duration of the SQL pattern within the query time range. Unit: milliseconds.
      shared_ptr<string> avgCpuTime_ {};
      // The average peak memory usage of the SQL pattern within the query time range. Unit: KB.
      shared_ptr<string> avgPeakMemory_ {};
      // The average amount of data scanned based on the SQL pattern within the query time range. Unit: KB.
      shared_ptr<string> avgScanSize_ {};
      // The average number of scanned rows.
      shared_ptr<string> avgStageCount_ {};
      // The average number of tasks.
      shared_ptr<string> avgTaskCount_ {};
      // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
      shared_ptr<string> instanceName_ {};
      // The maximum execution duration of the SQL pattern within the query time range. Unit: milliseconds.
      shared_ptr<string> maxCpuTime_ {};
      // The maximum peak memory usage of the SQL pattern within the query time range. Unit: KB.
      shared_ptr<string> maxPeakMemory_ {};
      // The maximum amount of data scanned based on the SQL pattern within the query time range. Unit: KB.
      shared_ptr<string> maxScanSize_ {};
      // The maximum number of stages.
      shared_ptr<string> maxStageCount_ {};
      // The maximum number of tasks.
      shared_ptr<string> maxTaskCount_ {};
      // The SQL pattern.
      shared_ptr<string> pattern_ {};
      // The number of queries performed in association with the SQL pattern within the query time range.
      shared_ptr<string> queryCount_ {};
      // The start date of the query.
      shared_ptr<string> reportDate_ {};
      // The username.
      // 
      // >  This parameter is returned only when **Type** is left empty or set to **user**.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSqlPatternResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSqlPatternResponseBody::Items>) };
    inline vector<DescribeSqlPatternResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSqlPatternResponseBody::Items>) };
    inline DescribeSqlPatternResponseBody& setItems(const vector<DescribeSqlPatternResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSqlPatternResponseBody& setItems(vector<DescribeSqlPatternResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSqlPatternResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlPatternResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlPatternResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSqlPatternResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried SQL pattern.
    shared_ptr<vector<DescribeSqlPatternResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
