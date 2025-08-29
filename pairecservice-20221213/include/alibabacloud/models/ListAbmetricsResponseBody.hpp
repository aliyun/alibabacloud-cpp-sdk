// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListABMetricsResponseBodyABMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListABMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetrics, ABMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListABMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetrics, ABMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListABMetricsResponseBody() = default ;
    ListABMetricsResponseBody(const ListABMetricsResponseBody &) = default ;
    ListABMetricsResponseBody(ListABMetricsResponseBody &&) = default ;
    ListABMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABMetricsResponseBody() = default ;
    ListABMetricsResponseBody& operator=(const ListABMetricsResponseBody &) = default ;
    ListABMetricsResponseBody& operator=(ListABMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetrics_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ABMetrics Field Functions 
    bool hasABMetrics() const { return this->ABMetrics_ != nullptr;};
    void deleteABMetrics() { this->ABMetrics_ = nullptr;};
    inline const vector<ListABMetricsResponseBodyABMetrics> & ABMetrics() const { DARABONBA_PTR_GET_CONST(ABMetrics_, vector<ListABMetricsResponseBodyABMetrics>) };
    inline vector<ListABMetricsResponseBodyABMetrics> ABMetrics() { DARABONBA_PTR_GET(ABMetrics_, vector<ListABMetricsResponseBodyABMetrics>) };
    inline ListABMetricsResponseBody& setABMetrics(const vector<ListABMetricsResponseBodyABMetrics> & ABMetrics) { DARABONBA_PTR_SET_VALUE(ABMetrics_, ABMetrics) };
    inline ListABMetricsResponseBody& setABMetrics(vector<ListABMetricsResponseBodyABMetrics> && ABMetrics) { DARABONBA_PTR_SET_RVALUE(ABMetrics_, ABMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListABMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListABMetricsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListABMetricsResponseBodyABMetrics>> ABMetrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
