// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOWERFORECASTJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOWERFORECASTJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreatePowerForecastJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePowerForecastJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(DataMode, dataMode_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ForecastHorizon, forecastHorizon_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(HistoryData, historyDataShrink_);
      DARABONBA_PTR_TO_JSON(Location, locationShrink_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(RunDate, runDate_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePowerForecastJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(DataMode, dataMode_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ForecastHorizon, forecastHorizon_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(HistoryData, historyDataShrink_);
      DARABONBA_PTR_FROM_JSON(Location, locationShrink_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(RunDate, runDate_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    CreatePowerForecastJobShrinkRequest() = default ;
    CreatePowerForecastJobShrinkRequest(const CreatePowerForecastJobShrinkRequest &) = default ;
    CreatePowerForecastJobShrinkRequest(CreatePowerForecastJobShrinkRequest &&) = default ;
    CreatePowerForecastJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePowerForecastJobShrinkRequest() = default ;
    CreatePowerForecastJobShrinkRequest& operator=(const CreatePowerForecastJobShrinkRequest &) = default ;
    CreatePowerForecastJobShrinkRequest& operator=(CreatePowerForecastJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessKey_ == nullptr
        && this->dataMode_ == nullptr && this->deviceType_ == nullptr && this->duration_ == nullptr && this->forecastHorizon_ == nullptr && this->freq_ == nullptr
        && this->historyDataShrink_ == nullptr && this->locationShrink_ == nullptr && this->modelVersion_ == nullptr && this->runDate_ == nullptr && this->systemType_ == nullptr
        && this->timeZone_ == nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string getBusinessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreatePowerForecastJobShrinkRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // dataMode Field Functions 
    bool hasDataMode() const { return this->dataMode_ != nullptr;};
    void deleteDataMode() { this->dataMode_ = nullptr;};
    inline string getDataMode() const { DARABONBA_PTR_GET_DEFAULT(dataMode_, "") };
    inline CreatePowerForecastJobShrinkRequest& setDataMode(string dataMode) { DARABONBA_PTR_SET_VALUE(dataMode_, dataMode) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline CreatePowerForecastJobShrinkRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePowerForecastJobShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // forecastHorizon Field Functions 
    bool hasForecastHorizon() const { return this->forecastHorizon_ != nullptr;};
    void deleteForecastHorizon() { this->forecastHorizon_ = nullptr;};
    inline string getForecastHorizon() const { DARABONBA_PTR_GET_DEFAULT(forecastHorizon_, "") };
    inline CreatePowerForecastJobShrinkRequest& setForecastHorizon(string forecastHorizon) { DARABONBA_PTR_SET_VALUE(forecastHorizon_, forecastHorizon) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string getFreq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreatePowerForecastJobShrinkRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // historyDataShrink Field Functions 
    bool hasHistoryDataShrink() const { return this->historyDataShrink_ != nullptr;};
    void deleteHistoryDataShrink() { this->historyDataShrink_ = nullptr;};
    inline string getHistoryDataShrink() const { DARABONBA_PTR_GET_DEFAULT(historyDataShrink_, "") };
    inline CreatePowerForecastJobShrinkRequest& setHistoryDataShrink(string historyDataShrink) { DARABONBA_PTR_SET_VALUE(historyDataShrink_, historyDataShrink) };


    // locationShrink Field Functions 
    bool hasLocationShrink() const { return this->locationShrink_ != nullptr;};
    void deleteLocationShrink() { this->locationShrink_ = nullptr;};
    inline string getLocationShrink() const { DARABONBA_PTR_GET_DEFAULT(locationShrink_, "") };
    inline CreatePowerForecastJobShrinkRequest& setLocationShrink(string locationShrink) { DARABONBA_PTR_SET_VALUE(locationShrink_, locationShrink) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreatePowerForecastJobShrinkRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string getRunDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreatePowerForecastJobShrinkRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline CreatePowerForecastJobShrinkRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreatePowerForecastJobShrinkRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<string> businessKey_ {};
    shared_ptr<string> dataMode_ {};
    shared_ptr<string> deviceType_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> forecastHorizon_ {};
    shared_ptr<string> freq_ {};
    shared_ptr<string> historyDataShrink_ {};
    shared_ptr<string> locationShrink_ {};
    shared_ptr<string> modelVersion_ {};
    shared_ptr<string> runDate_ {};
    shared_ptr<string> systemType_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
