// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADFORECASTBYFILEURLJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADFORECASTBYFILEURLJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateLoadForecastByFileUrlJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadForecastByFileUrlJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(HistoryUrl, historyUrl_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(RunDate, runDate_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(TimeColumn, timeColumn_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(ValueColumn, valueColumn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadForecastByFileUrlJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(HistoryUrl, historyUrl_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(RunDate, runDate_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(TimeColumn, timeColumn_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(ValueColumn, valueColumn_);
    };
    CreateLoadForecastByFileUrlJobRequest() = default ;
    CreateLoadForecastByFileUrlJobRequest(const CreateLoadForecastByFileUrlJobRequest &) = default ;
    CreateLoadForecastByFileUrlJobRequest(CreateLoadForecastByFileUrlJobRequest &&) = default ;
    CreateLoadForecastByFileUrlJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadForecastByFileUrlJobRequest() = default ;
    CreateLoadForecastByFileUrlJobRequest& operator=(const CreateLoadForecastByFileUrlJobRequest &) = default ;
    CreateLoadForecastByFileUrlJobRequest& operator=(CreateLoadForecastByFileUrlJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessKey_ != nullptr
        && this->deviceType_ != nullptr && this->duration_ != nullptr && this->freq_ != nullptr && this->historyUrl_ != nullptr && this->modelVersion_ != nullptr
        && this->runDate_ != nullptr && this->systemType_ != nullptr && this->timeColumn_ != nullptr && this->timeZone_ != nullptr && this->valueColumn_ != nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string businessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateLoadForecastByFileUrlJobRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string freq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // historyUrl Field Functions 
    bool hasHistoryUrl() const { return this->historyUrl_ != nullptr;};
    void deleteHistoryUrl() { this->historyUrl_ = nullptr;};
    inline string historyUrl() const { DARABONBA_PTR_GET_DEFAULT(historyUrl_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setHistoryUrl(string historyUrl) { DARABONBA_PTR_SET_VALUE(historyUrl_, historyUrl) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string modelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string runDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // timeColumn Field Functions 
    bool hasTimeColumn() const { return this->timeColumn_ != nullptr;};
    void deleteTimeColumn() { this->timeColumn_ = nullptr;};
    inline string timeColumn() const { DARABONBA_PTR_GET_DEFAULT(timeColumn_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setTimeColumn(string timeColumn) { DARABONBA_PTR_SET_VALUE(timeColumn_, timeColumn) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // valueColumn Field Functions 
    bool hasValueColumn() const { return this->valueColumn_ != nullptr;};
    void deleteValueColumn() { this->valueColumn_ = nullptr;};
    inline string valueColumn() const { DARABONBA_PTR_GET_DEFAULT(valueColumn_, "") };
    inline CreateLoadForecastByFileUrlJobRequest& setValueColumn(string valueColumn) { DARABONBA_PTR_SET_VALUE(valueColumn_, valueColumn) };


  protected:
    std::shared_ptr<string> businessKey_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> freq_ = nullptr;
    std::shared_ptr<string> historyUrl_ = nullptr;
    std::shared_ptr<string> modelVersion_ = nullptr;
    std::shared_ptr<string> runDate_ = nullptr;
    std::shared_ptr<string> systemType_ = nullptr;
    std::shared_ptr<string> timeColumn_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
    std::shared_ptr<string> valueColumn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
