// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate() = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate(const ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate &) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate(ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate &&) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate() = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& operator=(const ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate &) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& operator=(ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->evaluationCount_ != nullptr && this->extendInfo_ != nullptr && this->failureRate_ != nullptr && this->interval_ != nullptr
        && this->ipVersion_ != nullptr && this->ispCityNodes_ != nullptr && this->name_ != nullptr && this->protocol_ != nullptr && this->remark_ != nullptr
        && this->templateId_ != nullptr && this->timeout_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline int32_t failureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setFailureRate(int32_t failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes & ispCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes) };
    inline Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes ispCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setIspCityNodes(const Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setIspCityNodes(Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // Health check template creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Health check template creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The number of retries. The system will only judge the application service as abnormal after consecutive monitoring failures to prevent inaccurate monitoring results due to momentary network fluctuations or other reasons. Available retry options are:
    // - 1 - 2 - 3
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The extended information. The value of this parameter is a JSON string. The required parameters vary based on the health check protocol.
    // 
    // *   HTTP or HTTPS:
    // 
    //     **host**: the Host field of an HTTP or HTTPS request header during an HTTP or HTTPS health check. The parameter value indicates the HTTP website that you want to visit. By default, the value is the primary domain name. You can change the value based on your business requirements.
    // 
    //     **path**: the URL for HTTP or HTTPS health checks. Default value: /.
    // 
    //     **code**: the alert threshold. During an HTTP or HTTPS health check, the system checks whether a web server functions as expected based on the status code that is returned from the web server. If the returned status code is greater than the specified threshold, the corresponding application service address is deemed abnormal. Valid values:
    // 
    //     *   400: indicates an invalid request. If an HTTP or HTTPS request contains invalid request parameters, a web server returns a status code that is greater than 400. You must specify an exact URL for path if you set code to 400.
    //     *   500: indicates a server error. If some exceptions occur on a web server, the web server returns a status code that is greater than 500. This value is used by default.
    // 
    //     **sni**: indicates whether Server Name Indication (SNI) is enabled. This parameter is used only when the health check protocol is HTTPS. SNI is an extension to the Transport Layer Security (TLS) protocol, which allows a client to specify the host to be connected when the client sends a TLS handshake request. TLS handshakes occur before any data of HTTP requests is sent. Therefore, SNI enables servers to identify the services that clients are attempting to access before certificates are sent. This allows the servers to present correct certificates to the clients. Valid values:
    // 
    //     *   true: SNI is enabled.
    //     *   false: SNI is disabled.
    // 
    //     **followRedirect**: indicates whether 3XX redirects are followed. Valid values:
    // 
    //     *   true: 3XX redirects are followed. You are redirected to the destination address if a 3XX status code such as 301, 302, 303, 307, or 308 is returned.
    //     *   false: 3XX redirects are not followed.
    // 
    // *   ping:
    // 
    //     **packetNum**: the total number of Internet Control Message Protocol (ICMP) packets that are sent to the address for each ping-based health check. Valid values: 20, 50, and 100.
    // 
    //     **packetLossRate**: the ICMP packet loss rate for each ping-based health check. The packet loss rate in a health check can be calculated by using the following formula: Packet loss rate in a health check = (Number of lost packets/Total number of sent ICMP packets) × 100%. If the packet loss rate reaches the threshold, an alert is triggered. Valid values: 10, 30, 40, 80, 90, and 100.
    std::shared_ptr<string> extendInfo_ = nullptr;
    // Percentage of selected node probe failures (%), that is, the percentage of unhealthy check points among total probe points. When the failure ratio exceeds the set threshold, the service address is judged as abnormal. The available failure ratio thresholds are:
    // - 20
    // - 50
    // - 80
    // - 100
    std::shared_ptr<int32_t> failureRate_ = nullptr;
    // The time interval between each check (in seconds), with a default of probing once every minute. The minimum supported health check interval is 15 seconds, available for flagship edition instances.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The IP address type of health check nodes. Valid values:
    // 
    // *   IPv4: applicable when health checks are performed on IPv4 addresses.
    // *   IPv6: applicable when health checks are performed on IPv6 addresses.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The health check nodes. You can call the [ListCloudGtmMonitorNodes](~~ListCloudGtmMonitorNodes~~) operation to obtain the health check nodes.
    std::shared_ptr<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes> ispCityNodes_ = nullptr;
    // The name of the health check probe template, generally for the convenience of configuration personnel to distinguish and remember.
    std::shared_ptr<string> name_ = nullptr;
    // Protocol types for initiating probes to the target IP address:
    // - ping
    // - tcp
    // - http
    // - https
    std::shared_ptr<string> protocol_ = nullptr;
    // Remarks for the health check template.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the health check template. This ID uniquely identifies the health check template.
    std::shared_ptr<string> templateId_ = nullptr;
    // Probe timeout (in milliseconds), data packets not returned within the timeout period are deemed as health check timeouts:
    // - 2000
    // - 3000
    // - 5000
    // - 10000
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // Last modification time of the health check template.
    std::shared_ptr<string> updateTime_ = nullptr;
    // Health check template configuration modification time (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
