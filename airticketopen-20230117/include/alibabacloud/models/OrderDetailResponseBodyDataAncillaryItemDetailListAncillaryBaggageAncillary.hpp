// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLISTANCILLARYBAGGAGEANCILLARY_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLISTANCILLARYBAGGAGEANCILLARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_amount, baggageAmount_);
      DARABONBA_PTR_TO_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_TO_JSON(baggage_weight_unit, baggageWeightUnit_);
      DARABONBA_PTR_TO_JSON(is_all_weight, isAllWeight_);
      DARABONBA_PTR_TO_JSON(price, price_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_amount, baggageAmount_);
      DARABONBA_PTR_FROM_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_FROM_JSON(baggage_weight_unit, baggageWeightUnit_);
      DARABONBA_PTR_FROM_JSON(is_all_weight, isAllWeight_);
      DARABONBA_PTR_FROM_JSON(price, price_);
    };
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary(const OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary(OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary &&) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& operator=(const OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& operator=(OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baggageAmount_ == nullptr
        && return this->baggageWeight_ == nullptr && return this->baggageWeightUnit_ == nullptr && return this->isAllWeight_ == nullptr && return this->price_ == nullptr; };
    // baggageAmount Field Functions 
    bool hasBaggageAmount() const { return this->baggageAmount_ != nullptr;};
    void deleteBaggageAmount() { this->baggageAmount_ = nullptr;};
    inline int32_t baggageAmount() const { DARABONBA_PTR_GET_DEFAULT(baggageAmount_, 0) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& setBaggageAmount(int32_t baggageAmount) { DARABONBA_PTR_SET_VALUE(baggageAmount_, baggageAmount) };


    // baggageWeight Field Functions 
    bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
    void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
    inline int32_t baggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& setBaggageWeight(int32_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


    // baggageWeightUnit Field Functions 
    bool hasBaggageWeightUnit() const { return this->baggageWeightUnit_ != nullptr;};
    void deleteBaggageWeightUnit() { this->baggageWeightUnit_ = nullptr;};
    inline string baggageWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageWeightUnit_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& setBaggageWeightUnit(string baggageWeightUnit) { DARABONBA_PTR_SET_VALUE(baggageWeightUnit_, baggageWeightUnit) };


    // isAllWeight Field Functions 
    bool hasIsAllWeight() const { return this->isAllWeight_ != nullptr;};
    void deleteIsAllWeight() { this->isAllWeight_ = nullptr;};
    inline bool isAllWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllWeight_, false) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& setIsAllWeight(bool isAllWeight) { DARABONBA_PTR_SET_VALUE(isAllWeight_, isAllWeight) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    std::shared_ptr<int32_t> baggageAmount_ = nullptr;
    std::shared_ptr<int32_t> baggageWeight_ = nullptr;
    std::shared_ptr<string> baggageWeightUnit_ = nullptr;
    std::shared_ptr<bool> isAllWeight_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
