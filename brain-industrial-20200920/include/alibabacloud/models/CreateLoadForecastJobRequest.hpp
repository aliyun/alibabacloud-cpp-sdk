// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADFORECASTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADFORECASTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateLoadForecastJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadForecastJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(DataMode, dataMode_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ForecastHorizon, forecastHorizon_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(HistoryData, historyData_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(RunDate, runDate_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadForecastJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(DataMode, dataMode_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ForecastHorizon, forecastHorizon_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(HistoryData, historyData_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(RunDate, runDate_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    CreateLoadForecastJobRequest() = default ;
    CreateLoadForecastJobRequest(const CreateLoadForecastJobRequest &) = default ;
    CreateLoadForecastJobRequest(CreateLoadForecastJobRequest &&) = default ;
    CreateLoadForecastJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadForecastJobRequest() = default ;
    CreateLoadForecastJobRequest& operator=(const CreateLoadForecastJobRequest &) = default ;
    CreateLoadForecastJobRequest& operator=(CreateLoadForecastJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoryData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoryData& obj) { 
        DARABONBA_PTR_TO_JSON(RunTime, runTime_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, HistoryData& obj) { 
        DARABONBA_PTR_FROM_JSON(RunTime, runTime_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      HistoryData() = default ;
      HistoryData(const HistoryData &) = default ;
      HistoryData(HistoryData &&) = default ;
      HistoryData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoryData() = default ;
      HistoryData& operator=(const HistoryData &) = default ;
      HistoryData& operator=(HistoryData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->runTime_ == nullptr
        && this->value_ == nullptr; };
      // runTime Field Functions 
      bool hasRunTime() const { return this->runTime_ != nullptr;};
      void deleteRunTime() { this->runTime_ = nullptr;};
      inline string getRunTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, "") };
      inline HistoryData& setRunTime(string runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline HistoryData& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> runTime_ {};
      shared_ptr<double> value_ {};
    };

    virtual bool empty() const override { return this->businessKey_ == nullptr
        && this->dataMode_ == nullptr && this->deviceType_ == nullptr && this->duration_ == nullptr && this->forecastHorizon_ == nullptr && this->freq_ == nullptr
        && this->historyData_ == nullptr && this->modelVersion_ == nullptr && this->runDate_ == nullptr && this->systemType_ == nullptr && this->timeZone_ == nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string getBusinessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreateLoadForecastJobRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // dataMode Field Functions 
    bool hasDataMode() const { return this->dataMode_ != nullptr;};
    void deleteDataMode() { this->dataMode_ = nullptr;};
    inline string getDataMode() const { DARABONBA_PTR_GET_DEFAULT(dataMode_, "") };
    inline CreateLoadForecastJobRequest& setDataMode(string dataMode) { DARABONBA_PTR_SET_VALUE(dataMode_, dataMode) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline CreateLoadForecastJobRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateLoadForecastJobRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // forecastHorizon Field Functions 
    bool hasForecastHorizon() const { return this->forecastHorizon_ != nullptr;};
    void deleteForecastHorizon() { this->forecastHorizon_ = nullptr;};
    inline string getForecastHorizon() const { DARABONBA_PTR_GET_DEFAULT(forecastHorizon_, "") };
    inline CreateLoadForecastJobRequest& setForecastHorizon(string forecastHorizon) { DARABONBA_PTR_SET_VALUE(forecastHorizon_, forecastHorizon) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string getFreq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreateLoadForecastJobRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // historyData Field Functions 
    bool hasHistoryData() const { return this->historyData_ != nullptr;};
    void deleteHistoryData() { this->historyData_ = nullptr;};
    inline const vector<CreateLoadForecastJobRequest::HistoryData> & getHistoryData() const { DARABONBA_PTR_GET_CONST(historyData_, vector<CreateLoadForecastJobRequest::HistoryData>) };
    inline vector<CreateLoadForecastJobRequest::HistoryData> getHistoryData() { DARABONBA_PTR_GET(historyData_, vector<CreateLoadForecastJobRequest::HistoryData>) };
    inline CreateLoadForecastJobRequest& setHistoryData(const vector<CreateLoadForecastJobRequest::HistoryData> & historyData) { DARABONBA_PTR_SET_VALUE(historyData_, historyData) };
    inline CreateLoadForecastJobRequest& setHistoryData(vector<CreateLoadForecastJobRequest::HistoryData> && historyData) { DARABONBA_PTR_SET_RVALUE(historyData_, historyData) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreateLoadForecastJobRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string getRunDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreateLoadForecastJobRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline CreateLoadForecastJobRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateLoadForecastJobRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<string> businessKey_ {};
    shared_ptr<string> dataMode_ {};
    shared_ptr<string> deviceType_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> forecastHorizon_ {};
    shared_ptr<string> freq_ {};
    shared_ptr<vector<CreateLoadForecastJobRequest::HistoryData>> historyData_ {};
    shared_ptr<string> modelVersion_ {};
    shared_ptr<string> runDate_ {};
    shared_ptr<string> systemType_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
