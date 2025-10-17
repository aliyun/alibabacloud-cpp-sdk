// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternResponseBodyItems& obj) { 
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
    DescribeSqlPatternResponseBodyItems() = default ;
    DescribeSqlPatternResponseBodyItems(const DescribeSqlPatternResponseBodyItems &) = default ;
    DescribeSqlPatternResponseBodyItems(DescribeSqlPatternResponseBodyItems &&) = default ;
    DescribeSqlPatternResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternResponseBodyItems() = default ;
    DescribeSqlPatternResponseBodyItems& operator=(const DescribeSqlPatternResponseBodyItems &) = default ;
    DescribeSqlPatternResponseBodyItems& operator=(DescribeSqlPatternResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessIP_ == nullptr
        && return this->avgCpuTime_ == nullptr && return this->avgPeakMemory_ == nullptr && return this->avgScanSize_ == nullptr && return this->avgStageCount_ == nullptr && return this->avgTaskCount_ == nullptr
        && return this->instanceName_ == nullptr && return this->maxCpuTime_ == nullptr && return this->maxPeakMemory_ == nullptr && return this->maxScanSize_ == nullptr && return this->maxStageCount_ == nullptr
        && return this->maxTaskCount_ == nullptr && return this->pattern_ == nullptr && return this->queryCount_ == nullptr && return this->reportDate_ == nullptr && return this->user_ == nullptr; };
    // accessIP Field Functions 
    bool hasAccessIP() const { return this->accessIP_ != nullptr;};
    void deleteAccessIP() { this->accessIP_ = nullptr;};
    inline string accessIP() const { DARABONBA_PTR_GET_DEFAULT(accessIP_, "") };
    inline DescribeSqlPatternResponseBodyItems& setAccessIP(string accessIP) { DARABONBA_PTR_SET_VALUE(accessIP_, accessIP) };


    // avgCpuTime Field Functions 
    bool hasAvgCpuTime() const { return this->avgCpuTime_ != nullptr;};
    void deleteAvgCpuTime() { this->avgCpuTime_ = nullptr;};
    inline string avgCpuTime() const { DARABONBA_PTR_GET_DEFAULT(avgCpuTime_, "") };
    inline DescribeSqlPatternResponseBodyItems& setAvgCpuTime(string avgCpuTime) { DARABONBA_PTR_SET_VALUE(avgCpuTime_, avgCpuTime) };


    // avgPeakMemory Field Functions 
    bool hasAvgPeakMemory() const { return this->avgPeakMemory_ != nullptr;};
    void deleteAvgPeakMemory() { this->avgPeakMemory_ = nullptr;};
    inline string avgPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(avgPeakMemory_, "") };
    inline DescribeSqlPatternResponseBodyItems& setAvgPeakMemory(string avgPeakMemory) { DARABONBA_PTR_SET_VALUE(avgPeakMemory_, avgPeakMemory) };


    // avgScanSize Field Functions 
    bool hasAvgScanSize() const { return this->avgScanSize_ != nullptr;};
    void deleteAvgScanSize() { this->avgScanSize_ = nullptr;};
    inline string avgScanSize() const { DARABONBA_PTR_GET_DEFAULT(avgScanSize_, "") };
    inline DescribeSqlPatternResponseBodyItems& setAvgScanSize(string avgScanSize) { DARABONBA_PTR_SET_VALUE(avgScanSize_, avgScanSize) };


    // avgStageCount Field Functions 
    bool hasAvgStageCount() const { return this->avgStageCount_ != nullptr;};
    void deleteAvgStageCount() { this->avgStageCount_ = nullptr;};
    inline string avgStageCount() const { DARABONBA_PTR_GET_DEFAULT(avgStageCount_, "") };
    inline DescribeSqlPatternResponseBodyItems& setAvgStageCount(string avgStageCount) { DARABONBA_PTR_SET_VALUE(avgStageCount_, avgStageCount) };


    // avgTaskCount Field Functions 
    bool hasAvgTaskCount() const { return this->avgTaskCount_ != nullptr;};
    void deleteAvgTaskCount() { this->avgTaskCount_ = nullptr;};
    inline string avgTaskCount() const { DARABONBA_PTR_GET_DEFAULT(avgTaskCount_, "") };
    inline DescribeSqlPatternResponseBodyItems& setAvgTaskCount(string avgTaskCount) { DARABONBA_PTR_SET_VALUE(avgTaskCount_, avgTaskCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSqlPatternResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maxCpuTime Field Functions 
    bool hasMaxCpuTime() const { return this->maxCpuTime_ != nullptr;};
    void deleteMaxCpuTime() { this->maxCpuTime_ = nullptr;};
    inline string maxCpuTime() const { DARABONBA_PTR_GET_DEFAULT(maxCpuTime_, "") };
    inline DescribeSqlPatternResponseBodyItems& setMaxCpuTime(string maxCpuTime) { DARABONBA_PTR_SET_VALUE(maxCpuTime_, maxCpuTime) };


    // maxPeakMemory Field Functions 
    bool hasMaxPeakMemory() const { return this->maxPeakMemory_ != nullptr;};
    void deleteMaxPeakMemory() { this->maxPeakMemory_ = nullptr;};
    inline string maxPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(maxPeakMemory_, "") };
    inline DescribeSqlPatternResponseBodyItems& setMaxPeakMemory(string maxPeakMemory) { DARABONBA_PTR_SET_VALUE(maxPeakMemory_, maxPeakMemory) };


    // maxScanSize Field Functions 
    bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
    void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
    inline string maxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, "") };
    inline DescribeSqlPatternResponseBodyItems& setMaxScanSize(string maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


    // maxStageCount Field Functions 
    bool hasMaxStageCount() const { return this->maxStageCount_ != nullptr;};
    void deleteMaxStageCount() { this->maxStageCount_ = nullptr;};
    inline string maxStageCount() const { DARABONBA_PTR_GET_DEFAULT(maxStageCount_, "") };
    inline DescribeSqlPatternResponseBodyItems& setMaxStageCount(string maxStageCount) { DARABONBA_PTR_SET_VALUE(maxStageCount_, maxStageCount) };


    // maxTaskCount Field Functions 
    bool hasMaxTaskCount() const { return this->maxTaskCount_ != nullptr;};
    void deleteMaxTaskCount() { this->maxTaskCount_ = nullptr;};
    inline string maxTaskCount() const { DARABONBA_PTR_GET_DEFAULT(maxTaskCount_, "") };
    inline DescribeSqlPatternResponseBodyItems& setMaxTaskCount(string maxTaskCount) { DARABONBA_PTR_SET_VALUE(maxTaskCount_, maxTaskCount) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DescribeSqlPatternResponseBodyItems& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline string queryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, "") };
    inline DescribeSqlPatternResponseBodyItems& setQueryCount(string queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // reportDate Field Functions 
    bool hasReportDate() const { return this->reportDate_ != nullptr;};
    void deleteReportDate() { this->reportDate_ = nullptr;};
    inline string reportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, "") };
    inline DescribeSqlPatternResponseBodyItems& setReportDate(string reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSqlPatternResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP address of the client.
    // 
    // >  This parameter is returned only when **Type** is set to **accessip**.
    std::shared_ptr<string> accessIP_ = nullptr;
    // The average execution duration of the SQL pattern within the query time range. Unit: milliseconds.
    std::shared_ptr<string> avgCpuTime_ = nullptr;
    // The average peak memory usage of the SQL pattern within the query time range. Unit: KB.
    std::shared_ptr<string> avgPeakMemory_ = nullptr;
    // The average amount of data scanned based on the SQL pattern within the query time range. Unit: KB.
    std::shared_ptr<string> avgScanSize_ = nullptr;
    // The average number of scanned rows.
    std::shared_ptr<string> avgStageCount_ = nullptr;
    // The average number of tasks.
    std::shared_ptr<string> avgTaskCount_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The maximum execution duration of the SQL pattern within the query time range. Unit: milliseconds.
    std::shared_ptr<string> maxCpuTime_ = nullptr;
    // The maximum peak memory usage of the SQL pattern within the query time range. Unit: KB.
    std::shared_ptr<string> maxPeakMemory_ = nullptr;
    // The maximum amount of data scanned based on the SQL pattern within the query time range. Unit: KB.
    std::shared_ptr<string> maxScanSize_ = nullptr;
    // The maximum number of stages.
    std::shared_ptr<string> maxStageCount_ = nullptr;
    // The maximum number of tasks.
    std::shared_ptr<string> maxTaskCount_ = nullptr;
    // The SQL pattern.
    std::shared_ptr<string> pattern_ = nullptr;
    // The number of queries performed in association with the SQL pattern within the query time range.
    std::shared_ptr<string> queryCount_ = nullptr;
    // The start date of the query.
    std::shared_ptr<string> reportDate_ = nullptr;
    // The username.
    // 
    // >  This parameter is returned only when **Type** is left empty or set to **user**.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
