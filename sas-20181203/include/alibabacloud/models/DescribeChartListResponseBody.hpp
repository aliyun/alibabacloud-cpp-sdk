// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChartList, chartList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartList, chartList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChartListResponseBody() = default ;
    DescribeChartListResponseBody(const DescribeChartListResponseBody &) = default ;
    DescribeChartListResponseBody(DescribeChartListResponseBody &&) = default ;
    DescribeChartListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartListResponseBody() = default ;
    DescribeChartListResponseBody& operator=(const DescribeChartListResponseBody &) = default ;
    DescribeChartListResponseBody& operator=(DescribeChartListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChartList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChartList& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(ChartId, chartId_);
        DARABONBA_PTR_TO_JSON(ChartName, chartName_);
        DARABONBA_PTR_TO_JSON(ChartType, chartType_);
      };
      friend void from_json(const Darabonba::Json& j, ChartList& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(ChartId, chartId_);
        DARABONBA_PTR_FROM_JSON(ChartName, chartName_);
        DARABONBA_PTR_FROM_JSON(ChartType, chartType_);
      };
      ChartList() = default ;
      ChartList(const ChartList &) = default ;
      ChartList(ChartList &&) = default ;
      ChartList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChartList() = default ;
      ChartList& operator=(const ChartList &) = default ;
      ChartList& operator=(ChartList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessName_ == nullptr
        && this->businessType_ == nullptr && this->chartId_ == nullptr && this->chartName_ == nullptr && this->chartType_ == nullptr; };
      // businessName Field Functions 
      bool hasBusinessName() const { return this->businessName_ != nullptr;};
      void deleteBusinessName() { this->businessName_ = nullptr;};
      inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
      inline ChartList& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline ChartList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // chartId Field Functions 
      bool hasChartId() const { return this->chartId_ != nullptr;};
      void deleteChartId() { this->chartId_ = nullptr;};
      inline string getChartId() const { DARABONBA_PTR_GET_DEFAULT(chartId_, "") };
      inline ChartList& setChartId(string chartId) { DARABONBA_PTR_SET_VALUE(chartId_, chartId) };


      // chartName Field Functions 
      bool hasChartName() const { return this->chartName_ != nullptr;};
      void deleteChartName() { this->chartName_ = nullptr;};
      inline string getChartName() const { DARABONBA_PTR_GET_DEFAULT(chartName_, "") };
      inline ChartList& setChartName(string chartName) { DARABONBA_PTR_SET_VALUE(chartName_, chartName) };


      // chartType Field Functions 
      bool hasChartType() const { return this->chartType_ != nullptr;};
      void deleteChartType() { this->chartType_ = nullptr;};
      inline string getChartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
      inline ChartList& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


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
      shared_ptr<string> businessName_ {};
      // The business type. Valid values:
      // 
      // *   INDEX_SECURITY_OVERALL_OPERATION
      // *   INDEX_ASSET_OPERATION
      // *   INDEX_SUSPICIOUS_OPERATION
      // *   INDEX_VUL_OPERATION
      // *   INDEX_BASELINE_CHECK_OPERATION
      // *   INDEX_CLOUD_ASSET_OPERATION
      // *   INDEX_HONEYPOT_RISK_OPERATION
      shared_ptr<string> businessType_ {};
      // The ID of the chart.
      shared_ptr<string> chartId_ {};
      // The name of the chart.
      shared_ptr<string> chartName_ {};
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
      shared_ptr<string> chartType_ {};
    };

    virtual bool empty() const override { return this->chartList_ == nullptr
        && this->requestId_ == nullptr; };
    // chartList Field Functions 
    bool hasChartList() const { return this->chartList_ != nullptr;};
    void deleteChartList() { this->chartList_ = nullptr;};
    inline const vector<DescribeChartListResponseBody::ChartList> & getChartList() const { DARABONBA_PTR_GET_CONST(chartList_, vector<DescribeChartListResponseBody::ChartList>) };
    inline vector<DescribeChartListResponseBody::ChartList> getChartList() { DARABONBA_PTR_GET(chartList_, vector<DescribeChartListResponseBody::ChartList>) };
    inline DescribeChartListResponseBody& setChartList(const vector<DescribeChartListResponseBody::ChartList> & chartList) { DARABONBA_PTR_SET_VALUE(chartList_, chartList) };
    inline DescribeChartListResponseBody& setChartList(vector<DescribeChartListResponseBody::ChartList> && chartList) { DARABONBA_PTR_SET_RVALUE(chartList_, chartList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChartListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The charts.
    shared_ptr<vector<DescribeChartListResponseBody::ChartList>> chartList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
