// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCESERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCESERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(roseType, roseType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(roseType, roseType_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr && this->roseType_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData>) };
    inline vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData>) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& setData(const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& setData(vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roseType Field Functions 
    bool hasRoseType() const { return this->roseType_ != nullptr;};
    void deleteRoseType() { this->roseType_ = nullptr;};
    inline string roseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, "") };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries& setRoseType(string roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


  protected:
    // Returned data object
    std::shared_ptr<vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData>> data_ = nullptr;
    // Field name
    std::shared_ptr<string> name_ = nullptr;
    // Chart identifier, default is false
    std::shared_ptr<string> roseType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
