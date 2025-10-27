// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosisMonitorPerformanceResponseBodyPerformances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDiagnosisMonitorPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisMonitorPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(PerformancesThreshold, performancesThreshold_);
      DARABONBA_PTR_TO_JSON(PerformancesTruncated, performancesTruncated_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisMonitorPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(PerformancesThreshold, performancesThreshold_);
      DARABONBA_PTR_FROM_JSON(PerformancesTruncated, performancesTruncated_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosisMonitorPerformanceResponseBody() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(const DescribeDiagnosisMonitorPerformanceResponseBody &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(DescribeDiagnosisMonitorPerformanceResponseBody &&) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisMonitorPerformanceResponseBody() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody& operator=(const DescribeDiagnosisMonitorPerformanceResponseBody &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody& operator=(DescribeDiagnosisMonitorPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performances_ == nullptr
        && return this->performancesThreshold_ == nullptr && return this->performancesTruncated_ == nullptr && return this->requestId_ == nullptr; };
    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances> & performances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances>) };
    inline vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances> performances() { DARABONBA_PTR_GET(performances_, vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances>) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformances(const vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformances(vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // performancesThreshold Field Functions 
    bool hasPerformancesThreshold() const { return this->performancesThreshold_ != nullptr;};
    void deletePerformancesThreshold() { this->performancesThreshold_ = nullptr;};
    inline int32_t performancesThreshold() const { DARABONBA_PTR_GET_DEFAULT(performancesThreshold_, 0) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformancesThreshold(int32_t performancesThreshold) { DARABONBA_PTR_SET_VALUE(performancesThreshold_, performancesThreshold) };


    // performancesTruncated Field Functions 
    bool hasPerformancesTruncated() const { return this->performancesTruncated_ != nullptr;};
    void deletePerformancesTruncated() { this->performancesTruncated_ = nullptr;};
    inline bool performancesTruncated() const { DARABONBA_PTR_GET_DEFAULT(performancesTruncated_, false) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformancesTruncated(bool performancesTruncated) { DARABONBA_PTR_SET_VALUE(performancesTruncated_, performancesTruncated) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring information about queries displayed in Gantt charts.
    std::shared_ptr<vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances>> performances_ = nullptr;
    // The threshold for the number of queries displayed in a Gantt chart. Default value: 10000.
    // 
    // >  Up to 10,000 queries can be displayed in a Gantt chart even if more queries exist.
    std::shared_ptr<int32_t> performancesThreshold_ = nullptr;
    // Indicates whether all queries are returned. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> performancesTruncated_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
