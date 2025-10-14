// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGtmAddressPoolRequestAddr.hpp>
#include <alibabacloud/models/AddGtmAddressPoolRequestIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddGtmAddressPoolRequest() = default ;
    AddGtmAddressPoolRequest(const AddGtmAddressPoolRequest &) = default ;
    AddGtmAddressPoolRequest(AddGtmAddressPoolRequest &&) = default ;
    AddGtmAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmAddressPoolRequest() = default ;
    AddGtmAddressPoolRequest& operator=(const AddGtmAddressPoolRequest &) = default ;
    AddGtmAddressPoolRequest& operator=(AddGtmAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->evaluationCount_ == nullptr && return this->instanceId_ == nullptr && return this->interval_ == nullptr && return this->ispCityNode_ == nullptr && return this->lang_ == nullptr
        && return this->minAvailableAddrNum_ == nullptr && return this->monitorExtendInfo_ == nullptr && return this->monitorStatus_ == nullptr && return this->name_ == nullptr && return this->protocolType_ == nullptr
        && return this->timeout_ == nullptr && return this->type_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<AddGtmAddressPoolRequestAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<AddGtmAddressPoolRequestAddr>) };
    inline vector<AddGtmAddressPoolRequestAddr> addr() { DARABONBA_PTR_GET(addr_, vector<AddGtmAddressPoolRequestAddr>) };
    inline AddGtmAddressPoolRequest& setAddr(const vector<AddGtmAddressPoolRequestAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline AddGtmAddressPoolRequest& setAddr(vector<AddGtmAddressPoolRequestAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline AddGtmAddressPoolRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddGtmAddressPoolRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddGtmAddressPoolRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<AddGtmAddressPoolRequestIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<AddGtmAddressPoolRequestIspCityNode>) };
    inline vector<AddGtmAddressPoolRequestIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<AddGtmAddressPoolRequestIspCityNode>) };
    inline AddGtmAddressPoolRequest& setIspCityNode(const vector<AddGtmAddressPoolRequestIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline AddGtmAddressPoolRequest& setIspCityNode(vector<AddGtmAddressPoolRequestIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // minAvailableAddrNum Field Functions 
    bool hasMinAvailableAddrNum() const { return this->minAvailableAddrNum_ != nullptr;};
    void deleteMinAvailableAddrNum() { this->minAvailableAddrNum_ = nullptr;};
    inline int32_t minAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAddrNum_, 0) };
    inline AddGtmAddressPoolRequest& setMinAvailableAddrNum(int32_t minAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(minAvailableAddrNum_, minAvailableAddrNum) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string monitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline AddGtmAddressPoolRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline AddGtmAddressPoolRequest& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AddGtmAddressPoolRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AddGtmAddressPoolRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGtmAddressPoolRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The address pools.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddGtmAddressPoolRequestAddr>> addr_ = nullptr;
    // The number of consecutive failures.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The ID of the GTM instance for which you want to create an address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The health check interval. Unit: seconds. Set the value to 60.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The monitored nodes.
    std::shared_ptr<vector<AddGtmAddressPoolRequestIspCityNode>> ispCityNode_ = nullptr;
    // The language of the values of specific response parameters.
    std::shared_ptr<string> lang_ = nullptr;
    // The minimum number of available addresses in the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> minAvailableAddrNum_ = nullptr;
    // The extended information. The required parameters vary based on the value of ProtocolType.
    // 
    // When ProtocolType is set to HTTP or HTTPS:
    // 
    // *   port: the port that you want to check
    // *   failureRate: the failure rate
    // *   code: the return code. The health check result is deemed abnormal if the returned value is greater than the specified value. Valid values: 400 and 500.
    // *   host: the host settings
    // *   path: the URL path
    // 
    // When ProtocolType is set to PING:
    // 
    // *   packetNum: the number of ping packets
    // *   packetLossRate: the packet loss rate
    // *   failureRate: the failure rate
    // 
    // When ProtocolType is set to TCP:
    // 
    // *   port: the port that you want to check
    // *   failureRate: the failure rate
    std::shared_ptr<string> monitorExtendInfo_ = nullptr;
    // Specifies whether to enable the health check. Valid values:
    // 
    // *   **OPEN**: enables the health check.
    // *   **CLOSE**: disables the health check. This is the default value.
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // The name of the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   Ping
    // *   TCP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The timeout period. Unit: milliseconds. Valid values: 2000, 3000, 5000, and 10000.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The type of the address pool. Valid values:
    // 
    // *   **IP**: IPv4 address
    // *   **DOMAIN**: domain name
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
