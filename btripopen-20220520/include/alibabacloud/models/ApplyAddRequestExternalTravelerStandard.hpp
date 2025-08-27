// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADDREQUESTEXTERNALTRAVELERSTANDARD_HPP_
#define ALIBABACLOUD_MODELS_APPLYADDREQUESTEXTERNALTRAVELERSTANDARD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyAddRequestExternalTravelerStandardHotelCitys.hpp>
#include <alibabacloud/models/ApplyAddRequestExternalTravelerStandardHotelIntlCitys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyAddRequestExternalTravelerStandard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAddRequestExternalTravelerStandard& obj) { 
      DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
      DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
      DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
      DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
      DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
      DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
      DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
      DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
      DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
      DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
      DARABONBA_PTR_TO_JSON(international_flight_cabins, internationalFlightCabins_);
      DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
      DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
      DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
      DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAddRequestExternalTravelerStandard& obj) { 
      DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
      DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
      DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
      DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
      DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
      DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
      DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
      DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
      DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
      DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
      DARABONBA_PTR_FROM_JSON(international_flight_cabins, internationalFlightCabins_);
      DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
      DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
      DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
      DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
    };
    ApplyAddRequestExternalTravelerStandard() = default ;
    ApplyAddRequestExternalTravelerStandard(const ApplyAddRequestExternalTravelerStandard &) = default ;
    ApplyAddRequestExternalTravelerStandard(ApplyAddRequestExternalTravelerStandard &&) = default ;
    ApplyAddRequestExternalTravelerStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAddRequestExternalTravelerStandard() = default ;
    ApplyAddRequestExternalTravelerStandard& operator=(const ApplyAddRequestExternalTravelerStandard &) = default ;
    ApplyAddRequestExternalTravelerStandard& operator=(ApplyAddRequestExternalTravelerStandard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessDiscount_ != nullptr
        && this->economyDiscount_ != nullptr && this->firstDiscount_ != nullptr && this->flightCabins_ != nullptr && this->flightIntlRuleCode_ != nullptr && this->flightRuleCode_ != nullptr
        && this->hotelCitys_ != nullptr && this->hotelIntlCitys_ != nullptr && this->hotelIntlRuleCode_ != nullptr && this->hotelRuleCode_ != nullptr && this->internationalFlightCabins_ != nullptr
        && this->premiumEconomyDiscount_ != nullptr && this->reserveType_ != nullptr && this->trainRuleCode_ != nullptr && this->trainSeats_ != nullptr; };
    // businessDiscount Field Functions 
    bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
    void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
    inline int32_t businessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
    inline ApplyAddRequestExternalTravelerStandard& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


    // economyDiscount Field Functions 
    bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
    void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
    inline int32_t economyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
    inline ApplyAddRequestExternalTravelerStandard& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


    // firstDiscount Field Functions 
    bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
    void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
    inline int32_t firstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
    inline ApplyAddRequestExternalTravelerStandard& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


    // flightCabins Field Functions 
    bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
    void deleteFlightCabins() { this->flightCabins_ = nullptr;};
    inline string flightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
    inline ApplyAddRequestExternalTravelerStandard& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


    // flightIntlRuleCode Field Functions 
    bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
    void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
    inline int64_t flightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
    inline ApplyAddRequestExternalTravelerStandard& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


    // flightRuleCode Field Functions 
    bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
    void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
    inline int64_t flightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
    inline ApplyAddRequestExternalTravelerStandard& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


    // hotelCitys Field Functions 
    bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
    void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
    inline const vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys> & hotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys>) };
    inline vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys> hotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys>) };
    inline ApplyAddRequestExternalTravelerStandard& setHotelCitys(const vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
    inline ApplyAddRequestExternalTravelerStandard& setHotelCitys(vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


    // hotelIntlCitys Field Functions 
    bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
    void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
    inline const vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys> & hotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys>) };
    inline vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys> hotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys>) };
    inline ApplyAddRequestExternalTravelerStandard& setHotelIntlCitys(const vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
    inline ApplyAddRequestExternalTravelerStandard& setHotelIntlCitys(vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


    // hotelIntlRuleCode Field Functions 
    bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
    void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
    inline int64_t hotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
    inline ApplyAddRequestExternalTravelerStandard& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


    // hotelRuleCode Field Functions 
    bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
    void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
    inline int64_t hotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
    inline ApplyAddRequestExternalTravelerStandard& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


    // internationalFlightCabins Field Functions 
    bool hasInternationalFlightCabins() const { return this->internationalFlightCabins_ != nullptr;};
    void deleteInternationalFlightCabins() { this->internationalFlightCabins_ = nullptr;};
    inline string internationalFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightCabins_, "") };
    inline ApplyAddRequestExternalTravelerStandard& setInternationalFlightCabins(string internationalFlightCabins) { DARABONBA_PTR_SET_VALUE(internationalFlightCabins_, internationalFlightCabins) };


    // premiumEconomyDiscount Field Functions 
    bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
    void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
    inline int32_t premiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
    inline ApplyAddRequestExternalTravelerStandard& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


    // reserveType Field Functions 
    bool hasReserveType() const { return this->reserveType_ != nullptr;};
    void deleteReserveType() { this->reserveType_ = nullptr;};
    inline int32_t reserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
    inline ApplyAddRequestExternalTravelerStandard& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


    // trainRuleCode Field Functions 
    bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
    void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
    inline int64_t trainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
    inline ApplyAddRequestExternalTravelerStandard& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


    // trainSeats Field Functions 
    bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
    void deleteTrainSeats() { this->trainSeats_ = nullptr;};
    inline string trainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
    inline ApplyAddRequestExternalTravelerStandard& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


  protected:
    std::shared_ptr<int32_t> businessDiscount_ = nullptr;
    std::shared_ptr<int32_t> economyDiscount_ = nullptr;
    std::shared_ptr<int32_t> firstDiscount_ = nullptr;
    std::shared_ptr<string> flightCabins_ = nullptr;
    std::shared_ptr<int64_t> flightIntlRuleCode_ = nullptr;
    std::shared_ptr<int64_t> flightRuleCode_ = nullptr;
    std::shared_ptr<vector<Models::ApplyAddRequestExternalTravelerStandardHotelCitys>> hotelCitys_ = nullptr;
    std::shared_ptr<vector<Models::ApplyAddRequestExternalTravelerStandardHotelIntlCitys>> hotelIntlCitys_ = nullptr;
    std::shared_ptr<int64_t> hotelIntlRuleCode_ = nullptr;
    std::shared_ptr<int64_t> hotelRuleCode_ = nullptr;
    std::shared_ptr<string> internationalFlightCabins_ = nullptr;
    std::shared_ptr<int32_t> premiumEconomyDiscount_ = nullptr;
    std::shared_ptr<int32_t> reserveType_ = nullptr;
    std::shared_ptr<int64_t> trainRuleCode_ = nullptr;
    std::shared_ptr<string> trainSeats_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
