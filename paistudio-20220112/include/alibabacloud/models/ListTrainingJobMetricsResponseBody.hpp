// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobMetricsResponseBodyMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTrainingJobMetricsResponseBody() = default ;
    ListTrainingJobMetricsResponseBody(const ListTrainingJobMetricsResponseBody &) = default ;
    ListTrainingJobMetricsResponseBody(ListTrainingJobMetricsResponseBody &&) = default ;
    ListTrainingJobMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobMetricsResponseBody() = default ;
    ListTrainingJobMetricsResponseBody& operator=(const ListTrainingJobMetricsResponseBody &) = default ;
    ListTrainingJobMetricsResponseBody& operator=(ListTrainingJobMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<ListTrainingJobMetricsResponseBodyMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<ListTrainingJobMetricsResponseBodyMetrics>) };
    inline vector<ListTrainingJobMetricsResponseBodyMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<ListTrainingJobMetricsResponseBodyMetrics>) };
    inline ListTrainingJobMetricsResponseBody& setMetrics(const vector<ListTrainingJobMetricsResponseBodyMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListTrainingJobMetricsResponseBody& setMetrics(vector<ListTrainingJobMetricsResponseBodyMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrainingJobMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTrainingJobMetricsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListTrainingJobMetricsResponseBodyMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
