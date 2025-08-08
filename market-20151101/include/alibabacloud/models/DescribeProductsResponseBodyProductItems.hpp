// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODYPRODUCTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODYPRODUCTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductsResponseBodyProductItemsProductItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductsResponseBodyProductItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsResponseBodyProductItems& obj) { 
      DARABONBA_PTR_TO_JSON(ProductItem, productItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsResponseBodyProductItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductItem, productItem_);
    };
    DescribeProductsResponseBodyProductItems() = default ;
    DescribeProductsResponseBodyProductItems(const DescribeProductsResponseBodyProductItems &) = default ;
    DescribeProductsResponseBodyProductItems(DescribeProductsResponseBodyProductItems &&) = default ;
    DescribeProductsResponseBodyProductItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsResponseBodyProductItems() = default ;
    DescribeProductsResponseBodyProductItems& operator=(const DescribeProductsResponseBodyProductItems &) = default ;
    DescribeProductsResponseBodyProductItems& operator=(DescribeProductsResponseBodyProductItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productItem_ != nullptr; };
    // productItem Field Functions 
    bool hasProductItem() const { return this->productItem_ != nullptr;};
    void deleteProductItem() { this->productItem_ = nullptr;};
    inline const vector<Models::DescribeProductsResponseBodyProductItemsProductItem> & productItem() const { DARABONBA_PTR_GET_CONST(productItem_, vector<Models::DescribeProductsResponseBodyProductItemsProductItem>) };
    inline vector<Models::DescribeProductsResponseBodyProductItemsProductItem> productItem() { DARABONBA_PTR_GET(productItem_, vector<Models::DescribeProductsResponseBodyProductItemsProductItem>) };
    inline DescribeProductsResponseBodyProductItems& setProductItem(const vector<Models::DescribeProductsResponseBodyProductItemsProductItem> & productItem) { DARABONBA_PTR_SET_VALUE(productItem_, productItem) };
    inline DescribeProductsResponseBodyProductItems& setProductItem(vector<Models::DescribeProductsResponseBodyProductItemsProductItem> && productItem) { DARABONBA_PTR_SET_RVALUE(productItem_, productItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductsResponseBodyProductItemsProductItem>> productItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
