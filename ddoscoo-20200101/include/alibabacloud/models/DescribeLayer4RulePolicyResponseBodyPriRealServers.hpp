// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEPOLICYRESPONSEBODYPRIREALSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEPOLICYRESPONSEBODYPRIREALSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeLayer4RulePolicyResponseBodyPriRealServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulePolicyResponseBodyPriRealServers& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RealServer, realServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulePolicyResponseBodyPriRealServers& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
    };
    DescribeLayer4RulePolicyResponseBodyPriRealServers() = default ;
    DescribeLayer4RulePolicyResponseBodyPriRealServers(const DescribeLayer4RulePolicyResponseBodyPriRealServers &) = default ;
    DescribeLayer4RulePolicyResponseBodyPriRealServers(DescribeLayer4RulePolicyResponseBodyPriRealServers &&) = default ;
    DescribeLayer4RulePolicyResponseBodyPriRealServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulePolicyResponseBodyPriRealServers() = default ;
    DescribeLayer4RulePolicyResponseBodyPriRealServers& operator=(const DescribeLayer4RulePolicyResponseBodyPriRealServers &) = default ;
    DescribeLayer4RulePolicyResponseBodyPriRealServers& operator=(DescribeLayer4RulePolicyResponseBodyPriRealServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentIndex_ == nullptr
        && return this->eip_ == nullptr && return this->frontendPort_ == nullptr && return this->instanceId_ == nullptr && return this->protocol_ == nullptr && return this->realServer_ == nullptr; };
    // currentIndex Field Functions 
    bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
    void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
    inline int32_t currentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
    inline DescribeLayer4RulePolicyResponseBodyPriRealServers& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline DescribeLayer4RulePolicyResponseBodyPriRealServers& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeLayer4RulePolicyResponseBodyPriRealServers& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLayer4RulePolicyResponseBodyPriRealServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLayer4RulePolicyResponseBodyPriRealServers& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // realServer Field Functions 
    bool hasRealServer() const { return this->realServer_ != nullptr;};
    void deleteRealServer() { this->realServer_ = nullptr;};
    inline string realServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
    inline DescribeLayer4RulePolicyResponseBodyPriRealServers& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


  protected:
    // The origin server that is used to receive service traffic. Valid values:
    // 
    // *   **1**: the primary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the primary origin server.
    // *   **2**: the secondary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the secondary origin server.
    std::shared_ptr<int32_t> currentIndex_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> eip_ = nullptr;
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The IP address of the primary origin server.
    std::shared_ptr<string> realServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
