// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListProductsResponseBodyProductInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductInfos, productInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(UbsmsStatus, ubsmsStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductInfos, productInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(UbsmsStatus, ubsmsStatus_);
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
    virtual bool empty() const override { this->productInfos_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr && this->ubsmsStatus_ != nullptr; };
    // productInfos Field Functions 
    bool hasProductInfos() const { return this->productInfos_ != nullptr;};
    void deleteProductInfos() { this->productInfos_ = nullptr;};
    inline const ListProductsResponseBodyProductInfos & productInfos() const { DARABONBA_PTR_GET_CONST(productInfos_, ListProductsResponseBodyProductInfos) };
    inline ListProductsResponseBodyProductInfos productInfos() { DARABONBA_PTR_GET(productInfos_, ListProductsResponseBodyProductInfos) };
    inline ListProductsResponseBody& setProductInfos(const ListProductsResponseBodyProductInfos & productInfos) { DARABONBA_PTR_SET_VALUE(productInfos_, productInfos) };
    inline ListProductsResponseBody& setProductInfos(ListProductsResponseBodyProductInfos && productInfos) { DARABONBA_PTR_SET_RVALUE(productInfos_, productInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListProductsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // ubsmsStatus Field Functions 
    bool hasUbsmsStatus() const { return this->ubsmsStatus_ != nullptr;};
    void deleteUbsmsStatus() { this->ubsmsStatus_ = nullptr;};
    inline string ubsmsStatus() const { DARABONBA_PTR_GET_DEFAULT(ubsmsStatus_, "") };
    inline ListProductsResponseBody& setUbsmsStatus(string ubsmsStatus) { DARABONBA_PTR_SET_VALUE(ubsmsStatus_, ubsmsStatus) };


  protected:
    std::shared_ptr<ListProductsResponseBodyProductInfos> productInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> ubsmsStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
