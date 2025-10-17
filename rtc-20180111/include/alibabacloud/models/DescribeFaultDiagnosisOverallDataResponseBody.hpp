// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFaultDiagnosisOverallDataResponseBodyMetricData.hpp>
#include <alibabacloud/models/DescribeFaultDiagnosisOverallDataResponseBodyOverallData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricData, metricData_);
      DARABONBA_PTR_TO_JSON(OverallData, overallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricData, metricData_);
      DARABONBA_PTR_FROM_JSON(OverallData, overallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFaultDiagnosisOverallDataResponseBody() = default ;
    DescribeFaultDiagnosisOverallDataResponseBody(const DescribeFaultDiagnosisOverallDataResponseBody &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBody(DescribeFaultDiagnosisOverallDataResponseBody &&) = default ;
    DescribeFaultDiagnosisOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisOverallDataResponseBody() = default ;
    DescribeFaultDiagnosisOverallDataResponseBody& operator=(const DescribeFaultDiagnosisOverallDataResponseBody &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBody& operator=(DescribeFaultDiagnosisOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricData_ == nullptr
        && return this->overallData_ == nullptr && return this->requestId_ == nullptr; };
    // metricData Field Functions 
    bool hasMetricData() const { return this->metricData_ != nullptr;};
    void deleteMetricData() { this->metricData_ = nullptr;};
    inline const DescribeFaultDiagnosisOverallDataResponseBodyMetricData & metricData() const { DARABONBA_PTR_GET_CONST(metricData_, DescribeFaultDiagnosisOverallDataResponseBodyMetricData) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricData metricData() { DARABONBA_PTR_GET(metricData_, DescribeFaultDiagnosisOverallDataResponseBodyMetricData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setMetricData(const DescribeFaultDiagnosisOverallDataResponseBodyMetricData & metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setMetricData(DescribeFaultDiagnosisOverallDataResponseBodyMetricData && metricData) { DARABONBA_PTR_SET_RVALUE(metricData_, metricData) };


    // overallData Field Functions 
    bool hasOverallData() const { return this->overallData_ != nullptr;};
    void deleteOverallData() { this->overallData_ = nullptr;};
    inline const DescribeFaultDiagnosisOverallDataResponseBodyOverallData & overallData() const { DARABONBA_PTR_GET_CONST(overallData_, DescribeFaultDiagnosisOverallDataResponseBodyOverallData) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyOverallData overallData() { DARABONBA_PTR_GET(overallData_, DescribeFaultDiagnosisOverallDataResponseBodyOverallData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setOverallData(const DescribeFaultDiagnosisOverallDataResponseBodyOverallData & overallData) { DARABONBA_PTR_SET_VALUE(overallData_, overallData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setOverallData(DescribeFaultDiagnosisOverallDataResponseBodyOverallData && overallData) { DARABONBA_PTR_SET_RVALUE(overallData_, overallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeFaultDiagnosisOverallDataResponseBodyMetricData> metricData_ = nullptr;
    std::shared_ptr<DescribeFaultDiagnosisOverallDataResponseBodyOverallData> overallData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
