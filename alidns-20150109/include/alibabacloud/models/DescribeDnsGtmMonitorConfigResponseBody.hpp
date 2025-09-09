// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeDnsGtmMonitorConfigResponseBody() = default ;
    DescribeDnsGtmMonitorConfigResponseBody(const DescribeDnsGtmMonitorConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorConfigResponseBody(DescribeDnsGtmMonitorConfigResponseBody &&) = default ;
    DescribeDnsGtmMonitorConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorConfigResponseBody() = default ;
    DescribeDnsGtmMonitorConfigResponseBody& operator=(const DescribeDnsGtmMonitorConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorConfigResponseBody& operator=(DescribeDnsGtmMonitorConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->evaluationCount_ != nullptr && this->interval_ != nullptr && this->ispCityNodes_ != nullptr && this->monitorConfigId_ != nullptr
        && this->monitorExtendInfo_ != nullptr && this->protocolType_ != nullptr && this->requestId_ != nullptr && this->timeout_ != nullptr && this->updateTime_ != nullptr
        && this->updateTimestamp_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes & ispCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes) };
    inline DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes ispCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setIspCityNodes(const DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setIspCityNodes(DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string monitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The time when the health check configuration was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the health check configuration was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The number of consecutive failures.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The health check interval. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The health check nodes.
    std::shared_ptr<DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes> ispCityNodes_ = nullptr;
    // The ID of the health check configuration.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // The extended information. The required parameters vary based on the value of ProtocolType.
    // 
    // *   HTTP or HTTPS
    // 
    //     *   port: the port that you want to check
    // 
    //     *   host: the host settings
    // 
    //     *   path: the URL path
    // 
    //     *   code: the response code. The health check result is deemed abnormal if the returned value is greater than the specified value.
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   sni: specifies whether to enable server name indication (SNI). This parameter is available only when ProtocolType is set to HTTPS. Valid values:
    // 
    //         *   true: enables SNI.
    //         *   false: disables SNI.
    // 
    //     *   nodeType: the type of the node for monitoring when the address pool type is domain name. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // *   PING:
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   packetNum: the number of ping packets
    // 
    //     *   packetLossRate: the loss rate of ping packets
    // 
    //     *   nodeType: the type of the node for monitoring when the address pool type is domain name. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // *   TCP
    // 
    //     *   port: the port that you want to check
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   nodeType: the type of the node for monitoring when the address pool type is domain name. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    std::shared_ptr<string> monitorExtendInfo_ = nullptr;
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   PING
    // *   TCP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timeout period. Unit: milliseconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The time when the health check configuration was updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The time when the health check configuration was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
