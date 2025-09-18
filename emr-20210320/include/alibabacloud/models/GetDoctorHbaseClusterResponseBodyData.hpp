// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataAnalysis.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorHBaseClusterResponseBodyData() = default ;
    GetDoctorHBaseClusterResponseBodyData(const GetDoctorHBaseClusterResponseBodyData &) = default ;
    GetDoctorHBaseClusterResponseBodyData(GetDoctorHBaseClusterResponseBodyData &&) = default ;
    GetDoctorHBaseClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseClusterResponseBodyData() = default ;
    GetDoctorHBaseClusterResponseBodyData& operator=(const GetDoctorHBaseClusterResponseBodyData &) = default ;
    GetDoctorHBaseClusterResponseBodyData& operator=(GetDoctorHBaseClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->metrics_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorHBaseClusterResponseBodyDataAnalysis) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorHBaseClusterResponseBodyDataAnalysis) };
    inline GetDoctorHBaseClusterResponseBodyData& setAnalysis(const Models::GetDoctorHBaseClusterResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorHBaseClusterResponseBodyData& setAnalysis(Models::GetDoctorHBaseClusterResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHBaseClusterResponseBodyDataMetrics) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHBaseClusterResponseBodyDataMetrics) };
    inline GetDoctorHBaseClusterResponseBodyData& setMetrics(const Models::GetDoctorHBaseClusterResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHBaseClusterResponseBodyData& setMetrics(Models::GetDoctorHBaseClusterResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The analysis result.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataAnalysis> analysis_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
