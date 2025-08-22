// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFAPIHTTP_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFAPIHTTP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestMonitorConfApiHTTP : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCert, checkCert_);
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(ProtocolAlpnProtocol, protocolAlpnProtocol_);
      DARABONBA_PTR_TO_JSON(RequestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCert, checkCert_);
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(ProtocolAlpnProtocol, protocolAlpnProtocol_);
      DARABONBA_PTR_FROM_JSON(RequestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CreateTimingSyntheticTaskRequestMonitorConfApiHTTP() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfApiHTTP(const CreateTimingSyntheticTaskRequestMonitorConfApiHTTP &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfApiHTTP(CreateTimingSyntheticTaskRequestMonitorConfApiHTTP &&) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfApiHTTP(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestMonitorConfApiHTTP() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& operator=(const CreateTimingSyntheticTaskRequestMonitorConfApiHTTP &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& operator=(CreateTimingSyntheticTaskRequestMonitorConfApiHTTP &&) = default ;
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
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setCheckCert(bool checkCert) { DARABONBA_PTR_SET_VALUE(checkCert_, checkCert) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int64_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // protocolAlpnProtocol Field Functions 
    bool hasProtocolAlpnProtocol() const { return this->protocolAlpnProtocol_ != nullptr;};
    void deleteProtocolAlpnProtocol() { this->protocolAlpnProtocol_ = nullptr;};
    inline int32_t protocolAlpnProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocolAlpnProtocol_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setProtocolAlpnProtocol(int32_t protocolAlpnProtocol) { DARABONBA_PTR_SET_VALUE(protocolAlpnProtocol_, protocolAlpnProtocol) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody & requestBody() const { DARABONBA_PTR_GET_CONST(requestBody_, Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody requestBody() { DARABONBA_PTR_GET(requestBody_, Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setRequestBody(const Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody & requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setRequestBody(Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody && requestBody) { DARABONBA_PTR_SET_RVALUE(requestBody_, requestBody) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const map<string, string> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, map<string, string>) };
    inline map<string, string> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, map<string, string>) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setRequestHeaders(const map<string, string> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setRequestHeaders(map<string, string> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfApiHTTP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // Specifies whether to verify the certificate. Default value: no.
    std::shared_ptr<bool> checkCert_ = nullptr;
    // The connection timeout period. Unit: milliseconds. Default value: 5000. Minimum value: 1000. Maximum value: 300000.
    std::shared_ptr<int64_t> connectTimeout_ = nullptr;
    // The request method. Valid values: GET and POST.
    std::shared_ptr<string> method_ = nullptr;
    // The ALPN protocol version. You can configure this parameter when you perform an HTTPS synthetic test on a WAP mobile client. Valid values:
    // 
    // 0: default
    // 
    // 1: http/1.1
    // 
    // 2: h2
    // 
    // 3: disables the ALPN protocol
    std::shared_ptr<int32_t> protocolAlpnProtocol_ = nullptr;
    // The HTTP request body.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody> requestBody_ = nullptr;
    // The HTTP request header.
    std::shared_ptr<map<string, string>> requestHeaders_ = nullptr;
    // The URL or request path for synthetic monitoring.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The timeout period. Unit: milliseconds. Default value: 10000. Minimum value: 1000. Maximum value: 300000.
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
