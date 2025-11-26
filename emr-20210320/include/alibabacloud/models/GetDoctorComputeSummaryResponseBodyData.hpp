// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataAnalysis.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorComputeSummaryResponseBodyData() = default ;
    GetDoctorComputeSummaryResponseBodyData(const GetDoctorComputeSummaryResponseBodyData &) = default ;
    GetDoctorComputeSummaryResponseBodyData(GetDoctorComputeSummaryResponseBodyData &&) = default ;
    GetDoctorComputeSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryResponseBodyData() = default ;
    GetDoctorComputeSummaryResponseBodyData& operator=(const GetDoctorComputeSummaryResponseBodyData &) = default ;
    GetDoctorComputeSummaryResponseBodyData& operator=(GetDoctorComputeSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->metrics_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorComputeSummaryResponseBodyDataAnalysis) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorComputeSummaryResponseBodyDataAnalysis) };
    inline GetDoctorComputeSummaryResponseBodyData& setAnalysis(const Models::GetDoctorComputeSummaryResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorComputeSummaryResponseBodyData& setAnalysis(Models::GetDoctorComputeSummaryResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorComputeSummaryResponseBodyDataMetrics) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorComputeSummaryResponseBodyDataMetrics) };
    inline GetDoctorComputeSummaryResponseBodyData& setMetrics(const Models::GetDoctorComputeSummaryResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorComputeSummaryResponseBodyData& setMetrics(Models::GetDoctorComputeSummaryResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The resource analysis information.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataAnalysis> analysis_ = nullptr;
    // The metrics.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
