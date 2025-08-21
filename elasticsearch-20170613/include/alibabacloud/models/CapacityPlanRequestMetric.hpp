// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANREQUESTMETRIC_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANREQUESTMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanRequestMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanRequestMetric& obj) { 
      DARABONBA_PTR_TO_JSON(averageQps, averageQps_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(concurrent, concurrent_);
      DARABONBA_PTR_TO_JSON(peakQps, peakQps_);
      DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
      DARABONBA_PTR_TO_JSON(throughput, throughput_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanRequestMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(averageQps, averageQps_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(concurrent, concurrent_);
      DARABONBA_PTR_FROM_JSON(peakQps, peakQps_);
      DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
      DARABONBA_PTR_FROM_JSON(throughput, throughput_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CapacityPlanRequestMetric() = default ;
    CapacityPlanRequestMetric(const CapacityPlanRequestMetric &) = default ;
    CapacityPlanRequestMetric(CapacityPlanRequestMetric &&) = default ;
    CapacityPlanRequestMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanRequestMetric() = default ;
    CapacityPlanRequestMetric& operator=(const CapacityPlanRequestMetric &) = default ;
    CapacityPlanRequestMetric& operator=(CapacityPlanRequestMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageQps_ != nullptr
        && this->code_ != nullptr && this->concurrent_ != nullptr && this->peakQps_ != nullptr && this->responseTime_ != nullptr && this->throughput_ != nullptr
        && this->type_ != nullptr; };
    // averageQps Field Functions 
    bool hasAverageQps() const { return this->averageQps_ != nullptr;};
    void deleteAverageQps() { this->averageQps_ = nullptr;};
    inline int32_t averageQps() const { DARABONBA_PTR_GET_DEFAULT(averageQps_, 0) };
    inline CapacityPlanRequestMetric& setAverageQps(int32_t averageQps) { DARABONBA_PTR_SET_VALUE(averageQps_, averageQps) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CapacityPlanRequestMetric& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // concurrent Field Functions 
    bool hasConcurrent() const { return this->concurrent_ != nullptr;};
    void deleteConcurrent() { this->concurrent_ = nullptr;};
    inline int64_t concurrent() const { DARABONBA_PTR_GET_DEFAULT(concurrent_, 0L) };
    inline CapacityPlanRequestMetric& setConcurrent(int64_t concurrent) { DARABONBA_PTR_SET_VALUE(concurrent_, concurrent) };


    // peakQps Field Functions 
    bool hasPeakQps() const { return this->peakQps_ != nullptr;};
    void deletePeakQps() { this->peakQps_ = nullptr;};
    inline int32_t peakQps() const { DARABONBA_PTR_GET_DEFAULT(peakQps_, 0) };
    inline CapacityPlanRequestMetric& setPeakQps(int32_t peakQps) { DARABONBA_PTR_SET_VALUE(peakQps_, peakQps) };


    // responseTime Field Functions 
    bool hasResponseTime() const { return this->responseTime_ != nullptr;};
    void deleteResponseTime() { this->responseTime_ = nullptr;};
    inline int32_t responseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0) };
    inline CapacityPlanRequestMetric& setResponseTime(int32_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int64_t throughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
    inline CapacityPlanRequestMetric& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CapacityPlanRequestMetric& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Average QPS.
    std::shared_ptr<int32_t> averageQps_ = nullptr;
    // Search or write metric code. Options:
    // 
    // - write: Write
    // - search: Search
    std::shared_ptr<string> code_ = nullptr;
    // Concurrent number.
    std::shared_ptr<int64_t> concurrent_ = nullptr;
    // Peak QPS.
    std::shared_ptr<int32_t> peakQps_ = nullptr;
    // Expected average response time, unit: milliseconds.
    std::shared_ptr<int32_t> responseTime_ = nullptr;
    // Throughput, unit: MB/S.
    std::shared_ptr<int64_t> throughput_ = nullptr;
    // Search/write peak type. Options:
    // 
    // - common: Regular
    // - peak: Peak
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
