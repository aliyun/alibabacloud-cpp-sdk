// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODYRESULTOBJECTSERIESDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODYRESULTOBJECTSERIESDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData() = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData(const DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData &) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData(DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData &&) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData() = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData& operator=(const DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData &) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData& operator=(DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Category item name.
    std::shared_ptr<string> name_ = nullptr;
    // Result value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
