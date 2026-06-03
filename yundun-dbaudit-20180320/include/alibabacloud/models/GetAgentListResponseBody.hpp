// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetAgentListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentList, agentList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentList, agentList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentListResponseBody() = default ;
    GetAgentListResponseBody(const GetAgentListResponseBody &) = default ;
    GetAgentListResponseBody(GetAgentListResponseBody &&) = default ;
    GetAgentListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentListResponseBody() = default ;
    GetAgentListResponseBody& operator=(const GetAgentListResponseBody &) = default ;
    GetAgentListResponseBody& operator=(GetAgentListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentList& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentOs, agentOs_);
        DARABONBA_PTR_TO_JSON(AgentPort, agentPort_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
        DARABONBA_PTR_TO_JSON(FirstLoginTime, firstLoginTime_);
        DARABONBA_PTR_TO_JSON(LastActiveTime, lastActiveTime_);
        DARABONBA_PTR_TO_JSON(OsCpu, osCpu_);
        DARABONBA_PTR_TO_JSON(OsMem, osMem_);
        DARABONBA_PTR_TO_JSON(PktLoss, pktLoss_);
        DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(RmagentCpu, rmagentCpu_);
        DARABONBA_PTR_TO_JSON(RmagentMem, rmagentMem_);
        DARABONBA_PTR_TO_JSON(SendByteCount, sendByteCount_);
        DARABONBA_PTR_TO_JSON(SendBytes, sendBytes_);
        DARABONBA_PTR_TO_JSON(SendPacketCount, sendPacketCount_);
        DARABONBA_PTR_TO_JSON(SendPackets, sendPackets_);
        DARABONBA_PTR_TO_JSON(SysConfig, sysConfig_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, AgentList& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentOs, agentOs_);
        DARABONBA_PTR_FROM_JSON(AgentPort, agentPort_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
        DARABONBA_PTR_FROM_JSON(FirstLoginTime, firstLoginTime_);
        DARABONBA_PTR_FROM_JSON(LastActiveTime, lastActiveTime_);
        DARABONBA_PTR_FROM_JSON(OsCpu, osCpu_);
        DARABONBA_PTR_FROM_JSON(OsMem, osMem_);
        DARABONBA_PTR_FROM_JSON(PktLoss, pktLoss_);
        DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(RmagentCpu, rmagentCpu_);
        DARABONBA_PTR_FROM_JSON(RmagentMem, rmagentMem_);
        DARABONBA_PTR_FROM_JSON(SendByteCount, sendByteCount_);
        DARABONBA_PTR_FROM_JSON(SendBytes, sendBytes_);
        DARABONBA_PTR_FROM_JSON(SendPacketCount, sendPacketCount_);
        DARABONBA_PTR_FROM_JSON(SendPackets, sendPackets_);
        DARABONBA_PTR_FROM_JSON(SysConfig, sysConfig_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      AgentList() = default ;
      AgentList(const AgentList &) = default ;
      AgentList(AgentList &&) = default ;
      AgentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentList() = default ;
      AgentList& operator=(const AgentList &) = default ;
      AgentList& operator=(AgentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagId_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
        inline Tags& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<int64_t> tagId_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentOs_ == nullptr && this->agentPort_ == nullptr && this->agentStatus_ == nullptr && this->agentVersion_ == nullptr && this->ecsId_ == nullptr
        && this->firstLoginTime_ == nullptr && this->lastActiveTime_ == nullptr && this->osCpu_ == nullptr && this->osMem_ == nullptr && this->pktLoss_ == nullptr
        && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->rmagentCpu_ == nullptr && this->rmagentMem_ == nullptr && this->sendByteCount_ == nullptr
        && this->sendBytes_ == nullptr && this->sendPacketCount_ == nullptr && this->sendPackets_ == nullptr && this->sysConfig_ == nullptr && this->tags_ == nullptr
        && this->vpcId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline AgentList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentOs Field Functions 
      bool hasAgentOs() const { return this->agentOs_ != nullptr;};
      void deleteAgentOs() { this->agentOs_ = nullptr;};
      inline string getAgentOs() const { DARABONBA_PTR_GET_DEFAULT(agentOs_, "") };
      inline AgentList& setAgentOs(string agentOs) { DARABONBA_PTR_SET_VALUE(agentOs_, agentOs) };


      // agentPort Field Functions 
      bool hasAgentPort() const { return this->agentPort_ != nullptr;};
      void deleteAgentPort() { this->agentPort_ = nullptr;};
      inline string getAgentPort() const { DARABONBA_PTR_GET_DEFAULT(agentPort_, "") };
      inline AgentList& setAgentPort(string agentPort) { DARABONBA_PTR_SET_VALUE(agentPort_, agentPort) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline int32_t getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, 0) };
      inline AgentList& setAgentStatus(int32_t agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline AgentList& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // ecsId Field Functions 
      bool hasEcsId() const { return this->ecsId_ != nullptr;};
      void deleteEcsId() { this->ecsId_ = nullptr;};
      inline string getEcsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
      inline AgentList& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


      // firstLoginTime Field Functions 
      bool hasFirstLoginTime() const { return this->firstLoginTime_ != nullptr;};
      void deleteFirstLoginTime() { this->firstLoginTime_ = nullptr;};
      inline string getFirstLoginTime() const { DARABONBA_PTR_GET_DEFAULT(firstLoginTime_, "") };
      inline AgentList& setFirstLoginTime(string firstLoginTime) { DARABONBA_PTR_SET_VALUE(firstLoginTime_, firstLoginTime) };


      // lastActiveTime Field Functions 
      bool hasLastActiveTime() const { return this->lastActiveTime_ != nullptr;};
      void deleteLastActiveTime() { this->lastActiveTime_ = nullptr;};
      inline string getLastActiveTime() const { DARABONBA_PTR_GET_DEFAULT(lastActiveTime_, "") };
      inline AgentList& setLastActiveTime(string lastActiveTime) { DARABONBA_PTR_SET_VALUE(lastActiveTime_, lastActiveTime) };


      // osCpu Field Functions 
      bool hasOsCpu() const { return this->osCpu_ != nullptr;};
      void deleteOsCpu() { this->osCpu_ = nullptr;};
      inline int32_t getOsCpu() const { DARABONBA_PTR_GET_DEFAULT(osCpu_, 0) };
      inline AgentList& setOsCpu(int32_t osCpu) { DARABONBA_PTR_SET_VALUE(osCpu_, osCpu) };


      // osMem Field Functions 
      bool hasOsMem() const { return this->osMem_ != nullptr;};
      void deleteOsMem() { this->osMem_ = nullptr;};
      inline int32_t getOsMem() const { DARABONBA_PTR_GET_DEFAULT(osMem_, 0) };
      inline AgentList& setOsMem(int32_t osMem) { DARABONBA_PTR_SET_VALUE(osMem_, osMem) };


      // pktLoss Field Functions 
      bool hasPktLoss() const { return this->pktLoss_ != nullptr;};
      void deletePktLoss() { this->pktLoss_ = nullptr;};
      inline int32_t getPktLoss() const { DARABONBA_PTR_GET_DEFAULT(pktLoss_, 0) };
      inline AgentList& setPktLoss(int32_t pktLoss) { DARABONBA_PTR_SET_VALUE(pktLoss_, pktLoss) };


      // privateIp Field Functions 
      bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
      void deletePrivateIp() { this->privateIp_ = nullptr;};
      inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
      inline AgentList& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline AgentList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // rmagentCpu Field Functions 
      bool hasRmagentCpu() const { return this->rmagentCpu_ != nullptr;};
      void deleteRmagentCpu() { this->rmagentCpu_ = nullptr;};
      inline int32_t getRmagentCpu() const { DARABONBA_PTR_GET_DEFAULT(rmagentCpu_, 0) };
      inline AgentList& setRmagentCpu(int32_t rmagentCpu) { DARABONBA_PTR_SET_VALUE(rmagentCpu_, rmagentCpu) };


      // rmagentMem Field Functions 
      bool hasRmagentMem() const { return this->rmagentMem_ != nullptr;};
      void deleteRmagentMem() { this->rmagentMem_ = nullptr;};
      inline int32_t getRmagentMem() const { DARABONBA_PTR_GET_DEFAULT(rmagentMem_, 0) };
      inline AgentList& setRmagentMem(int32_t rmagentMem) { DARABONBA_PTR_SET_VALUE(rmagentMem_, rmagentMem) };


      // sendByteCount Field Functions 
      bool hasSendByteCount() const { return this->sendByteCount_ != nullptr;};
      void deleteSendByteCount() { this->sendByteCount_ = nullptr;};
      inline int64_t getSendByteCount() const { DARABONBA_PTR_GET_DEFAULT(sendByteCount_, 0L) };
      inline AgentList& setSendByteCount(int64_t sendByteCount) { DARABONBA_PTR_SET_VALUE(sendByteCount_, sendByteCount) };


      // sendBytes Field Functions 
      bool hasSendBytes() const { return this->sendBytes_ != nullptr;};
      void deleteSendBytes() { this->sendBytes_ = nullptr;};
      inline int64_t getSendBytes() const { DARABONBA_PTR_GET_DEFAULT(sendBytes_, 0L) };
      inline AgentList& setSendBytes(int64_t sendBytes) { DARABONBA_PTR_SET_VALUE(sendBytes_, sendBytes) };


      // sendPacketCount Field Functions 
      bool hasSendPacketCount() const { return this->sendPacketCount_ != nullptr;};
      void deleteSendPacketCount() { this->sendPacketCount_ = nullptr;};
      inline int64_t getSendPacketCount() const { DARABONBA_PTR_GET_DEFAULT(sendPacketCount_, 0L) };
      inline AgentList& setSendPacketCount(int64_t sendPacketCount) { DARABONBA_PTR_SET_VALUE(sendPacketCount_, sendPacketCount) };


      // sendPackets Field Functions 
      bool hasSendPackets() const { return this->sendPackets_ != nullptr;};
      void deleteSendPackets() { this->sendPackets_ = nullptr;};
      inline int64_t getSendPackets() const { DARABONBA_PTR_GET_DEFAULT(sendPackets_, 0L) };
      inline AgentList& setSendPackets(int64_t sendPackets) { DARABONBA_PTR_SET_VALUE(sendPackets_, sendPackets) };


      // sysConfig Field Functions 
      bool hasSysConfig() const { return this->sysConfig_ != nullptr;};
      void deleteSysConfig() { this->sysConfig_ = nullptr;};
      inline string getSysConfig() const { DARABONBA_PTR_GET_DEFAULT(sysConfig_, "") };
      inline AgentList& setSysConfig(string sysConfig) { DARABONBA_PTR_SET_VALUE(sysConfig_, sysConfig) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AgentList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AgentList::Tags>) };
      inline vector<AgentList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AgentList::Tags>) };
      inline AgentList& setTags(const vector<AgentList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AgentList& setTags(vector<AgentList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AgentList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentOs_ {};
      shared_ptr<string> agentPort_ {};
      shared_ptr<int32_t> agentStatus_ {};
      shared_ptr<string> agentVersion_ {};
      shared_ptr<string> ecsId_ {};
      shared_ptr<string> firstLoginTime_ {};
      shared_ptr<string> lastActiveTime_ {};
      shared_ptr<int32_t> osCpu_ {};
      shared_ptr<int32_t> osMem_ {};
      shared_ptr<int32_t> pktLoss_ {};
      shared_ptr<string> privateIp_ {};
      shared_ptr<string> publicIp_ {};
      shared_ptr<int32_t> rmagentCpu_ {};
      shared_ptr<int32_t> rmagentMem_ {};
      shared_ptr<int64_t> sendByteCount_ {};
      shared_ptr<int64_t> sendBytes_ {};
      shared_ptr<int64_t> sendPacketCount_ {};
      shared_ptr<int64_t> sendPackets_ {};
      shared_ptr<string> sysConfig_ {};
      shared_ptr<vector<AgentList::Tags>> tags_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->agentList_ == nullptr
        && this->requestId_ == nullptr; };
    // agentList Field Functions 
    bool hasAgentList() const { return this->agentList_ != nullptr;};
    void deleteAgentList() { this->agentList_ = nullptr;};
    inline const vector<GetAgentListResponseBody::AgentList> & getAgentList() const { DARABONBA_PTR_GET_CONST(agentList_, vector<GetAgentListResponseBody::AgentList>) };
    inline vector<GetAgentListResponseBody::AgentList> getAgentList() { DARABONBA_PTR_GET(agentList_, vector<GetAgentListResponseBody::AgentList>) };
    inline GetAgentListResponseBody& setAgentList(const vector<GetAgentListResponseBody::AgentList> & agentList) { DARABONBA_PTR_SET_VALUE(agentList_, agentList) };
    inline GetAgentListResponseBody& setAgentList(vector<GetAgentListResponseBody::AgentList> && agentList) { DARABONBA_PTR_SET_RVALUE(agentList_, agentList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetAgentListResponseBody::AgentList>> agentList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
