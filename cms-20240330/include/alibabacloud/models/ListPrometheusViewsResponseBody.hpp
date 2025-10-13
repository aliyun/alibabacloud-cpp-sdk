// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusViewsResponseBodyPrometheusViews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prometheusViews, prometheusViews_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prometheusViews, prometheusViews_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPrometheusViewsResponseBody() = default ;
    ListPrometheusViewsResponseBody(const ListPrometheusViewsResponseBody &) = default ;
    ListPrometheusViewsResponseBody(ListPrometheusViewsResponseBody &&) = default ;
    ListPrometheusViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusViewsResponseBody() = default ;
    ListPrometheusViewsResponseBody& operator=(const ListPrometheusViewsResponseBody &) = default ;
    ListPrometheusViewsResponseBody& operator=(ListPrometheusViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->prometheusViews_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrometheusViewsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrometheusViewsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prometheusViews Field Functions 
    bool hasPrometheusViews() const { return this->prometheusViews_ != nullptr;};
    void deletePrometheusViews() { this->prometheusViews_ = nullptr;};
    inline const vector<ListPrometheusViewsResponseBodyPrometheusViews> & prometheusViews() const { DARABONBA_PTR_GET_CONST(prometheusViews_, vector<ListPrometheusViewsResponseBodyPrometheusViews>) };
    inline vector<ListPrometheusViewsResponseBodyPrometheusViews> prometheusViews() { DARABONBA_PTR_GET(prometheusViews_, vector<ListPrometheusViewsResponseBodyPrometheusViews>) };
    inline ListPrometheusViewsResponseBody& setPrometheusViews(const vector<ListPrometheusViewsResponseBodyPrometheusViews> & prometheusViews) { DARABONBA_PTR_SET_VALUE(prometheusViews_, prometheusViews) };
    inline ListPrometheusViewsResponseBody& setPrometheusViews(vector<ListPrometheusViewsResponseBodyPrometheusViews> && prometheusViews) { DARABONBA_PTR_SET_RVALUE(prometheusViews_, prometheusViews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrometheusViewsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListPrometheusViewsResponseBodyPrometheusViews>> prometheusViews_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
