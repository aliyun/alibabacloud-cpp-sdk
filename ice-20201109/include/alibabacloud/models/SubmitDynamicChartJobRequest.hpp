// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICCHARTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICCHARTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicChartJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicChartJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AxisParams, axisParams_);
      DARABONBA_PTR_TO_JSON(Background, background_);
      DARABONBA_PTR_TO_JSON(ChartConfig, chartConfig_);
      DARABONBA_PTR_TO_JSON(ChartTitle, chartTitle_);
      DARABONBA_PTR_TO_JSON(ChartType, chartType_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicChartJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AxisParams, axisParams_);
      DARABONBA_PTR_FROM_JSON(Background, background_);
      DARABONBA_PTR_FROM_JSON(ChartConfig, chartConfig_);
      DARABONBA_PTR_FROM_JSON(ChartTitle, chartTitle_);
      DARABONBA_PTR_FROM_JSON(ChartType, chartType_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitDynamicChartJobRequest() = default ;
    SubmitDynamicChartJobRequest(const SubmitDynamicChartJobRequest &) = default ;
    SubmitDynamicChartJobRequest(SubmitDynamicChartJobRequest &&) = default ;
    SubmitDynamicChartJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicChartJobRequest() = default ;
    SubmitDynamicChartJobRequest& operator=(const SubmitDynamicChartJobRequest &) = default ;
    SubmitDynamicChartJobRequest& operator=(SubmitDynamicChartJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->axisParams_ == nullptr
        && return this->background_ == nullptr && return this->chartConfig_ == nullptr && return this->chartTitle_ == nullptr && return this->chartType_ == nullptr && return this->dataSource_ == nullptr
        && return this->description_ == nullptr && return this->input_ == nullptr && return this->outputConfig_ == nullptr && return this->subtitle_ == nullptr && return this->title_ == nullptr
        && return this->unit_ == nullptr && return this->userData_ == nullptr; };
    // axisParams Field Functions 
    bool hasAxisParams() const { return this->axisParams_ != nullptr;};
    void deleteAxisParams() { this->axisParams_ = nullptr;};
    inline string axisParams() const { DARABONBA_PTR_GET_DEFAULT(axisParams_, "") };
    inline SubmitDynamicChartJobRequest& setAxisParams(string axisParams) { DARABONBA_PTR_SET_VALUE(axisParams_, axisParams) };


    // background Field Functions 
    bool hasBackground() const { return this->background_ != nullptr;};
    void deleteBackground() { this->background_ = nullptr;};
    inline string background() const { DARABONBA_PTR_GET_DEFAULT(background_, "") };
    inline SubmitDynamicChartJobRequest& setBackground(string background) { DARABONBA_PTR_SET_VALUE(background_, background) };


    // chartConfig Field Functions 
    bool hasChartConfig() const { return this->chartConfig_ != nullptr;};
    void deleteChartConfig() { this->chartConfig_ = nullptr;};
    inline string chartConfig() const { DARABONBA_PTR_GET_DEFAULT(chartConfig_, "") };
    inline SubmitDynamicChartJobRequest& setChartConfig(string chartConfig) { DARABONBA_PTR_SET_VALUE(chartConfig_, chartConfig) };


    // chartTitle Field Functions 
    bool hasChartTitle() const { return this->chartTitle_ != nullptr;};
    void deleteChartTitle() { this->chartTitle_ = nullptr;};
    inline string chartTitle() const { DARABONBA_PTR_GET_DEFAULT(chartTitle_, "") };
    inline SubmitDynamicChartJobRequest& setChartTitle(string chartTitle) { DARABONBA_PTR_SET_VALUE(chartTitle_, chartTitle) };


    // chartType Field Functions 
    bool hasChartType() const { return this->chartType_ != nullptr;};
    void deleteChartType() { this->chartType_ = nullptr;};
    inline string chartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
    inline SubmitDynamicChartJobRequest& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline SubmitDynamicChartJobRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitDynamicChartJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitDynamicChartJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitDynamicChartJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline string subtitle() const { DARABONBA_PTR_GET_DEFAULT(subtitle_, "") };
    inline SubmitDynamicChartJobRequest& setSubtitle(string subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitDynamicChartJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline SubmitDynamicChartJobRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitDynamicChartJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The axis configurations. If XAxisFontInterval is set to 0 or left empty, the system automatically determines an optimal interval.
    std::shared_ptr<string> axisParams_ = nullptr;
    // The chart background.
    std::shared_ptr<string> background_ = nullptr;
    // The chart configurations.
    std::shared_ptr<string> chartConfig_ = nullptr;
    // The chart title.
    std::shared_ptr<string> chartTitle_ = nullptr;
    // The chart type.
    // 
    // Valid values:
    // 
    // *   Line: line chart
    // *   Histogram: bar chart
    // *   Pie: pie chart
    // 
    // This parameter is required.
    std::shared_ptr<string> chartType_ = nullptr;
    // The data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The input data for the chart.
    // 
    // This parameter is required.
    std::shared_ptr<string> input_ = nullptr;
    // The output configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputConfig_ = nullptr;
    // The subtitle.
    std::shared_ptr<string> subtitle_ = nullptr;
    // The job title.
    std::shared_ptr<string> title_ = nullptr;
    // Unit
    std::shared_ptr<string> unit_ = nullptr;
    // The custom data in JSON format.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
