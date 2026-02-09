// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOWERFORECASTBYFILEURLJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOWERFORECASTBYFILEURLJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreatePowerForecastByFileUrlJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePowerForecastByFileUrlJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(DataMode, dataMode_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ForecastHorizon, forecastHorizon_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(HistoryUrl, historyUrl_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(RunDate, runDate_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(TimeColumn, timeColumn_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(ValueColumn, valueColumn_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePowerForecastByFileUrlJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(DataMode, dataMode_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ForecastHorizon, forecastHorizon_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(HistoryUrl, historyUrl_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(RunDate, runDate_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(TimeColumn, timeColumn_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(ValueColumn, valueColumn_);
    };
    CreatePowerForecastByFileUrlJobRequest() = default ;
    CreatePowerForecastByFileUrlJobRequest(const CreatePowerForecastByFileUrlJobRequest &) = default ;
    CreatePowerForecastByFileUrlJobRequest(CreatePowerForecastByFileUrlJobRequest &&) = default ;
    CreatePowerForecastByFileUrlJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePowerForecastByFileUrlJobRequest() = default ;
    CreatePowerForecastByFileUrlJobRequest& operator=(const CreatePowerForecastByFileUrlJobRequest &) = default ;
    CreatePowerForecastByFileUrlJobRequest& operator=(CreatePowerForecastByFileUrlJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Location : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Location& obj) { 
        DARABONBA_PTR_TO_JSON(Altitude, altitude_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      };
      friend void from_json(const Darabonba::Json& j, Location& obj) { 
        DARABONBA_PTR_FROM_JSON(Altitude, altitude_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      };
      Location() = default ;
      Location(const Location &) = default ;
      Location(Location &&) = default ;
      Location(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Location() = default ;
      Location& operator=(const Location &) = default ;
      Location& operator=(Location &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->altitude_ == nullptr
        && this->latitude_ == nullptr && this->longitude_ == nullptr; };
      // altitude Field Functions 
      bool hasAltitude() const { return this->altitude_ != nullptr;};
      void deleteAltitude() { this->altitude_ = nullptr;};
      inline double getAltitude() const { DARABONBA_PTR_GET_DEFAULT(altitude_, 0.0) };
      inline Location& setAltitude(double altitude) { DARABONBA_PTR_SET_VALUE(altitude_, altitude) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline double getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, 0.0) };
      inline Location& setLatitude(double latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline double getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, 0.0) };
      inline Location& setLongitude(double longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    protected:
      shared_ptr<double> altitude_ {};
      shared_ptr<double> latitude_ {};
      shared_ptr<double> longitude_ {};
    };

    virtual bool empty() const override { return this->businessKey_ == nullptr
        && this->dataMode_ == nullptr && this->deviceType_ == nullptr && this->duration_ == nullptr && this->forecastHorizon_ == nullptr && this->freq_ == nullptr
        && this->historyUrl_ == nullptr && this->location_ == nullptr && this->modelVersion_ == nullptr && this->runDate_ == nullptr && this->systemType_ == nullptr
        && this->timeColumn_ == nullptr && this->timeZone_ == nullptr && this->valueColumn_ == nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string getBusinessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // dataMode Field Functions 
    bool hasDataMode() const { return this->dataMode_ != nullptr;};
    void deleteDataMode() { this->dataMode_ = nullptr;};
    inline string getDataMode() const { DARABONBA_PTR_GET_DEFAULT(dataMode_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setDataMode(string dataMode) { DARABONBA_PTR_SET_VALUE(dataMode_, dataMode) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePowerForecastByFileUrlJobRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // forecastHorizon Field Functions 
    bool hasForecastHorizon() const { return this->forecastHorizon_ != nullptr;};
    void deleteForecastHorizon() { this->forecastHorizon_ = nullptr;};
    inline string getForecastHorizon() const { DARABONBA_PTR_GET_DEFAULT(forecastHorizon_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setForecastHorizon(string forecastHorizon) { DARABONBA_PTR_SET_VALUE(forecastHorizon_, forecastHorizon) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string getFreq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // historyUrl Field Functions 
    bool hasHistoryUrl() const { return this->historyUrl_ != nullptr;};
    void deleteHistoryUrl() { this->historyUrl_ = nullptr;};
    inline string getHistoryUrl() const { DARABONBA_PTR_GET_DEFAULT(historyUrl_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setHistoryUrl(string historyUrl) { DARABONBA_PTR_SET_VALUE(historyUrl_, historyUrl) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const CreatePowerForecastByFileUrlJobRequest::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, CreatePowerForecastByFileUrlJobRequest::Location) };
    inline CreatePowerForecastByFileUrlJobRequest::Location getLocation() { DARABONBA_PTR_GET(location_, CreatePowerForecastByFileUrlJobRequest::Location) };
    inline CreatePowerForecastByFileUrlJobRequest& setLocation(const CreatePowerForecastByFileUrlJobRequest::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline CreatePowerForecastByFileUrlJobRequest& setLocation(CreatePowerForecastByFileUrlJobRequest::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string getRunDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // timeColumn Field Functions 
    bool hasTimeColumn() const { return this->timeColumn_ != nullptr;};
    void deleteTimeColumn() { this->timeColumn_ = nullptr;};
    inline string getTimeColumn() const { DARABONBA_PTR_GET_DEFAULT(timeColumn_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setTimeColumn(string timeColumn) { DARABONBA_PTR_SET_VALUE(timeColumn_, timeColumn) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // valueColumn Field Functions 
    bool hasValueColumn() const { return this->valueColumn_ != nullptr;};
    void deleteValueColumn() { this->valueColumn_ = nullptr;};
    inline string getValueColumn() const { DARABONBA_PTR_GET_DEFAULT(valueColumn_, "") };
    inline CreatePowerForecastByFileUrlJobRequest& setValueColumn(string valueColumn) { DARABONBA_PTR_SET_VALUE(valueColumn_, valueColumn) };


  protected:
    shared_ptr<string> businessKey_ {};
    shared_ptr<string> dataMode_ {};
    shared_ptr<string> deviceType_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> forecastHorizon_ {};
    shared_ptr<string> freq_ {};
    shared_ptr<string> historyUrl_ {};
    shared_ptr<CreatePowerForecastByFileUrlJobRequest::Location> location_ {};
    shared_ptr<string> modelVersion_ {};
    shared_ptr<string> runDate_ {};
    shared_ptr<string> systemType_ {};
    shared_ptr<string> timeColumn_ {};
    shared_ptr<string> timeZone_ {};
    shared_ptr<string> valueColumn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
