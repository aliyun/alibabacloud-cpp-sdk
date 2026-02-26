// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTSALEINFOLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTSALEINFOLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProductSaleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductSaleInfoListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductSaleInfoListResult& obj) { 
      DARABONBA_PTR_TO_JSON(productSaleInfos, productSaleInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ProductSaleInfoListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(productSaleInfos, productSaleInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ProductSaleInfoListResult() = default ;
    ProductSaleInfoListResult(const ProductSaleInfoListResult &) = default ;
    ProductSaleInfoListResult(ProductSaleInfoListResult &&) = default ;
    ProductSaleInfoListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductSaleInfoListResult() = default ;
    ProductSaleInfoListResult& operator=(const ProductSaleInfoListResult &) = default ;
    ProductSaleInfoListResult& operator=(ProductSaleInfoListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productSaleInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // productSaleInfos Field Functions 
    bool hasProductSaleInfos() const { return this->productSaleInfos_ != nullptr;};
    void deleteProductSaleInfos() { this->productSaleInfos_ = nullptr;};
    inline const vector<ProductSaleInfo> & getProductSaleInfos() const { DARABONBA_PTR_GET_CONST(productSaleInfos_, vector<ProductSaleInfo>) };
    inline vector<ProductSaleInfo> getProductSaleInfos() { DARABONBA_PTR_GET(productSaleInfos_, vector<ProductSaleInfo>) };
    inline ProductSaleInfoListResult& setProductSaleInfos(const vector<ProductSaleInfo> & productSaleInfos) { DARABONBA_PTR_SET_VALUE(productSaleInfos_, productSaleInfos) };
    inline ProductSaleInfoListResult& setProductSaleInfos(vector<ProductSaleInfo> && productSaleInfos) { DARABONBA_PTR_SET_RVALUE(productSaleInfos_, productSaleInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProductSaleInfoListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ProductSaleInfo>> productSaleInfos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
