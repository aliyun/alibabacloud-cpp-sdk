// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORAGG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORAGG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg(DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg &&) = default ;
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
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // searchResults Field Functions 
    bool hasSearchResults() const { return this->searchResults_ != nullptr;};
    void deleteSearchResults() { this->searchResults_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> & searchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> searchResults() { DARABONBA_PTR_GET(searchResults_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& setSearchResults(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg& setSearchResults(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


  protected:
    // The detection result items of operator metric aggregation.
    std::shared_ptr<string> metricName_ = nullptr;
    // The detection result items of operator metric aggregation.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults>> searchResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
