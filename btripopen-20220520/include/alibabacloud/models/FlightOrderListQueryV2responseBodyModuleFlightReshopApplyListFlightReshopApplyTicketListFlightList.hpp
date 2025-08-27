// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLISTFLIGHTRESHOPAPPLYTICKETLISTFLIGHTLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLISTFLIGHTRESHOPAPPLYTICKETLISTFLIGHTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrTime_ != nullptr
        && this->cabin_ != nullptr && this->cabinClass_ != nullptr && this->cabinClassName_ != nullptr && this->depTime_ != nullptr && this->flightNo_ != nullptr; };
    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


  protected:
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
