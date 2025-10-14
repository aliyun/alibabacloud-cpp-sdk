// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAFLIGHTITEMDETAILLISTFLIGHTSEGMENTCABINRELATION_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAFLIGHTITEMDETAILLISTFLIGHTSEGMENTCABINRELATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& obj) { 
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
    };
    OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation() = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation(const OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation &) = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation(OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation &&) = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation() = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& operator=(const OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation &) = default ;
    OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& operator=(OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cabin_ == nullptr
        && return this->cabinClass_ == nullptr && return this->cabinClassName_ == nullptr && return this->cabinQuantity_ == nullptr && return this->segmentId_ == nullptr; };
    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline string cabinQuantity() const { DARABONBA_PTR_GET_DEFAULT(cabinQuantity_, "") };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& setCabinQuantity(string cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string segmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


  protected:
    // RBD
    std::shared_ptr<string> cabin_ = nullptr;
    // cabin class
    std::shared_ptr<string> cabinClass_ = nullptr;
    // cabin class description
    std::shared_ptr<string> cabinClassName_ = nullptr;
    // availability
    std::shared_ptr<string> cabinQuantity_ = nullptr;
    // segment ID format: flight no.+departure airport[IATA airport code]+arrival airport[IATA airport code]+departure time(yyMMddHHmm)
    std::shared_ptr<string> segmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
