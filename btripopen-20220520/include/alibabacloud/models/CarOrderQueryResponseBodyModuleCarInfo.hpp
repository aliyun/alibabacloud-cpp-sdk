// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULECARINFO_HPP_
#define ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULECARINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarOrderQueryResponseBodyModuleCarInfoWayPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderQueryResponseBodyModuleCarInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderQueryResponseBodyModuleCarInfo& obj) { 
      DARABONBA_PTR_TO_JSON(business_category, businessCategory_);
      DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
      DARABONBA_PTR_TO_JSON(car_info, carInfo_);
      DARABONBA_PTR_TO_JSON(car_level, carLevel_);
      DARABONBA_PTR_TO_JSON(driver_card, driverCard_);
      DARABONBA_PTR_TO_JSON(driver_confirm_time, driverConfirmTime_);
      DARABONBA_PTR_TO_JSON(driver_name, driverName_);
      DARABONBA_PTR_TO_JSON(estimate_price, estimatePrice_);
      DARABONBA_PTR_TO_JSON(from_address, fromAddress_);
      DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_TO_JSON(is_special, isSpecial_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(publish_time, publishTime_);
      DARABONBA_PTR_TO_JSON(real_from_address, realFromAddress_);
      DARABONBA_PTR_TO_JSON(real_from_city_ad_code, realFromCityAdCode_);
      DARABONBA_PTR_TO_JSON(real_from_city_name, realFromCityName_);
      DARABONBA_PTR_TO_JSON(real_to_address, realToAddress_);
      DARABONBA_PTR_TO_JSON(real_to_city_ad_code, realToCityAdCode_);
      DARABONBA_PTR_TO_JSON(real_to_city_name, realToCityName_);
      DARABONBA_PTR_TO_JSON(service_type, serviceType_);
      DARABONBA_PTR_TO_JSON(special_types, specialTypes_);
      DARABONBA_PTR_TO_JSON(taken_time, takenTime_);
      DARABONBA_PTR_TO_JSON(to_address, toAddress_);
      DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_TO_JSON(travel_distance, travelDistance_);
      DARABONBA_PTR_TO_JSON(way_points, wayPoints_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderQueryResponseBodyModuleCarInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(business_category, businessCategory_);
      DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
      DARABONBA_PTR_FROM_JSON(car_info, carInfo_);
      DARABONBA_PTR_FROM_JSON(car_level, carLevel_);
      DARABONBA_PTR_FROM_JSON(driver_card, driverCard_);
      DARABONBA_PTR_FROM_JSON(driver_confirm_time, driverConfirmTime_);
      DARABONBA_PTR_FROM_JSON(driver_name, driverName_);
      DARABONBA_PTR_FROM_JSON(estimate_price, estimatePrice_);
      DARABONBA_PTR_FROM_JSON(from_address, fromAddress_);
      DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_FROM_JSON(is_special, isSpecial_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(publish_time, publishTime_);
      DARABONBA_PTR_FROM_JSON(real_from_address, realFromAddress_);
      DARABONBA_PTR_FROM_JSON(real_from_city_ad_code, realFromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(real_from_city_name, realFromCityName_);
      DARABONBA_PTR_FROM_JSON(real_to_address, realToAddress_);
      DARABONBA_PTR_FROM_JSON(real_to_city_ad_code, realToCityAdCode_);
      DARABONBA_PTR_FROM_JSON(real_to_city_name, realToCityName_);
      DARABONBA_PTR_FROM_JSON(service_type, serviceType_);
      DARABONBA_PTR_FROM_JSON(special_types, specialTypes_);
      DARABONBA_PTR_FROM_JSON(taken_time, takenTime_);
      DARABONBA_PTR_FROM_JSON(to_address, toAddress_);
      DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_FROM_JSON(travel_distance, travelDistance_);
      DARABONBA_PTR_FROM_JSON(way_points, wayPoints_);
    };
    CarOrderQueryResponseBodyModuleCarInfo() = default ;
    CarOrderQueryResponseBodyModuleCarInfo(const CarOrderQueryResponseBodyModuleCarInfo &) = default ;
    CarOrderQueryResponseBodyModuleCarInfo(CarOrderQueryResponseBodyModuleCarInfo &&) = default ;
    CarOrderQueryResponseBodyModuleCarInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderQueryResponseBodyModuleCarInfo() = default ;
    CarOrderQueryResponseBodyModuleCarInfo& operator=(const CarOrderQueryResponseBodyModuleCarInfo &) = default ;
    CarOrderQueryResponseBodyModuleCarInfo& operator=(CarOrderQueryResponseBodyModuleCarInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessCategory_ != nullptr
        && this->cancelTime_ != nullptr && this->carInfo_ != nullptr && this->carLevel_ != nullptr && this->driverCard_ != nullptr && this->driverConfirmTime_ != nullptr
        && this->driverName_ != nullptr && this->estimatePrice_ != nullptr && this->fromAddress_ != nullptr && this->fromCityAdCode_ != nullptr && this->fromCityName_ != nullptr
        && this->isSpecial_ != nullptr && this->memo_ != nullptr && this->payTime_ != nullptr && this->publishTime_ != nullptr && this->realFromAddress_ != nullptr
        && this->realFromCityAdCode_ != nullptr && this->realFromCityName_ != nullptr && this->realToAddress_ != nullptr && this->realToCityAdCode_ != nullptr && this->realToCityName_ != nullptr
        && this->serviceType_ != nullptr && this->specialTypes_ != nullptr && this->takenTime_ != nullptr && this->toAddress_ != nullptr && this->toCityAdCode_ != nullptr
        && this->toCityName_ != nullptr && this->travelDistance_ != nullptr && this->wayPoints_ != nullptr; };
    // businessCategory Field Functions 
    bool hasBusinessCategory() const { return this->businessCategory_ != nullptr;};
    void deleteBusinessCategory() { this->businessCategory_ = nullptr;};
    inline string businessCategory() const { DARABONBA_PTR_GET_DEFAULT(businessCategory_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setBusinessCategory(string businessCategory) { DARABONBA_PTR_SET_VALUE(businessCategory_, businessCategory) };


    // cancelTime Field Functions 
    bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
    void deleteCancelTime() { this->cancelTime_ = nullptr;};
    inline int64_t cancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, 0L) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setCancelTime(int64_t cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


    // carInfo Field Functions 
    bool hasCarInfo() const { return this->carInfo_ != nullptr;};
    void deleteCarInfo() { this->carInfo_ = nullptr;};
    inline string carInfo() const { DARABONBA_PTR_GET_DEFAULT(carInfo_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setCarInfo(string carInfo) { DARABONBA_PTR_SET_VALUE(carInfo_, carInfo) };


    // carLevel Field Functions 
    bool hasCarLevel() const { return this->carLevel_ != nullptr;};
    void deleteCarLevel() { this->carLevel_ = nullptr;};
    inline int32_t carLevel() const { DARABONBA_PTR_GET_DEFAULT(carLevel_, 0) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setCarLevel(int32_t carLevel) { DARABONBA_PTR_SET_VALUE(carLevel_, carLevel) };


    // driverCard Field Functions 
    bool hasDriverCard() const { return this->driverCard_ != nullptr;};
    void deleteDriverCard() { this->driverCard_ = nullptr;};
    inline string driverCard() const { DARABONBA_PTR_GET_DEFAULT(driverCard_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setDriverCard(string driverCard) { DARABONBA_PTR_SET_VALUE(driverCard_, driverCard) };


    // driverConfirmTime Field Functions 
    bool hasDriverConfirmTime() const { return this->driverConfirmTime_ != nullptr;};
    void deleteDriverConfirmTime() { this->driverConfirmTime_ = nullptr;};
    inline int64_t driverConfirmTime() const { DARABONBA_PTR_GET_DEFAULT(driverConfirmTime_, 0L) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setDriverConfirmTime(int64_t driverConfirmTime) { DARABONBA_PTR_SET_VALUE(driverConfirmTime_, driverConfirmTime) };


    // driverName Field Functions 
    bool hasDriverName() const { return this->driverName_ != nullptr;};
    void deleteDriverName() { this->driverName_ = nullptr;};
    inline string driverName() const { DARABONBA_PTR_GET_DEFAULT(driverName_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setDriverName(string driverName) { DARABONBA_PTR_SET_VALUE(driverName_, driverName) };


    // estimatePrice Field Functions 
    bool hasEstimatePrice() const { return this->estimatePrice_ != nullptr;};
    void deleteEstimatePrice() { this->estimatePrice_ = nullptr;};
    inline int64_t estimatePrice() const { DARABONBA_PTR_GET_DEFAULT(estimatePrice_, 0L) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setEstimatePrice(int64_t estimatePrice) { DARABONBA_PTR_SET_VALUE(estimatePrice_, estimatePrice) };


    // fromAddress Field Functions 
    bool hasFromAddress() const { return this->fromAddress_ != nullptr;};
    void deleteFromAddress() { this->fromAddress_ = nullptr;};
    inline string fromAddress() const { DARABONBA_PTR_GET_DEFAULT(fromAddress_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setFromAddress(string fromAddress) { DARABONBA_PTR_SET_VALUE(fromAddress_, fromAddress) };


    // fromCityAdCode Field Functions 
    bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
    void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
    inline string fromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


    // fromCityName Field Functions 
    bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
    void deleteFromCityName() { this->fromCityName_ = nullptr;};
    inline string fromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


    // isSpecial Field Functions 
    bool hasIsSpecial() const { return this->isSpecial_ != nullptr;};
    void deleteIsSpecial() { this->isSpecial_ = nullptr;};
    inline bool isSpecial() const { DARABONBA_PTR_GET_DEFAULT(isSpecial_, false) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setIsSpecial(bool isSpecial) { DARABONBA_PTR_SET_VALUE(isSpecial_, isSpecial) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // realFromAddress Field Functions 
    bool hasRealFromAddress() const { return this->realFromAddress_ != nullptr;};
    void deleteRealFromAddress() { this->realFromAddress_ = nullptr;};
    inline string realFromAddress() const { DARABONBA_PTR_GET_DEFAULT(realFromAddress_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setRealFromAddress(string realFromAddress) { DARABONBA_PTR_SET_VALUE(realFromAddress_, realFromAddress) };


    // realFromCityAdCode Field Functions 
    bool hasRealFromCityAdCode() const { return this->realFromCityAdCode_ != nullptr;};
    void deleteRealFromCityAdCode() { this->realFromCityAdCode_ = nullptr;};
    inline string realFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realFromCityAdCode_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setRealFromCityAdCode(string realFromCityAdCode) { DARABONBA_PTR_SET_VALUE(realFromCityAdCode_, realFromCityAdCode) };


    // realFromCityName Field Functions 
    bool hasRealFromCityName() const { return this->realFromCityName_ != nullptr;};
    void deleteRealFromCityName() { this->realFromCityName_ = nullptr;};
    inline string realFromCityName() const { DARABONBA_PTR_GET_DEFAULT(realFromCityName_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setRealFromCityName(string realFromCityName) { DARABONBA_PTR_SET_VALUE(realFromCityName_, realFromCityName) };


    // realToAddress Field Functions 
    bool hasRealToAddress() const { return this->realToAddress_ != nullptr;};
    void deleteRealToAddress() { this->realToAddress_ = nullptr;};
    inline string realToAddress() const { DARABONBA_PTR_GET_DEFAULT(realToAddress_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setRealToAddress(string realToAddress) { DARABONBA_PTR_SET_VALUE(realToAddress_, realToAddress) };


    // realToCityAdCode Field Functions 
    bool hasRealToCityAdCode() const { return this->realToCityAdCode_ != nullptr;};
    void deleteRealToCityAdCode() { this->realToCityAdCode_ = nullptr;};
    inline string realToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realToCityAdCode_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setRealToCityAdCode(string realToCityAdCode) { DARABONBA_PTR_SET_VALUE(realToCityAdCode_, realToCityAdCode) };


    // realToCityName Field Functions 
    bool hasRealToCityName() const { return this->realToCityName_ != nullptr;};
    void deleteRealToCityName() { this->realToCityName_ = nullptr;};
    inline string realToCityName() const { DARABONBA_PTR_GET_DEFAULT(realToCityName_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setRealToCityName(string realToCityName) { DARABONBA_PTR_SET_VALUE(realToCityName_, realToCityName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline int32_t serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // specialTypes Field Functions 
    bool hasSpecialTypes() const { return this->specialTypes_ != nullptr;};
    void deleteSpecialTypes() { this->specialTypes_ = nullptr;};
    inline string specialTypes() const { DARABONBA_PTR_GET_DEFAULT(specialTypes_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setSpecialTypes(string specialTypes) { DARABONBA_PTR_SET_VALUE(specialTypes_, specialTypes) };


    // takenTime Field Functions 
    bool hasTakenTime() const { return this->takenTime_ != nullptr;};
    void deleteTakenTime() { this->takenTime_ = nullptr;};
    inline int64_t takenTime() const { DARABONBA_PTR_GET_DEFAULT(takenTime_, 0L) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setTakenTime(int64_t takenTime) { DARABONBA_PTR_SET_VALUE(takenTime_, takenTime) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string toAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


    // toCityAdCode Field Functions 
    bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
    void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
    inline string toCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


    // toCityName Field Functions 
    bool hasToCityName() const { return this->toCityName_ != nullptr;};
    void deleteToCityName() { this->toCityName_ = nullptr;};
    inline string toCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


    // travelDistance Field Functions 
    bool hasTravelDistance() const { return this->travelDistance_ != nullptr;};
    void deleteTravelDistance() { this->travelDistance_ = nullptr;};
    inline string travelDistance() const { DARABONBA_PTR_GET_DEFAULT(travelDistance_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfo& setTravelDistance(string travelDistance) { DARABONBA_PTR_SET_VALUE(travelDistance_, travelDistance) };


    // wayPoints Field Functions 
    bool hasWayPoints() const { return this->wayPoints_ != nullptr;};
    void deleteWayPoints() { this->wayPoints_ = nullptr;};
    inline const vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints> & wayPoints() const { DARABONBA_PTR_GET_CONST(wayPoints_, vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints>) };
    inline vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints> wayPoints() { DARABONBA_PTR_GET(wayPoints_, vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints>) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setWayPoints(const vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints> & wayPoints) { DARABONBA_PTR_SET_VALUE(wayPoints_, wayPoints) };
    inline CarOrderQueryResponseBodyModuleCarInfo& setWayPoints(vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints> && wayPoints) { DARABONBA_PTR_SET_RVALUE(wayPoints_, wayPoints) };


  protected:
    std::shared_ptr<string> businessCategory_ = nullptr;
    std::shared_ptr<int64_t> cancelTime_ = nullptr;
    std::shared_ptr<string> carInfo_ = nullptr;
    std::shared_ptr<int32_t> carLevel_ = nullptr;
    std::shared_ptr<string> driverCard_ = nullptr;
    std::shared_ptr<int64_t> driverConfirmTime_ = nullptr;
    std::shared_ptr<string> driverName_ = nullptr;
    std::shared_ptr<int64_t> estimatePrice_ = nullptr;
    std::shared_ptr<string> fromAddress_ = nullptr;
    std::shared_ptr<string> fromCityAdCode_ = nullptr;
    std::shared_ptr<string> fromCityName_ = nullptr;
    std::shared_ptr<bool> isSpecial_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<int64_t> payTime_ = nullptr;
    std::shared_ptr<int64_t> publishTime_ = nullptr;
    std::shared_ptr<string> realFromAddress_ = nullptr;
    std::shared_ptr<string> realFromCityAdCode_ = nullptr;
    std::shared_ptr<string> realFromCityName_ = nullptr;
    std::shared_ptr<string> realToAddress_ = nullptr;
    std::shared_ptr<string> realToCityAdCode_ = nullptr;
    std::shared_ptr<string> realToCityName_ = nullptr;
    std::shared_ptr<int32_t> serviceType_ = nullptr;
    std::shared_ptr<string> specialTypes_ = nullptr;
    std::shared_ptr<int64_t> takenTime_ = nullptr;
    std::shared_ptr<string> toAddress_ = nullptr;
    std::shared_ptr<string> toCityAdCode_ = nullptr;
    std::shared_ptr<string> toCityName_ = nullptr;
    std::shared_ptr<string> travelDistance_ = nullptr;
    std::shared_ptr<vector<Models::CarOrderQueryResponseBodyModuleCarInfoWayPoints>> wayPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
