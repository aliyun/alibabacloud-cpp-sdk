// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductQuotaDimensionsResponseBodyQuotaDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotaDimensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotaDimensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaDimensions, quotaDimensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotaDimensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaDimensions, quotaDimensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductQuotaDimensionsResponseBody() = default ;
    ListProductQuotaDimensionsResponseBody(const ListProductQuotaDimensionsResponseBody &) = default ;
    ListProductQuotaDimensionsResponseBody(ListProductQuotaDimensionsResponseBody &&) = default ;
    ListProductQuotaDimensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotaDimensionsResponseBody() = default ;
    ListProductQuotaDimensionsResponseBody& operator=(const ListProductQuotaDimensionsResponseBody &) = default ;
    ListProductQuotaDimensionsResponseBody& operator=(ListProductQuotaDimensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->quotaDimensions_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductQuotaDimensionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductQuotaDimensionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline const vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions> & quotaDimensions() const { DARABONBA_PTR_GET_CONST(quotaDimensions_, vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions>) };
    inline vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions> quotaDimensions() { DARABONBA_PTR_GET(quotaDimensions_, vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions>) };
    inline ListProductQuotaDimensionsResponseBody& setQuotaDimensions(const vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions> & quotaDimensions) { DARABONBA_PTR_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline ListProductQuotaDimensionsResponseBody& setQuotaDimensions(vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions> && quotaDimensions) { DARABONBA_PTR_SET_RVALUE(quotaDimensions_, quotaDimensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductQuotaDimensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductQuotaDimensionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records that are returned for the query.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position at which the query ends. An empty value indicates that all data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The quota dimensions.
    std::shared_ptr<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions>> quotaDimensions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of records that are returned for the query.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
