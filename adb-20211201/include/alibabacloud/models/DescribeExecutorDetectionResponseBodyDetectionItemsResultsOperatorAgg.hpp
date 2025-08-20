// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORAGG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORAGG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
    };
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg(const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg(DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg &&) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& operator=(const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& operator=(DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricName_ != nullptr
        && this->searchResults_ != nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // searchResults Field Functions 
    bool hasSearchResults() const { return this->searchResults_ != nullptr;};
    void deleteSearchResults() { this->searchResults_ = nullptr;};
    inline const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> & searchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults>) };
    inline vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> searchResults() { DARABONBA_PTR_GET(searchResults_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults>) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& setSearchResults(const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg& setSearchResults(vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


  protected:
    // The name of the detection metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The detection result items of operator metric aggregation.
    std::shared_ptr<vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults>> searchResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
