// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMMONITORTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMMONITORTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmMonitorTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmMonitorTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodesShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmMonitorTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodesShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateCloudGtmMonitorTemplateShrinkRequest() = default ;
    UpdateCloudGtmMonitorTemplateShrinkRequest(const UpdateCloudGtmMonitorTemplateShrinkRequest &) = default ;
    UpdateCloudGtmMonitorTemplateShrinkRequest(UpdateCloudGtmMonitorTemplateShrinkRequest &&) = default ;
    UpdateCloudGtmMonitorTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmMonitorTemplateShrinkRequest() = default ;
    UpdateCloudGtmMonitorTemplateShrinkRequest& operator=(const UpdateCloudGtmMonitorTemplateShrinkRequest &) = default ;
    UpdateCloudGtmMonitorTemplateShrinkRequest& operator=(UpdateCloudGtmMonitorTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clientToken_ == nullptr && this->evaluationCount_ == nullptr && this->extendInfo_ == nullptr && this->failureRate_ == nullptr && this->interval_ == nullptr
        && this->ispCityNodesShrink_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr && this->timeout_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline int32_t getFailureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setFailureRate(int32_t failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNodesShrink Field Functions 
    bool hasIspCityNodesShrink() const { return this->ispCityNodesShrink_ != nullptr;};
    void deleteIspCityNodesShrink() { this->ispCityNodesShrink_ = nullptr;};
    inline string getIspCityNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(ispCityNodesShrink_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setIspCityNodesShrink(string ispCityNodesShrink) { DARABONBA_PTR_SET_VALUE(ispCityNodesShrink_, ispCityNodesShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The language of the response. Valid values:
    // 
    // - zh-CN: Chinese
    // 
    // - en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // A client-generated token that is used to ensure the idempotence of the request. Make sure that the token is unique for each request. The token can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The number of consecutive health check failures that must occur before an application service is considered abnormal. This helps prevent false alarms caused by transient issues such as network jitter. Valid values:
    // 
    // - 1
    // 
    // - 2
    // 
    // - 3
    shared_ptr<int32_t> evaluationCount_ {};
    // The extended information in a JSON string. The parameters vary based on the health check protocol.
    // 
    // - HTTP and HTTPS:
    // 
    //   host: When you perform an HTTP or HTTPS health check, this parameter specifies the Host field in the HTTP request header. It identifies the target website. The default value is the primary domain name. If the target website has specific requirements for the Host field, modify this parameter as needed.
    // 
    //   path: The path for the HTTP or HTTPS health check. The default value is /.
    // 
    //   code: When you perform an HTTP or HTTPS health check, the system uses the return code from the web server to determine its status. If the return code exceeds the specified threshold, the application service is considered abnormal.
    // 
    //   - 400: Bad Request. If an HTTP or HTTPS request contains invalid parameters, the web server returns a code greater than 400. If you set the threshold to 400, make sure that you specify the exact URL path.
    // 
    //   - 500: Server Error. If the web server encounters an error, it returns a code greater than 500. The default threshold is 500.
    // 
    //   sni: Specifies whether to enable Server Name Indication (SNI). This parameter is used only for HTTPS health checks. SNI is an extension to the Transport Layer Security (TLS) protocol. It allows a client to specify the hostname it is trying to connect to at the start of the TLS handshake. Because the TLS handshake occurs before any HTTP data is sent, SNI allows the server to know which service the client is trying to access before sending the certificate. This enables the server to present the correct certificate to the client.
    // 
    //   - true: Enable SNI.
    // 
    //   - false: Disable SNI.
    // 
    //   followRedirect: Specifies whether to follow 3xx redirections.
    // 
    //   - true: Follow the redirection if the detection point receives a 3xx status code (301, 302, 303, 307, or 308).
    // 
    //   - false: Do not follow the redirection.
    // 
    // - Ping:
    // 
    //   packetNum: The number of ICMP packets to send for each ping health check. Valid values: 20, 50, and 100.
    // 
    //   packetLossRate: The packet loss rate that triggers an alarm. For each ping health check, the system calculates the packet loss rate. Packet loss rate = (Number of lost packets / Total number of sent ICMP packets) × 100%. An alarm is triggered if the packet loss rate reaches this threshold. Valid values: 10, 30, 40, 80, 90, and 100.
    shared_ptr<string> extendInfo_ {};
    // The percentage of failed detection points. An endpoint is considered abnormal if the percentage of detection points that fail the health check exceeds this threshold. Valid values:
    // 
    // - 20
    // 
    // - 50
    // 
    // - 80
    // 
    // - 100
    shared_ptr<int32_t> failureRate_ {};
    // The interval between health checks in seconds. The default value is 60. The minimum interval is 15 seconds. This feature is available only for Ultimate Edition instances.
    shared_ptr<int32_t> interval_ {};
    // The list of detection points. Call [ListCloudGtmMonitorNodes](https://help.aliyun.com/document_detail/2797327.html) to obtain the information.
    shared_ptr<string> ispCityNodesShrink_ {};
    // The name of the health check template. For easy identification, name the template based on its health check protocol.
    shared_ptr<string> name_ {};
    // The unique ID of the health check template that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The timeout period for a health check in milliseconds. If a packet is not returned within the specified timeout period, the health check fails. Valid values:
    // 
    // - 2000
    // 
    // - 3000
    // 
    // - 5000
    // 
    // - 10000
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
