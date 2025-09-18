// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVETABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVETABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataFormats.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveTableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveTableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveTableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
    };
    GetDoctorHiveTableResponseBodyData() = default ;
    GetDoctorHiveTableResponseBodyData(const GetDoctorHiveTableResponseBodyData &) = default ;
    GetDoctorHiveTableResponseBodyData(GetDoctorHiveTableResponseBodyData &&) = default ;
    GetDoctorHiveTableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveTableResponseBodyData() = default ;
    GetDoctorHiveTableResponseBodyData& operator=(const GetDoctorHiveTableResponseBodyData &) = default ;
    GetDoctorHiveTableResponseBodyData& operator=(GetDoctorHiveTableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->formats_ != nullptr && this->metrics_ != nullptr && this->owner_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorHiveTableResponseBodyDataAnalysis) };
    inline Models::GetDoctorHiveTableResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorHiveTableResponseBodyDataAnalysis) };
    inline GetDoctorHiveTableResponseBodyData& setAnalysis(const Models::GetDoctorHiveTableResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorHiveTableResponseBodyData& setAnalysis(Models::GetDoctorHiveTableResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<Models::GetDoctorHiveTableResponseBodyDataFormats> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<Models::GetDoctorHiveTableResponseBodyDataFormats>) };
    inline vector<Models::GetDoctorHiveTableResponseBodyDataFormats> formats() { DARABONBA_PTR_GET(formats_, vector<Models::GetDoctorHiveTableResponseBodyDataFormats>) };
    inline GetDoctorHiveTableResponseBodyData& setFormats(const vector<Models::GetDoctorHiveTableResponseBodyDataFormats> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline GetDoctorHiveTableResponseBodyData& setFormats(vector<Models::GetDoctorHiveTableResponseBodyDataFormats> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHiveTableResponseBodyDataMetrics) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHiveTableResponseBodyDataMetrics) };
    inline GetDoctorHiveTableResponseBodyData& setMetrics(const Models::GetDoctorHiveTableResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHiveTableResponseBodyData& setMetrics(Models::GetDoctorHiveTableResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetDoctorHiveTableResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


  protected:
    // The analysis results.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataAnalysis> analysis_ = nullptr;
    // The information from the perspective of formats.
    std::shared_ptr<vector<Models::GetDoctorHiveTableResponseBodyDataFormats>> formats_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetrics> metrics_ = nullptr;
    // The owner.
    std::shared_ptr<string> owner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
