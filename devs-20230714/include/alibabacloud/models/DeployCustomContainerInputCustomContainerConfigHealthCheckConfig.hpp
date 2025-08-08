// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIGHEALTHCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIGHEALTHCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputCustomContainerConfigHealthCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(failureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(httpGetUrl, httpGetUrl_);
      DARABONBA_PTR_TO_JSON(initialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(periodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(successThreshold, successThreshold_);
      DARABONBA_PTR_TO_JSON(timeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(failureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(httpGetUrl, httpGetUrl_);
      DARABONBA_PTR_FROM_JSON(initialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(periodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(successThreshold, successThreshold_);
      DARABONBA_PTR_FROM_JSON(timeoutSeconds, timeoutSeconds_);
    };
    DeployCustomContainerInputCustomContainerConfigHealthCheckConfig() = default ;
    DeployCustomContainerInputCustomContainerConfigHealthCheckConfig(const DeployCustomContainerInputCustomContainerConfigHealthCheckConfig &) = default ;
    DeployCustomContainerInputCustomContainerConfigHealthCheckConfig(DeployCustomContainerInputCustomContainerConfigHealthCheckConfig &&) = default ;
    DeployCustomContainerInputCustomContainerConfigHealthCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputCustomContainerConfigHealthCheckConfig() = default ;
    DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& operator=(const DeployCustomContainerInputCustomContainerConfigHealthCheckConfig &) = default ;
    DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& operator=(DeployCustomContainerInputCustomContainerConfigHealthCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failureThreshold_ != nullptr
        && this->httpGetUrl_ != nullptr && this->initialDelaySeconds_ != nullptr && this->periodSeconds_ != nullptr && this->successThreshold_ != nullptr && this->timeoutSeconds_ != nullptr; };
    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t failureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // httpGetUrl Field Functions 
    bool hasHttpGetUrl() const { return this->httpGetUrl_ != nullptr;};
    void deleteHttpGetUrl() { this->httpGetUrl_ = nullptr;};
    inline string httpGetUrl() const { DARABONBA_PTR_GET_DEFAULT(httpGetUrl_, "") };
    inline DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& setHttpGetUrl(string httpGetUrl) { DARABONBA_PTR_SET_VALUE(httpGetUrl_, httpGetUrl) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t initialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t periodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // successThreshold Field Functions 
    bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
    void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
    inline int32_t successThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
    inline DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int64_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0L) };
    inline DeployCustomContainerInputCustomContainerConfigHealthCheckConfig& setTimeoutSeconds(int64_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    std::shared_ptr<int32_t> failureThreshold_ = nullptr;
    std::shared_ptr<string> httpGetUrl_ = nullptr;
    std::shared_ptr<int32_t> initialDelaySeconds_ = nullptr;
    std::shared_ptr<int32_t> periodSeconds_ = nullptr;
    std::shared_ptr<int32_t> successThreshold_ = nullptr;
    std::shared_ptr<int64_t> timeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
