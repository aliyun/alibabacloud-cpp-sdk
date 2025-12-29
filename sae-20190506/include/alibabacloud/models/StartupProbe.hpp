// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTUPPROBE_HPP_
#define ALIBABACLOUD_MODELS_STARTUPPROBE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProbeHandler.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class StartupProbe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartupProbe& obj) { 
      DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(ProbeHandler, probeHandler_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, StartupProbe& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(ProbeHandler, probeHandler_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    StartupProbe() = default ;
    StartupProbe(const StartupProbe &) = default ;
    StartupProbe(StartupProbe &&) = default ;
    StartupProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartupProbe() = default ;
    StartupProbe& operator=(const StartupProbe &) = default ;
    StartupProbe& operator=(StartupProbe &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureThreshold_ == nullptr
        && this->initialDelaySeconds_ == nullptr && this->periodSeconds_ == nullptr && this->probeHandler_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline StartupProbe& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t getInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline StartupProbe& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline StartupProbe& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // probeHandler Field Functions 
    bool hasProbeHandler() const { return this->probeHandler_ != nullptr;};
    void deleteProbeHandler() { this->probeHandler_ = nullptr;};
    inline const ProbeHandler & getProbeHandler() const { DARABONBA_PTR_GET_CONST(probeHandler_, ProbeHandler) };
    inline ProbeHandler getProbeHandler() { DARABONBA_PTR_GET(probeHandler_, ProbeHandler) };
    inline StartupProbe& setProbeHandler(const ProbeHandler & probeHandler) { DARABONBA_PTR_SET_VALUE(probeHandler_, probeHandler) };
    inline StartupProbe& setProbeHandler(ProbeHandler && probeHandler) { DARABONBA_PTR_SET_RVALUE(probeHandler_, probeHandler) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline StartupProbe& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    shared_ptr<int32_t> failureThreshold_ {};
    shared_ptr<int32_t> initialDelaySeconds_ {};
    shared_ptr<int32_t> periodSeconds_ {};
    shared_ptr<ProbeHandler> probeHandler_ {};
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
