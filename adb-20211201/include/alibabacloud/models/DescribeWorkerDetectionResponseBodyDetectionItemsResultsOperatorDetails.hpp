// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails(DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails &&) = default ;
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
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // searchResults Field Functions 
    bool hasSearchResults() const { return this->searchResults_ != nullptr;};
    void deleteSearchResults() { this->searchResults_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> & searchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> searchResults() { DARABONBA_PTR_GET(searchResults_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& setSearchResults(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails& setSearchResults(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


  protected:
    // The name of the detection metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The detection result items of abnormal operators.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults>> searchResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
