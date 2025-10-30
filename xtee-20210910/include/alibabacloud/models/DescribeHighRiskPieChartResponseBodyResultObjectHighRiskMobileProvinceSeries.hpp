// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKMOBILEPROVINCESERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKMOBILEPROVINCESERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(roseType, roseType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(roseType, roseType_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->name_ == nullptr && return this->roseType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData>) };
    inline vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData>) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& setData(const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& setData(vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roseType Field Functions 
    bool hasRoseType() const { return this->roseType_ != nullptr;};
    void deleteRoseType() { this->roseType_ = nullptr;};
    inline string roseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, "") };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries& setRoseType(string roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


  protected:
    // High-risk position data.
    std::shared_ptr<vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeriesData>> data_ = nullptr;
    // Display title
    std::shared_ptr<string> name_ = nullptr;
    // Chart identifier, default false
    std::shared_ptr<string> roseType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
