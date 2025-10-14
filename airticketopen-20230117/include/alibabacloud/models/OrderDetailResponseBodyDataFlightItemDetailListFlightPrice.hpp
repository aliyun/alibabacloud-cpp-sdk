// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAFLIGHTITEMDETAILLISTFLIGHTPRICE_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAFLIGHTITEMDETAILLISTFLIGHTPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataFlightItemDetailListFlightPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataFlightItemDetailListFlightPrice& obj) { 
      DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_TO_JSON(tax, tax_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataFlightItemDetailListFlightPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_FROM_JSON(tax, tax_);
    };
    OrderDetailResponseBodyDataFlightItemDetailListFlightPrice() = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightPrice(const OrderDetailResponseBodyDataFlightItemDetailListFlightPrice &) = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightPrice(OrderDetailResponseBodyDataFlightItemDetailListFlightPrice &&) = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataFlightItemDetailListFlightPrice() = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightPrice& operator=(const OrderDetailResponseBodyDataFlightItemDetailListFlightPrice &) = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightPrice& operator=(OrderDetailResponseBodyDataFlightItemDetailListFlightPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sellPrice_ == nullptr
        && return this->tax_ == nullptr; };
    // sellPrice Field Functions 
    bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
    void deleteSellPrice() { this->sellPrice_ = nullptr;};
    inline double sellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0.0) };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightPrice& setSellPrice(double sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline double tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0.0) };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightPrice& setTax(double tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


  protected:
    // selling price
    std::shared_ptr<double> sellPrice_ = nullptr;
    // tax
    std::shared_ptr<double> tax_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
