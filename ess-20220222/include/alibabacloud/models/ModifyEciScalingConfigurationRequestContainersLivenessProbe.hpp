// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSLIVENESSPROBE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSLIVENESSPROBE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersLivenessProbeExec.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersLivenessProbe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersLivenessProbe& obj) { 
      DARABONBA_PTR_TO_JSON(Exec, exec_);
      DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(HttpGet, httpGet_);
      DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(SuccessThreshold, successThreshold_);
      DARABONBA_PTR_TO_JSON(TcpSocket, tcpSocket_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersLivenessProbe& obj) { 
      DARABONBA_PTR_FROM_JSON(Exec, exec_);
      DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(HttpGet, httpGet_);
      DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(SuccessThreshold, successThreshold_);
      DARABONBA_PTR_FROM_JSON(TcpSocket, tcpSocket_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    ModifyEciScalingConfigurationRequestContainersLivenessProbe() = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbe(const ModifyEciScalingConfigurationRequestContainersLivenessProbe &) = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbe(ModifyEciScalingConfigurationRequestContainersLivenessProbe &&) = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersLivenessProbe() = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbe& operator=(const ModifyEciScalingConfigurationRequestContainersLivenessProbe &) = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbe& operator=(ModifyEciScalingConfigurationRequestContainersLivenessProbe &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exec_ == nullptr
        && return this->failureThreshold_ == nullptr && return this->httpGet_ == nullptr && return this->initialDelaySeconds_ == nullptr && return this->periodSeconds_ == nullptr && return this->successThreshold_ == nullptr
        && return this->tcpSocket_ == nullptr && return this->timeoutSeconds_ == nullptr; };
    // exec Field Functions 
    bool hasExec() const { return this->exec_ != nullptr;};
    void deleteExec() { this->exec_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec & exec() const { DARABONBA_PTR_GET_CONST(exec_, Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec) };
    inline Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec exec() { DARABONBA_PTR_GET(exec_, Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setExec(const Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setExec(Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t failureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // httpGet Field Functions 
    bool hasHttpGet() const { return this->httpGet_ != nullptr;};
    void deleteHttpGet() { this->httpGet_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet & httpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet) };
    inline Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet httpGet() { DARABONBA_PTR_GET(httpGet_, Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setHttpGet(const Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setHttpGet(Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t initialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t periodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // successThreshold Field Functions 
    bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
    void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
    inline int32_t successThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


    // tcpSocket Field Functions 
    bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
    void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket & tcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket) };
    inline Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket tcpSocket() { DARABONBA_PTR_GET(tcpSocket_, Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setTcpSocket(const Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setTcpSocket(Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbe& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeExec> exec_ = nullptr;
    std::shared_ptr<int32_t> failureThreshold_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet> httpGet_ = nullptr;
    std::shared_ptr<int32_t> initialDelaySeconds_ = nullptr;
    std::shared_ptr<int32_t> periodSeconds_ = nullptr;
    std::shared_ptr<int32_t> successThreshold_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersLivenessProbeTcpSocket> tcpSocket_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
