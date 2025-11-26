// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataAnalysis.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorHDFSClusterResponseBodyData() = default ;
    GetDoctorHDFSClusterResponseBodyData(const GetDoctorHDFSClusterResponseBodyData &) = default ;
    GetDoctorHDFSClusterResponseBodyData(GetDoctorHDFSClusterResponseBodyData &&) = default ;
    GetDoctorHDFSClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSClusterResponseBodyData() = default ;
    GetDoctorHDFSClusterResponseBodyData& operator=(const GetDoctorHDFSClusterResponseBodyData &) = default ;
    GetDoctorHDFSClusterResponseBodyData& operator=(GetDoctorHDFSClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->metrics_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorHDFSClusterResponseBodyDataAnalysis) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorHDFSClusterResponseBodyDataAnalysis) };
    inline GetDoctorHDFSClusterResponseBodyData& setAnalysis(const Models::GetDoctorHDFSClusterResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorHDFSClusterResponseBodyData& setAnalysis(Models::GetDoctorHDFSClusterResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHDFSClusterResponseBodyDataMetrics) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHDFSClusterResponseBodyDataMetrics) };
    inline GetDoctorHDFSClusterResponseBodyData& setMetrics(const Models::GetDoctorHDFSClusterResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHDFSClusterResponseBodyData& setMetrics(Models::GetDoctorHDFSClusterResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The analysis results.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataAnalysis> analysis_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
