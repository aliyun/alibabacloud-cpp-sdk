// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTBARCHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTBARCHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventResultBarChartResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventResultBarChartResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventResultBarChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(stack, stack_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventResultBarChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(stack, stack_);
    };
    DescribeEventResultBarChartResponseBodyResultObjectSeries() = default ;
    DescribeEventResultBarChartResponseBodyResultObjectSeries(const DescribeEventResultBarChartResponseBodyResultObjectSeries &) = default ;
    DescribeEventResultBarChartResponseBodyResultObjectSeries(DescribeEventResultBarChartResponseBodyResultObjectSeries &&) = default ;
    DescribeEventResultBarChartResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventResultBarChartResponseBodyResultObjectSeries() = default ;
    DescribeEventResultBarChartResponseBodyResultObjectSeries& operator=(const DescribeEventResultBarChartResponseBodyResultObjectSeries &) = default ;
    DescribeEventResultBarChartResponseBodyResultObjectSeries& operator=(DescribeEventResultBarChartResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr && this->stack_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData>) };
    inline DescribeEventResultBarChartResponseBodyResultObjectSeries& setData(const vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEventResultBarChartResponseBodyResultObjectSeries& setData(vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventResultBarChartResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline string stack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
    inline DescribeEventResultBarChartResponseBodyResultObjectSeries& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


  protected:
    // Returned data object
    std::shared_ptr<vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Series name.
    std::shared_ptr<string> name_ = nullptr;
    // Label key
    std::shared_ptr<string> stack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
