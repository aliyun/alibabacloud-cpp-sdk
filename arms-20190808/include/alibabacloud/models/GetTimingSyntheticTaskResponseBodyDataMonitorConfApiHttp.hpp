// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATAMONITORCONFAPIHTTP_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATAMONITORCONFAPIHTTP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCert, checkCert_);
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(ProtocolAlpnProtocol, protocolAlpnProtocol_);
      DARABONBA_PTR_TO_JSON(RequestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCert, checkCert_);
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(ProtocolAlpnProtocol, protocolAlpnProtocol_);
      DARABONBA_PTR_FROM_JSON(RequestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP() = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP(const GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP &) = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP(GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP &&) = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP() = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& operator=(const GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP &) = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& operator=(GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkCert_ != nullptr
        && this->connectTimeout_ != nullptr && this->method_ != nullptr && this->protocolAlpnProtocol_ != nullptr && this->requestBody_ != nullptr && this->requestHeaders_ != nullptr
        && this->targetUrl_ != nullptr && this->timeout_ != nullptr; };
    // checkCert Field Functions 
    bool hasCheckCert() const { return this->checkCert_ != nullptr;};
    void deleteCheckCert() { this->checkCert_ = nullptr;};
    inline bool checkCert() const { DARABONBA_PTR_GET_DEFAULT(checkCert_, false) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setCheckCert(bool checkCert) { DARABONBA_PTR_SET_VALUE(checkCert_, checkCert) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int64_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // protocolAlpnProtocol Field Functions 
    bool hasProtocolAlpnProtocol() const { return this->protocolAlpnProtocol_ != nullptr;};
    void deleteProtocolAlpnProtocol() { this->protocolAlpnProtocol_ = nullptr;};
    inline int32_t protocolAlpnProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocolAlpnProtocol_, 0) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setProtocolAlpnProtocol(int32_t protocolAlpnProtocol) { DARABONBA_PTR_SET_VALUE(protocolAlpnProtocol_, protocolAlpnProtocol) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody & requestBody() const { DARABONBA_PTR_GET_CONST(requestBody_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody requestBody() { DARABONBA_PTR_GET(requestBody_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setRequestBody(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody & requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setRequestBody(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody && requestBody) { DARABONBA_PTR_SET_RVALUE(requestBody_, requestBody) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const map<string, string> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, map<string, string>) };
    inline map<string, string> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, map<string, string>) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setRequestHeaders(const map<string, string> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setRequestHeaders(map<string, string> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // Whether to verify the certificate. The default is no.
    std::shared_ptr<bool> checkCert_ = nullptr;
    // The connection timeout period. Unit: milliseconds. Default value: 5000. Minimum value: 1000. Maximum value: 300000.
    std::shared_ptr<int64_t> connectTimeout_ = nullptr;
    // The request method.
    // 
    // *   POST
    // *   GET
    std::shared_ptr<string> method_ = nullptr;
    // The ALPN protocol version. You can configure this parameter when you perform an HTTPS synthetic test on a WAP mobile client. Valid values:
    // 
    // 0: default
    // 
    // 1: HTTP/1.1
    // 
    // 2: HTTP/2
    // 
    // 3: disables the ALPN protocol
    std::shared_ptr<int32_t> protocolAlpnProtocol_ = nullptr;
    // The HTTP request body.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTPRequestBody> requestBody_ = nullptr;
    // The HTTP request header.
    std::shared_ptr<map<string, string>> requestHeaders_ = nullptr;
    // The URL for synthetic monitoring.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The timeout period. Unit: milliseconds. Default value: 10000. Minimum value: 1000. Maximum value: 300000.
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
