// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTPRICE_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductPrice& obj) { 
      DARABONBA_PTR_TO_JSON(fundAmountMoney, fundAmountMoney_);
    };
    friend void from_json(const Darabonba::Json& j, ProductPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(fundAmountMoney, fundAmountMoney_);
    };
    ProductPrice() = default ;
    ProductPrice(const ProductPrice &) = default ;
    ProductPrice(ProductPrice &&) = default ;
    ProductPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductPrice() = default ;
    ProductPrice& operator=(const ProductPrice &) = default ;
    ProductPrice& operator=(ProductPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fundAmountMoney_ == nullptr; };
    // fundAmountMoney Field Functions 
    bool hasFundAmountMoney() const { return this->fundAmountMoney_ != nullptr;};
    void deleteFundAmountMoney() { this->fundAmountMoney_ = nullptr;};
    inline string getFundAmountMoney() const { DARABONBA_PTR_GET_DEFAULT(fundAmountMoney_, "") };
    inline ProductPrice& setFundAmountMoney(string fundAmountMoney) { DARABONBA_PTR_SET_VALUE(fundAmountMoney_, fundAmountMoney) };


  protected:
    shared_ptr<string> fundAmountMoney_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
