// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUESTTIMEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUESTTIMEDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeJobRequestTimedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeJobRequestTimedConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeJobRequestTimedConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    UpdateLiveTranscodeJobRequestTimedConfig() = default ;
    UpdateLiveTranscodeJobRequestTimedConfig(const UpdateLiveTranscodeJobRequestTimedConfig &) = default ;
    UpdateLiveTranscodeJobRequestTimedConfig(UpdateLiveTranscodeJobRequestTimedConfig &&) = default ;
    UpdateLiveTranscodeJobRequestTimedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeJobRequestTimedConfig() = default ;
    UpdateLiveTranscodeJobRequestTimedConfig& operator=(const UpdateLiveTranscodeJobRequestTimedConfig &) = default ;
    UpdateLiveTranscodeJobRequestTimedConfig& operator=(UpdateLiveTranscodeJobRequestTimedConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateLiveTranscodeJobRequestTimedConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateLiveTranscodeJobRequestTimedConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The stop time of the transcoding job. Note: The time span between the stop time and the current time cannot exceed seven days.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the transcoding job. Note: The time span between the start time and the current time cannot exceed seven days.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
