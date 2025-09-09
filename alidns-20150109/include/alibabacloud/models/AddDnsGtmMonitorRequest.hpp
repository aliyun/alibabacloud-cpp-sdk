// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDnsGtmMonitorRequestIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsGtmMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    AddDnsGtmMonitorRequest() = default ;
    AddDnsGtmMonitorRequest(const AddDnsGtmMonitorRequest &) = default ;
    AddDnsGtmMonitorRequest(AddDnsGtmMonitorRequest &&) = default ;
    AddDnsGtmMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmMonitorRequest() = default ;
    AddDnsGtmMonitorRequest& operator=(const AddDnsGtmMonitorRequest &) = default ;
    AddDnsGtmMonitorRequest& operator=(AddDnsGtmMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPoolId_ != nullptr
        && this->evaluationCount_ != nullptr && this->interval_ != nullptr && this->ispCityNode_ != nullptr && this->lang_ != nullptr && this->monitorExtendInfo_ != nullptr
        && this->protocolType_ != nullptr && this->timeout_ != nullptr; };
    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline AddDnsGtmMonitorRequest& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline AddDnsGtmMonitorRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddDnsGtmMonitorRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<AddDnsGtmMonitorRequestIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<AddDnsGtmMonitorRequestIspCityNode>) };
    inline vector<AddDnsGtmMonitorRequestIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<AddDnsGtmMonitorRequestIspCityNode>) };
    inline AddDnsGtmMonitorRequest& setIspCityNode(const vector<AddDnsGtmMonitorRequestIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline AddDnsGtmMonitorRequest& setIspCityNode(vector<AddDnsGtmMonitorRequestIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsGtmMonitorRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string monitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline AddDnsGtmMonitorRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AddDnsGtmMonitorRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AddDnsGtmMonitorRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The maximum number of consecutive exceptions detected. If the number of consecutive exceptions detected reaches the maximum number, the application service is deemed abnormal.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The health check interval. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The monitored nodes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddDnsGtmMonitorRequestIspCityNode>> ispCityNode_ = nullptr;
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
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
    //     *   nodeType: the type of the node for monitoring when Type is set to DOMAIN. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // *   PING
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   packetNum: the number of ping packets
    // 
    //     *   packetLossRate: the loss rate of ping packets
    // 
    //     *   nodeType: the type of the node for monitoring when Type is set to DOMAIN. Valid values:
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
    //     *   nodeType: the type of the node for monitoring when Type is set to DOMAIN. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorExtendInfo_ = nullptr;
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   PING
    // *   TCP
    // 
    // This parameter is required.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The timeout period. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
