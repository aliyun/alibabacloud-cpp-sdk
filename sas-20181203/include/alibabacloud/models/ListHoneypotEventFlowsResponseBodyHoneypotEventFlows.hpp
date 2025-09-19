// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTFLOWSRESPONSEBODYHONEYPOTEVENTFLOWS_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTFLOWSRESPONSEBODYHONEYPOTEVENTFLOWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotEventFlowsResponseBodyHoneypotEventFlows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(DockerId, dockerId_);
      DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(EventConnection, eventConnection_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Extra1, extra1_);
      DARABONBA_PTR_TO_JSON(FileOssUrl, fileOssUrl_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(HoneypotEventId, honeypotEventId_);
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(SrcMac, srcMac_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TypeId, typeId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(DockerId, dockerId_);
      DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(EventConnection, eventConnection_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Extra1, extra1_);
      DARABONBA_PTR_FROM_JSON(FileOssUrl, fileOssUrl_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(HoneypotEventId, honeypotEventId_);
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(SrcMac, srcMac_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListHoneypotEventFlowsResponseBodyHoneypotEventFlows() = default ;
    ListHoneypotEventFlowsResponseBodyHoneypotEventFlows(const ListHoneypotEventFlowsResponseBodyHoneypotEventFlows &) = default ;
    ListHoneypotEventFlowsResponseBodyHoneypotEventFlows(ListHoneypotEventFlowsResponseBodyHoneypotEventFlows &&) = default ;
    ListHoneypotEventFlowsResponseBodyHoneypotEventFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotEventFlowsResponseBodyHoneypotEventFlows() = default ;
    ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& operator=(const ListHoneypotEventFlowsResponseBodyHoneypotEventFlows &) = default ;
    ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& operator=(ListHoneypotEventFlowsResponseBodyHoneypotEventFlows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->dockerId_ != nullptr && this->dstIp_ != nullptr && this->dstPort_ != nullptr && this->eventConnection_ != nullptr
        && this->extra_ != nullptr && this->extra1_ != nullptr && this->fileOssUrl_ != nullptr && this->firstTime_ != nullptr && this->honeypotEventId_ != nullptr
        && this->honeypotId_ != nullptr && this->honeypotName_ != nullptr && this->lastTime_ != nullptr && this->riskLevel_ != nullptr && this->securityEventId_ != nullptr
        && this->srcIp_ != nullptr && this->srcMac_ != nullptr && this->srcPort_ != nullptr && this->status_ != nullptr && this->typeId_ != nullptr
        && this->uid_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // dockerId Field Functions 
    bool hasDockerId() const { return this->dockerId_ != nullptr;};
    void deleteDockerId() { this->dockerId_ = nullptr;};
    inline string dockerId() const { DARABONBA_PTR_GET_DEFAULT(dockerId_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setDockerId(string dockerId) { DARABONBA_PTR_SET_VALUE(dockerId_, dockerId) };


    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int32_t dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // eventConnection Field Functions 
    bool hasEventConnection() const { return this->eventConnection_ != nullptr;};
    void deleteEventConnection() { this->eventConnection_ = nullptr;};
    inline string eventConnection() const { DARABONBA_PTR_GET_DEFAULT(eventConnection_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setEventConnection(string eventConnection) { DARABONBA_PTR_SET_VALUE(eventConnection_, eventConnection) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // extra1 Field Functions 
    bool hasExtra1() const { return this->extra1_ != nullptr;};
    void deleteExtra1() { this->extra1_ = nullptr;};
    inline string extra1() const { DARABONBA_PTR_GET_DEFAULT(extra1_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setExtra1(string extra1) { DARABONBA_PTR_SET_VALUE(extra1_, extra1) };


    // fileOssUrl Field Functions 
    bool hasFileOssUrl() const { return this->fileOssUrl_ != nullptr;};
    void deleteFileOssUrl() { this->fileOssUrl_ = nullptr;};
    inline string fileOssUrl() const { DARABONBA_PTR_GET_DEFAULT(fileOssUrl_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setFileOssUrl(string fileOssUrl) { DARABONBA_PTR_SET_VALUE(fileOssUrl_, fileOssUrl) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // honeypotEventId Field Functions 
    bool hasHoneypotEventId() const { return this->honeypotEventId_ != nullptr;};
    void deleteHoneypotEventId() { this->honeypotEventId_ = nullptr;};
    inline string honeypotEventId() const { DARABONBA_PTR_GET_DEFAULT(honeypotEventId_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setHoneypotEventId(string honeypotEventId) { DARABONBA_PTR_SET_VALUE(honeypotEventId_, honeypotEventId) };


    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // honeypotName Field Functions 
    bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
    void deleteHoneypotName() { this->honeypotName_ = nullptr;};
    inline string honeypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t securityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // srcMac Field Functions 
    bool hasSrcMac() const { return this->srcMac_ != nullptr;};
    void deleteSrcMac() { this->srcMac_ = nullptr;};
    inline string srcMac() const { DARABONBA_PTR_GET_DEFAULT(srcMac_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setSrcMac(string srcMac) { DARABONBA_PTR_SET_VALUE(srcMac_, srcMac) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline int32_t srcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // typeId Field Functions 
    bool hasTypeId() const { return this->typeId_ != nullptr;};
    void deleteTypeId() { this->typeId_ = nullptr;};
    inline string _typeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setTypeId(string _typeId) { DARABONBA_PTR_SET_VALUE(typeId_, _typeId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListHoneypotEventFlowsResponseBodyHoneypotEventFlows& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The ID of the probe.
    std::shared_ptr<string> agentId_ = nullptr;
    // The name of the probe.
    std::shared_ptr<string> agentName_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> dockerId_ = nullptr;
    // The destination IP address.
    std::shared_ptr<string> dstIp_ = nullptr;
    // The destination port.
    std::shared_ptr<int32_t> dstPort_ = nullptr;
    // The UUID of the connection in the attack.
    std::shared_ptr<string> eventConnection_ = nullptr;
    // The extended information about the attack payload.
    std::shared_ptr<string> extra_ = nullptr;
    // The extension information about the virtual private cloud (VPC).
    std::shared_ptr<string> extra1_ = nullptr;
    // The Object Storage Service (OSS) URL of the file.
    std::shared_ptr<string> fileOssUrl_ = nullptr;
    // The timestamp when the intrusion event was first occurred.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // The ID of the intrusion event. The value is a string.
    std::shared_ptr<string> honeypotEventId_ = nullptr;
    // The ID of the honeypot.
    std::shared_ptr<string> honeypotId_ = nullptr;
    // The name of the honeypot.
    std::shared_ptr<string> honeypotName_ = nullptr;
    // The timestamp when the intrusion event was last occurred.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **2**: low
    // *   **3**: medium
    // *   **4**: high
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The ID of the intrusion event.
    std::shared_ptr<int64_t> securityEventId_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> srcIp_ = nullptr;
    // The source media access control (MAC) address.
    std::shared_ptr<string> srcMac_ = nullptr;
    // The source port number.
    std::shared_ptr<int32_t> srcPort_ = nullptr;
    // The handling status of the intrusion event. Valid values:
    // 
    // *   **1**: pending handling
    // *   **2**: ignored
    // *   **4**: confirmed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the attack type.
    std::shared_ptr<string> typeId_ = nullptr;
    // The UUID of an attack in the intrusion event.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
