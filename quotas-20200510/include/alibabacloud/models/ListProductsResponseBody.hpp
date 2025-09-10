// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductsResponseBodyProductInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->productInfo_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const vector<ListProductsResponseBodyProductInfo> & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, vector<ListProductsResponseBodyProductInfo>) };
    inline vector<ListProductsResponseBodyProductInfo> productInfo() { DARABONBA_PTR_GET(productInfo_, vector<ListProductsResponseBodyProductInfo>) };
    inline ListProductsResponseBody& setProductInfo(const vector<ListProductsResponseBodyProductInfo> & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline ListProductsResponseBody& setProductInfo(vector<ListProductsResponseBodyProductInfo> && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records that are returned for the query.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position at which the query ends. An empty value indicates that all data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the Alibaba Cloud services.
    std::shared_ptr<vector<ListProductsResponseBodyProductInfo>> productInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of records that are returned for the query.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
