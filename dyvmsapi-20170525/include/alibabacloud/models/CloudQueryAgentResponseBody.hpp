// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudQueryAgentResponseBody() = default ;
    CloudQueryAgentResponseBody(const CloudQueryAgentResponseBody &) = default ;
    CloudQueryAgentResponseBody(CloudQueryAgentResponseBody &&) = default ;
    CloudQueryAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryAgentResponseBody() = default ;
    CloudQueryAgentResponseBody& operator=(const CloudQueryAgentResponseBody &) = default ;
    CloudQueryAgentResponseBody& operator=(CloudQueryAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Agents, agents_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Agents, agents_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Agents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agents& obj) { 
          DARABONBA_PTR_TO_JSON(Agent, agent_);
          DARABONBA_PTR_TO_JSON(QueueList, queueList_);
        };
        friend void from_json(const Darabonba::Json& j, Agents& obj) { 
          DARABONBA_PTR_FROM_JSON(Agent, agent_);
          DARABONBA_PTR_FROM_JSON(QueueList, queueList_);
        };
        Agents() = default ;
        Agents(const Agents &) = default ;
        Agents(Agents &&) = default ;
        Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agents() = default ;
        Agents& operator=(const Agents &) = default ;
        Agents& operator=(Agents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueueList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueList& obj) { 
            DARABONBA_PTR_TO_JSON(AnnouncePosition, announcePosition_);
            DARABONBA_PTR_TO_JSON(AnnouncePositionFrequency, announcePositionFrequency_);
            DARABONBA_PTR_TO_JSON(AnnouncePositionParam, announcePositionParam_);
            DARABONBA_PTR_TO_JSON(AnnouncePositionYouarenext, announcePositionYouarenext_);
            DARABONBA_PTR_TO_JSON(AnnounceSound, announceSound_);
            DARABONBA_PTR_TO_JSON(AnnounceSoundFile, announceSoundFile_);
            DARABONBA_PTR_TO_JSON(AnnounceSoundFrequency, announceSoundFrequency_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(JoinEmpty, joinEmpty_);
            DARABONBA_PTR_TO_JSON(MaxLen, maxLen_);
            DARABONBA_PTR_TO_JSON(MemberTimeout, memberTimeout_);
            DARABONBA_PTR_TO_JSON(MusicClass, musicClass_);
            DARABONBA_PTR_TO_JSON(Qno, qno_);
            DARABONBA_PTR_TO_JSON(QueueTimeout, queueTimeout_);
            DARABONBA_PTR_TO_JSON(Retry, retry_);
            DARABONBA_PTR_TO_JSON(SayAgentno, sayAgentno_);
            DARABONBA_PTR_TO_JSON(ServiceLevel, serviceLevel_);
            DARABONBA_PTR_TO_JSON(Strategy, strategy_);
            DARABONBA_PTR_TO_JSON(VipSupport, vipSupport_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
            DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
          };
          friend void from_json(const Darabonba::Json& j, QueueList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnnouncePosition, announcePosition_);
            DARABONBA_PTR_FROM_JSON(AnnouncePositionFrequency, announcePositionFrequency_);
            DARABONBA_PTR_FROM_JSON(AnnouncePositionParam, announcePositionParam_);
            DARABONBA_PTR_FROM_JSON(AnnouncePositionYouarenext, announcePositionYouarenext_);
            DARABONBA_PTR_FROM_JSON(AnnounceSound, announceSound_);
            DARABONBA_PTR_FROM_JSON(AnnounceSoundFile, announceSoundFile_);
            DARABONBA_PTR_FROM_JSON(AnnounceSoundFrequency, announceSoundFrequency_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(JoinEmpty, joinEmpty_);
            DARABONBA_PTR_FROM_JSON(MaxLen, maxLen_);
            DARABONBA_PTR_FROM_JSON(MemberTimeout, memberTimeout_);
            DARABONBA_PTR_FROM_JSON(MusicClass, musicClass_);
            DARABONBA_PTR_FROM_JSON(Qno, qno_);
            DARABONBA_PTR_FROM_JSON(QueueTimeout, queueTimeout_);
            DARABONBA_PTR_FROM_JSON(Retry, retry_);
            DARABONBA_PTR_FROM_JSON(SayAgentno, sayAgentno_);
            DARABONBA_PTR_FROM_JSON(ServiceLevel, serviceLevel_);
            DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
            DARABONBA_PTR_FROM_JSON(VipSupport, vipSupport_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
            DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
          };
          QueueList() = default ;
          QueueList(const QueueList &) = default ;
          QueueList(QueueList &&) = default ;
          QueueList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueueList() = default ;
          QueueList& operator=(const QueueList &) = default ;
          QueueList& operator=(QueueList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->announcePosition_ == nullptr
        && this->announcePositionFrequency_ == nullptr && this->announcePositionParam_ == nullptr && this->announcePositionYouarenext_ == nullptr && this->announceSound_ == nullptr && this->announceSoundFile_ == nullptr
        && this->announceSoundFrequency_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->enterpriseId_ == nullptr && this->id_ == nullptr
        && this->joinEmpty_ == nullptr && this->maxLen_ == nullptr && this->memberTimeout_ == nullptr && this->musicClass_ == nullptr && this->qno_ == nullptr
        && this->queueTimeout_ == nullptr && this->retry_ == nullptr && this->sayAgentno_ == nullptr && this->serviceLevel_ == nullptr && this->strategy_ == nullptr
        && this->vipSupport_ == nullptr && this->weight_ == nullptr && this->wrapupTime_ == nullptr; };
          // announcePosition Field Functions 
          bool hasAnnouncePosition() const { return this->announcePosition_ != nullptr;};
          void deleteAnnouncePosition() { this->announcePosition_ = nullptr;};
          inline int64_t getAnnouncePosition() const { DARABONBA_PTR_GET_DEFAULT(announcePosition_, 0L) };
          inline QueueList& setAnnouncePosition(int64_t announcePosition) { DARABONBA_PTR_SET_VALUE(announcePosition_, announcePosition) };


          // announcePositionFrequency Field Functions 
          bool hasAnnouncePositionFrequency() const { return this->announcePositionFrequency_ != nullptr;};
          void deleteAnnouncePositionFrequency() { this->announcePositionFrequency_ = nullptr;};
          inline int64_t getAnnouncePositionFrequency() const { DARABONBA_PTR_GET_DEFAULT(announcePositionFrequency_, 0L) };
          inline QueueList& setAnnouncePositionFrequency(int64_t announcePositionFrequency) { DARABONBA_PTR_SET_VALUE(announcePositionFrequency_, announcePositionFrequency) };


          // announcePositionParam Field Functions 
          bool hasAnnouncePositionParam() const { return this->announcePositionParam_ != nullptr;};
          void deleteAnnouncePositionParam() { this->announcePositionParam_ = nullptr;};
          inline int64_t getAnnouncePositionParam() const { DARABONBA_PTR_GET_DEFAULT(announcePositionParam_, 0L) };
          inline QueueList& setAnnouncePositionParam(int64_t announcePositionParam) { DARABONBA_PTR_SET_VALUE(announcePositionParam_, announcePositionParam) };


          // announcePositionYouarenext Field Functions 
          bool hasAnnouncePositionYouarenext() const { return this->announcePositionYouarenext_ != nullptr;};
          void deleteAnnouncePositionYouarenext() { this->announcePositionYouarenext_ = nullptr;};
          inline int64_t getAnnouncePositionYouarenext() const { DARABONBA_PTR_GET_DEFAULT(announcePositionYouarenext_, 0L) };
          inline QueueList& setAnnouncePositionYouarenext(int64_t announcePositionYouarenext) { DARABONBA_PTR_SET_VALUE(announcePositionYouarenext_, announcePositionYouarenext) };


          // announceSound Field Functions 
          bool hasAnnounceSound() const { return this->announceSound_ != nullptr;};
          void deleteAnnounceSound() { this->announceSound_ = nullptr;};
          inline int64_t getAnnounceSound() const { DARABONBA_PTR_GET_DEFAULT(announceSound_, 0L) };
          inline QueueList& setAnnounceSound(int64_t announceSound) { DARABONBA_PTR_SET_VALUE(announceSound_, announceSound) };


          // announceSoundFile Field Functions 
          bool hasAnnounceSoundFile() const { return this->announceSoundFile_ != nullptr;};
          void deleteAnnounceSoundFile() { this->announceSoundFile_ = nullptr;};
          inline string getAnnounceSoundFile() const { DARABONBA_PTR_GET_DEFAULT(announceSoundFile_, "") };
          inline QueueList& setAnnounceSoundFile(string announceSoundFile) { DARABONBA_PTR_SET_VALUE(announceSoundFile_, announceSoundFile) };


          // announceSoundFrequency Field Functions 
          bool hasAnnounceSoundFrequency() const { return this->announceSoundFrequency_ != nullptr;};
          void deleteAnnounceSoundFrequency() { this->announceSoundFrequency_ = nullptr;};
          inline int64_t getAnnounceSoundFrequency() const { DARABONBA_PTR_GET_DEFAULT(announceSoundFrequency_, 0L) };
          inline QueueList& setAnnounceSoundFrequency(int64_t announceSoundFrequency) { DARABONBA_PTR_SET_VALUE(announceSoundFrequency_, announceSoundFrequency) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline QueueList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline QueueList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enterpriseId Field Functions 
          bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
          void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
          inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
          inline QueueList& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline QueueList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // joinEmpty Field Functions 
          bool hasJoinEmpty() const { return this->joinEmpty_ != nullptr;};
          void deleteJoinEmpty() { this->joinEmpty_ = nullptr;};
          inline int64_t getJoinEmpty() const { DARABONBA_PTR_GET_DEFAULT(joinEmpty_, 0L) };
          inline QueueList& setJoinEmpty(int64_t joinEmpty) { DARABONBA_PTR_SET_VALUE(joinEmpty_, joinEmpty) };


          // maxLen Field Functions 
          bool hasMaxLen() const { return this->maxLen_ != nullptr;};
          void deleteMaxLen() { this->maxLen_ = nullptr;};
          inline int64_t getMaxLen() const { DARABONBA_PTR_GET_DEFAULT(maxLen_, 0L) };
          inline QueueList& setMaxLen(int64_t maxLen) { DARABONBA_PTR_SET_VALUE(maxLen_, maxLen) };


          // memberTimeout Field Functions 
          bool hasMemberTimeout() const { return this->memberTimeout_ != nullptr;};
          void deleteMemberTimeout() { this->memberTimeout_ = nullptr;};
          inline int64_t getMemberTimeout() const { DARABONBA_PTR_GET_DEFAULT(memberTimeout_, 0L) };
          inline QueueList& setMemberTimeout(int64_t memberTimeout) { DARABONBA_PTR_SET_VALUE(memberTimeout_, memberTimeout) };


          // musicClass Field Functions 
          bool hasMusicClass() const { return this->musicClass_ != nullptr;};
          void deleteMusicClass() { this->musicClass_ = nullptr;};
          inline string getMusicClass() const { DARABONBA_PTR_GET_DEFAULT(musicClass_, "") };
          inline QueueList& setMusicClass(string musicClass) { DARABONBA_PTR_SET_VALUE(musicClass_, musicClass) };


          // qno Field Functions 
          bool hasQno() const { return this->qno_ != nullptr;};
          void deleteQno() { this->qno_ = nullptr;};
          inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
          inline QueueList& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


          // queueTimeout Field Functions 
          bool hasQueueTimeout() const { return this->queueTimeout_ != nullptr;};
          void deleteQueueTimeout() { this->queueTimeout_ = nullptr;};
          inline int64_t getQueueTimeout() const { DARABONBA_PTR_GET_DEFAULT(queueTimeout_, 0L) };
          inline QueueList& setQueueTimeout(int64_t queueTimeout) { DARABONBA_PTR_SET_VALUE(queueTimeout_, queueTimeout) };


          // retry Field Functions 
          bool hasRetry() const { return this->retry_ != nullptr;};
          void deleteRetry() { this->retry_ = nullptr;};
          inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
          inline QueueList& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


          // sayAgentno Field Functions 
          bool hasSayAgentno() const { return this->sayAgentno_ != nullptr;};
          void deleteSayAgentno() { this->sayAgentno_ = nullptr;};
          inline bool getSayAgentno() const { DARABONBA_PTR_GET_DEFAULT(sayAgentno_, false) };
          inline QueueList& setSayAgentno(bool sayAgentno) { DARABONBA_PTR_SET_VALUE(sayAgentno_, sayAgentno) };


          // serviceLevel Field Functions 
          bool hasServiceLevel() const { return this->serviceLevel_ != nullptr;};
          void deleteServiceLevel() { this->serviceLevel_ = nullptr;};
          inline int64_t getServiceLevel() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel_, 0L) };
          inline QueueList& setServiceLevel(int64_t serviceLevel) { DARABONBA_PTR_SET_VALUE(serviceLevel_, serviceLevel) };


          // strategy Field Functions 
          bool hasStrategy() const { return this->strategy_ != nullptr;};
          void deleteStrategy() { this->strategy_ = nullptr;};
          inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
          inline QueueList& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


          // vipSupport Field Functions 
          bool hasVipSupport() const { return this->vipSupport_ != nullptr;};
          void deleteVipSupport() { this->vipSupport_ = nullptr;};
          inline int64_t getVipSupport() const { DARABONBA_PTR_GET_DEFAULT(vipSupport_, 0L) };
          inline QueueList& setVipSupport(int64_t vipSupport) { DARABONBA_PTR_SET_VALUE(vipSupport_, vipSupport) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
          inline QueueList& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          // wrapupTime Field Functions 
          bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
          void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
          inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
          inline QueueList& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


        protected:
          // 位置播报 0关闭 1大于announce_position_param时播放 2小于等于announce_position_param时播放
          shared_ptr<int64_t> announcePosition_ {};
          // 位置播报周期，秒数
          shared_ptr<int64_t> announcePositionFrequency_ {};
          // 多余少余n个时播报，必须大于等于2
          shared_ptr<int64_t> announcePositionParam_ {};
          // 是否播报\\"您是下一位\\",0关闭，1开启
          shared_ptr<int64_t> announcePositionYouarenext_ {};
          // 播报固定语音 0关闭 1打开
          shared_ptr<int64_t> announceSound_ {};
          // 固定语音文件
          shared_ptr<string> announceSoundFile_ {};
          // 播放固定语音周期，秒数
          shared_ptr<int64_t> announceSoundFrequency_ {};
          // 创建时间，格式: yyyy-MM-dd HH:mm:ss
          shared_ptr<string> createTime_ {};
          // 队列名
          shared_ptr<string> description_ {};
          // 企业编号
          shared_ptr<int64_t> enterpriseId_ {};
          // 队列id
          shared_ptr<int64_t> id_ {};
          // 队列中为空时是否可以join，取值：1：置忙 2：通话中 4：振铃 8：无效 16：整理
          shared_ptr<int64_t> joinEmpty_ {};
          // 最大等待数，设置范围0-999，0表示不做任何限制
          shared_ptr<int64_t> maxLen_ {};
          // 座席超时时间，取值范围20-60秒，默认25秒
          shared_ptr<int64_t> memberTimeout_ {};
          // 等待语音class
          shared_ptr<string> musicClass_ {};
          // 队列号
          shared_ptr<string> qno_ {};
          // 队列超时时间，取值范围5-600秒，默认600秒
          shared_ptr<int64_t> queueTimeout_ {};
          // 座席超时无应答,呼叫下一座席的延迟秒数
          shared_ptr<int64_t> retry_ {};
          // 语音报号，true:播报，false:不播报
          shared_ptr<bool> sayAgentno_ {};
          // 服务水平秒数，低于此时间内接听的认为是高服务水平
          shared_ptr<int64_t> serviceLevel_ {};
          // 呼叫策略：rrordered:技能优先 rrmemory:轮选 fewestcalls:平均 random:随机 linear:顺序 leastrecent:最长空闲时间
          shared_ptr<string> strategy_ {};
          // 是否支持vip，1:支持，0:不支持
          shared_ptr<int64_t> vipSupport_ {};
          // 队列优先级，取值范围1-10，数值越高，优先级越高
          shared_ptr<int64_t> weight_ {};
          // 整理时间，取值范围3-3600秒
          shared_ptr<int64_t> wrapupTime_ {};
        };

        class Agent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Agent& obj) { 
            DARABONBA_PTR_TO_JSON(Active, active_);
            DARABONBA_PTR_TO_JSON(AgentType, agentType_);
            DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
            DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
            DARABONBA_PTR_TO_JSON(BindTelType, bindTelType_);
            DARABONBA_PTR_TO_JSON(CallPower, callPower_);
            DARABONBA_PTR_TO_JSON(Cno, cno_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
            DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IsAsr, isAsr_);
            DARABONBA_PTR_TO_JSON(IsOb, isOb_);
            DARABONBA_PTR_TO_JSON(IsQualityCheck, isQualityCheck_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ObClid, obClid_);
            DARABONBA_PTR_TO_JSON(ObClidType, obClidType_);
            DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
            DARABONBA_PTR_TO_JSON(Power, power_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(WebrtcUrlType, webrtcUrlType_);
            DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
          };
          friend void from_json(const Darabonba::Json& j, Agent& obj) { 
            DARABONBA_PTR_FROM_JSON(Active, active_);
            DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
            DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
            DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
            DARABONBA_PTR_FROM_JSON(BindTelType, bindTelType_);
            DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
            DARABONBA_PTR_FROM_JSON(Cno, cno_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
            DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IsAsr, isAsr_);
            DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
            DARABONBA_PTR_FROM_JSON(IsQualityCheck, isQualityCheck_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ObClid, obClid_);
            DARABONBA_PTR_FROM_JSON(ObClidType, obClidType_);
            DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
            DARABONBA_PTR_FROM_JSON(Power, power_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(WebrtcUrlType, webrtcUrlType_);
            DARABONBA_PTR_FROM_JSON(Wrapup, wrapup_);
          };
          Agent() = default ;
          Agent(const Agent &) = default ;
          Agent(Agent &&) = default ;
          Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Agent() = default ;
          Agent& operator=(const Agent &) = default ;
          Agent& operator=(Agent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->active_ == nullptr
        && this->agentType_ == nullptr && this->areaCode_ == nullptr && this->bindTel_ == nullptr && this->bindTelType_ == nullptr && this->callPower_ == nullptr
        && this->cno_ == nullptr && this->createTime_ == nullptr && this->enterpriseId_ == nullptr && this->ibRecord_ == nullptr && this->id_ == nullptr
        && this->isAsr_ == nullptr && this->isOb_ == nullptr && this->isQualityCheck_ == nullptr && this->name_ == nullptr && this->obClid_ == nullptr
        && this->obClidType_ == nullptr && this->obRecord_ == nullptr && this->power_ == nullptr && this->status_ == nullptr && this->webrtcUrlType_ == nullptr
        && this->wrapup_ == nullptr; };
          // active Field Functions 
          bool hasActive() const { return this->active_ != nullptr;};
          void deleteActive() { this->active_ = nullptr;};
          inline string getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, "") };
          inline Agent& setActive(string active) { DARABONBA_PTR_SET_VALUE(active_, active) };


          // agentType Field Functions 
          bool hasAgentType() const { return this->agentType_ != nullptr;};
          void deleteAgentType() { this->agentType_ = nullptr;};
          inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
          inline Agent& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


          // areaCode Field Functions 
          bool hasAreaCode() const { return this->areaCode_ != nullptr;};
          void deleteAreaCode() { this->areaCode_ = nullptr;};
          inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
          inline Agent& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


          // bindTel Field Functions 
          bool hasBindTel() const { return this->bindTel_ != nullptr;};
          void deleteBindTel() { this->bindTel_ = nullptr;};
          inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
          inline Agent& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


          // bindTelType Field Functions 
          bool hasBindTelType() const { return this->bindTelType_ != nullptr;};
          void deleteBindTelType() { this->bindTelType_ = nullptr;};
          inline string getBindTelType() const { DARABONBA_PTR_GET_DEFAULT(bindTelType_, "") };
          inline Agent& setBindTelType(string bindTelType) { DARABONBA_PTR_SET_VALUE(bindTelType_, bindTelType) };


          // callPower Field Functions 
          bool hasCallPower() const { return this->callPower_ != nullptr;};
          void deleteCallPower() { this->callPower_ = nullptr;};
          inline string getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, "") };
          inline Agent& setCallPower(string callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


          // cno Field Functions 
          bool hasCno() const { return this->cno_ != nullptr;};
          void deleteCno() { this->cno_ = nullptr;};
          inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
          inline Agent& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline Agent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // enterpriseId Field Functions 
          bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
          void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
          inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
          inline Agent& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


          // ibRecord Field Functions 
          bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
          void deleteIbRecord() { this->ibRecord_ = nullptr;};
          inline string getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, "") };
          inline Agent& setIbRecord(string ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Agent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isAsr Field Functions 
          bool hasIsAsr() const { return this->isAsr_ != nullptr;};
          void deleteIsAsr() { this->isAsr_ = nullptr;};
          inline string getIsAsr() const { DARABONBA_PTR_GET_DEFAULT(isAsr_, "") };
          inline Agent& setIsAsr(string isAsr) { DARABONBA_PTR_SET_VALUE(isAsr_, isAsr) };


          // isOb Field Functions 
          bool hasIsOb() const { return this->isOb_ != nullptr;};
          void deleteIsOb() { this->isOb_ = nullptr;};
          inline string getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, "") };
          inline Agent& setIsOb(string isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


          // isQualityCheck Field Functions 
          bool hasIsQualityCheck() const { return this->isQualityCheck_ != nullptr;};
          void deleteIsQualityCheck() { this->isQualityCheck_ = nullptr;};
          inline string getIsQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(isQualityCheck_, "") };
          inline Agent& setIsQualityCheck(string isQualityCheck) { DARABONBA_PTR_SET_VALUE(isQualityCheck_, isQualityCheck) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // obClid Field Functions 
          bool hasObClid() const { return this->obClid_ != nullptr;};
          void deleteObClid() { this->obClid_ = nullptr;};
          inline string getObClid() const { DARABONBA_PTR_GET_DEFAULT(obClid_, "") };
          inline Agent& setObClid(string obClid) { DARABONBA_PTR_SET_VALUE(obClid_, obClid) };


          // obClidType Field Functions 
          bool hasObClidType() const { return this->obClidType_ != nullptr;};
          void deleteObClidType() { this->obClidType_ = nullptr;};
          inline string getObClidType() const { DARABONBA_PTR_GET_DEFAULT(obClidType_, "") };
          inline Agent& setObClidType(string obClidType) { DARABONBA_PTR_SET_VALUE(obClidType_, obClidType) };


          // obRecord Field Functions 
          bool hasObRecord() const { return this->obRecord_ != nullptr;};
          void deleteObRecord() { this->obRecord_ = nullptr;};
          inline string getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, "") };
          inline Agent& setObRecord(string obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


          // power Field Functions 
          bool hasPower() const { return this->power_ != nullptr;};
          void deletePower() { this->power_ = nullptr;};
          inline string getPower() const { DARABONBA_PTR_GET_DEFAULT(power_, "") };
          inline Agent& setPower(string power) { DARABONBA_PTR_SET_VALUE(power_, power) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Agent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // webrtcUrlType Field Functions 
          bool hasWebrtcUrlType() const { return this->webrtcUrlType_ != nullptr;};
          void deleteWebrtcUrlType() { this->webrtcUrlType_ = nullptr;};
          inline string getWebrtcUrlType() const { DARABONBA_PTR_GET_DEFAULT(webrtcUrlType_, "") };
          inline Agent& setWebrtcUrlType(string webrtcUrlType) { DARABONBA_PTR_SET_VALUE(webrtcUrlType_, webrtcUrlType) };


          // wrapup Field Functions 
          bool hasWrapup() const { return this->wrapup_ != nullptr;};
          void deleteWrapup() { this->wrapup_ = nullptr;};
          inline string getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, "") };
          inline Agent& setWrapup(string wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


        protected:
          // 是否启用，0：停用，1：启用，默认启用
          shared_ptr<string> active_ {};
          // 座席类型，1：电话座席，2：电脑座席，默认电话座席
          shared_ptr<string> agentType_ {};
          // 区号格式
          shared_ptr<string> areaCode_ {};
          // 座席绑定电话
          shared_ptr<string> bindTel_ {};
          // 电话类型，1:固话 2:手机 3:分机 4:软电话
          shared_ptr<string> bindTelType_ {};
          // 呼叫权限，0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
          shared_ptr<string> callPower_ {};
          // 座席工号
          shared_ptr<string> cno_ {};
          // 创建时间，格式: yyyy-MM-dd HH:mm:ss
          shared_ptr<string> createTime_ {};
          // 企业编号
          shared_ptr<string> enterpriseId_ {};
          // 呼入是否录音，0：不录用，1：录音，默认录音
          shared_ptr<string> ibRecord_ {};
          // 座席id
          shared_ptr<string> id_ {};
          // 是否开启ASR转写：0：不开启，1：开启，默认不开启
          shared_ptr<string> isAsr_ {};
          // 是否允许外呼，0：不允许，1：可以，默认允许
          shared_ptr<string> isOb_ {};
          shared_ptr<string> isQualityCheck_ {};
          // 座席姓名
          shared_ptr<string> name_ {};
          // 外显号码
          shared_ptr<string> obClid_ {};
          // 外显规则 1：企业默认 2：随机 3：按区号 4：动态外显
          shared_ptr<string> obClidType_ {};
          // 外呼是否录音，0：不录音，1：录音，默认录音
          shared_ptr<string> obRecord_ {};
          // 1：班长席，0：普通座席，默认普通座席
          shared_ptr<string> power_ {};
          // 座席状态，0:离线，1：在线
          shared_ptr<string> status_ {};
          // webrtc软电话返回地址，0：企业默认 1：公网域名 2：专线域名 3：公网IP 4：专线IP
          shared_ptr<string> webrtcUrlType_ {};
          // 整理时间，秒数，默认10秒
          shared_ptr<string> wrapup_ {};
        };

        virtual bool empty() const override { return this->agent_ == nullptr
        && this->queueList_ == nullptr; };
        // agent Field Functions 
        bool hasAgent() const { return this->agent_ != nullptr;};
        void deleteAgent() { this->agent_ = nullptr;};
        inline const Agents::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, Agents::Agent) };
        inline Agents::Agent getAgent() { DARABONBA_PTR_GET(agent_, Agents::Agent) };
        inline Agents& setAgent(const Agents::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
        inline Agents& setAgent(Agents::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


        // queueList Field Functions 
        bool hasQueueList() const { return this->queueList_ != nullptr;};
        void deleteQueueList() { this->queueList_ = nullptr;};
        inline const vector<Agents::QueueList> & getQueueList() const { DARABONBA_PTR_GET_CONST(queueList_, vector<Agents::QueueList>) };
        inline vector<Agents::QueueList> getQueueList() { DARABONBA_PTR_GET(queueList_, vector<Agents::QueueList>) };
        inline Agents& setQueueList(const vector<Agents::QueueList> & queueList) { DARABONBA_PTR_SET_VALUE(queueList_, queueList) };
        inline Agents& setQueueList(vector<Agents::QueueList> && queueList) { DARABONBA_PTR_SET_RVALUE(queueList_, queueList) };


      protected:
        // 座席信息
        shared_ptr<Agents::Agent> agent_ {};
        // 座席所属队列信息
        shared_ptr<vector<Agents::QueueList>> queueList_ {};
      };

      virtual bool empty() const override { return this->agents_ == nullptr
        && this->total_ == nullptr; };
      // agents Field Functions 
      bool hasAgents() const { return this->agents_ != nullptr;};
      void deleteAgents() { this->agents_ = nullptr;};
      inline const vector<Data::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<Data::Agents>) };
      inline vector<Data::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<Data::Agents>) };
      inline Data& setAgents(const vector<Data::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
      inline Data& setAgents(vector<Data::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // 座席列表数组
      shared_ptr<vector<Data::Agents>> agents_ {};
      // 总数
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudQueryAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudQueryAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudQueryAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudQueryAgentResponseBody::Data) };
    inline CloudQueryAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudQueryAgentResponseBody::Data) };
    inline CloudQueryAgentResponseBody& setData(const CloudQueryAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudQueryAgentResponseBody& setData(CloudQueryAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudQueryAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudQueryAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudQueryAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
