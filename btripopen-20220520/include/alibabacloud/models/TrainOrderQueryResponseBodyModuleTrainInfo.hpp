// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULETRAININFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULETRAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryResponseBodyModuleTrainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryResponseBodyModuleTrainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_TO_JSON(run_time, runTime_);
      DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryResponseBodyModuleTrainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_FROM_JSON(run_time, runTime_);
      DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainOrderQueryResponseBodyModuleTrainInfo() = default ;
    TrainOrderQueryResponseBodyModuleTrainInfo(const TrainOrderQueryResponseBodyModuleTrainInfo &) = default ;
    TrainOrderQueryResponseBodyModuleTrainInfo(TrainOrderQueryResponseBodyModuleTrainInfo &&) = default ;
    TrainOrderQueryResponseBodyModuleTrainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryResponseBodyModuleTrainInfo() = default ;
    TrainOrderQueryResponseBodyModuleTrainInfo& operator=(const TrainOrderQueryResponseBodyModuleTrainInfo &) = default ;
    TrainOrderQueryResponseBodyModuleTrainInfo& operator=(TrainOrderQueryResponseBodyModuleTrainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrTime_ != nullptr
        && this->depTime_ != nullptr && this->fromCityAdCode_ != nullptr && this->fromStationName_ != nullptr && this->runTime_ != nullptr && this->toCityAdCode_ != nullptr
        && this->toStationName_ != nullptr && this->trainNo_ != nullptr; };
    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // fromCityAdCode Field Functions 
    bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
    void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
    inline string fromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


    // fromStationName Field Functions 
    bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
    void deleteFromStationName() { this->fromStationName_ = nullptr;};
    inline string fromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


    // runTime Field Functions 
    bool hasRunTime() const { return this->runTime_ != nullptr;};
    void deleteRunTime() { this->runTime_ = nullptr;};
    inline int64_t runTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, 0L) };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setRunTime(int64_t runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


    // toCityAdCode Field Functions 
    bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
    void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
    inline string toCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


    // toStationName Field Functions 
    bool hasToStationName() const { return this->toStationName_ != nullptr;};
    void deleteToStationName() { this->toStationName_ = nullptr;};
    inline string toStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderQueryResponseBodyModuleTrainInfo& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> fromCityAdCode_ = nullptr;
    std::shared_ptr<string> fromStationName_ = nullptr;
    std::shared_ptr<int64_t> runTime_ = nullptr;
    std::shared_ptr<string> toCityAdCode_ = nullptr;
    std::shared_ptr<string> toStationName_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
