// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULETRAINORDERINFOTRAINTRANSFERINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULETRAINORDERINFOTRAINTRANSFERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cost_time, costTime_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_TO_JSON(middle_city, middleCity_);
      DARABONBA_PTR_TO_JSON(middle_city_ad_code, middleCityAdCode_);
      DARABONBA_PTR_TO_JSON(middle_date, middleDate_);
      DARABONBA_PTR_TO_JSON(middle_station, middleStation_);
      DARABONBA_PTR_TO_JSON(middle_type, middleType_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(sub_from_city_ad_code, subFromCityAdCode_);
      DARABONBA_PTR_TO_JSON(sub_from_city_ad_name, subFromCityAdName_);
      DARABONBA_PTR_TO_JSON(sub_middle_city_code, subMiddleCityCode_);
      DARABONBA_PTR_TO_JSON(sub_middle_city_name, subMiddleCityName_);
      DARABONBA_PTR_TO_JSON(sub_to_city_code, subToCityCode_);
      DARABONBA_PTR_TO_JSON(sub_to_city_name, subToCityName_);
      DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_TO_JSON(wait_time, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_time, costTime_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_FROM_JSON(middle_city, middleCity_);
      DARABONBA_PTR_FROM_JSON(middle_city_ad_code, middleCityAdCode_);
      DARABONBA_PTR_FROM_JSON(middle_date, middleDate_);
      DARABONBA_PTR_FROM_JSON(middle_station, middleStation_);
      DARABONBA_PTR_FROM_JSON(middle_type, middleType_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(sub_from_city_ad_code, subFromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(sub_from_city_ad_name, subFromCityAdName_);
      DARABONBA_PTR_FROM_JSON(sub_middle_city_code, subMiddleCityCode_);
      DARABONBA_PTR_FROM_JSON(sub_middle_city_name, subMiddleCityName_);
      DARABONBA_PTR_FROM_JSON(sub_to_city_code, subToCityCode_);
      DARABONBA_PTR_FROM_JSON(sub_to_city_name, subToCityName_);
      DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_FROM_JSON(wait_time, waitTime_);
    };
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo() = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo(const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo &) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo(TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo &&) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo() = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& operator=(const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo &) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& operator=(TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costTime_ != nullptr
        && this->endTime_ != nullptr && this->fromCityAdCode_ != nullptr && this->fromCityName_ != nullptr && this->fromStationName_ != nullptr && this->middleCity_ != nullptr
        && this->middleCityAdCode_ != nullptr && this->middleDate_ != nullptr && this->middleStation_ != nullptr && this->middleType_ != nullptr && this->startTime_ != nullptr
        && this->subFromCityAdCode_ != nullptr && this->subFromCityAdName_ != nullptr && this->subMiddleCityCode_ != nullptr && this->subMiddleCityName_ != nullptr && this->subToCityCode_ != nullptr
        && this->subToCityName_ != nullptr && this->toCityAdCode_ != nullptr && this->toCityName_ != nullptr && this->toStationName_ != nullptr && this->waitTime_ != nullptr; };
    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline string costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fromCityAdCode Field Functions 
    bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
    void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
    inline string fromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


    // fromCityName Field Functions 
    bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
    void deleteFromCityName() { this->fromCityName_ = nullptr;};
    inline string fromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


    // fromStationName Field Functions 
    bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
    void deleteFromStationName() { this->fromStationName_ = nullptr;};
    inline string fromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


    // middleCity Field Functions 
    bool hasMiddleCity() const { return this->middleCity_ != nullptr;};
    void deleteMiddleCity() { this->middleCity_ = nullptr;};
    inline string middleCity() const { DARABONBA_PTR_GET_DEFAULT(middleCity_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setMiddleCity(string middleCity) { DARABONBA_PTR_SET_VALUE(middleCity_, middleCity) };


    // middleCityAdCode Field Functions 
    bool hasMiddleCityAdCode() const { return this->middleCityAdCode_ != nullptr;};
    void deleteMiddleCityAdCode() { this->middleCityAdCode_ = nullptr;};
    inline string middleCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(middleCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setMiddleCityAdCode(string middleCityAdCode) { DARABONBA_PTR_SET_VALUE(middleCityAdCode_, middleCityAdCode) };


    // middleDate Field Functions 
    bool hasMiddleDate() const { return this->middleDate_ != nullptr;};
    void deleteMiddleDate() { this->middleDate_ = nullptr;};
    inline string middleDate() const { DARABONBA_PTR_GET_DEFAULT(middleDate_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setMiddleDate(string middleDate) { DARABONBA_PTR_SET_VALUE(middleDate_, middleDate) };


    // middleStation Field Functions 
    bool hasMiddleStation() const { return this->middleStation_ != nullptr;};
    void deleteMiddleStation() { this->middleStation_ = nullptr;};
    inline string middleStation() const { DARABONBA_PTR_GET_DEFAULT(middleStation_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setMiddleStation(string middleStation) { DARABONBA_PTR_SET_VALUE(middleStation_, middleStation) };


    // middleType Field Functions 
    bool hasMiddleType() const { return this->middleType_ != nullptr;};
    void deleteMiddleType() { this->middleType_ = nullptr;};
    inline string middleType() const { DARABONBA_PTR_GET_DEFAULT(middleType_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setMiddleType(string middleType) { DARABONBA_PTR_SET_VALUE(middleType_, middleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subFromCityAdCode Field Functions 
    bool hasSubFromCityAdCode() const { return this->subFromCityAdCode_ != nullptr;};
    void deleteSubFromCityAdCode() { this->subFromCityAdCode_ = nullptr;};
    inline string subFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setSubFromCityAdCode(string subFromCityAdCode) { DARABONBA_PTR_SET_VALUE(subFromCityAdCode_, subFromCityAdCode) };


    // subFromCityAdName Field Functions 
    bool hasSubFromCityAdName() const { return this->subFromCityAdName_ != nullptr;};
    void deleteSubFromCityAdName() { this->subFromCityAdName_ = nullptr;};
    inline string subFromCityAdName() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setSubFromCityAdName(string subFromCityAdName) { DARABONBA_PTR_SET_VALUE(subFromCityAdName_, subFromCityAdName) };


    // subMiddleCityCode Field Functions 
    bool hasSubMiddleCityCode() const { return this->subMiddleCityCode_ != nullptr;};
    void deleteSubMiddleCityCode() { this->subMiddleCityCode_ = nullptr;};
    inline string subMiddleCityCode() const { DARABONBA_PTR_GET_DEFAULT(subMiddleCityCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setSubMiddleCityCode(string subMiddleCityCode) { DARABONBA_PTR_SET_VALUE(subMiddleCityCode_, subMiddleCityCode) };


    // subMiddleCityName Field Functions 
    bool hasSubMiddleCityName() const { return this->subMiddleCityName_ != nullptr;};
    void deleteSubMiddleCityName() { this->subMiddleCityName_ = nullptr;};
    inline string subMiddleCityName() const { DARABONBA_PTR_GET_DEFAULT(subMiddleCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setSubMiddleCityName(string subMiddleCityName) { DARABONBA_PTR_SET_VALUE(subMiddleCityName_, subMiddleCityName) };


    // subToCityCode Field Functions 
    bool hasSubToCityCode() const { return this->subToCityCode_ != nullptr;};
    void deleteSubToCityCode() { this->subToCityCode_ = nullptr;};
    inline string subToCityCode() const { DARABONBA_PTR_GET_DEFAULT(subToCityCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setSubToCityCode(string subToCityCode) { DARABONBA_PTR_SET_VALUE(subToCityCode_, subToCityCode) };


    // subToCityName Field Functions 
    bool hasSubToCityName() const { return this->subToCityName_ != nullptr;};
    void deleteSubToCityName() { this->subToCityName_ = nullptr;};
    inline string subToCityName() const { DARABONBA_PTR_GET_DEFAULT(subToCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setSubToCityName(string subToCityName) { DARABONBA_PTR_SET_VALUE(subToCityName_, subToCityName) };


    // toCityAdCode Field Functions 
    bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
    void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
    inline string toCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


    // toCityName Field Functions 
    bool hasToCityName() const { return this->toCityName_ != nullptr;};
    void deleteToCityName() { this->toCityName_ = nullptr;};
    inline string toCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


    // toStationName Field Functions 
    bool hasToStationName() const { return this->toStationName_ != nullptr;};
    void deleteToStationName() { this->toStationName_ = nullptr;};
    inline string toStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline string waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo& setWaitTime(string waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<string> costTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> fromCityAdCode_ = nullptr;
    std::shared_ptr<string> fromCityName_ = nullptr;
    std::shared_ptr<string> fromStationName_ = nullptr;
    std::shared_ptr<string> middleCity_ = nullptr;
    std::shared_ptr<string> middleCityAdCode_ = nullptr;
    std::shared_ptr<string> middleDate_ = nullptr;
    std::shared_ptr<string> middleStation_ = nullptr;
    std::shared_ptr<string> middleType_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> subFromCityAdCode_ = nullptr;
    std::shared_ptr<string> subFromCityAdName_ = nullptr;
    std::shared_ptr<string> subMiddleCityCode_ = nullptr;
    std::shared_ptr<string> subMiddleCityName_ = nullptr;
    std::shared_ptr<string> subToCityCode_ = nullptr;
    std::shared_ptr<string> subToCityName_ = nullptr;
    std::shared_ptr<string> toCityAdCode_ = nullptr;
    std::shared_ptr<string> toCityName_ = nullptr;
    std::shared_ptr<string> toStationName_ = nullptr;
    std::shared_ptr<string> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
