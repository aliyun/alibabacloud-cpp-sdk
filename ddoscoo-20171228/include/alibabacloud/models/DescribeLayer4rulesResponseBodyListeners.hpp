// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLayer4RulesResponseBodyListenersUsTimeout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RulesResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulesResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_TO_JSON(BakMode, bakMode_);
      DARABONBA_PTR_TO_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_TO_JSON(PayloadRuleEnable, payloadRuleEnable_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UsTimeout, usTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulesResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_FROM_JSON(BakMode, bakMode_);
      DARABONBA_PTR_FROM_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_FROM_JSON(PayloadRuleEnable, payloadRuleEnable_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UsTimeout, usTimeout_);
    };
    DescribeLayer4RulesResponseBodyListeners() = default ;
    DescribeLayer4RulesResponseBodyListeners(const DescribeLayer4RulesResponseBodyListeners &) = default ;
    DescribeLayer4RulesResponseBodyListeners(DescribeLayer4RulesResponseBodyListeners &&) = default ;
    DescribeLayer4RulesResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulesResponseBodyListeners() = default ;
    DescribeLayer4RulesResponseBodyListeners& operator=(const DescribeLayer4RulesResponseBodyListeners &) = default ;
    DescribeLayer4RulesResponseBodyListeners& operator=(DescribeLayer4RulesResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendPort_ != nullptr
        && this->bakMode_ != nullptr && this->currentIndex_ != nullptr && this->eip_ != nullptr && this->frontendPort_ != nullptr && this->instanceId_ != nullptr
        && this->isAutoCreate_ != nullptr && this->payloadRuleEnable_ != nullptr && this->protocol_ != nullptr && this->proxyEnable_ != nullptr && this->proxyStatus_ != nullptr
        && this->realServers_ != nullptr && this->remark_ != nullptr && this->usTimeout_ != nullptr; };
    // backendPort Field Functions 
    bool hasBackendPort() const { return this->backendPort_ != nullptr;};
    void deleteBackendPort() { this->backendPort_ = nullptr;};
    inline int32_t backendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
    inline DescribeLayer4RulesResponseBodyListeners& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


    // bakMode Field Functions 
    bool hasBakMode() const { return this->bakMode_ != nullptr;};
    void deleteBakMode() { this->bakMode_ = nullptr;};
    inline int32_t bakMode() const { DARABONBA_PTR_GET_DEFAULT(bakMode_, 0) };
    inline DescribeLayer4RulesResponseBodyListeners& setBakMode(int32_t bakMode) { DARABONBA_PTR_SET_VALUE(bakMode_, bakMode) };


    // currentIndex Field Functions 
    bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
    void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
    inline int32_t currentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
    inline DescribeLayer4RulesResponseBodyListeners& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline DescribeLayer4RulesResponseBodyListeners& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeLayer4RulesResponseBodyListeners& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLayer4RulesResponseBodyListeners& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAutoCreate Field Functions 
    bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
    void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
    inline bool isAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
    inline DescribeLayer4RulesResponseBodyListeners& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


    // payloadRuleEnable Field Functions 
    bool hasPayloadRuleEnable() const { return this->payloadRuleEnable_ != nullptr;};
    void deletePayloadRuleEnable() { this->payloadRuleEnable_ = nullptr;};
    inline int64_t payloadRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(payloadRuleEnable_, 0L) };
    inline DescribeLayer4RulesResponseBodyListeners& setPayloadRuleEnable(int64_t payloadRuleEnable) { DARABONBA_PTR_SET_VALUE(payloadRuleEnable_, payloadRuleEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLayer4RulesResponseBodyListeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // proxyEnable Field Functions 
    bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
    void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
    inline int32_t proxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0) };
    inline DescribeLayer4RulesResponseBodyListeners& setProxyEnable(int32_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeLayer4RulesResponseBodyListeners& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> realServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline DescribeLayer4RulesResponseBodyListeners& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DescribeLayer4RulesResponseBodyListeners& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeLayer4RulesResponseBodyListeners& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // usTimeout Field Functions 
    bool hasUsTimeout() const { return this->usTimeout_ != nullptr;};
    void deleteUsTimeout() { this->usTimeout_ = nullptr;};
    inline const Models::DescribeLayer4RulesResponseBodyListenersUsTimeout & usTimeout() const { DARABONBA_PTR_GET_CONST(usTimeout_, Models::DescribeLayer4RulesResponseBodyListenersUsTimeout) };
    inline Models::DescribeLayer4RulesResponseBodyListenersUsTimeout usTimeout() { DARABONBA_PTR_GET(usTimeout_, Models::DescribeLayer4RulesResponseBodyListenersUsTimeout) };
    inline DescribeLayer4RulesResponseBodyListeners& setUsTimeout(const Models::DescribeLayer4RulesResponseBodyListenersUsTimeout & usTimeout) { DARABONBA_PTR_SET_VALUE(usTimeout_, usTimeout) };
    inline DescribeLayer4RulesResponseBodyListeners& setUsTimeout(Models::DescribeLayer4RulesResponseBodyListenersUsTimeout && usTimeout) { DARABONBA_PTR_SET_RVALUE(usTimeout_, usTimeout) };


  protected:
    // The origin server port.
    std::shared_ptr<int32_t> backendPort_ = nullptr;
    // The origin mode. Values:
    // 
    // - **0**: Indicates the default origin mode.
    // - **1**: Indicates the primary/backup origin mode.
    std::shared_ptr<int32_t> bakMode_ = nullptr;
    // The currently effective origin server type. Values:
    // 
    // - **1**: Indicates that the primary origin server settings are in effect (DDoS protection forwards business traffic to the primary origin server IP address).
    // - **2**: Indicates that the backup origin server settings are in effect (DDoS protection forwards business traffic to the backup origin server IP address).
    std::shared_ptr<int32_t> currentIndex_ = nullptr;
    // The IP address of the DDoS protection instance.
    std::shared_ptr<string> eip_ = nullptr;
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the DDoS protection instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the rule was automatically created. Values:
    // 
    // - **true**: Indicates that the rule was automatically created by DDoS protection.
    // - **false**: Indicates that the rule was manually created by you.
    std::shared_ptr<bool> isAutoCreate_ = nullptr;
    // Payload rule module switch. Values:
    // 
    // - 1: Enabled
    // - 0: Disabled
    std::shared_ptr<int64_t> payloadRuleEnable_ = nullptr;
    // The type of forwarding protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // Traffic diversion switch. Values:
    // - **0** Off.
    // - **1** On.
    std::shared_ptr<int32_t> proxyEnable_ = nullptr;
    // Traffic diversion status. Values:
    // 
    // - on: Diversion is effective
    // - off: Diversion is ineffective
    std::shared_ptr<string> proxyStatus_ = nullptr;
    // The list of origin server IP addresses.
    std::shared_ptr<vector<string>> realServers_ = nullptr;
    // The remarks for the port forwarding rule.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<Models::DescribeLayer4RulesResponseBodyListenersUsTimeout> usTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
