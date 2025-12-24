// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryHistoricalMetricResponseBodyHistoricalMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryHistoricalMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoricalMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoricalMetrics, historicalMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoricalMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoricalMetrics, historicalMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryHistoricalMetricResponseBody() = default ;
    QueryHistoricalMetricResponseBody(const QueryHistoricalMetricResponseBody &) = default ;
    QueryHistoricalMetricResponseBody(QueryHistoricalMetricResponseBody &&) = default ;
    QueryHistoricalMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoricalMetricResponseBody() = default ;
    QueryHistoricalMetricResponseBody& operator=(const QueryHistoricalMetricResponseBody &) = default ;
    QueryHistoricalMetricResponseBody& operator=(QueryHistoricalMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historicalMetrics_ == nullptr
        && return this->requestId_ == nullptr; };
    // historicalMetrics Field Functions 
    bool hasHistoricalMetrics() const { return this->historicalMetrics_ != nullptr;};
    void deleteHistoricalMetrics() { this->historicalMetrics_ = nullptr;};
    inline const QueryHistoricalMetricResponseBodyHistoricalMetrics & historicalMetrics() const { DARABONBA_PTR_GET_CONST(historicalMetrics_, QueryHistoricalMetricResponseBodyHistoricalMetrics) };
    inline QueryHistoricalMetricResponseBodyHistoricalMetrics historicalMetrics() { DARABONBA_PTR_GET(historicalMetrics_, QueryHistoricalMetricResponseBodyHistoricalMetrics) };
    inline QueryHistoricalMetricResponseBody& setHistoricalMetrics(const QueryHistoricalMetricResponseBodyHistoricalMetrics & historicalMetrics) { DARABONBA_PTR_SET_VALUE(historicalMetrics_, historicalMetrics) };
    inline QueryHistoricalMetricResponseBody& setHistoricalMetrics(QueryHistoricalMetricResponseBodyHistoricalMetrics && historicalMetrics) { DARABONBA_PTR_SET_RVALUE(historicalMetrics_, historicalMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoricalMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryHistoricalMetricResponseBodyHistoricalMetrics> historicalMetrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
