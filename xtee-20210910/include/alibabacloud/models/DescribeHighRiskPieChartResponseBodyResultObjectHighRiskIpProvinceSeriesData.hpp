// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCESERIESDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCESERIESDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeriesData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Variable name
    std::shared_ptr<string> name_ = nullptr;
    // Data value
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
