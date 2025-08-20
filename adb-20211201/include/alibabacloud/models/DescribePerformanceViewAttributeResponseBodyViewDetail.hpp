// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODYVIEWDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODYVIEWDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePerformanceViewAttributeResponseBodyViewDetailCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePerformanceViewAttributeResponseBodyViewDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewAttributeResponseBodyViewDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(ChartLinked, chartLinked_);
      DARABONBA_PTR_TO_JSON(ChartsPerLine, chartsPerLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewAttributeResponseBodyViewDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(ChartLinked, chartLinked_);
      DARABONBA_PTR_FROM_JSON(ChartsPerLine, chartsPerLine_);
    };
    DescribePerformanceViewAttributeResponseBodyViewDetail() = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetail(const DescribePerformanceViewAttributeResponseBodyViewDetail &) = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetail(DescribePerformanceViewAttributeResponseBodyViewDetail &&) = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewAttributeResponseBodyViewDetail() = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetail& operator=(const DescribePerformanceViewAttributeResponseBodyViewDetail &) = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetail& operator=(DescribePerformanceViewAttributeResponseBodyViewDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->chartLinked_ != nullptr && this->chartsPerLine_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories>) };
    inline vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories> categories() { DARABONBA_PTR_GET(categories_, vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories>) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetail& setCategories(const vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetail& setCategories(vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // chartLinked Field Functions 
    bool hasChartLinked() const { return this->chartLinked_ != nullptr;};
    void deleteChartLinked() { this->chartLinked_ = nullptr;};
    inline bool chartLinked() const { DARABONBA_PTR_GET_DEFAULT(chartLinked_, false) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetail& setChartLinked(bool chartLinked) { DARABONBA_PTR_SET_VALUE(chartLinked_, chartLinked) };


    // chartsPerLine Field Functions 
    bool hasChartsPerLine() const { return this->chartsPerLine_ != nullptr;};
    void deleteChartsPerLine() { this->chartsPerLine_ = nullptr;};
    inline int32_t chartsPerLine() const { DARABONBA_PTR_GET_DEFAULT(chartsPerLine_, 0) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetail& setChartsPerLine(int32_t chartsPerLine) { DARABONBA_PTR_SET_VALUE(chartsPerLine_, chartsPerLine) };


  protected:
    // The metric category.
    std::shared_ptr<vector<Models::DescribePerformanceViewAttributeResponseBodyViewDetailCategories>> categories_ = nullptr;
    // Specifies whether to enable the filter interaction feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> chartLinked_ = nullptr;
    // The number of charts to display in each row.
    std::shared_ptr<int32_t> chartsPerLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
