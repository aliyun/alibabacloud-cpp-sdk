// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListRunMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRunMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRunMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRunMetricsResponseBody() = default ;
    ListRunMetricsResponseBody(const ListRunMetricsResponseBody &) = default ;
    ListRunMetricsResponseBody(ListRunMetricsResponseBody &&) = default ;
    ListRunMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRunMetricsResponseBody() = default ;
    ListRunMetricsResponseBody& operator=(const ListRunMetricsResponseBody &) = default ;
    ListRunMetricsResponseBody& operator=(ListRunMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metrics_ != nullptr
        && this->nextPageToken_ != nullptr && this->requestId_ != nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<RunMetric> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<RunMetric>) };
    inline vector<RunMetric> metrics() { DARABONBA_PTR_GET(metrics_, vector<RunMetric>) };
    inline ListRunMetricsResponseBody& setMetrics(const vector<RunMetric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListRunMetricsResponseBody& setMetrics(vector<RunMetric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListRunMetricsResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRunMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metrics.
    std::shared_ptr<vector<RunMetric>> metrics_ = nullptr;
    // The pagination token that is used to retrieve the next page. You do not need to specify this parameter for the first request. You must specify the pagination token in the result of the previous query. If the pagination token is 0, no next page exists. You can obtain the pagination token that is used to retrieve the next page in the value of the **NextPageToken** field.
    std::shared_ptr<int64_t> nextPageToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
