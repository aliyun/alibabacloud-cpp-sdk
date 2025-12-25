// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYDATAPRODUCTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYDATAPRODUCTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListProductsResponseBodyDataProductList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyDataProductList& obj) { 
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyDataProductList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
    };
    ListProductsResponseBodyDataProductList() = default ;
    ListProductsResponseBodyDataProductList(const ListProductsResponseBodyDataProductList &) = default ;
    ListProductsResponseBodyDataProductList(ListProductsResponseBodyDataProductList &&) = default ;
    ListProductsResponseBodyDataProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyDataProductList() = default ;
    ListProductsResponseBodyDataProductList& operator=(const ListProductsResponseBodyDataProductList &) = default ;
    ListProductsResponseBodyDataProductList& operator=(ListProductsResponseBodyDataProductList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productId_ == nullptr
        && return this->productName_ == nullptr; };
    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListProductsResponseBodyDataProductList& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListProductsResponseBodyDataProductList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


  protected:
    // Alibaba Cloud product ID
    std::shared_ptr<int64_t> productId_ = nullptr;
    // Alibaba Cloud product name
    std::shared_ptr<string> productName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
