// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosticMetricSetsResponseBodyMetricSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticMetricSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticMetricSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricSets, metricSets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticMetricSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricSets, metricSets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosticMetricSetsResponseBody() = default ;
    DescribeDiagnosticMetricSetsResponseBody(const DescribeDiagnosticMetricSetsResponseBody &) = default ;
    DescribeDiagnosticMetricSetsResponseBody(DescribeDiagnosticMetricSetsResponseBody &&) = default ;
    DescribeDiagnosticMetricSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticMetricSetsResponseBody() = default ;
    DescribeDiagnosticMetricSetsResponseBody& operator=(const DescribeDiagnosticMetricSetsResponseBody &) = default ;
    DescribeDiagnosticMetricSetsResponseBody& operator=(DescribeDiagnosticMetricSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricSets_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // metricSets Field Functions 
    bool hasMetricSets() const { return this->metricSets_ != nullptr;};
    void deleteMetricSets() { this->metricSets_ = nullptr;};
    inline const vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets> & metricSets() const { DARABONBA_PTR_GET_CONST(metricSets_, vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets>) };
    inline vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets> metricSets() { DARABONBA_PTR_GET(metricSets_, vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets>) };
    inline DescribeDiagnosticMetricSetsResponseBody& setMetricSets(const vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets> & metricSets) { DARABONBA_PTR_SET_VALUE(metricSets_, metricSets) };
    inline DescribeDiagnosticMetricSetsResponseBody& setMetricSets(vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets> && metricSets) { DARABONBA_PTR_SET_RVALUE(metricSets_, metricSets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnosticMetricSetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticMetricSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic metric sets.
    std::shared_ptr<vector<DescribeDiagnosticMetricSetsResponseBodyMetricSets>> metricSets_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
