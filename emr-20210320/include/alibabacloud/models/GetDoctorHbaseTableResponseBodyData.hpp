// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataAnalysis.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseTableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseTableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseTableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorHBaseTableResponseBodyData() = default ;
    GetDoctorHBaseTableResponseBodyData(const GetDoctorHBaseTableResponseBodyData &) = default ;
    GetDoctorHBaseTableResponseBodyData(GetDoctorHBaseTableResponseBodyData &&) = default ;
    GetDoctorHBaseTableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseTableResponseBodyData() = default ;
    GetDoctorHBaseTableResponseBodyData& operator=(const GetDoctorHBaseTableResponseBodyData &) = default ;
    GetDoctorHBaseTableResponseBodyData& operator=(GetDoctorHBaseTableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->metrics_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorHBaseTableResponseBodyDataAnalysis) };
    inline Models::GetDoctorHBaseTableResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorHBaseTableResponseBodyDataAnalysis) };
    inline GetDoctorHBaseTableResponseBodyData& setAnalysis(const Models::GetDoctorHBaseTableResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorHBaseTableResponseBodyData& setAnalysis(Models::GetDoctorHBaseTableResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHBaseTableResponseBodyDataMetrics) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHBaseTableResponseBodyDataMetrics) };
    inline GetDoctorHBaseTableResponseBodyData& setMetrics(const Models::GetDoctorHBaseTableResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHBaseTableResponseBodyData& setMetrics(Models::GetDoctorHBaseTableResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // Diagnostic results.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataAnalysis> analysis_ = nullptr;
    // Metrics information.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
