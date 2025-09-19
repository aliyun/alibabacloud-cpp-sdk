// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTLISTRESPONSEBODYCHARTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTLISTRESPONSEBODYCHARTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartListResponseBodyChartList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartListResponseBodyChartList& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ChartId, chartId_);
      DARABONBA_PTR_TO_JSON(ChartName, chartName_);
      DARABONBA_PTR_TO_JSON(ChartType, chartType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartListResponseBodyChartList& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ChartId, chartId_);
      DARABONBA_PTR_FROM_JSON(ChartName, chartName_);
      DARABONBA_PTR_FROM_JSON(ChartType, chartType_);
    };
    DescribeChartListResponseBodyChartList() = default ;
    DescribeChartListResponseBodyChartList(const DescribeChartListResponseBodyChartList &) = default ;
    DescribeChartListResponseBodyChartList(DescribeChartListResponseBodyChartList &&) = default ;
    DescribeChartListResponseBodyChartList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartListResponseBodyChartList() = default ;
    DescribeChartListResponseBodyChartList& operator=(const DescribeChartListResponseBodyChartList &) = default ;
    DescribeChartListResponseBodyChartList& operator=(DescribeChartListResponseBodyChartList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessName_ != nullptr
        && this->businessType_ != nullptr && this->chartId_ != nullptr && this->chartName_ != nullptr && this->chartType_ != nullptr; };
    // businessName Field Functions 
    bool hasBusinessName() const { return this->businessName_ != nullptr;};
    void deleteBusinessName() { this->businessName_ = nullptr;};
    inline string businessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
    inline DescribeChartListResponseBodyChartList& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline DescribeChartListResponseBodyChartList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // chartId Field Functions 
    bool hasChartId() const { return this->chartId_ != nullptr;};
    void deleteChartId() { this->chartId_ = nullptr;};
    inline string chartId() const { DARABONBA_PTR_GET_DEFAULT(chartId_, "") };
    inline DescribeChartListResponseBodyChartList& setChartId(string chartId) { DARABONBA_PTR_SET_VALUE(chartId_, chartId) };


    // chartName Field Functions 
    bool hasChartName() const { return this->chartName_ != nullptr;};
    void deleteChartName() { this->chartName_ = nullptr;};
    inline string chartName() const { DARABONBA_PTR_GET_DEFAULT(chartName_, "") };
    inline DescribeChartListResponseBodyChartList& setChartName(string chartName) { DARABONBA_PTR_SET_VALUE(chartName_, chartName) };


    // chartType Field Functions 
    bool hasChartType() const { return this->chartType_ != nullptr;};
    void deleteChartType() { this->chartType_ = nullptr;};
    inline string chartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
    inline DescribeChartListResponseBodyChartList& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


  protected:
    // The name of the business type. Valid values:
    // 
    // *   Overall Operations Metrics
    // *   Asset Operations Metrics
    // *   Security Alert Operations Metrics
    // *   Vulnerability Operations Metrics
    // *   Baseline Operations Metrics
    // *   Cloud Product Operations Metrics
    // *   Honeypot Operations Metrics
    std::shared_ptr<string> businessName_ = nullptr;
    // The business type. Valid values:
    // 
    // *   INDEX_SECURITY_OVERALL_OPERATION
    // *   INDEX_ASSET_OPERATION
    // *   INDEX_SUSPICIOUS_OPERATION
    // *   INDEX_VUL_OPERATION
    // *   INDEX_BASELINE_CHECK_OPERATION
    // *   INDEX_CLOUD_ASSET_OPERATION
    // *   INDEX_HONEYPOT_RISK_OPERATION
    std::shared_ptr<string> businessType_ = nullptr;
    // The ID of the chart.
    std::shared_ptr<string> chartId_ = nullptr;
    // The name of the chart.
    std::shared_ptr<string> chartName_ = nullptr;
    // The type of the chart. Valid values:
    // 
    // *   **text**
    // *   **table**
    // *   **gauge**
    // *   **pie**
    // *   **line**
    // *   **bar**
    // *   **timeBar**
    // *   **timeLine**
    std::shared_ptr<string> chartType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
