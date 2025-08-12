// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodyMetricRules.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricRules, metricRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteMonitors, siteMonitors_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricRules, metricRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteMonitors, siteMonitors_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSiteMonitorAttributeResponseBody() = default ;
    DescribeSiteMonitorAttributeResponseBody(const DescribeSiteMonitorAttributeResponseBody &) = default ;
    DescribeSiteMonitorAttributeResponseBody(DescribeSiteMonitorAttributeResponseBody &&) = default ;
    DescribeSiteMonitorAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBody() = default ;
    DescribeSiteMonitorAttributeResponseBody& operator=(const DescribeSiteMonitorAttributeResponseBody &) = default ;
    DescribeSiteMonitorAttributeResponseBody& operator=(DescribeSiteMonitorAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->metricRules_ != nullptr && this->requestId_ != nullptr && this->siteMonitors_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSiteMonitorAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSiteMonitorAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricRules Field Functions 
    bool hasMetricRules() const { return this->metricRules_ != nullptr;};
    void deleteMetricRules() { this->metricRules_ = nullptr;};
    inline const DescribeSiteMonitorAttributeResponseBodyMetricRules & metricRules() const { DARABONBA_PTR_GET_CONST(metricRules_, DescribeSiteMonitorAttributeResponseBodyMetricRules) };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRules metricRules() { DARABONBA_PTR_GET(metricRules_, DescribeSiteMonitorAttributeResponseBodyMetricRules) };
    inline DescribeSiteMonitorAttributeResponseBody& setMetricRules(const DescribeSiteMonitorAttributeResponseBodyMetricRules & metricRules) { DARABONBA_PTR_SET_VALUE(metricRules_, metricRules) };
    inline DescribeSiteMonitorAttributeResponseBody& setMetricRules(DescribeSiteMonitorAttributeResponseBodyMetricRules && metricRules) { DARABONBA_PTR_SET_RVALUE(metricRules_, metricRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteMonitorAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteMonitors Field Functions 
    bool hasSiteMonitors() const { return this->siteMonitors_ != nullptr;};
    void deleteSiteMonitors() { this->siteMonitors_ = nullptr;};
    inline const DescribeSiteMonitorAttributeResponseBodySiteMonitors & siteMonitors() const { DARABONBA_PTR_GET_CONST(siteMonitors_, DescribeSiteMonitorAttributeResponseBodySiteMonitors) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors siteMonitors() { DARABONBA_PTR_GET(siteMonitors_, DescribeSiteMonitorAttributeResponseBodySiteMonitors) };
    inline DescribeSiteMonitorAttributeResponseBody& setSiteMonitors(const DescribeSiteMonitorAttributeResponseBodySiteMonitors & siteMonitors) { DARABONBA_PTR_SET_VALUE(siteMonitors_, siteMonitors) };
    inline DescribeSiteMonitorAttributeResponseBody& setSiteMonitors(DescribeSiteMonitorAttributeResponseBodySiteMonitors && siteMonitors) { DARABONBA_PTR_SET_RVALUE(siteMonitors_, siteMonitors) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSiteMonitorAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The alert rules that are configured for the site monitoring task.
    std::shared_ptr<DescribeSiteMonitorAttributeResponseBodyMetricRules> metricRules_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the site monitoring task.
    std::shared_ptr<DescribeSiteMonitorAttributeResponseBodySiteMonitors> siteMonitors_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
