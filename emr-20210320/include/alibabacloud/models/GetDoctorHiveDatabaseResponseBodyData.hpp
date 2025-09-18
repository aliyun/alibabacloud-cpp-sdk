// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVEDATABASERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVEDATABASERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataFormats.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveDatabaseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveDatabaseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveDatabaseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorHiveDatabaseResponseBodyData() = default ;
    GetDoctorHiveDatabaseResponseBodyData(const GetDoctorHiveDatabaseResponseBodyData &) = default ;
    GetDoctorHiveDatabaseResponseBodyData(GetDoctorHiveDatabaseResponseBodyData &&) = default ;
    GetDoctorHiveDatabaseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveDatabaseResponseBodyData() = default ;
    GetDoctorHiveDatabaseResponseBodyData& operator=(const GetDoctorHiveDatabaseResponseBodyData &) = default ;
    GetDoctorHiveDatabaseResponseBodyData& operator=(GetDoctorHiveDatabaseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->formats_ != nullptr && this->metrics_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis) };
    inline GetDoctorHiveDatabaseResponseBodyData& setAnalysis(const Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorHiveDatabaseResponseBodyData& setAnalysis(Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats>) };
    inline vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats> formats() { DARABONBA_PTR_GET(formats_, vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats>) };
    inline GetDoctorHiveDatabaseResponseBodyData& setFormats(const vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline GetDoctorHiveDatabaseResponseBodyData& setFormats(vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHiveDatabaseResponseBodyDataMetrics) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHiveDatabaseResponseBodyDataMetrics) };
    inline GetDoctorHiveDatabaseResponseBodyData& setMetrics(const Models::GetDoctorHiveDatabaseResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHiveDatabaseResponseBodyData& setMetrics(Models::GetDoctorHiveDatabaseResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The analysis results.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataAnalysis> analysis_ = nullptr;
    // The information from the perspective of storage formats.
    std::shared_ptr<vector<Models::GetDoctorHiveDatabaseResponseBodyDataFormats>> formats_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
