// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryProductInfoResponseBodyProductInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryProductInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryProductInfoResponseBody() = default ;
    QueryProductInfoResponseBody(const QueryProductInfoResponseBody &) = default ;
    QueryProductInfoResponseBody(QueryProductInfoResponseBody &&) = default ;
    QueryProductInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductInfoResponseBody() = default ;
    QueryProductInfoResponseBody& operator=(const QueryProductInfoResponseBody &) = default ;
    QueryProductInfoResponseBody& operator=(QueryProductInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const QueryProductInfoResponseBodyProductInfo & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, QueryProductInfoResponseBodyProductInfo) };
    inline QueryProductInfoResponseBodyProductInfo productInfo() { DARABONBA_PTR_GET(productInfo_, QueryProductInfoResponseBodyProductInfo) };
    inline QueryProductInfoResponseBody& setProductInfo(const QueryProductInfoResponseBodyProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline QueryProductInfoResponseBody& setProductInfo(QueryProductInfoResponseBodyProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryProductInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryProductInfoResponseBodyProductInfo> productInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
