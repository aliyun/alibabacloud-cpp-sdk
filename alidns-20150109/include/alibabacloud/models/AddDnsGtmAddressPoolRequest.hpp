// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDnsGtmAddressPoolRequestAddr.hpp>
#include <alibabacloud/models/AddDnsGtmAddressPoolRequestIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsGtmAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddDnsGtmAddressPoolRequest() = default ;
    AddDnsGtmAddressPoolRequest(const AddDnsGtmAddressPoolRequest &) = default ;
    AddDnsGtmAddressPoolRequest(AddDnsGtmAddressPoolRequest &&) = default ;
    AddDnsGtmAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmAddressPoolRequest() = default ;
    AddDnsGtmAddressPoolRequest& operator=(const AddDnsGtmAddressPoolRequest &) = default ;
    AddDnsGtmAddressPoolRequest& operator=(AddDnsGtmAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->evaluationCount_ == nullptr && return this->instanceId_ == nullptr && return this->interval_ == nullptr && return this->ispCityNode_ == nullptr && return this->lang_ == nullptr
        && return this->lbaStrategy_ == nullptr && return this->monitorExtendInfo_ == nullptr && return this->monitorStatus_ == nullptr && return this->name_ == nullptr && return this->protocolType_ == nullptr
        && return this->timeout_ == nullptr && return this->type_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<AddDnsGtmAddressPoolRequestAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<AddDnsGtmAddressPoolRequestAddr>) };
    inline vector<AddDnsGtmAddressPoolRequestAddr> addr() { DARABONBA_PTR_GET(addr_, vector<AddDnsGtmAddressPoolRequestAddr>) };
    inline AddDnsGtmAddressPoolRequest& setAddr(const vector<AddDnsGtmAddressPoolRequestAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline AddDnsGtmAddressPoolRequest& setAddr(vector<AddDnsGtmAddressPoolRequestAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline AddDnsGtmAddressPoolRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDnsGtmAddressPoolRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddDnsGtmAddressPoolRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<AddDnsGtmAddressPoolRequestIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<AddDnsGtmAddressPoolRequestIspCityNode>) };
    inline vector<AddDnsGtmAddressPoolRequestIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<AddDnsGtmAddressPoolRequestIspCityNode>) };
    inline AddDnsGtmAddressPoolRequest& setIspCityNode(const vector<AddDnsGtmAddressPoolRequestIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline AddDnsGtmAddressPoolRequest& setIspCityNode(vector<AddDnsGtmAddressPoolRequestIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string lbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline AddDnsGtmAddressPoolRequest& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string monitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline AddDnsGtmAddressPoolRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline AddDnsGtmAddressPoolRequest& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddDnsGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AddDnsGtmAddressPoolRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AddDnsGtmAddressPoolRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddDnsGtmAddressPoolRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The address pools.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddDnsGtmAddressPoolRequestAddr>> addr_ = nullptr;
    // The number of consecutive failures.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The health check interval. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The nodes for monitoring.
    std::shared_ptr<vector<AddDnsGtmAddressPoolRequestIspCityNode>> ispCityNode_ = nullptr;
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // The load balancing policy of the address pool. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    // 
    // This parameter is required.
    std::shared_ptr<string> lbaStrategy_ = nullptr;
    // The extended information. The required parameters vary based on the health check protocol.
    // 
    // *   HTTP or HTTPS:
    // 
    //     *   port: the port that you want to check
    // 
    //     *   host: the host settings
    // 
    //     *   path: the URL
    // 
    //     *   code: the return code. The health check result is deemed abnormal if the returned value is greater than the specified value. Valid values: 400 and 500.
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   sni: specifies whether to enable Server Name Indication (SNI). This parameter is available only when ProtocolType is set to HTTPS. Valid values:
    // 
    //         *   true: enables SNI.
    //         *   other: disables SNI.
    // 
    //     *   nodeType: the type of the node for monitoring when Type is set to DOMAIN. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // *   ping:
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
    // *   TCP:
    // 
    //     *   port: the port that you want to check
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   nodeType: the type of the node for monitoring when Type is set to DOMAIN. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    std::shared_ptr<string> monitorExtendInfo_ = nullptr;
    // Specifies whether to enable the health check feature. If you set this parameter to OPEN, the system verifies the health check configurations. If you set this parameter to CLOSE, the system discards the health check configurations. Default value: CLOSE. Valid values:
    // 
    // *   OPEN: enables the health check feature.
    // *   CLOSE: disables the health check feature.
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // The name of the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   PING
    // *   TCP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The timeout period. Unit: milliseconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The type of the address pool. Valid values:
    // 
    // *   IPV4: IPv4 address
    // *   IPV6: IPv6 address
    // *   DOMAIN: domain name
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
