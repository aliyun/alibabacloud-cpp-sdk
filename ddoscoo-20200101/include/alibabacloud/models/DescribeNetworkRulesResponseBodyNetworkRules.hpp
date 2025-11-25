// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULESRESPONSEBODYNETWORKRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULESRESPONSEBODYNETWORKRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRulesResponseBodyNetworkRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRulesResponseBodyNetworkRules& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_TO_JSON(PayloadRuleEnable, payloadRuleEnable_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRulesResponseBodyNetworkRules& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_FROM_JSON(PayloadRuleEnable, payloadRuleEnable_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DescribeNetworkRulesResponseBodyNetworkRules() = default ;
    DescribeNetworkRulesResponseBodyNetworkRules(const DescribeNetworkRulesResponseBodyNetworkRules &) = default ;
    DescribeNetworkRulesResponseBodyNetworkRules(DescribeNetworkRulesResponseBodyNetworkRules &&) = default ;
    DescribeNetworkRulesResponseBodyNetworkRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRulesResponseBodyNetworkRules() = default ;
    DescribeNetworkRulesResponseBodyNetworkRules& operator=(const DescribeNetworkRulesResponseBodyNetworkRules &) = default ;
    DescribeNetworkRulesResponseBodyNetworkRules& operator=(DescribeNetworkRulesResponseBodyNetworkRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendPort_ == nullptr
        && return this->frontendPort_ == nullptr && return this->instanceId_ == nullptr && return this->isAutoCreate_ == nullptr && return this->payloadRuleEnable_ == nullptr && return this->protocol_ == nullptr
        && return this->proxyEnable_ == nullptr && return this->proxyStatus_ == nullptr && return this->realServers_ == nullptr && return this->remark_ == nullptr; };
    // backendPort Field Functions 
    bool hasBackendPort() const { return this->backendPort_ != nullptr;};
    void deleteBackendPort() { this->backendPort_ = nullptr;};
    inline int32_t backendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAutoCreate Field Functions 
    bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
    void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
    inline bool isAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


    // payloadRuleEnable Field Functions 
    bool hasPayloadRuleEnable() const { return this->payloadRuleEnable_ != nullptr;};
    void deletePayloadRuleEnable() { this->payloadRuleEnable_ = nullptr;};
    inline int64_t payloadRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(payloadRuleEnable_, 0L) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setPayloadRuleEnable(int64_t payloadRuleEnable) { DARABONBA_PTR_SET_VALUE(payloadRuleEnable_, payloadRuleEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // proxyEnable Field Functions 
    bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
    void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
    inline int64_t proxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0L) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setProxyEnable(int64_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> realServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeNetworkRulesResponseBodyNetworkRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The port of the origin server.
    std::shared_ptr<int32_t> backendPort_ = nullptr;
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the port forwarding rule is automatically created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isAutoCreate_ = nullptr;
    // Indicates whether the payload filtering rule is enabled. Valid values:
    // 
    // *   1: enabled.
    // *   0: disabled.
    std::shared_ptr<int64_t> payloadRuleEnable_ = nullptr;
    // The forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> protocol_ = nullptr;
    // Indicates whether the traffic diversion switch is on. Valid values:
    // 
    // *   0: on.
    // *   1: off.
    std::shared_ptr<int64_t> proxyEnable_ = nullptr;
    // The status of traffic diversion. Valid values:
    // 
    // *   on: Traffic diversion takes effect.
    // *   off: Traffic diversion does not take effect.
    std::shared_ptr<string> proxyStatus_ = nullptr;
    // The IP addresses of origin servers.
    std::shared_ptr<vector<string>> realServers_ = nullptr;
    // The remarks of the port forwarding rule.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
