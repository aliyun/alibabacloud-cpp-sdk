// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGTASKOPTION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGTASKOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& obj) { 
      DARABONBA_PTR_TO_JSON(HttpKeyword, httpKeyword_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(HttpNegative, httpNegative_);
      DARABONBA_PTR_TO_JSON(HttpPostContent, httpPostContent_);
      DARABONBA_PTR_TO_JSON(HttpResponseCharset, httpResponseCharset_);
      DARABONBA_PTR_TO_JSON(HttpURI, httpURI_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(TelnetOrPingHost, telnetOrPingHost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpKeyword, httpKeyword_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(HttpNegative, httpNegative_);
      DARABONBA_PTR_FROM_JSON(HttpPostContent, httpPostContent_);
      DARABONBA_PTR_FROM_JSON(HttpResponseCharset, httpResponseCharset_);
      DARABONBA_PTR_FROM_JSON(HttpURI, httpURI_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(TelnetOrPingHost, telnetOrPingHost_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpKeyword_ != nullptr
        && this->httpMethod_ != nullptr && this->httpNegative_ != nullptr && this->httpPostContent_ != nullptr && this->httpResponseCharset_ != nullptr && this->httpURI_ != nullptr
        && this->interval_ != nullptr && this->telnetOrPingHost_ != nullptr; };
    // httpKeyword Field Functions 
    bool hasHttpKeyword() const { return this->httpKeyword_ != nullptr;};
    void deleteHttpKeyword() { this->httpKeyword_ = nullptr;};
    inline string httpKeyword() const { DARABONBA_PTR_GET_DEFAULT(httpKeyword_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setHttpKeyword(string httpKeyword) { DARABONBA_PTR_SET_VALUE(httpKeyword_, httpKeyword) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // httpNegative Field Functions 
    bool hasHttpNegative() const { return this->httpNegative_ != nullptr;};
    void deleteHttpNegative() { this->httpNegative_ = nullptr;};
    inline bool httpNegative() const { DARABONBA_PTR_GET_DEFAULT(httpNegative_, false) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setHttpNegative(bool httpNegative) { DARABONBA_PTR_SET_VALUE(httpNegative_, httpNegative) };


    // httpPostContent Field Functions 
    bool hasHttpPostContent() const { return this->httpPostContent_ != nullptr;};
    void deleteHttpPostContent() { this->httpPostContent_ = nullptr;};
    inline string httpPostContent() const { DARABONBA_PTR_GET_DEFAULT(httpPostContent_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setHttpPostContent(string httpPostContent) { DARABONBA_PTR_SET_VALUE(httpPostContent_, httpPostContent) };


    // httpResponseCharset Field Functions 
    bool hasHttpResponseCharset() const { return this->httpResponseCharset_ != nullptr;};
    void deleteHttpResponseCharset() { this->httpResponseCharset_ = nullptr;};
    inline string httpResponseCharset() const { DARABONBA_PTR_GET_DEFAULT(httpResponseCharset_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setHttpResponseCharset(string httpResponseCharset) { DARABONBA_PTR_SET_VALUE(httpResponseCharset_, httpResponseCharset) };


    // httpURI Field Functions 
    bool hasHttpURI() const { return this->httpURI_ != nullptr;};
    void deleteHttpURI() { this->httpURI_ = nullptr;};
    inline string httpURI() const { DARABONBA_PTR_GET_DEFAULT(httpURI_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setHttpURI(string httpURI) { DARABONBA_PTR_SET_VALUE(httpURI_, httpURI) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // telnetOrPingHost Field Functions 
    bool hasTelnetOrPingHost() const { return this->telnetOrPingHost_ != nullptr;};
    void deleteTelnetOrPingHost() { this->telnetOrPingHost_ = nullptr;};
    inline string telnetOrPingHost() const { DARABONBA_PTR_GET_DEFAULT(telnetOrPingHost_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption& setTelnetOrPingHost(string telnetOrPingHost) { DARABONBA_PTR_SET_VALUE(telnetOrPingHost_, telnetOrPingHost) };


  protected:
    // The response to the HTTP request.
    std::shared_ptr<string> httpKeyword_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   GET
    // *   POST
    // *   HEAD
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The method to trigger an alert. The alert can be triggered based on whether the specified alert rule is included in the response body. Valid values:
    // 
    // *   true: If the HTTP response body includes the alert rule, an alert is triggered.
    // *   false: If the HTTP response does not include the alert rule, an alert is triggered.
    std::shared_ptr<bool> httpNegative_ = nullptr;
    // The content of the HTTP POST request.
    std::shared_ptr<string> httpPostContent_ = nullptr;
    // The character set that is used in the HTTP response.
    std::shared_ptr<string> httpResponseCharset_ = nullptr;
    // The URI that you want to monitor. If the TaskType parameter is set to HTTP, this parameter is required.
    std::shared_ptr<string> httpURI_ = nullptr;
    // The interval at which detection requests are sent. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The domain name or IP address that you want to monitor.
    std::shared_ptr<string> telnetOrPingHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
