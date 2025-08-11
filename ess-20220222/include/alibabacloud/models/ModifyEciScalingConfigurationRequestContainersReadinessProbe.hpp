// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersReadinessProbeExec.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersReadinessProbe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersReadinessProbe& obj) { 
      DARABONBA_PTR_TO_JSON(Exec, exec_);
      DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(HttpGet, httpGet_);
      DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(SuccessThreshold, successThreshold_);
      DARABONBA_PTR_TO_JSON(TcpSocket, tcpSocket_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersReadinessProbe& obj) { 
      DARABONBA_PTR_FROM_JSON(Exec, exec_);
      DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(HttpGet, httpGet_);
      DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(SuccessThreshold, successThreshold_);
      DARABONBA_PTR_FROM_JSON(TcpSocket, tcpSocket_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    ModifyEciScalingConfigurationRequestContainersReadinessProbe() = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbe(const ModifyEciScalingConfigurationRequestContainersReadinessProbe &) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbe(ModifyEciScalingConfigurationRequestContainersReadinessProbe &&) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersReadinessProbe() = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbe& operator=(const ModifyEciScalingConfigurationRequestContainersReadinessProbe &) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbe& operator=(ModifyEciScalingConfigurationRequestContainersReadinessProbe &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exec_ != nullptr
        && this->failureThreshold_ != nullptr && this->httpGet_ != nullptr && this->initialDelaySeconds_ != nullptr && this->periodSeconds_ != nullptr && this->successThreshold_ != nullptr
        && this->tcpSocket_ != nullptr && this->timeoutSeconds_ != nullptr; };
    // exec Field Functions 
    bool hasExec() const { return this->exec_ != nullptr;};
    void deleteExec() { this->exec_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec & exec() const { DARABONBA_PTR_GET_CONST(exec_, Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec) };
    inline Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec exec() { DARABONBA_PTR_GET(exec_, Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setExec(const Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setExec(Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t failureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // httpGet Field Functions 
    bool hasHttpGet() const { return this->httpGet_ != nullptr;};
    void deleteHttpGet() { this->httpGet_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet & httpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet) };
    inline Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet httpGet() { DARABONBA_PTR_GET(httpGet_, Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setHttpGet(const Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setHttpGet(Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t initialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t periodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // successThreshold Field Functions 
    bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
    void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
    inline int32_t successThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


    // tcpSocket Field Functions 
    bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
    void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket & tcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket) };
    inline Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket tcpSocket() { DARABONBA_PTR_GET(tcpSocket_, Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setTcpSocket(const Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setTcpSocket(Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbe& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeExec> exec_ = nullptr;
    std::shared_ptr<int32_t> failureThreshold_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeHttpGet> httpGet_ = nullptr;
    std::shared_ptr<int32_t> initialDelaySeconds_ = nullptr;
    std::shared_ptr<int32_t> periodSeconds_ = nullptr;
    std::shared_ptr<int32_t> successThreshold_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket> tcpSocket_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
