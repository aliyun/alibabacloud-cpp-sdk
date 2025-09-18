// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVECLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVECLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataFormats.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorHiveClusterResponseBodyData() = default ;
    GetDoctorHiveClusterResponseBodyData(const GetDoctorHiveClusterResponseBodyData &) = default ;
    GetDoctorHiveClusterResponseBodyData(GetDoctorHiveClusterResponseBodyData &&) = default ;
    GetDoctorHiveClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveClusterResponseBodyData() = default ;
    GetDoctorHiveClusterResponseBodyData& operator=(const GetDoctorHiveClusterResponseBodyData &) = default ;
    GetDoctorHiveClusterResponseBodyData& operator=(GetDoctorHiveClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->formats_ != nullptr && this->metrics_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorHiveClusterResponseBodyDataAnalysis) };
    inline Models::GetDoctorHiveClusterResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorHiveClusterResponseBodyDataAnalysis) };
    inline GetDoctorHiveClusterResponseBodyData& setAnalysis(const Models::GetDoctorHiveClusterResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorHiveClusterResponseBodyData& setAnalysis(Models::GetDoctorHiveClusterResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<Models::GetDoctorHiveClusterResponseBodyDataFormats> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<Models::GetDoctorHiveClusterResponseBodyDataFormats>) };
    inline vector<Models::GetDoctorHiveClusterResponseBodyDataFormats> formats() { DARABONBA_PTR_GET(formats_, vector<Models::GetDoctorHiveClusterResponseBodyDataFormats>) };
    inline GetDoctorHiveClusterResponseBodyData& setFormats(const vector<Models::GetDoctorHiveClusterResponseBodyDataFormats> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline GetDoctorHiveClusterResponseBodyData& setFormats(vector<Models::GetDoctorHiveClusterResponseBodyDataFormats> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHiveClusterResponseBodyDataMetrics) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHiveClusterResponseBodyDataMetrics) };
    inline GetDoctorHiveClusterResponseBodyData& setMetrics(const Models::GetDoctorHiveClusterResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHiveClusterResponseBodyData& setMetrics(Models::GetDoctorHiveClusterResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The analysis results.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataAnalysis> analysis_ = nullptr;
    // The information from the perspective of storage formats.
    std::shared_ptr<vector<Models::GetDoctorHiveClusterResponseBodyDataFormats>> formats_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
