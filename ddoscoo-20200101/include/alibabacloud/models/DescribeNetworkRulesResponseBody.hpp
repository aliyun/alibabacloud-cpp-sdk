// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULESRESPONSEBODY_HPP_
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
  class DescribeNetworkRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkRulesResponseBody() = default ;
    DescribeNetworkRulesResponseBody(const DescribeNetworkRulesResponseBody &) = default ;
    DescribeNetworkRulesResponseBody(DescribeNetworkRulesResponseBody &&) = default ;
    DescribeNetworkRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRulesResponseBody() = default ;
    DescribeNetworkRulesResponseBody& operator=(const DescribeNetworkRulesResponseBody &) = default ;
    DescribeNetworkRulesResponseBody& operator=(DescribeNetworkRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NetworkRules& obj) { 
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
      NetworkRules() = default ;
      NetworkRules(const NetworkRules &) = default ;
      NetworkRules(NetworkRules &&) = default ;
      NetworkRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkRules() = default ;
      NetworkRules& operator=(const NetworkRules &) = default ;
      NetworkRules& operator=(NetworkRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backendPort_ == nullptr
        && this->frontendPort_ == nullptr && this->instanceId_ == nullptr && this->isAutoCreate_ == nullptr && this->payloadRuleEnable_ == nullptr && this->protocol_ == nullptr
        && this->proxyEnable_ == nullptr && this->proxyStatus_ == nullptr && this->realServers_ == nullptr && this->remark_ == nullptr; };
      // backendPort Field Functions 
      bool hasBackendPort() const { return this->backendPort_ != nullptr;};
      void deleteBackendPort() { this->backendPort_ = nullptr;};
      inline int32_t getBackendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
      inline NetworkRules& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline NetworkRules& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isAutoCreate Field Functions 
      bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
      void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
      inline bool getIsAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
      inline NetworkRules& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


      // payloadRuleEnable Field Functions 
      bool hasPayloadRuleEnable() const { return this->payloadRuleEnable_ != nullptr;};
      void deletePayloadRuleEnable() { this->payloadRuleEnable_ = nullptr;};
      inline int64_t getPayloadRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(payloadRuleEnable_, 0L) };
      inline NetworkRules& setPayloadRuleEnable(int64_t payloadRuleEnable) { DARABONBA_PTR_SET_VALUE(payloadRuleEnable_, payloadRuleEnable) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline NetworkRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // proxyEnable Field Functions 
      bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
      void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
      inline int64_t getProxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0L) };
      inline NetworkRules& setProxyEnable(int64_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


      // proxyStatus Field Functions 
      bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
      void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
      inline string getProxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
      inline NetworkRules& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


      // realServers Field Functions 
      bool hasRealServers() const { return this->realServers_ != nullptr;};
      void deleteRealServers() { this->realServers_ = nullptr;};
      inline const vector<string> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
      inline vector<string> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
      inline NetworkRules& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
      inline NetworkRules& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline NetworkRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The port of the origin server.
      shared_ptr<int32_t> backendPort_ {};
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the port forwarding rule is automatically created. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isAutoCreate_ {};
      // Indicates whether the payload filtering rule is enabled. Valid values:
      // 
      // *   1: enabled.
      // *   0: disabled.
      shared_ptr<int64_t> payloadRuleEnable_ {};
      // The forwarding protocol. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> protocol_ {};
      // Indicates whether the traffic diversion switch is on. Valid values:
      // 
      // *   0: on.
      // *   1: off.
      shared_ptr<int64_t> proxyEnable_ {};
      // The status of traffic diversion. Valid values:
      // 
      // *   on: Traffic diversion takes effect.
      // *   off: Traffic diversion does not take effect.
      shared_ptr<string> proxyStatus_ {};
      // The IP addresses of origin servers.
      shared_ptr<vector<string>> realServers_ {};
      // The remarks of the port forwarding rule.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->networkRules_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline const vector<DescribeNetworkRulesResponseBody::NetworkRules> & getNetworkRules() const { DARABONBA_PTR_GET_CONST(networkRules_, vector<DescribeNetworkRulesResponseBody::NetworkRules>) };
    inline vector<DescribeNetworkRulesResponseBody::NetworkRules> getNetworkRules() { DARABONBA_PTR_GET(networkRules_, vector<DescribeNetworkRulesResponseBody::NetworkRules>) };
    inline DescribeNetworkRulesResponseBody& setNetworkRules(const vector<DescribeNetworkRulesResponseBody::NetworkRules> & networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };
    inline DescribeNetworkRulesResponseBody& setNetworkRules(vector<DescribeNetworkRulesResponseBody::NetworkRules> && networkRules) { DARABONBA_PTR_SET_RVALUE(networkRules_, networkRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeNetworkRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the port forwarding rules.
    shared_ptr<vector<DescribeNetworkRulesResponseBody::NetworkRules>> networkRules_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of returned port forwarding rules.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
