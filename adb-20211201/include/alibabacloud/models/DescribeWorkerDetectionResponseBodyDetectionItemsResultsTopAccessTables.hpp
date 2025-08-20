// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSTOPACCESSTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSTOPACCESSTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables(DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables &&) = default ;
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
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // searchResults Field Functions 
    bool hasSearchResults() const { return this->searchResults_ != nullptr;};
    void deleteSearchResults() { this->searchResults_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults> & searchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults> searchResults() { DARABONBA_PTR_GET(searchResults_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& setSearchResults(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables& setSearchResults(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


  protected:
    // The name of the detection metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The detection result items of table access.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults>> searchResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
