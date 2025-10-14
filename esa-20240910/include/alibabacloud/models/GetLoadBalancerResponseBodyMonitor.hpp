// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYMONITOR_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYMONITOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetLoadBalancerResponseBodyMonitor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerResponseBodyMonitor& obj) { 
      DARABONBA_PTR_TO_JSON(ConsecutiveDown, consecutiveDown_);
      DARABONBA_PTR_TO_JSON(ConsecutiveUp, consecutiveUp_);
      DARABONBA_PTR_TO_JSON(ExpectedCodes, expectedCodes_);
      DARABONBA_PTR_TO_JSON(FollowRedirects, followRedirects_);
      DARABONBA_ANY_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(MonitoringRegion, monitoringRegion_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerResponseBodyMonitor& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsecutiveDown, consecutiveDown_);
      DARABONBA_PTR_FROM_JSON(ConsecutiveUp, consecutiveUp_);
      DARABONBA_PTR_FROM_JSON(ExpectedCodes, expectedCodes_);
      DARABONBA_PTR_FROM_JSON(FollowRedirects, followRedirects_);
      DARABONBA_ANY_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(MonitoringRegion, monitoringRegion_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLoadBalancerResponseBodyMonitor() = default ;
    GetLoadBalancerResponseBodyMonitor(const GetLoadBalancerResponseBodyMonitor &) = default ;
    GetLoadBalancerResponseBodyMonitor(GetLoadBalancerResponseBodyMonitor &&) = default ;
    GetLoadBalancerResponseBodyMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerResponseBodyMonitor() = default ;
    GetLoadBalancerResponseBodyMonitor& operator=(const GetLoadBalancerResponseBodyMonitor &) = default ;
    GetLoadBalancerResponseBodyMonitor& operator=(GetLoadBalancerResponseBodyMonitor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consecutiveDown_ == nullptr
        && return this->consecutiveUp_ == nullptr && return this->expectedCodes_ == nullptr && return this->followRedirects_ == nullptr && return this->header_ == nullptr && return this->interval_ == nullptr
        && return this->method_ == nullptr && return this->monitoringRegion_ == nullptr && return this->path_ == nullptr && return this->port_ == nullptr && return this->timeout_ == nullptr
        && return this->type_ == nullptr; };
    // consecutiveDown Field Functions 
    bool hasConsecutiveDown() const { return this->consecutiveDown_ != nullptr;};
    void deleteConsecutiveDown() { this->consecutiveDown_ = nullptr;};
    inline int32_t consecutiveDown() const { DARABONBA_PTR_GET_DEFAULT(consecutiveDown_, 0) };
    inline GetLoadBalancerResponseBodyMonitor& setConsecutiveDown(int32_t consecutiveDown) { DARABONBA_PTR_SET_VALUE(consecutiveDown_, consecutiveDown) };


    // consecutiveUp Field Functions 
    bool hasConsecutiveUp() const { return this->consecutiveUp_ != nullptr;};
    void deleteConsecutiveUp() { this->consecutiveUp_ = nullptr;};
    inline int32_t consecutiveUp() const { DARABONBA_PTR_GET_DEFAULT(consecutiveUp_, 0) };
    inline GetLoadBalancerResponseBodyMonitor& setConsecutiveUp(int32_t consecutiveUp) { DARABONBA_PTR_SET_VALUE(consecutiveUp_, consecutiveUp) };


    // expectedCodes Field Functions 
    bool hasExpectedCodes() const { return this->expectedCodes_ != nullptr;};
    void deleteExpectedCodes() { this->expectedCodes_ = nullptr;};
    inline string expectedCodes() const { DARABONBA_PTR_GET_DEFAULT(expectedCodes_, "") };
    inline GetLoadBalancerResponseBodyMonitor& setExpectedCodes(string expectedCodes) { DARABONBA_PTR_SET_VALUE(expectedCodes_, expectedCodes) };


    // followRedirects Field Functions 
    bool hasFollowRedirects() const { return this->followRedirects_ != nullptr;};
    void deleteFollowRedirects() { this->followRedirects_ = nullptr;};
    inline bool followRedirects() const { DARABONBA_PTR_GET_DEFAULT(followRedirects_, false) };
    inline GetLoadBalancerResponseBodyMonitor& setFollowRedirects(bool followRedirects) { DARABONBA_PTR_SET_VALUE(followRedirects_, followRedirects) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline     const Darabonba::Json & header() const { DARABONBA_GET(header_) };
    Darabonba::Json & header() { DARABONBA_GET(header_) };
    inline GetLoadBalancerResponseBodyMonitor& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
    inline GetLoadBalancerResponseBodyMonitor& setHeader(Darabonba::Json & header) { DARABONBA_SET_RVALUE(header_, header) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetLoadBalancerResponseBodyMonitor& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetLoadBalancerResponseBodyMonitor& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // monitoringRegion Field Functions 
    bool hasMonitoringRegion() const { return this->monitoringRegion_ != nullptr;};
    void deleteMonitoringRegion() { this->monitoringRegion_ = nullptr;};
    inline string monitoringRegion() const { DARABONBA_PTR_GET_DEFAULT(monitoringRegion_, "") };
    inline GetLoadBalancerResponseBodyMonitor& setMonitoringRegion(string monitoringRegion) { DARABONBA_PTR_SET_VALUE(monitoringRegion_, monitoringRegion) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetLoadBalancerResponseBodyMonitor& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetLoadBalancerResponseBodyMonitor& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline GetLoadBalancerResponseBodyMonitor& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLoadBalancerResponseBodyMonitor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of consecutive failed probes required to consider the target as unhealthy, for example, `5`.
    std::shared_ptr<int32_t> consecutiveDown_ = nullptr;
    // The number of consecutive successful probes required to consider the target as healthy, for example, `3`.
    std::shared_ptr<int32_t> consecutiveUp_ = nullptr;
    // Expected status codes, such as 200, 202, for successful HTTP responses.
    std::shared_ptr<string> expectedCodes_ = nullptr;
    // Whether to follow redirects.
    // 
    // - true: Yes.
    // - false: No.
    std::shared_ptr<bool> followRedirects_ = nullptr;
    // The HTTP headers to be included in the probe request.
    Darabonba::Json header_ = nullptr;
    // Health check interval, in seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // Health check method.
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> monitoringRegion_ = nullptr;
    // Path.
    std::shared_ptr<string> path_ = nullptr;
    // Target port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The timeout for the health check, in seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // Monitor protocol type, such as HTTP, used for health checks. When the value is `off`, it indicates that no check is performed.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
