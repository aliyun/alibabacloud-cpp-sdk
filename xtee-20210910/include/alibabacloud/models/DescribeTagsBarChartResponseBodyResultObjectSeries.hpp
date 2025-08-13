// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSBARCHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSBARCHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsBarChartResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsBarChartResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsBarChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(stack, stack_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsBarChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(stack, stack_);
    };
    DescribeTagsBarChartResponseBodyResultObjectSeries() = default ;
    DescribeTagsBarChartResponseBodyResultObjectSeries(const DescribeTagsBarChartResponseBodyResultObjectSeries &) = default ;
    DescribeTagsBarChartResponseBodyResultObjectSeries(DescribeTagsBarChartResponseBodyResultObjectSeries &&) = default ;
    DescribeTagsBarChartResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsBarChartResponseBodyResultObjectSeries() = default ;
    DescribeTagsBarChartResponseBodyResultObjectSeries& operator=(const DescribeTagsBarChartResponseBodyResultObjectSeries &) = default ;
    DescribeTagsBarChartResponseBodyResultObjectSeries& operator=(DescribeTagsBarChartResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr && this->stack_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData>) };
    inline DescribeTagsBarChartResponseBodyResultObjectSeries& setData(const vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTagsBarChartResponseBodyResultObjectSeries& setData(vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTagsBarChartResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline string stack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
    inline DescribeTagsBarChartResponseBodyResultObjectSeries& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


  protected:
    // Chart data list
    std::shared_ptr<vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Series name.
    std::shared_ptr<string> name_ = nullptr;
    // Chart field, same as name
    std::shared_ptr<string> stack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
