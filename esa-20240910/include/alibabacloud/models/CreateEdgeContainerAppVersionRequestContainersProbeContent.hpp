// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPVERSIONREQUESTCONTAINERSPROBECONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPVERSIONREQUESTCONTAINERSPROBECONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEdgeContainerAppVersionRequestContainersProbeContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeContainerAppVersionRequestContainersProbeContent& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(SuccessThreshold, successThreshold_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeContainerAppVersionRequestContainersProbeContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(SuccessThreshold, successThreshold_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    CreateEdgeContainerAppVersionRequestContainersProbeContent() = default ;
    CreateEdgeContainerAppVersionRequestContainersProbeContent(const CreateEdgeContainerAppVersionRequestContainersProbeContent &) = default ;
    CreateEdgeContainerAppVersionRequestContainersProbeContent(CreateEdgeContainerAppVersionRequestContainersProbeContent &&) = default ;
    CreateEdgeContainerAppVersionRequestContainersProbeContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeContainerAppVersionRequestContainersProbeContent() = default ;
    CreateEdgeContainerAppVersionRequestContainersProbeContent& operator=(const CreateEdgeContainerAppVersionRequestContainersProbeContent &) = default ;
    CreateEdgeContainerAppVersionRequestContainersProbeContent& operator=(CreateEdgeContainerAppVersionRequestContainersProbeContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr
        && return this->failureThreshold_ == nullptr && return this->host_ == nullptr && return this->httpHeaders_ == nullptr && return this->initialDelaySeconds_ == nullptr && return this->path_ == nullptr
        && return this->periodSeconds_ == nullptr && return this->port_ == nullptr && return this->scheme_ == nullptr && return this->successThreshold_ == nullptr && return this->timeoutSeconds_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t failureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpHeaders Field Functions 
    bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
    void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
    inline string httpHeaders() const { DARABONBA_PTR_GET_DEFAULT(httpHeaders_, "") };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setHttpHeaders(string httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t initialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t periodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string scheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // successThreshold Field Functions 
    bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
    void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
    inline int32_t successThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline CreateEdgeContainerAppVersionRequestContainersProbeContent& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    // The command of the exec type probe.
    std::shared_ptr<string> command_ = nullptr;
    // The number of consecutive failed health checks required for a container to be considered as unhealthy.
    std::shared_ptr<int32_t> failureThreshold_ = nullptr;
    // The domain name that is used for health checks.
    std::shared_ptr<string> host_ = nullptr;
    // The request headers that are included in the container health check request.
    std::shared_ptr<string> httpHeaders_ = nullptr;
    // The latency for container probe initialization.
    std::shared_ptr<int32_t> initialDelaySeconds_ = nullptr;
    // The health check path.
    std::shared_ptr<string> path_ = nullptr;
    // The interval between container health checks.
    std::shared_ptr<int32_t> periodSeconds_ = nullptr;
    // The health check port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol that the container health check request uses.
    std::shared_ptr<string> scheme_ = nullptr;
    // The number of consecutive successful health checks required for a container to be considered as healthy.
    std::shared_ptr<int32_t> successThreshold_ = nullptr;
    // The timeout period of the container health check.
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
