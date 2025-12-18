// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSupportedProductsResponseBodyProducts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListSupportedProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportedProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportedProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSupportedProductsResponseBody() = default ;
    ListSupportedProductsResponseBody(const ListSupportedProductsResponseBody &) = default ;
    ListSupportedProductsResponseBody(ListSupportedProductsResponseBody &&) = default ;
    ListSupportedProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportedProductsResponseBody() = default ;
    ListSupportedProductsResponseBody& operator=(const ListSupportedProductsResponseBody &) = default ;
    ListSupportedProductsResponseBody& operator=(ListSupportedProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->products_ == nullptr && return this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListSupportedProductsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupportedProductsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<ListSupportedProductsResponseBodyProducts> & products() const { DARABONBA_PTR_GET_CONST(products_, vector<ListSupportedProductsResponseBodyProducts>) };
    inline vector<ListSupportedProductsResponseBodyProducts> products() { DARABONBA_PTR_GET(products_, vector<ListSupportedProductsResponseBodyProducts>) };
    inline ListSupportedProductsResponseBody& setProducts(const vector<ListSupportedProductsResponseBodyProducts> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ListSupportedProductsResponseBody& setProducts(vector<ListSupportedProductsResponseBodyProducts> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportedProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries to return for a single request. Valid values: 1 to 500.
    std::shared_ptr<string> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The cloud services that are supported by Cloud Config.
    std::shared_ptr<vector<ListSupportedProductsResponseBodyProducts>> products_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
