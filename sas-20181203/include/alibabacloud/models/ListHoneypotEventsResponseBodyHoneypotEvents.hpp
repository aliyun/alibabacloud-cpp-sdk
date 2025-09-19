// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSRESPONSEBODYHONEYPOTEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSRESPONSEBODYHONEYPOTEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotEventsResponseBodyHoneypotEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotEventsResponseBodyHoneypotEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(AlarmEventId, alarmEventId_);
      DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MergeFieldList, mergeFieldList_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotEventsResponseBodyHoneypotEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(AlarmEventId, alarmEventId_);
      DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MergeFieldList, mergeFieldList_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    ListHoneypotEventsResponseBodyHoneypotEvents() = default ;
    ListHoneypotEventsResponseBodyHoneypotEvents(const ListHoneypotEventsResponseBodyHoneypotEvents &) = default ;
    ListHoneypotEventsResponseBodyHoneypotEvents(ListHoneypotEventsResponseBodyHoneypotEvents &&) = default ;
    ListHoneypotEventsResponseBodyHoneypotEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotEventsResponseBodyHoneypotEvents() = default ;
    ListHoneypotEventsResponseBodyHoneypotEvents& operator=(const ListHoneypotEventsResponseBodyHoneypotEvents &) = default ;
    ListHoneypotEventsResponseBodyHoneypotEvents& operator=(ListHoneypotEventsResponseBodyHoneypotEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->alarmEventId_ != nullptr && this->dstIp_ != nullptr && this->firstTime_ != nullptr && this->honeypotName_ != nullptr
        && this->lastTime_ != nullptr && this->location_ != nullptr && this->mergeFieldList_ != nullptr && this->protocol_ != nullptr && this->riskLevel_ != nullptr
        && this->securityEventId_ != nullptr && this->srcIp_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // alarmEventId Field Functions 
    bool hasAlarmEventId() const { return this->alarmEventId_ != nullptr;};
    void deleteAlarmEventId() { this->alarmEventId_ = nullptr;};
    inline int64_t alarmEventId() const { DARABONBA_PTR_GET_DEFAULT(alarmEventId_, 0L) };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setAlarmEventId(int64_t alarmEventId) { DARABONBA_PTR_SET_VALUE(alarmEventId_, alarmEventId) };


    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // honeypotName Field Functions 
    bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
    void deleteHoneypotName() { this->honeypotName_ = nullptr;};
    inline string honeypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // mergeFieldList Field Functions 
    bool hasMergeFieldList() const { return this->mergeFieldList_ != nullptr;};
    void deleteMergeFieldList() { this->mergeFieldList_ = nullptr;};
    inline const vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList> & mergeFieldList() const { DARABONBA_PTR_GET_CONST(mergeFieldList_, vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList>) };
    inline vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList> mergeFieldList() { DARABONBA_PTR_GET(mergeFieldList_, vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList>) };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setMergeFieldList(const vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList> & mergeFieldList) { DARABONBA_PTR_SET_VALUE(mergeFieldList_, mergeFieldList) };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setMergeFieldList(vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList> && mergeFieldList) { DARABONBA_PTR_SET_RVALUE(mergeFieldList_, mergeFieldList) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t securityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotEventsResponseBodyHoneypotEvents& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    // The probe ID.
    std::shared_ptr<string> agentId_ = nullptr;
    // The name of the probe.
    std::shared_ptr<string> agentName_ = nullptr;
    // The ID of the alert event.
    std::shared_ptr<int64_t> alarmEventId_ = nullptr;
    // The destination IP address of the attack.
    std::shared_ptr<string> dstIp_ = nullptr;
    // The timestamp at which the event was first detected.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // The name of the honeypot.
    std::shared_ptr<string> honeypotName_ = nullptr;
    // The timestamp at which the event was last detected.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The region.
    std::shared_ptr<string> location_ = nullptr;
    // The extended values that correspond to the field key.
    std::shared_ptr<vector<Models::ListHoneypotEventsResponseBodyHoneypotEventsMergeFieldList>> mergeFieldList_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> protocol_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **2**: low
    // *   **3**: medium
    // *   **4**: high
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The ID of the intrusion event.
    std::shared_ptr<int64_t> securityEventId_ = nullptr;
    // The source IP address of the attack.
    std::shared_ptr<string> srcIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
