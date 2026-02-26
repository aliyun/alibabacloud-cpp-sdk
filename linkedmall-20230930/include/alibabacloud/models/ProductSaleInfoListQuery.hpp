// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTSALEINFOLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTSALEINFOLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductSaleInfoListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductSaleInfoListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(productIds, productIds_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
    };
    friend void from_json(const Darabonba::Json& j, ProductSaleInfoListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(productIds, productIds_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
    };
    ProductSaleInfoListQuery() = default ;
    ProductSaleInfoListQuery(const ProductSaleInfoListQuery &) = default ;
    ProductSaleInfoListQuery(ProductSaleInfoListQuery &&) = default ;
    ProductSaleInfoListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductSaleInfoListQuery() = default ;
    ProductSaleInfoListQuery& operator=(const ProductSaleInfoListQuery &) = default ;
    ProductSaleInfoListQuery& operator=(ProductSaleInfoListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->divisionCode_ == nullptr
        && this->productIds_ == nullptr && this->purchaserId_ == nullptr; };
    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline ProductSaleInfoListQuery& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline const vector<string> & getProductIds() const { DARABONBA_PTR_GET_CONST(productIds_, vector<string>) };
    inline vector<string> getProductIds() { DARABONBA_PTR_GET(productIds_, vector<string>) };
    inline ProductSaleInfoListQuery& setProductIds(const vector<string> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline ProductSaleInfoListQuery& setProductIds(vector<string> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline ProductSaleInfoListQuery& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


  protected:
    shared_ptr<string> divisionCode_ {};
    // This parameter is required.
    shared_ptr<vector<string>> productIds_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
