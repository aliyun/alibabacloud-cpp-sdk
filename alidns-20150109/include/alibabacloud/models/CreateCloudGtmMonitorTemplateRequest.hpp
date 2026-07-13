// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDGTMMONITORTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDGTMMONITORTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateCloudGtmMonitorTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudGtmMonitorTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudGtmMonitorTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CreateCloudGtmMonitorTemplateRequest() = default ;
    CreateCloudGtmMonitorTemplateRequest(const CreateCloudGtmMonitorTemplateRequest &) = default ;
    CreateCloudGtmMonitorTemplateRequest(CreateCloudGtmMonitorTemplateRequest &&) = default ;
    CreateCloudGtmMonitorTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudGtmMonitorTemplateRequest() = default ;
    CreateCloudGtmMonitorTemplateRequest& operator=(const CreateCloudGtmMonitorTemplateRequest &) = default ;
    CreateCloudGtmMonitorTemplateRequest& operator=(CreateCloudGtmMonitorTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      };
      IspCityNodes() = default ;
      IspCityNodes(const IspCityNodes &) = default ;
      IspCityNodes(IspCityNodes &&) = default ;
      IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspCityNodes() = default ;
      IspCityNodes& operator=(const IspCityNodes &) = default ;
      IspCityNodes& operator=(IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->ispCode_ == nullptr; };
      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
      inline IspCityNodes& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // ispCode Field Functions 
      bool hasIspCode() const { return this->ispCode_ != nullptr;};
      void deleteIspCode() { this->ispCode_ = nullptr;};
      inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
      inline IspCityNodes& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    protected:
      // The city code for the detection point.
      shared_ptr<string> cityCode_ {};
      // The ISP code for the detection point.
      shared_ptr<string> ispCode_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clientToken_ == nullptr && this->evaluationCount_ == nullptr && this->extendInfo_ == nullptr && this->failureRate_ == nullptr && this->interval_ == nullptr
        && this->ipVersion_ == nullptr && this->ispCityNodes_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->timeout_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateCloudGtmMonitorTemplateRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCloudGtmMonitorTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline CreateCloudGtmMonitorTemplateRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline CreateCloudGtmMonitorTemplateRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline int32_t getFailureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0) };
    inline CreateCloudGtmMonitorTemplateRequest& setFailureRate(int32_t failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline CreateCloudGtmMonitorTemplateRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateCloudGtmMonitorTemplateRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes> & getIspCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes>) };
    inline vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes> getIspCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes>) };
    inline CreateCloudGtmMonitorTemplateRequest& setIspCityNodes(const vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes> & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline CreateCloudGtmMonitorTemplateRequest& setIspCityNodes(vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes> && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCloudGtmMonitorTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateCloudGtmMonitorTemplateRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateCloudGtmMonitorTemplateRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The language of the response. Valid values:
    // 
    // - zh-CN: Chinese.
    // 
    // - en-US: English. This is the default value.
    shared_ptr<string> acceptLanguage_ {};
    // The client token that is used to ensure the idempotence of the request. Make sure that the client token is unique for each request. The token can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The number of consecutive failures that must occur before the system considers the application service unhealthy. This setting helps prevent false alarms caused by transient issues such as network jitter. Valid values:
    // 
    // - 1
    // 
    // - 2
    // 
    // - 3
    // 
    // This parameter is required.
    shared_ptr<int32_t> evaluationCount_ {};
    // The extended information in a JSON string. The parameters vary based on the protocol.
    // 
    // - http(s):
    // 
    //   **host**: The Host field in the header of the HTTP or HTTPS request. This field identifies the website that you want to access. The default value is the primary domain name. If the destination website uses a specific host, change this value as needed.
    // 
    //   **path**: The URL path for the HTTP or HTTPS health check. The default value is "/".
    // 
    //   **code**: For an HTTP or HTTPS health check, the system determines whether the web server is working correctly based on the return code. If the return code is greater than this threshold, the system considers the application service unhealthy.
    // 
    //   - 400: Bad Request. If an HTTP or HTTPS request contains incorrect parameters, the web server returns a code greater than 400. If you set the threshold to 400, make sure that you specify the exact URL path.
    // 
    //   - 500: Server Error. If an exception occurs on the web server, it returns a code greater than 500. The default threshold is 500.
    // 
    //   **sni**: Specifies whether to enable Server Name Indication (SNI). This parameter applies only to the HTTPS protocol. SNI is a Transport Layer Security (TLS) extension that allows a client to specify the hostname to connect to at the start of the TLS handshake. This allows the server to present the correct certificate for the requested service.
    // 
    //   - true: Enable SNI.
    // 
    //   - false: Disable SNI.
    // 
    //   **followRedirect**: Specifies whether to follow 3xx redirects.
    // 
    //   - true: Follows the redirect if the detection point receives a 3xx status code, such as 301, 302, 303, 307, or 308.
    // 
    //   - false: Does not follow the redirect.
    // 
    // - ping:
    // 
    //   **packetNum**: The number of ICMP packets to send for each ping health check. Valid values: 20, 50, and 100.
    // 
    //   **packetLossRate**: The packet loss rate that triggers an alarm. For each ping health check, the system calculates the packet loss rate based on the sent ICMP packets. Packet loss rate = (Number of lost packets / Total number of sent ICMP packets) × 100%. An alarm is triggered if the packet loss rate reaches this threshold. Valid values: 10, 30, 40, 80, 90, and 100.
    shared_ptr<string> extendInfo_ {};
    // The failure rate threshold. An endpoint is considered unhealthy if the percentage of unhealthy detection points exceeds this value. Valid values:
    // 
    // - 20
    // 
    // - 50
    // 
    // - 80
    // 
    // - 100
    // 
    // This parameter is required.
    shared_ptr<int32_t> failureRate_ {};
    // The health check interval in seconds. The default value is 60. The minimum interval is 15 seconds, which is available only for Ultimate Edition instances.
    // 
    // This parameter is required.
    shared_ptr<int32_t> interval_ {};
    // The IP address type for health checks.
    // 
    // - IPv4: The destination address is an IPv4 address.
    // 
    // - IPv6: The destination address is an IPv6 address.
    // 
    // This parameter is required.
    shared_ptr<string> ipVersion_ {};
    // A list of detection points. For more information, see [ListCloudGtmMonitorNodes](https://help.aliyun.com/document_detail/2797349.html).
    // 
    // This parameter is required.
    shared_ptr<vector<CreateCloudGtmMonitorTemplateRequest::IspCityNodes>> ispCityNodes_ {};
    // The name of the health check template. Name the template to easily identify the health check protocol.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The protocol for health checks on the destination IP address.
    // 
    // - ping
    // 
    // - tcp
    // 
    // - http
    // 
    // - https
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The health check timeout in milliseconds. If a packet is not returned within the timeout period, the health check is considered to have timed out. Valid values:
    // 
    // - 2000
    // 
    // - 3000
    // 
    // - 5000
    // 
    // - 10000
    // 
    // This parameter is required.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
