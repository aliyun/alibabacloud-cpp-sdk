// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLayer4RulesResponseBody() = default ;
    DescribeLayer4RulesResponseBody(const DescribeLayer4RulesResponseBody &) = default ;
    DescribeLayer4RulesResponseBody(DescribeLayer4RulesResponseBody &&) = default ;
    DescribeLayer4RulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulesResponseBody() = default ;
    DescribeLayer4RulesResponseBody& operator=(const DescribeLayer4RulesResponseBody &) = default ;
    DescribeLayer4RulesResponseBody& operator=(DescribeLayer4RulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
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
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsTimeout : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsTimeout& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
          DARABONBA_PTR_TO_JSON(RsTimeout, rsTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, UsTimeout& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
          DARABONBA_PTR_FROM_JSON(RsTimeout, rsTimeout_);
        };
        UsTimeout() = default ;
        UsTimeout(const UsTimeout &) = default ;
        UsTimeout(UsTimeout &&) = default ;
        UsTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsTimeout() = default ;
        UsTimeout& operator=(const UsTimeout &) = default ;
        UsTimeout& operator=(UsTimeout &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectTimeout_ == nullptr
        && this->rsTimeout_ == nullptr; };
        // connectTimeout Field Functions 
        bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
        void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
        inline int64_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
        inline UsTimeout& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


        // rsTimeout Field Functions 
        bool hasRsTimeout() const { return this->rsTimeout_ != nullptr;};
        void deleteRsTimeout() { this->rsTimeout_ = nullptr;};
        inline int64_t getRsTimeout() const { DARABONBA_PTR_GET_DEFAULT(rsTimeout_, 0L) };
        inline UsTimeout& setRsTimeout(int64_t rsTimeout) { DARABONBA_PTR_SET_VALUE(rsTimeout_, rsTimeout) };


      protected:
        shared_ptr<int64_t> connectTimeout_ {};
        shared_ptr<int64_t> rsTimeout_ {};
      };

      virtual bool empty() const override { return this->backendPort_ == nullptr
        && this->bakMode_ == nullptr && this->currentIndex_ == nullptr && this->eip_ == nullptr && this->frontendPort_ == nullptr && this->instanceId_ == nullptr
        && this->isAutoCreate_ == nullptr && this->payloadRuleEnable_ == nullptr && this->protocol_ == nullptr && this->proxyEnable_ == nullptr && this->proxyStatus_ == nullptr
        && this->realServers_ == nullptr && this->remark_ == nullptr && this->usTimeout_ == nullptr; };
      // backendPort Field Functions 
      bool hasBackendPort() const { return this->backendPort_ != nullptr;};
      void deleteBackendPort() { this->backendPort_ = nullptr;};
      inline int32_t getBackendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
      inline Listeners& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


      // bakMode Field Functions 
      bool hasBakMode() const { return this->bakMode_ != nullptr;};
      void deleteBakMode() { this->bakMode_ = nullptr;};
      inline int32_t getBakMode() const { DARABONBA_PTR_GET_DEFAULT(bakMode_, 0) };
      inline Listeners& setBakMode(int32_t bakMode) { DARABONBA_PTR_SET_VALUE(bakMode_, bakMode) };


      // currentIndex Field Functions 
      bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
      void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
      inline int32_t getCurrentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
      inline Listeners& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


      // eip Field Functions 
      bool hasEip() const { return this->eip_ != nullptr;};
      void deleteEip() { this->eip_ = nullptr;};
      inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
      inline Listeners& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline Listeners& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Listeners& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isAutoCreate Field Functions 
      bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
      void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
      inline bool getIsAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
      inline Listeners& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


      // payloadRuleEnable Field Functions 
      bool hasPayloadRuleEnable() const { return this->payloadRuleEnable_ != nullptr;};
      void deletePayloadRuleEnable() { this->payloadRuleEnable_ = nullptr;};
      inline int64_t getPayloadRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(payloadRuleEnable_, 0L) };
      inline Listeners& setPayloadRuleEnable(int64_t payloadRuleEnable) { DARABONBA_PTR_SET_VALUE(payloadRuleEnable_, payloadRuleEnable) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Listeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // proxyEnable Field Functions 
      bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
      void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
      inline int32_t getProxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0) };
      inline Listeners& setProxyEnable(int32_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


      // proxyStatus Field Functions 
      bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
      void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
      inline string getProxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
      inline Listeners& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


      // realServers Field Functions 
      bool hasRealServers() const { return this->realServers_ != nullptr;};
      void deleteRealServers() { this->realServers_ = nullptr;};
      inline const vector<string> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
      inline vector<string> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
      inline Listeners& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
      inline Listeners& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Listeners& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // usTimeout Field Functions 
      bool hasUsTimeout() const { return this->usTimeout_ != nullptr;};
      void deleteUsTimeout() { this->usTimeout_ = nullptr;};
      inline const Listeners::UsTimeout & getUsTimeout() const { DARABONBA_PTR_GET_CONST(usTimeout_, Listeners::UsTimeout) };
      inline Listeners::UsTimeout getUsTimeout() { DARABONBA_PTR_GET(usTimeout_, Listeners::UsTimeout) };
      inline Listeners& setUsTimeout(const Listeners::UsTimeout & usTimeout) { DARABONBA_PTR_SET_VALUE(usTimeout_, usTimeout) };
      inline Listeners& setUsTimeout(Listeners::UsTimeout && usTimeout) { DARABONBA_PTR_SET_RVALUE(usTimeout_, usTimeout) };


    protected:
      // The origin server port.
      shared_ptr<int32_t> backendPort_ {};
      // The origin mode. Values:
      // 
      // - **0**: Indicates the default origin mode.
      // - **1**: Indicates the primary/backup origin mode.
      shared_ptr<int32_t> bakMode_ {};
      // The currently effective origin server type. Values:
      // 
      // - **1**: Indicates that the primary origin server settings are in effect (DDoS protection forwards business traffic to the primary origin server IP address).
      // - **2**: Indicates that the backup origin server settings are in effect (DDoS protection forwards business traffic to the backup origin server IP address).
      shared_ptr<int32_t> currentIndex_ {};
      // The IP address of the DDoS protection instance.
      shared_ptr<string> eip_ {};
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The ID of the DDoS protection instance.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the rule was automatically created. Values:
      // 
      // - **true**: Indicates that the rule was automatically created by DDoS protection.
      // - **false**: Indicates that the rule was manually created by you.
      shared_ptr<bool> isAutoCreate_ {};
      // Payload rule module switch. Values:
      // 
      // - 1: Enabled
      // - 0: Disabled
      shared_ptr<int64_t> payloadRuleEnable_ {};
      // The type of forwarding protocol.
      shared_ptr<string> protocol_ {};
      // Traffic diversion switch. Values:
      // - **0** Off.
      // - **1** On.
      shared_ptr<int32_t> proxyEnable_ {};
      // Traffic diversion status. Values:
      // 
      // - on: Diversion is effective
      // - off: Diversion is ineffective
      shared_ptr<string> proxyStatus_ {};
      // The list of origin server IP addresses.
      shared_ptr<vector<string>> realServers_ {};
      // The remarks for the port forwarding rule.
      shared_ptr<string> remark_ {};
      shared_ptr<Listeners::UsTimeout> usTimeout_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeLayer4RulesResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeLayer4RulesResponseBody::Listeners>) };
    inline vector<DescribeLayer4RulesResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeLayer4RulesResponseBody::Listeners>) };
    inline DescribeLayer4RulesResponseBody& setListeners(const vector<DescribeLayer4RulesResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLayer4RulesResponseBody& setListeners(vector<DescribeLayer4RulesResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer4RulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeLayer4RulesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Detailed configuration of port forwarding rules, including the forwarding port, forwarding protocol, and origin server addresses, etc.
    shared_ptr<vector<DescribeLayer4RulesResponseBody::Listeners>> listeners_ {};
    // The ID of the current request.
    shared_ptr<string> requestId_ {};
    // The number of returned results.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
