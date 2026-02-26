// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTSALEINFOQUERY_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTSALEINFOQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductSaleInfoQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductSaleInfoQuery& obj) { 
      DARABONBA_PTR_TO_JSON(distributorShopId, distributorShopId_);
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ProductSaleInfoQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(distributorShopId, distributorShopId_);
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
    };
    ProductSaleInfoQuery() = default ;
    ProductSaleInfoQuery(const ProductSaleInfoQuery &) = default ;
    ProductSaleInfoQuery(ProductSaleInfoQuery &&) = default ;
    ProductSaleInfoQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductSaleInfoQuery() = default ;
    ProductSaleInfoQuery& operator=(const ProductSaleInfoQuery &) = default ;
    ProductSaleInfoQuery& operator=(ProductSaleInfoQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distributorShopId_ == nullptr
        && this->divisionCode_ == nullptr; };
    // distributorShopId Field Functions 
    bool hasDistributorShopId() const { return this->distributorShopId_ != nullptr;};
    void deleteDistributorShopId() { this->distributorShopId_ = nullptr;};
    inline string getDistributorShopId() const { DARABONBA_PTR_GET_DEFAULT(distributorShopId_, "") };
    inline ProductSaleInfoQuery& setDistributorShopId(string distributorShopId) { DARABONBA_PTR_SET_VALUE(distributorShopId_, distributorShopId) };


    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline ProductSaleInfoQuery& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> distributorShopId_ {};
    shared_ptr<string> divisionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
