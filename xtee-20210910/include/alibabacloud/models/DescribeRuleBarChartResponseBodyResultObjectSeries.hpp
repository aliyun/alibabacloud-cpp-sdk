// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleBarChartResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleBarChartResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleBarChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleBarChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeRuleBarChartResponseBodyResultObjectSeries() = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeries(const DescribeRuleBarChartResponseBodyResultObjectSeries &) = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeries(DescribeRuleBarChartResponseBodyResultObjectSeries &&) = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleBarChartResponseBodyResultObjectSeries() = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeries& operator=(const DescribeRuleBarChartResponseBodyResultObjectSeries &) = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeries& operator=(DescribeRuleBarChartResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->type_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData>) };
    inline DescribeRuleBarChartResponseBodyResultObjectSeries& setData(const vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRuleBarChartResponseBodyResultObjectSeries& setData(vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRuleBarChartResponseBodyResultObjectSeries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Response data.
    std::shared_ptr<vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Bar chart type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
