// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEPOLICYRESPONSEBODY_HPP_
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
  class DescribeLayer4RulePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_TO_JSON(BakMode, bakMode_);
      DARABONBA_PTR_TO_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_TO_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PriRealServers, priRealServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecRealServers, secRealServers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_FROM_JSON(BakMode, bakMode_);
      DARABONBA_PTR_FROM_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PriRealServers, priRealServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecRealServers, secRealServers_);
    };
    DescribeLayer4RulePolicyResponseBody() = default ;
    DescribeLayer4RulePolicyResponseBody(const DescribeLayer4RulePolicyResponseBody &) = default ;
    DescribeLayer4RulePolicyResponseBody(DescribeLayer4RulePolicyResponseBody &&) = default ;
    DescribeLayer4RulePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulePolicyResponseBody() = default ;
    DescribeLayer4RulePolicyResponseBody& operator=(const DescribeLayer4RulePolicyResponseBody &) = default ;
    DescribeLayer4RulePolicyResponseBody& operator=(DescribeLayer4RulePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecRealServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecRealServers& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentIndex, currentIndex_);
        DARABONBA_PTR_TO_JSON(Eip, eip_);
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RealServer, realServer_);
      };
      friend void from_json(const Darabonba::Json& j, SecRealServers& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentIndex, currentIndex_);
        DARABONBA_PTR_FROM_JSON(Eip, eip_);
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
      };
      SecRealServers() = default ;
      SecRealServers(const SecRealServers &) = default ;
      SecRealServers(SecRealServers &&) = default ;
      SecRealServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecRealServers() = default ;
      SecRealServers& operator=(const SecRealServers &) = default ;
      SecRealServers& operator=(SecRealServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentIndex_ == nullptr
        && this->eip_ == nullptr && this->frontendPort_ == nullptr && this->instanceId_ == nullptr && this->protocol_ == nullptr && this->realServer_ == nullptr; };
      // currentIndex Field Functions 
      bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
      void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
      inline int32_t getCurrentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
      inline SecRealServers& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


      // eip Field Functions 
      bool hasEip() const { return this->eip_ != nullptr;};
      void deleteEip() { this->eip_ = nullptr;};
      inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
      inline SecRealServers& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline SecRealServers& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SecRealServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline SecRealServers& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // realServer Field Functions 
      bool hasRealServer() const { return this->realServer_ != nullptr;};
      void deleteRealServer() { this->realServer_ = nullptr;};
      inline string getRealServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
      inline SecRealServers& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


    protected:
      // The origin server that is used to receive service traffic. Valid values:
      // 
      // *   **1**: the primary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the primary origin server.
      // *   **2**: the secondary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the secondary origin server.
      shared_ptr<int32_t> currentIndex_ {};
      // The IP address of the instance.
      shared_ptr<string> eip_ {};
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The type of the protocol.
      shared_ptr<string> protocol_ {};
      // The IP address of the secondary origin server.
      shared_ptr<string> realServer_ {};
    };

    class PriRealServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriRealServers& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentIndex, currentIndex_);
        DARABONBA_PTR_TO_JSON(Eip, eip_);
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RealServer, realServer_);
      };
      friend void from_json(const Darabonba::Json& j, PriRealServers& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentIndex, currentIndex_);
        DARABONBA_PTR_FROM_JSON(Eip, eip_);
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
      };
      PriRealServers() = default ;
      PriRealServers(const PriRealServers &) = default ;
      PriRealServers(PriRealServers &&) = default ;
      PriRealServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriRealServers() = default ;
      PriRealServers& operator=(const PriRealServers &) = default ;
      PriRealServers& operator=(PriRealServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentIndex_ == nullptr
        && this->eip_ == nullptr && this->frontendPort_ == nullptr && this->instanceId_ == nullptr && this->protocol_ == nullptr && this->realServer_ == nullptr; };
      // currentIndex Field Functions 
      bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
      void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
      inline int32_t getCurrentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
      inline PriRealServers& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


      // eip Field Functions 
      bool hasEip() const { return this->eip_ != nullptr;};
      void deleteEip() { this->eip_ = nullptr;};
      inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
      inline PriRealServers& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline PriRealServers& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PriRealServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline PriRealServers& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // realServer Field Functions 
      bool hasRealServer() const { return this->realServer_ != nullptr;};
      void deleteRealServer() { this->realServer_ = nullptr;};
      inline string getRealServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
      inline PriRealServers& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


    protected:
      // The origin server that is used to receive service traffic. Valid values:
      // 
      // *   **1**: the primary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the primary origin server.
      // *   **2**: the secondary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the secondary origin server.
      shared_ptr<int32_t> currentIndex_ {};
      // The IP address of the instance.
      shared_ptr<string> eip_ {};
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The type of the protocol.
      shared_ptr<string> protocol_ {};
      // The IP address of the primary origin server.
      shared_ptr<string> realServer_ {};
    };

    virtual bool empty() const override { return this->backendPort_ == nullptr
        && this->bakMode_ == nullptr && this->currentIndex_ == nullptr && this->forwardProtocol_ == nullptr && this->frontendPort_ == nullptr && this->instanceId_ == nullptr
        && this->priRealServers_ == nullptr && this->requestId_ == nullptr && this->secRealServers_ == nullptr; };
    // backendPort Field Functions 
    bool hasBackendPort() const { return this->backendPort_ != nullptr;};
    void deleteBackendPort() { this->backendPort_ = nullptr;};
    inline int32_t getBackendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
    inline DescribeLayer4RulePolicyResponseBody& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


    // bakMode Field Functions 
    bool hasBakMode() const { return this->bakMode_ != nullptr;};
    void deleteBakMode() { this->bakMode_ = nullptr;};
    inline string getBakMode() const { DARABONBA_PTR_GET_DEFAULT(bakMode_, "") };
    inline DescribeLayer4RulePolicyResponseBody& setBakMode(string bakMode) { DARABONBA_PTR_SET_VALUE(bakMode_, bakMode) };


    // currentIndex Field Functions 
    bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
    void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
    inline int32_t getCurrentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
    inline DescribeLayer4RulePolicyResponseBody& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string getForwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline DescribeLayer4RulePolicyResponseBody& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeLayer4RulePolicyResponseBody& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLayer4RulePolicyResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // priRealServers Field Functions 
    bool hasPriRealServers() const { return this->priRealServers_ != nullptr;};
    void deletePriRealServers() { this->priRealServers_ = nullptr;};
    inline const vector<DescribeLayer4RulePolicyResponseBody::PriRealServers> & getPriRealServers() const { DARABONBA_PTR_GET_CONST(priRealServers_, vector<DescribeLayer4RulePolicyResponseBody::PriRealServers>) };
    inline vector<DescribeLayer4RulePolicyResponseBody::PriRealServers> getPriRealServers() { DARABONBA_PTR_GET(priRealServers_, vector<DescribeLayer4RulePolicyResponseBody::PriRealServers>) };
    inline DescribeLayer4RulePolicyResponseBody& setPriRealServers(const vector<DescribeLayer4RulePolicyResponseBody::PriRealServers> & priRealServers) { DARABONBA_PTR_SET_VALUE(priRealServers_, priRealServers) };
    inline DescribeLayer4RulePolicyResponseBody& setPriRealServers(vector<DescribeLayer4RulePolicyResponseBody::PriRealServers> && priRealServers) { DARABONBA_PTR_SET_RVALUE(priRealServers_, priRealServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer4RulePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secRealServers Field Functions 
    bool hasSecRealServers() const { return this->secRealServers_ != nullptr;};
    void deleteSecRealServers() { this->secRealServers_ = nullptr;};
    inline const vector<DescribeLayer4RulePolicyResponseBody::SecRealServers> & getSecRealServers() const { DARABONBA_PTR_GET_CONST(secRealServers_, vector<DescribeLayer4RulePolicyResponseBody::SecRealServers>) };
    inline vector<DescribeLayer4RulePolicyResponseBody::SecRealServers> getSecRealServers() { DARABONBA_PTR_GET(secRealServers_, vector<DescribeLayer4RulePolicyResponseBody::SecRealServers>) };
    inline DescribeLayer4RulePolicyResponseBody& setSecRealServers(const vector<DescribeLayer4RulePolicyResponseBody::SecRealServers> & secRealServers) { DARABONBA_PTR_SET_VALUE(secRealServers_, secRealServers) };
    inline DescribeLayer4RulePolicyResponseBody& setSecRealServers(vector<DescribeLayer4RulePolicyResponseBody::SecRealServers> && secRealServers) { DARABONBA_PTR_SET_RVALUE(secRealServers_, secRealServers) };


  protected:
    // The port of the origin server.
    shared_ptr<int32_t> backendPort_ {};
    // The mode that is used to forward service traffic. Valid values:
    // 
    // *   0: the default mode. In this mode, Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the origin IP address that you specified when you created the port forwarding rule. You can call the [CreateNetworkRules](https://help.aliyun.com/document_detail/157482.html) operation to create a port forwarding rule.
    // *   1: the origin redundancy mode. In this mode, Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the primary or secondary origin servers. You can call the [ConfigLayer4RulePolicy](https://help.aliyun.com/document_detail/312684.html) operation to configure IP addresses.
    shared_ptr<string> bakMode_ {};
    // The origin server that is used to receive service traffic. Valid values:
    // 
    // *   **1**: the primary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the primary origin server.
    // *   **2**: the secondary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the secondary origin server.
    shared_ptr<int32_t> currentIndex_ {};
    // The type of the protocol.
    shared_ptr<string> forwardProtocol_ {};
    // The forwarding port.
    shared_ptr<int32_t> frontendPort_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // An array that consists of the information about the primary origin server, including the IP addresses, forwarding protocol, and forwarding port.
    shared_ptr<vector<DescribeLayer4RulePolicyResponseBody::PriRealServers>> priRealServers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information about the secondary origin server, including the IP addresses, forwarding protocol, and forwarding port.
    shared_ptr<vector<DescribeLayer4RulePolicyResponseBody::SecRealServers>> secRealServers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
