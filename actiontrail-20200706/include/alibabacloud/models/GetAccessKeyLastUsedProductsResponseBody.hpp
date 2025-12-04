// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccessKeyLastUsedProductsResponseBodyProducts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedProductsResponseBody() = default ;
    GetAccessKeyLastUsedProductsResponseBody(const GetAccessKeyLastUsedProductsResponseBody &) = default ;
    GetAccessKeyLastUsedProductsResponseBody(GetAccessKeyLastUsedProductsResponseBody &&) = default ;
    GetAccessKeyLastUsedProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedProductsResponseBody() = default ;
    GetAccessKeyLastUsedProductsResponseBody& operator=(const GetAccessKeyLastUsedProductsResponseBody &) = default ;
    GetAccessKeyLastUsedProductsResponseBody& operator=(GetAccessKeyLastUsedProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->products_ == nullptr
        && return this->requestId_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedProductsResponseBodyProducts> & products() const { DARABONBA_PTR_GET_CONST(products_, vector<GetAccessKeyLastUsedProductsResponseBodyProducts>) };
    inline vector<GetAccessKeyLastUsedProductsResponseBodyProducts> products() { DARABONBA_PTR_GET(products_, vector<GetAccessKeyLastUsedProductsResponseBodyProducts>) };
    inline GetAccessKeyLastUsedProductsResponseBody& setProducts(const vector<GetAccessKeyLastUsedProductsResponseBodyProducts> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline GetAccessKeyLastUsedProductsResponseBody& setProducts(vector<GetAccessKeyLastUsedProductsResponseBodyProducts> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of returned Alibaba Cloud services.
    // 
    // This parameter is required.
    std::shared_ptr<vector<GetAccessKeyLastUsedProductsResponseBodyProducts>> products_ = nullptr;
    // The request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
