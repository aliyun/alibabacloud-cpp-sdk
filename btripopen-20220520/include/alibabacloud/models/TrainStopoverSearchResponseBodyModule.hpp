// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINSTOPOVERSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINSTOPOVERSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainStopoverSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainStopoverSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(station_name, stationName_);
      DARABONBA_PTR_TO_JSON(station_no, stationNo_);
      DARABONBA_PTR_TO_JSON(station_type, stationType_);
      DARABONBA_PTR_TO_JSON(stop_over_time, stopOverTime_);
    };
    friend void from_json(const Darabonba::Json& j, TrainStopoverSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(station_name, stationName_);
      DARABONBA_PTR_FROM_JSON(station_no, stationNo_);
      DARABONBA_PTR_FROM_JSON(station_type, stationType_);
      DARABONBA_PTR_FROM_JSON(stop_over_time, stopOverTime_);
    };
    TrainStopoverSearchResponseBodyModule() = default ;
    TrainStopoverSearchResponseBodyModule(const TrainStopoverSearchResponseBodyModule &) = default ;
    TrainStopoverSearchResponseBodyModule(TrainStopoverSearchResponseBodyModule &&) = default ;
    TrainStopoverSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainStopoverSearchResponseBodyModule() = default ;
    TrainStopoverSearchResponseBodyModule& operator=(const TrainStopoverSearchResponseBodyModule &) = default ;
    TrainStopoverSearchResponseBodyModule& operator=(TrainStopoverSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrTime_ != nullptr
        && this->depTime_ != nullptr && this->stationName_ != nullptr && this->stationNo_ != nullptr && this->stationType_ != nullptr && this->stopOverTime_ != nullptr; };
    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainStopoverSearchResponseBodyModule& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainStopoverSearchResponseBodyModule& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // stationName Field Functions 
    bool hasStationName() const { return this->stationName_ != nullptr;};
    void deleteStationName() { this->stationName_ = nullptr;};
    inline string stationName() const { DARABONBA_PTR_GET_DEFAULT(stationName_, "") };
    inline TrainStopoverSearchResponseBodyModule& setStationName(string stationName) { DARABONBA_PTR_SET_VALUE(stationName_, stationName) };


    // stationNo Field Functions 
    bool hasStationNo() const { return this->stationNo_ != nullptr;};
    void deleteStationNo() { this->stationNo_ = nullptr;};
    inline string stationNo() const { DARABONBA_PTR_GET_DEFAULT(stationNo_, "") };
    inline TrainStopoverSearchResponseBodyModule& setStationNo(string stationNo) { DARABONBA_PTR_SET_VALUE(stationNo_, stationNo) };


    // stationType Field Functions 
    bool hasStationType() const { return this->stationType_ != nullptr;};
    void deleteStationType() { this->stationType_ = nullptr;};
    inline string stationType() const { DARABONBA_PTR_GET_DEFAULT(stationType_, "") };
    inline TrainStopoverSearchResponseBodyModule& setStationType(string stationType) { DARABONBA_PTR_SET_VALUE(stationType_, stationType) };


    // stopOverTime Field Functions 
    bool hasStopOverTime() const { return this->stopOverTime_ != nullptr;};
    void deleteStopOverTime() { this->stopOverTime_ = nullptr;};
    inline string stopOverTime() const { DARABONBA_PTR_GET_DEFAULT(stopOverTime_, "") };
    inline TrainStopoverSearchResponseBodyModule& setStopOverTime(string stopOverTime) { DARABONBA_PTR_SET_VALUE(stopOverTime_, stopOverTime) };


  protected:
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> stationName_ = nullptr;
    std::shared_ptr<string> stationNo_ = nullptr;
    std::shared_ptr<string> stationType_ = nullptr;
    std::shared_ptr<string> stopOverTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
