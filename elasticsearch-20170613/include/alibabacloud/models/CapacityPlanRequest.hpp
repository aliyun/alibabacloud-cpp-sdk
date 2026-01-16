// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(complexQueryAvailable, complexQueryAvailable_);
      DARABONBA_PTR_TO_JSON(dataInfo, dataInfo_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(usageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(complexQueryAvailable, complexQueryAvailable_);
      DARABONBA_PTR_FROM_JSON(dataInfo, dataInfo_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(usageScenario, usageScenario_);
    };
    CapacityPlanRequest() = default ;
    CapacityPlanRequest(const CapacityPlanRequest &) = default ;
    CapacityPlanRequest(CapacityPlanRequest &&) = default ;
    CapacityPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanRequest() = default ;
    CapacityPlanRequest& operator=(const CapacityPlanRequest &) = default ;
    CapacityPlanRequest& operator=(CapacityPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metric : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metric& obj) { 
        DARABONBA_PTR_TO_JSON(averageQps, averageQps_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(concurrent, concurrent_);
        DARABONBA_PTR_TO_JSON(peakQps, peakQps_);
        DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
        DARABONBA_PTR_TO_JSON(throughput, throughput_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Metric& obj) { 
        DARABONBA_PTR_FROM_JSON(averageQps, averageQps_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(concurrent, concurrent_);
        DARABONBA_PTR_FROM_JSON(peakQps, peakQps_);
        DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
        DARABONBA_PTR_FROM_JSON(throughput, throughput_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Metric() = default ;
      Metric(const Metric &) = default ;
      Metric(Metric &&) = default ;
      Metric(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metric() = default ;
      Metric& operator=(const Metric &) = default ;
      Metric& operator=(Metric &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->averageQps_ == nullptr
        && this->code_ == nullptr && this->concurrent_ == nullptr && this->peakQps_ == nullptr && this->responseTime_ == nullptr && this->throughput_ == nullptr
        && this->type_ == nullptr; };
      // averageQps Field Functions 
      bool hasAverageQps() const { return this->averageQps_ != nullptr;};
      void deleteAverageQps() { this->averageQps_ = nullptr;};
      inline int32_t getAverageQps() const { DARABONBA_PTR_GET_DEFAULT(averageQps_, 0) };
      inline Metric& setAverageQps(int32_t averageQps) { DARABONBA_PTR_SET_VALUE(averageQps_, averageQps) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Metric& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // concurrent Field Functions 
      bool hasConcurrent() const { return this->concurrent_ != nullptr;};
      void deleteConcurrent() { this->concurrent_ = nullptr;};
      inline int64_t getConcurrent() const { DARABONBA_PTR_GET_DEFAULT(concurrent_, 0L) };
      inline Metric& setConcurrent(int64_t concurrent) { DARABONBA_PTR_SET_VALUE(concurrent_, concurrent) };


      // peakQps Field Functions 
      bool hasPeakQps() const { return this->peakQps_ != nullptr;};
      void deletePeakQps() { this->peakQps_ = nullptr;};
      inline int32_t getPeakQps() const { DARABONBA_PTR_GET_DEFAULT(peakQps_, 0) };
      inline Metric& setPeakQps(int32_t peakQps) { DARABONBA_PTR_SET_VALUE(peakQps_, peakQps) };


      // responseTime Field Functions 
      bool hasResponseTime() const { return this->responseTime_ != nullptr;};
      void deleteResponseTime() { this->responseTime_ = nullptr;};
      inline int32_t getResponseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0) };
      inline Metric& setResponseTime(int32_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


      // throughput Field Functions 
      bool hasThroughput() const { return this->throughput_ != nullptr;};
      void deleteThroughput() { this->throughput_ = nullptr;};
      inline int64_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
      inline Metric& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Metric& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Average QPS.
      shared_ptr<int32_t> averageQps_ {};
      // Search or write metric code. Options:
      // 
      // - write: Write
      // - search: Search
      shared_ptr<string> code_ {};
      // Concurrent number.
      shared_ptr<int64_t> concurrent_ {};
      // Peak QPS.
      shared_ptr<int32_t> peakQps_ {};
      // Expected average response time, unit: milliseconds.
      shared_ptr<int32_t> responseTime_ {};
      // Throughput, unit: MB/S.
      shared_ptr<int64_t> throughput_ {};
      // Search/write peak type. Options:
      // 
      // - common: Regular
      // - peak: Peak
      shared_ptr<string> type_ {};
    };

    class DataInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataInfo& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, DataInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
      };
      DataInfo() = default ;
      DataInfo(const DataInfo &) = default ;
      DataInfo(DataInfo &&) = default ;
      DataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataInfo() = default ;
      DataInfo& operator=(const DataInfo &) = default ;
      DataInfo& operator=(DataInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->size_ == nullptr && this->totalCount_ == nullptr && this->type_ == nullptr && this->unit_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline DataInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline DataInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline DataInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DataInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline DataInfo& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // Disk data metric code. Options:
      // 
      // - totalRawData: Raw data information
      // - document: Data document information, estimated document count
      // - dailyIncrement: Daily data growth
      // - dailyIncrementDoc: Daily incremental document count
      // - retentionTime: Data retention period
      // - replica: Replica settings
      shared_ptr<string> code_ {};
      // Disk usage metric value.
      shared_ptr<int64_t> size_ {};
      // Total number of data entries.
      shared_ptr<int32_t> totalCount_ {};
      // Disk data type. Options:
      // 
      // - hot: Hot data
      // - warm: Cold data
      shared_ptr<string> type_ {};
      // Data or time unit. Options:
      // 
      // - Data units: MiB, GiB, TB, PB
      // - Time units: DAYS, WEEKS, MONTHS, YEARS
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->complexQueryAvailable_ == nullptr
        && this->dataInfo_ == nullptr && this->metric_ == nullptr && this->usageScenario_ == nullptr; };
    // complexQueryAvailable Field Functions 
    bool hasComplexQueryAvailable() const { return this->complexQueryAvailable_ != nullptr;};
    void deleteComplexQueryAvailable() { this->complexQueryAvailable_ = nullptr;};
    inline bool getComplexQueryAvailable() const { DARABONBA_PTR_GET_DEFAULT(complexQueryAvailable_, false) };
    inline CapacityPlanRequest& setComplexQueryAvailable(bool complexQueryAvailable) { DARABONBA_PTR_SET_VALUE(complexQueryAvailable_, complexQueryAvailable) };


    // dataInfo Field Functions 
    bool hasDataInfo() const { return this->dataInfo_ != nullptr;};
    void deleteDataInfo() { this->dataInfo_ = nullptr;};
    inline const vector<CapacityPlanRequest::DataInfo> & getDataInfo() const { DARABONBA_PTR_GET_CONST(dataInfo_, vector<CapacityPlanRequest::DataInfo>) };
    inline vector<CapacityPlanRequest::DataInfo> getDataInfo() { DARABONBA_PTR_GET(dataInfo_, vector<CapacityPlanRequest::DataInfo>) };
    inline CapacityPlanRequest& setDataInfo(const vector<CapacityPlanRequest::DataInfo> & dataInfo) { DARABONBA_PTR_SET_VALUE(dataInfo_, dataInfo) };
    inline CapacityPlanRequest& setDataInfo(vector<CapacityPlanRequest::DataInfo> && dataInfo) { DARABONBA_PTR_SET_RVALUE(dataInfo_, dataInfo) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const vector<CapacityPlanRequest::Metric> & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, vector<CapacityPlanRequest::Metric>) };
    inline vector<CapacityPlanRequest::Metric> getMetric() { DARABONBA_PTR_GET(metric_, vector<CapacityPlanRequest::Metric>) };
    inline CapacityPlanRequest& setMetric(const vector<CapacityPlanRequest::Metric> & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline CapacityPlanRequest& setMetric(vector<CapacityPlanRequest::Metric> && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string getUsageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline CapacityPlanRequest& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    // Indicates whether there is a need for complex aggregation queries. Options:
    // 
    // - true: Yes
    // - false (default): No
    shared_ptr<bool> complexQueryAvailable_ {};
    // Disk usage status.
    shared_ptr<vector<CapacityPlanRequest::DataInfo>> dataInfo_ {};
    // Metrics information including disk usage, search and write operations, aggregation requests, etc.
    shared_ptr<vector<CapacityPlanRequest::Metric>> metric_ {};
    // Usage scenarios, options:
    // 
    // - general: General scenario
    // - analysisVisualization: Data analysis scenario
    // - dbAcceleration: Database acceleration scenario
    // - search: Search scenario
    // - log: Log scenario
    shared_ptr<string> usageScenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
