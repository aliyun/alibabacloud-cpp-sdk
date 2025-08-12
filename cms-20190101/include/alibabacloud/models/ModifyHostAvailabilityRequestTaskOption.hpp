// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTAVAILABILITYREQUESTTASKOPTION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTAVAILABILITYREQUESTTASKOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHostAvailabilityRequestTaskOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostAvailabilityRequestTaskOption& obj) { 
      DARABONBA_PTR_TO_JSON(HttpHeader, httpHeader_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(HttpNegative, httpNegative_);
      DARABONBA_PTR_TO_JSON(HttpPostContent, httpPostContent_);
      DARABONBA_PTR_TO_JSON(HttpResponseCharset, httpResponseCharset_);
      DARABONBA_PTR_TO_JSON(HttpResponseMatchContent, httpResponseMatchContent_);
      DARABONBA_PTR_TO_JSON(HttpURI, httpURI_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(TelnetOrPingHost, telnetOrPingHost_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostAvailabilityRequestTaskOption& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpHeader, httpHeader_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(HttpNegative, httpNegative_);
      DARABONBA_PTR_FROM_JSON(HttpPostContent, httpPostContent_);
      DARABONBA_PTR_FROM_JSON(HttpResponseCharset, httpResponseCharset_);
      DARABONBA_PTR_FROM_JSON(HttpResponseMatchContent, httpResponseMatchContent_);
      DARABONBA_PTR_FROM_JSON(HttpURI, httpURI_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(TelnetOrPingHost, telnetOrPingHost_);
    };
    ModifyHostAvailabilityRequestTaskOption() = default ;
    ModifyHostAvailabilityRequestTaskOption(const ModifyHostAvailabilityRequestTaskOption &) = default ;
    ModifyHostAvailabilityRequestTaskOption(ModifyHostAvailabilityRequestTaskOption &&) = default ;
    ModifyHostAvailabilityRequestTaskOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostAvailabilityRequestTaskOption() = default ;
    ModifyHostAvailabilityRequestTaskOption& operator=(const ModifyHostAvailabilityRequestTaskOption &) = default ;
    ModifyHostAvailabilityRequestTaskOption& operator=(ModifyHostAvailabilityRequestTaskOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpHeader_ != nullptr
        && this->httpMethod_ != nullptr && this->httpNegative_ != nullptr && this->httpPostContent_ != nullptr && this->httpResponseCharset_ != nullptr && this->httpResponseMatchContent_ != nullptr
        && this->httpURI_ != nullptr && this->interval_ != nullptr && this->telnetOrPingHost_ != nullptr; };
    // httpHeader Field Functions 
    bool hasHttpHeader() const { return this->httpHeader_ != nullptr;};
    void deleteHttpHeader() { this->httpHeader_ = nullptr;};
    inline string httpHeader() const { DARABONBA_PTR_GET_DEFAULT(httpHeader_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpHeader(string httpHeader) { DARABONBA_PTR_SET_VALUE(httpHeader_, httpHeader) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // httpNegative Field Functions 
    bool hasHttpNegative() const { return this->httpNegative_ != nullptr;};
    void deleteHttpNegative() { this->httpNegative_ = nullptr;};
    inline bool httpNegative() const { DARABONBA_PTR_GET_DEFAULT(httpNegative_, false) };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpNegative(bool httpNegative) { DARABONBA_PTR_SET_VALUE(httpNegative_, httpNegative) };


    // httpPostContent Field Functions 
    bool hasHttpPostContent() const { return this->httpPostContent_ != nullptr;};
    void deleteHttpPostContent() { this->httpPostContent_ = nullptr;};
    inline string httpPostContent() const { DARABONBA_PTR_GET_DEFAULT(httpPostContent_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpPostContent(string httpPostContent) { DARABONBA_PTR_SET_VALUE(httpPostContent_, httpPostContent) };


    // httpResponseCharset Field Functions 
    bool hasHttpResponseCharset() const { return this->httpResponseCharset_ != nullptr;};
    void deleteHttpResponseCharset() { this->httpResponseCharset_ = nullptr;};
    inline string httpResponseCharset() const { DARABONBA_PTR_GET_DEFAULT(httpResponseCharset_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpResponseCharset(string httpResponseCharset) { DARABONBA_PTR_SET_VALUE(httpResponseCharset_, httpResponseCharset) };


    // httpResponseMatchContent Field Functions 
    bool hasHttpResponseMatchContent() const { return this->httpResponseMatchContent_ != nullptr;};
    void deleteHttpResponseMatchContent() { this->httpResponseMatchContent_ = nullptr;};
    inline string httpResponseMatchContent() const { DARABONBA_PTR_GET_DEFAULT(httpResponseMatchContent_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpResponseMatchContent(string httpResponseMatchContent) { DARABONBA_PTR_SET_VALUE(httpResponseMatchContent_, httpResponseMatchContent) };


    // httpURI Field Functions 
    bool hasHttpURI() const { return this->httpURI_ != nullptr;};
    void deleteHttpURI() { this->httpURI_ = nullptr;};
    inline string httpURI() const { DARABONBA_PTR_GET_DEFAULT(httpURI_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setHttpURI(string httpURI) { DARABONBA_PTR_SET_VALUE(httpURI_, httpURI) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ModifyHostAvailabilityRequestTaskOption& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // telnetOrPingHost Field Functions 
    bool hasTelnetOrPingHost() const { return this->telnetOrPingHost_ != nullptr;};
    void deleteTelnetOrPingHost() { this->telnetOrPingHost_ = nullptr;};
    inline string telnetOrPingHost() const { DARABONBA_PTR_GET_DEFAULT(telnetOrPingHost_, "") };
    inline ModifyHostAvailabilityRequestTaskOption& setTelnetOrPingHost(string telnetOrPingHost) { DARABONBA_PTR_SET_VALUE(telnetOrPingHost_, telnetOrPingHost) };


  protected:
    // The header of the HTTP request. Format: `Parameter name:Parameter value`. Separate multiple parameters with carriage return characters. Example:
    // 
    //     params1:value1
    //     params2:value2
    std::shared_ptr<string> httpHeader_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   GET
    // *   POST
    // *   HEAD
    // 
    // > This parameter must be specified when TaskType is set to HTTP. For more information about how to configure the TaskType parameter, see [CreateHostAvailability](https://help.aliyun.com/document_detail/115317.html).
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The method to trigger an alert. The alert can be triggered based on whether the specified alert rule is included in the response body. Valid values:
    // 
    // *   true: If the HTTP response body includes the alert rule, an alert is triggered.
    // *   false: If the HTTP response does not include the alert rule, an alert is triggered.
    // 
    // > This parameter must be specified when TaskType is set to HTTP. For more information about how to configure the TaskType parameter, see [CreateHostAvailability](https://help.aliyun.com/document_detail/115317.html).
    std::shared_ptr<bool> httpNegative_ = nullptr;
    // The content of the HTTP POST request.
    std::shared_ptr<string> httpPostContent_ = nullptr;
    // The character set that is used in the HTTP response.
    // 
    // > Only UTF-8 is supported.
    std::shared_ptr<string> httpResponseCharset_ = nullptr;
    // The response to the HTTP request.
    std::shared_ptr<string> httpResponseMatchContent_ = nullptr;
    // The URI that you want to monitor. This parameter is required if the TaskType parameter is set to HTTP or Telnet.
    std::shared_ptr<string> httpURI_ = nullptr;
    // The interval at which detection requests are sent. Unit: seconds. Valid values: 15, 30, 60, 120, 300, 900, 1800, and 3600.
    // 
    // > This parameter is available only for the CloudMonitor agent V3.5.1 or later.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The domain name or IP address that you want to monitor.
    // 
    // >  This parameter is required if the TaskType parameter is set to PING. For more information about how to set the TaskType parameter, see [CreateHostAvailability](https://help.aliyun.com/document_detail/115317.html).
    std::shared_ptr<string> telnetOrPingHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
