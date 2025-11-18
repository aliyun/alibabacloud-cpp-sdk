// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYREQUESTREFUNDJOURNEYSSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYREQUESTREFUNDJOURNEYSSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyRequestRefundJourneysSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyRequestRefundJourneysSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyRequestRefundJourneysSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
    };
    RefundApplyRequestRefundJourneysSegmentList() = default ;
    RefundApplyRequestRefundJourneysSegmentList(const RefundApplyRequestRefundJourneysSegmentList &) = default ;
    RefundApplyRequestRefundJourneysSegmentList(RefundApplyRequestRefundJourneysSegmentList &&) = default ;
    RefundApplyRequestRefundJourneysSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyRequestRefundJourneysSegmentList() = default ;
    RefundApplyRequestRefundJourneysSegmentList& operator=(const RefundApplyRequestRefundJourneysSegmentList &) = default ;
    RefundApplyRequestRefundJourneysSegmentList& operator=(RefundApplyRequestRefundJourneysSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && return this->arrivalCity_ == nullptr && return this->departureAirport_ == nullptr && return this->departureCity_ == nullptr; };
    // arrivalAirport Field Functions 
    bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
    void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
    inline string arrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
    inline RefundApplyRequestRefundJourneysSegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline RefundApplyRequestRefundJourneysSegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // departureAirport Field Functions 
    bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
    void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
    inline string departureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
    inline RefundApplyRequestRefundJourneysSegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline RefundApplyRequestRefundJourneysSegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


  protected:
    // Three-letter code of the arrival airport (uppercase)
    // 
    // This parameter is required.
    std::shared_ptr<string> arrivalAirport_ = nullptr;
    // Three-letter code of the arrival city (uppercase)
    // 
    // This parameter is required.
    std::shared_ptr<string> arrivalCity_ = nullptr;
    // Three-letter code of the departure airport (uppercase)
    // 
    // This parameter is required.
    std::shared_ptr<string> departureAirport_ = nullptr;
    // Three-letter code of the departure city (uppercase)
    // 
    // This parameter is required.
    std::shared_ptr<string> departureCity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
