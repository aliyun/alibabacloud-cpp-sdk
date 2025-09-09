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
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->clientToken_ != nullptr && this->evaluationCount_ != nullptr && this->extendInfo_ != nullptr && this->failureRate_ != nullptr && this->interval_ != nullptr
        && this->ispCityNodesShrink_ != nullptr && this->name_ != nullptr && this->templateId_ != nullptr && this->timeout_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline int32_t failureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setFailureRate(int32_t failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNodesShrink Field Functions 
    bool hasIspCityNodesShrink() const { return this->ispCityNodesShrink_ != nullptr;};
    void deleteIspCityNodesShrink() { this->ispCityNodesShrink_ = nullptr;};
    inline string ispCityNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(ispCityNodesShrink_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setIspCityNodesShrink(string ispCityNodesShrink) { DARABONBA_PTR_SET_VALUE(ispCityNodesShrink_, ispCityNodesShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateCloudGtmMonitorTemplateShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The number of retries. The system will only judge the application service as abnormal after consecutive monitoring failures to prevent inaccurate monitoring results due to momentary network fluctuations or other reasons. Available retry options are:
    // - 1 
    // - 2 
    // - 3
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The extended information. The value of this parameter is a JSON string. The required parameters vary based on the health check protocol.
    // 
    // *   HTTP or HTTPS:
    // 
    //     host: the Host field of an HTTP or HTTPS request header during an HTTP or HTTPS health check. The parameter value indicates the HTTP website that you want to visit. By default, the value is the primary domain name. You can change the value based on your business requirements.
    // 
    //     path: the URL for HTTP or HTTPS health checks. Default value: /.
    // 
    //     code: the alert threshold. During an HTTP or HTTPS health check, the system checks whether a web server functions as expected based on the status code that is returned from the web server. If the returned status code is greater than the specified threshold, the corresponding application service address is deemed abnormal. Valid values:
    // 
    //     *   400: specifies an invalid request. If an HTTP or HTTPS request contains invalid request parameters, a web server returns a status code that is greater than 400. You must set path to an exact URL if you set code to 400.
    //     *   500: specifies a server error. If some exceptions occur on a web server, the web server returns a status code that is greater than 500. This value is used by default.
    // 
    //     sni: specifies whether to enable Server Name Indication (SNI). This parameter is used only when the health check protocol is HTTPS. SNI is an extension to the Transport Layer Security (TLS) protocol, which allows a client to specify the host to be connected when the client sends a TLS handshake request. TLS handshakes occur before any data of HTTP requests is sent. Therefore, SNI enables servers to identify the services that clients are attempting to access before certificates are sent. This allows the servers to present correct certificates to the clients. Valid values:
    // 
    //     *   true: enables SNI.
    //     *   false: disables SNI.
    // 
    //     followRedirect: specifies whether to follow 3XX redirects. Valid values:
    // 
    //     *   true: follows 3XX redirects. You are redirected to the destination address if a 3XX status code such as 301, 302, 303, 307, or 308 is returned.
    //     *   false: does not follow 3XX redirects.
    // 
    // *   ping:
    // 
    //     packetNum: the total number of Internet Control Message Protocol (ICMP) packets that are sent to the address for each ping-based health check. Valid values: 20, 50, and 100.
    // 
    //     packetLossRate: the ICMP packet loss rate for each ping-based health check. The packet loss rate in a health check can be calculated by using the following formula: Packet loss rate in a health check = (Number of lost packets/Total number of sent ICMP packets) × 100%. If the packet loss rate reaches the threshold, an alert is triggered. Valid values: 10, 30, 40, 80, 90, and 100.
    std::shared_ptr<string> extendInfo_ = nullptr;
    // Percentage of selected node probe failures (%), that is, the percentage of abnormal detection points among the total detection points. When the failure ratio exceeds the set threshold, the service address is judged as abnormal. The available failure ratio thresholds are:
    // - 20
    // - 50
    // - 80
    // - 100
    std::shared_ptr<int32_t> failureRate_ = nullptr;
    // The time interval (in seconds) for each health check probe. By default, it probes every 60 seconds. The minimum supported interval for health checks is 15 seconds, available for flagship edition instances.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The health check nodes. You can call the [ListCloudGtmMonitorNodes](https://help.aliyun.com/document_detail/2797327.html) operation to obtain the health check nodes.
    std::shared_ptr<string> ispCityNodesShrink_ = nullptr;
    // The name of the health check probe template, which is generally recommended to be distinguishable and memorable for configuration personnel, ideally indicating the health check protocol for easier identification.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the health check template that you want to modify. This ID uniquely identifies the health check template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // Probe timeout (in milliseconds), data packets not returned within the timeout period are considered as health check timeouts:
    // - 2000
    // - 3000
    // - 5000
    // - 10000
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
