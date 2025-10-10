// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductsResponseBodyProductInfosProductInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListProductsResponseBodyProductInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProductInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ProductInfo, productInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProductInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductInfo, productInfo_);
    };
    ListProductsResponseBodyProductInfos() = default ;
    ListProductsResponseBodyProductInfos(const ListProductsResponseBodyProductInfos &) = default ;
    ListProductsResponseBodyProductInfos(ListProductsResponseBodyProductInfos &&) = default ;
    ListProductsResponseBodyProductInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyProductInfos() = default ;
    ListProductsResponseBodyProductInfos& operator=(const ListProductsResponseBodyProductInfos &) = default ;
    ListProductsResponseBodyProductInfos& operator=(ListProductsResponseBodyProductInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productInfo_ != nullptr; };
    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const vector<Models::ListProductsResponseBodyProductInfosProductInfo> & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, vector<Models::ListProductsResponseBodyProductInfosProductInfo>) };
    inline vector<Models::ListProductsResponseBodyProductInfosProductInfo> productInfo() { DARABONBA_PTR_GET(productInfo_, vector<Models::ListProductsResponseBodyProductInfosProductInfo>) };
    inline ListProductsResponseBodyProductInfos& setProductInfo(const vector<Models::ListProductsResponseBodyProductInfosProductInfo> & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline ListProductsResponseBodyProductInfos& setProductInfo(vector<Models::ListProductsResponseBodyProductInfosProductInfo> && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


  protected:
    std::shared_ptr<vector<Models::ListProductsResponseBodyProductInfosProductInfo>> productInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
