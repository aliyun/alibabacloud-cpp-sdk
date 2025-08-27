// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTEXCEEDAPPLYQUERYRESPONSEBODYMODULEAPPLYINTENTIONINFODO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTEXCEEDAPPLYQUERYRESPONSEBODYMODULEAPPLYINTENTIONINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& obj) { 
      DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_str, cabinClassStr_);
      DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_str, cabinClassStr_);
      DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() = default ;
    FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(const FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &) = default ;
    FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &&) = default ;
    FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() = default ;
    FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& operator=(const FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &) = default ;
    FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& operator=(FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrAirportName_ != nullptr
        && this->arrCity_ != nullptr && this->arrCityName_ != nullptr && this->arrTime_ != nullptr && this->cabin_ != nullptr && this->cabinClass_ != nullptr
        && this->cabinClassStr_ != nullptr && this->depAirportName_ != nullptr && this->depCity_ != nullptr && this->depCityName_ != nullptr && this->depTime_ != nullptr
        && this->discount_ != nullptr && this->flightNo_ != nullptr && this->price_ != nullptr && this->type_ != nullptr; };
    // arrAirportName Field Functions 
    bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
    void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
    inline string arrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline int32_t cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, 0) };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCabinClass(int32_t cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassStr Field Functions 
    bool hasCabinClassStr() const { return this->cabinClassStr_ != nullptr;};
    void deleteCabinClassStr() { this->cabinClassStr_ = nullptr;};
    inline string cabinClassStr() const { DARABONBA_PTR_GET_DEFAULT(cabinClassStr_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCabinClassStr(string cabinClassStr) { DARABONBA_PTR_SET_VALUE(cabinClassStr_, cabinClassStr) };


    // depAirportName Field Functions 
    bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
    void deleteDepAirportName() { this->depAirportName_ = nullptr;};
    inline string depAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> arrAirportName_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<int32_t> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassStr_ = nullptr;
    std::shared_ptr<string> depAirportName_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> discount_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
