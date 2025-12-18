// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSupportedProductsResponseBodyProductsResourceTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListSupportedProductsResponseBodyProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportedProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_TO_JSON(ProductNameEn, productNameEn_);
      DARABONBA_PTR_TO_JSON(ProductNameZh, productNameZh_);
      DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportedProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductNameEn, productNameEn_);
      DARABONBA_PTR_FROM_JSON(ProductNameZh, productNameZh_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeList, resourceTypeList_);
    };
    ListSupportedProductsResponseBodyProducts() = default ;
    ListSupportedProductsResponseBodyProducts(const ListSupportedProductsResponseBodyProducts &) = default ;
    ListSupportedProductsResponseBodyProducts(ListSupportedProductsResponseBodyProducts &&) = default ;
    ListSupportedProductsResponseBodyProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportedProductsResponseBodyProducts() = default ;
    ListSupportedProductsResponseBodyProducts& operator=(const ListSupportedProductsResponseBodyProducts &) = default ;
    ListSupportedProductsResponseBodyProducts& operator=(ListSupportedProductsResponseBodyProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productNameEn_ == nullptr
        && return this->productNameZh_ == nullptr && return this->resourceTypeList_ == nullptr; };
    // productNameEn Field Functions 
    bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
    void deleteProductNameEn() { this->productNameEn_ = nullptr;};
    inline string productNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
    inline ListSupportedProductsResponseBodyProducts& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


    // productNameZh Field Functions 
    bool hasProductNameZh() const { return this->productNameZh_ != nullptr;};
    void deleteProductNameZh() { this->productNameZh_ = nullptr;};
    inline string productNameZh() const { DARABONBA_PTR_GET_DEFAULT(productNameZh_, "") };
    inline ListSupportedProductsResponseBodyProducts& setProductNameZh(string productNameZh) { DARABONBA_PTR_SET_VALUE(productNameZh_, productNameZh) };


    // resourceTypeList Field Functions 
    bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
    void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
    inline const vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList> & resourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList>) };
    inline vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList> resourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList>) };
    inline ListSupportedProductsResponseBodyProducts& setResourceTypeList(const vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
    inline ListSupportedProductsResponseBodyProducts& setResourceTypeList(vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


  protected:
    // The English name of the Alibaba Cloud service.
    std::shared_ptr<string> productNameEn_ = nullptr;
    // The Chinese name of the Alibaba Cloud service.
    std::shared_ptr<string> productNameZh_ = nullptr;
    // The resource types that are supported by Cloud Config.
    std::shared_ptr<vector<Models::ListSupportedProductsResponseBodyProductsResourceTypeList>> resourceTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
