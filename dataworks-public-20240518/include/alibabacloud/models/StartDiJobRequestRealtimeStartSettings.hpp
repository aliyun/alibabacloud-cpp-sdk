// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDIJOBREQUESTREALTIMESTARTSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_STARTDIJOBREQUESTREALTIMESTARTSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartDIJobRequestRealtimeStartSettingsFailoverSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StartDIJobRequestRealtimeStartSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDIJobRequestRealtimeStartSettings& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverSettings, failoverSettings_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, StartDIJobRequestRealtimeStartSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverSettings, failoverSettings_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    StartDIJobRequestRealtimeStartSettings() = default ;
    StartDIJobRequestRealtimeStartSettings(const StartDIJobRequestRealtimeStartSettings &) = default ;
    StartDIJobRequestRealtimeStartSettings(StartDIJobRequestRealtimeStartSettings &&) = default ;
    StartDIJobRequestRealtimeStartSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDIJobRequestRealtimeStartSettings() = default ;
    StartDIJobRequestRealtimeStartSettings& operator=(const StartDIJobRequestRealtimeStartSettings &) = default ;
    StartDIJobRequestRealtimeStartSettings& operator=(StartDIJobRequestRealtimeStartSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failoverSettings_ == nullptr
        && return this->startTime_ == nullptr; };
    // failoverSettings Field Functions 
    bool hasFailoverSettings() const { return this->failoverSettings_ != nullptr;};
    void deleteFailoverSettings() { this->failoverSettings_ = nullptr;};
    inline const Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings & failoverSettings() const { DARABONBA_PTR_GET_CONST(failoverSettings_, Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings) };
    inline Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings failoverSettings() { DARABONBA_PTR_GET(failoverSettings_, Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings) };
    inline StartDIJobRequestRealtimeStartSettings& setFailoverSettings(const Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings & failoverSettings) { DARABONBA_PTR_SET_VALUE(failoverSettings_, failoverSettings) };
    inline StartDIJobRequestRealtimeStartSettings& setFailoverSettings(Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings && failoverSettings) { DARABONBA_PTR_SET_RVALUE(failoverSettings_, failoverSettings) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline StartDIJobRequestRealtimeStartSettings& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is deprecated. Use advanced parameters for failover settings when you create a task.
    std::shared_ptr<Models::StartDIJobRequestRealtimeStartSettingsFailoverSettings> failoverSettings_ = nullptr;
    // The start time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
