// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUESTMONITOR_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUESTMONITOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateLoadBalancerRequestMonitor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerRequestMonitor& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerRequestMonitor& obj) { 
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
    UpdateLoadBalancerRequestMonitor() = default ;
    UpdateLoadBalancerRequestMonitor(const UpdateLoadBalancerRequestMonitor &) = default ;
    UpdateLoadBalancerRequestMonitor(UpdateLoadBalancerRequestMonitor &&) = default ;
    UpdateLoadBalancerRequestMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerRequestMonitor() = default ;
    UpdateLoadBalancerRequestMonitor& operator=(const UpdateLoadBalancerRequestMonitor &) = default ;
    UpdateLoadBalancerRequestMonitor& operator=(UpdateLoadBalancerRequestMonitor &&) = default ;
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
    inline UpdateLoadBalancerRequestMonitor& setConsecutiveDown(int32_t consecutiveDown) { DARABONBA_PTR_SET_VALUE(consecutiveDown_, consecutiveDown) };


    // consecutiveUp Field Functions 
    bool hasConsecutiveUp() const { return this->consecutiveUp_ != nullptr;};
    void deleteConsecutiveUp() { this->consecutiveUp_ = nullptr;};
    inline int32_t consecutiveUp() const { DARABONBA_PTR_GET_DEFAULT(consecutiveUp_, 0) };
    inline UpdateLoadBalancerRequestMonitor& setConsecutiveUp(int32_t consecutiveUp) { DARABONBA_PTR_SET_VALUE(consecutiveUp_, consecutiveUp) };


    // expectedCodes Field Functions 
    bool hasExpectedCodes() const { return this->expectedCodes_ != nullptr;};
    void deleteExpectedCodes() { this->expectedCodes_ = nullptr;};
    inline string expectedCodes() const { DARABONBA_PTR_GET_DEFAULT(expectedCodes_, "") };
    inline UpdateLoadBalancerRequestMonitor& setExpectedCodes(string expectedCodes) { DARABONBA_PTR_SET_VALUE(expectedCodes_, expectedCodes) };


    // followRedirects Field Functions 
    bool hasFollowRedirects() const { return this->followRedirects_ != nullptr;};
    void deleteFollowRedirects() { this->followRedirects_ = nullptr;};
    inline bool followRedirects() const { DARABONBA_PTR_GET_DEFAULT(followRedirects_, false) };
    inline UpdateLoadBalancerRequestMonitor& setFollowRedirects(bool followRedirects) { DARABONBA_PTR_SET_VALUE(followRedirects_, followRedirects) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline     const Darabonba::Json & header() const { DARABONBA_GET(header_) };
    Darabonba::Json & header() { DARABONBA_GET(header_) };
    inline UpdateLoadBalancerRequestMonitor& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
    inline UpdateLoadBalancerRequestMonitor& setHeader(Darabonba::Json & header) { DARABONBA_SET_RVALUE(header_, header) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateLoadBalancerRequestMonitor& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline UpdateLoadBalancerRequestMonitor& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // monitoringRegion Field Functions 
    bool hasMonitoringRegion() const { return this->monitoringRegion_ != nullptr;};
    void deleteMonitoringRegion() { this->monitoringRegion_ = nullptr;};
    inline string monitoringRegion() const { DARABONBA_PTR_GET_DEFAULT(monitoringRegion_, "") };
    inline UpdateLoadBalancerRequestMonitor& setMonitoringRegion(string monitoringRegion) { DARABONBA_PTR_SET_VALUE(monitoringRegion_, monitoringRegion) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateLoadBalancerRequestMonitor& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateLoadBalancerRequestMonitor& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateLoadBalancerRequestMonitor& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateLoadBalancerRequestMonitor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Number of consecutive failed probes required to consider the target unhealthy, such as 5.
    std::shared_ptr<int32_t> consecutiveDown_ = nullptr;
    // Number of consecutive successful probes required to consider the target healthy, such as 3.
    std::shared_ptr<int32_t> consecutiveUp_ = nullptr;
    // Expected status codes, such as 200,202, which indicate successful HTTP responses.
    std::shared_ptr<string> expectedCodes_ = nullptr;
    // Whether to follow redirects.
    // 
    // - true: Yes.
    // - false: No.
    std::shared_ptr<bool> followRedirects_ = nullptr;
    // Monitor request header configuration.
    Darabonba::Json header_ = nullptr;
    // Monitor interval, such as 60 seconds, which is the frequency of checks.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // Monitor request method, such as GET, which is a method in the HTTP protocol.
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> monitoringRegion_ = nullptr;
    // Monitor check path, such as /healthcheck, which is the HTTP request path.
    std::shared_ptr<string> path_ = nullptr;
    // Origin server port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // Application health check timeout, in seconds, with a range of 1-10.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // Monitor protocol type, such as HTTP, used for health checks. When set to \\"off\\", no checks are performed.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
