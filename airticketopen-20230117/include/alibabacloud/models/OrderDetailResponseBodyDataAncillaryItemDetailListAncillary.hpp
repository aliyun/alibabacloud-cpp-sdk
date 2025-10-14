// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLISTANCILLARY_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLISTANCILLARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataAncillaryItemDetailListAncillary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& obj) { 
      DARABONBA_PTR_TO_JSON(ancillary_id, ancillaryId_);
      DARABONBA_PTR_TO_JSON(ancillary_type, ancillaryType_);
      DARABONBA_PTR_TO_JSON(baggage_ancillary, baggageAncillary_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& obj) { 
      DARABONBA_PTR_FROM_JSON(ancillary_id, ancillaryId_);
      DARABONBA_PTR_FROM_JSON(ancillary_type, ancillaryType_);
      DARABONBA_PTR_FROM_JSON(baggage_ancillary, baggageAncillary_);
    };
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillary() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillary(const OrderDetailResponseBodyDataAncillaryItemDetailListAncillary &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillary(OrderDetailResponseBodyDataAncillaryItemDetailListAncillary &&) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListAncillary() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& operator=(const OrderDetailResponseBodyDataAncillaryItemDetailListAncillary &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& operator=(OrderDetailResponseBodyDataAncillaryItemDetailListAncillary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ancillaryId_ == nullptr
        && return this->ancillaryType_ == nullptr && return this->baggageAncillary_ == nullptr; };
    // ancillaryId Field Functions 
    bool hasAncillaryId() const { return this->ancillaryId_ != nullptr;};
    void deleteAncillaryId() { this->ancillaryId_ = nullptr;};
    inline string ancillaryId() const { DARABONBA_PTR_GET_DEFAULT(ancillaryId_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& setAncillaryId(string ancillaryId) { DARABONBA_PTR_SET_VALUE(ancillaryId_, ancillaryId) };


    // ancillaryType Field Functions 
    bool hasAncillaryType() const { return this->ancillaryType_ != nullptr;};
    void deleteAncillaryType() { this->ancillaryType_ = nullptr;};
    inline int32_t ancillaryType() const { DARABONBA_PTR_GET_DEFAULT(ancillaryType_, 0) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& setAncillaryType(int32_t ancillaryType) { DARABONBA_PTR_SET_VALUE(ancillaryType_, ancillaryType) };


    // baggageAncillary Field Functions 
    bool hasBaggageAncillary() const { return this->baggageAncillary_ != nullptr;};
    void deleteBaggageAncillary() { this->baggageAncillary_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary & baggageAncillary() const { DARABONBA_PTR_GET_CONST(baggageAncillary_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary) };
    inline Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary baggageAncillary() { DARABONBA_PTR_GET(baggageAncillary_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& setBaggageAncillary(const Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary & baggageAncillary) { DARABONBA_PTR_SET_VALUE(baggageAncillary_, baggageAncillary) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListAncillary& setBaggageAncillary(Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary && baggageAncillary) { DARABONBA_PTR_SET_RVALUE(baggageAncillary_, baggageAncillary) };


  protected:
    // ancillay_id
    std::shared_ptr<string> ancillaryId_ = nullptr;
    // ancillary product type currently supports 4: paid luggage
    std::shared_ptr<int32_t> ancillaryType_ = nullptr;
    std::shared_ptr<Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary> baggageAncillary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
