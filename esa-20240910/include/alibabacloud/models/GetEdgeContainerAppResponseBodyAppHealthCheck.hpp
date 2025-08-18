// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESPONSEBODYAPPHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESPONSEBODYAPPHEALTHCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResponseBodyAppHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResponseBodyAppHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(FailTimes, failTimes_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SuccTimes, succTimes_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResponseBodyAppHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(FailTimes, failTimes_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SuccTimes, succTimes_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    GetEdgeContainerAppResponseBodyAppHealthCheck() = default ;
    GetEdgeContainerAppResponseBodyAppHealthCheck(const GetEdgeContainerAppResponseBodyAppHealthCheck &) = default ;
    GetEdgeContainerAppResponseBodyAppHealthCheck(GetEdgeContainerAppResponseBodyAppHealthCheck &&) = default ;
    GetEdgeContainerAppResponseBodyAppHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResponseBodyAppHealthCheck() = default ;
    GetEdgeContainerAppResponseBodyAppHealthCheck& operator=(const GetEdgeContainerAppResponseBodyAppHealthCheck &) = default ;
    GetEdgeContainerAppResponseBodyAppHealthCheck& operator=(GetEdgeContainerAppResponseBodyAppHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failTimes_ != nullptr
        && this->host_ != nullptr && this->httpCode_ != nullptr && this->interval_ != nullptr && this->method_ != nullptr && this->port_ != nullptr
        && this->succTimes_ != nullptr && this->timeout_ != nullptr && this->type_ != nullptr && this->uri_ != nullptr; };
    // failTimes Field Functions 
    bool hasFailTimes() const { return this->failTimes_ != nullptr;};
    void deleteFailTimes() { this->failTimes_ = nullptr;};
    inline int32_t failTimes() const { DARABONBA_PTR_GET_DEFAULT(failTimes_, 0) };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setFailTimes(int32_t failTimes) { DARABONBA_PTR_SET_VALUE(failTimes_, failTimes) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // succTimes Field Functions 
    bool hasSuccTimes() const { return this->succTimes_ != nullptr;};
    void deleteSuccTimes() { this->succTimes_ = nullptr;};
    inline int32_t succTimes() const { DARABONBA_PTR_GET_DEFAULT(succTimes_, 0) };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setSuccTimes(int32_t succTimes) { DARABONBA_PTR_SET_VALUE(succTimes_, succTimes) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetEdgeContainerAppResponseBodyAppHealthCheck& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The number of consecutive failed health checks required for an application to be considered as unhealthy.
    std::shared_ptr<int32_t> failTimes_ = nullptr;
    // The domain name that is used for health checks.
    std::shared_ptr<string> host_ = nullptr;
    // The range of health check status codes that indicate successful health checks.
    std::shared_ptr<string> httpCode_ = nullptr;
    // The interval between health checks. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The HTTP method that the health check request uses.
    std::shared_ptr<string> method_ = nullptr;
    // The health check port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The number of consecutive successful health checks required for an application to be considered as healthy.
    std::shared_ptr<int32_t> succTimes_ = nullptr;
    // The timeout period of the health check. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The health check type. Valid values:
    // 
    // *   l7
    // *   l4
    std::shared_ptr<string> type_ = nullptr;
    // The health check URL.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
