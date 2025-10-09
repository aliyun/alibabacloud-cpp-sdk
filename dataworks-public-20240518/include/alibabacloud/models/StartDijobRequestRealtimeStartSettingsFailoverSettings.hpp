// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDIJOBREQUESTREALTIMESTARTSETTINGSFAILOVERSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_STARTDIJOBREQUESTREALTIMESTARTSETTINGSFAILOVERSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StartDIJobRequestRealtimeStartSettingsFailoverSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDIJobRequestRealtimeStartSettingsFailoverSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(UpperLimit, upperLimit_);
    };
    friend void from_json(const Darabonba::Json& j, StartDIJobRequestRealtimeStartSettingsFailoverSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(UpperLimit, upperLimit_);
    };
    StartDIJobRequestRealtimeStartSettingsFailoverSettings() = default ;
    StartDIJobRequestRealtimeStartSettingsFailoverSettings(const StartDIJobRequestRealtimeStartSettingsFailoverSettings &) = default ;
    StartDIJobRequestRealtimeStartSettingsFailoverSettings(StartDIJobRequestRealtimeStartSettingsFailoverSettings &&) = default ;
    StartDIJobRequestRealtimeStartSettingsFailoverSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDIJobRequestRealtimeStartSettingsFailoverSettings() = default ;
    StartDIJobRequestRealtimeStartSettingsFailoverSettings& operator=(const StartDIJobRequestRealtimeStartSettingsFailoverSettings &) = default ;
    StartDIJobRequestRealtimeStartSettingsFailoverSettings& operator=(StartDIJobRequestRealtimeStartSettingsFailoverSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->interval_ != nullptr
        && this->upperLimit_ != nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline StartDIJobRequestRealtimeStartSettingsFailoverSettings& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // upperLimit Field Functions 
    bool hasUpperLimit() const { return this->upperLimit_ != nullptr;};
    void deleteUpperLimit() { this->upperLimit_ = nullptr;};
    inline int64_t upperLimit() const { DARABONBA_PTR_GET_DEFAULT(upperLimit_, 0L) };
    inline StartDIJobRequestRealtimeStartSettingsFailoverSettings& setUpperLimit(int64_t upperLimit) { DARABONBA_PTR_SET_VALUE(upperLimit_, upperLimit) };


  protected:
    // This parameter is deprecated. Use advanced parameters for failover settings when you create a task.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // This parameter is deprecated. Use advanced parameters for failover settings when you create a task.
    std::shared_ptr<int64_t> upperLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
