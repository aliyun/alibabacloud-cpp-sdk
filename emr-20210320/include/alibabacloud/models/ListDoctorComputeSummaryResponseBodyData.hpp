// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataAnalysis.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorComputeSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorComputeSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorComputeSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    ListDoctorComputeSummaryResponseBodyData() = default ;
    ListDoctorComputeSummaryResponseBodyData(const ListDoctorComputeSummaryResponseBodyData &) = default ;
    ListDoctorComputeSummaryResponseBodyData(ListDoctorComputeSummaryResponseBodyData &&) = default ;
    ListDoctorComputeSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorComputeSummaryResponseBodyData() = default ;
    ListDoctorComputeSummaryResponseBodyData& operator=(const ListDoctorComputeSummaryResponseBodyData &) = default ;
    ListDoctorComputeSummaryResponseBodyData& operator=(ListDoctorComputeSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->componentName_ != nullptr && this->metrics_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::ListDoctorComputeSummaryResponseBodyDataAnalysis) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::ListDoctorComputeSummaryResponseBodyDataAnalysis) };
    inline ListDoctorComputeSummaryResponseBodyData& setAnalysis(const Models::ListDoctorComputeSummaryResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline ListDoctorComputeSummaryResponseBodyData& setAnalysis(Models::ListDoctorComputeSummaryResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ListDoctorComputeSummaryResponseBodyData& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorComputeSummaryResponseBodyDataMetrics) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorComputeSummaryResponseBodyDataMetrics) };
    inline ListDoctorComputeSummaryResponseBodyData& setMetrics(const Models::ListDoctorComputeSummaryResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorComputeSummaryResponseBodyData& setMetrics(Models::ListDoctorComputeSummaryResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The resource analysis results.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataAnalysis> analysis_ = nullptr;
    // The name of the resource whose details are obtained based on the value of ComponentTypes. For example, if the value of ComponentTypes is Queue, the value of this parameter is a queue, such as DW.
    std::shared_ptr<string> componentName_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
