// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
    };
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails(const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails(DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails &&) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& operator=(const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& operator=(DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricName_ == nullptr
        && return this->searchResults_ == nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // searchResults Field Functions 
    bool hasSearchResults() const { return this->searchResults_ != nullptr;};
    void deleteSearchResults() { this->searchResults_ = nullptr;};
    inline const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> & searchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults>) };
    inline vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> searchResults() { DARABONBA_PTR_GET(searchResults_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults>) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& setSearchResults(const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails& setSearchResults(vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


  protected:
    // The name of the detection metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The detection result items of abnormal operators.
    std::shared_ptr<vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults>> searchResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
