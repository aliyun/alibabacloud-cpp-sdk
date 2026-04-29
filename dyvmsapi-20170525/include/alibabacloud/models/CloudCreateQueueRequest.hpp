// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEQUEUEREQUEST_HPP_
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
  class CloudCreateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(QueueSkills, queueSkills_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(QueueSkills, queueSkills_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CloudCreateQueueRequest() = default ;
    CloudCreateQueueRequest(const CloudCreateQueueRequest &) = default ;
    CloudCreateQueueRequest(CloudCreateQueueRequest &&) = default ;
    CloudCreateQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateQueueRequest() = default ;
    CloudCreateQueueRequest& operator=(const CloudCreateQueueRequest &) = default ;
    CloudCreateQueueRequest& operator=(CloudCreateQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueueSkills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueueSkills& obj) { 
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
      };
      friend void from_json(const Darabonba::Json& j, QueueSkills& obj) { 
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
      };
      QueueSkills() = default ;
      QueueSkills(const QueueSkills &) = default ;
      QueueSkills(QueueSkills &&) = default ;
      QueueSkills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueueSkills() = default ;
      QueueSkills& operator=(const QueueSkills &) = default ;
      QueueSkills& operator=(QueueSkills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->skillId_ == nullptr
        && this->skillLevel_ == nullptr; };
      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline int64_t getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, 0L) };
      inline QueueSkills& setSkillId(int64_t skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillLevel Field Functions 
      bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
      void deleteSkillLevel() { this->skillLevel_ = nullptr;};
      inline int64_t getSkillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0L) };
      inline QueueSkills& setSkillLevel(int64_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


    protected:
      // skill的id
      // 
      // This parameter is required.
      shared_ptr<int64_t> skillId_ {};
      // 技能值
      // 
      // This parameter is required.
      shared_ptr<int64_t> skillLevel_ {};
    };

    class Queue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queue& obj) { 
        DARABONBA_PTR_TO_JSON(AnnouncePosition, announcePosition_);
        DARABONBA_PTR_TO_JSON(AnnouncePositionFrequency, announcePositionFrequency_);
        DARABONBA_PTR_TO_JSON(AnnouncePositionParam, announcePositionParam_);
        DARABONBA_PTR_TO_JSON(AnnouncePositionYouarenext, announcePositionYouarenext_);
        DARABONBA_PTR_TO_JSON(AnnounceSound, announceSound_);
        DARABONBA_PTR_TO_JSON(AnnounceSoundFile, announceSoundFile_);
        DARABONBA_PTR_TO_JSON(AnnounceSoundFrequency, announceSoundFrequency_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
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
      friend void from_json(const Darabonba::Json& j, Queue& obj) { 
        DARABONBA_PTR_FROM_JSON(AnnouncePosition, announcePosition_);
        DARABONBA_PTR_FROM_JSON(AnnouncePositionFrequency, announcePositionFrequency_);
        DARABONBA_PTR_FROM_JSON(AnnouncePositionParam, announcePositionParam_);
        DARABONBA_PTR_FROM_JSON(AnnouncePositionYouarenext, announcePositionYouarenext_);
        DARABONBA_PTR_FROM_JSON(AnnounceSound, announceSound_);
        DARABONBA_PTR_FROM_JSON(AnnounceSoundFile, announceSoundFile_);
        DARABONBA_PTR_FROM_JSON(AnnounceSoundFrequency, announceSoundFrequency_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
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
      Queue() = default ;
      Queue(const Queue &) = default ;
      Queue(Queue &&) = default ;
      Queue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queue() = default ;
      Queue& operator=(const Queue &) = default ;
      Queue& operator=(Queue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->announcePosition_ == nullptr
        && this->announcePositionFrequency_ == nullptr && this->announcePositionParam_ == nullptr && this->announcePositionYouarenext_ == nullptr && this->announceSound_ == nullptr && this->announceSoundFile_ == nullptr
        && this->announceSoundFrequency_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->joinEmpty_ == nullptr && this->maxLen_ == nullptr
        && this->memberTimeout_ == nullptr && this->musicClass_ == nullptr && this->qno_ == nullptr && this->queueTimeout_ == nullptr && this->retry_ == nullptr
        && this->sayAgentno_ == nullptr && this->serviceLevel_ == nullptr && this->strategy_ == nullptr && this->vipSupport_ == nullptr && this->weight_ == nullptr
        && this->wrapupTime_ == nullptr; };
      // announcePosition Field Functions 
      bool hasAnnouncePosition() const { return this->announcePosition_ != nullptr;};
      void deleteAnnouncePosition() { this->announcePosition_ = nullptr;};
      inline int64_t getAnnouncePosition() const { DARABONBA_PTR_GET_DEFAULT(announcePosition_, 0L) };
      inline Queue& setAnnouncePosition(int64_t announcePosition) { DARABONBA_PTR_SET_VALUE(announcePosition_, announcePosition) };


      // announcePositionFrequency Field Functions 
      bool hasAnnouncePositionFrequency() const { return this->announcePositionFrequency_ != nullptr;};
      void deleteAnnouncePositionFrequency() { this->announcePositionFrequency_ = nullptr;};
      inline int64_t getAnnouncePositionFrequency() const { DARABONBA_PTR_GET_DEFAULT(announcePositionFrequency_, 0L) };
      inline Queue& setAnnouncePositionFrequency(int64_t announcePositionFrequency) { DARABONBA_PTR_SET_VALUE(announcePositionFrequency_, announcePositionFrequency) };


      // announcePositionParam Field Functions 
      bool hasAnnouncePositionParam() const { return this->announcePositionParam_ != nullptr;};
      void deleteAnnouncePositionParam() { this->announcePositionParam_ = nullptr;};
      inline int64_t getAnnouncePositionParam() const { DARABONBA_PTR_GET_DEFAULT(announcePositionParam_, 0L) };
      inline Queue& setAnnouncePositionParam(int64_t announcePositionParam) { DARABONBA_PTR_SET_VALUE(announcePositionParam_, announcePositionParam) };


      // announcePositionYouarenext Field Functions 
      bool hasAnnouncePositionYouarenext() const { return this->announcePositionYouarenext_ != nullptr;};
      void deleteAnnouncePositionYouarenext() { this->announcePositionYouarenext_ = nullptr;};
      inline int64_t getAnnouncePositionYouarenext() const { DARABONBA_PTR_GET_DEFAULT(announcePositionYouarenext_, 0L) };
      inline Queue& setAnnouncePositionYouarenext(int64_t announcePositionYouarenext) { DARABONBA_PTR_SET_VALUE(announcePositionYouarenext_, announcePositionYouarenext) };


      // announceSound Field Functions 
      bool hasAnnounceSound() const { return this->announceSound_ != nullptr;};
      void deleteAnnounceSound() { this->announceSound_ = nullptr;};
      inline int64_t getAnnounceSound() const { DARABONBA_PTR_GET_DEFAULT(announceSound_, 0L) };
      inline Queue& setAnnounceSound(int64_t announceSound) { DARABONBA_PTR_SET_VALUE(announceSound_, announceSound) };


      // announceSoundFile Field Functions 
      bool hasAnnounceSoundFile() const { return this->announceSoundFile_ != nullptr;};
      void deleteAnnounceSoundFile() { this->announceSoundFile_ = nullptr;};
      inline string getAnnounceSoundFile() const { DARABONBA_PTR_GET_DEFAULT(announceSoundFile_, "") };
      inline Queue& setAnnounceSoundFile(string announceSoundFile) { DARABONBA_PTR_SET_VALUE(announceSoundFile_, announceSoundFile) };


      // announceSoundFrequency Field Functions 
      bool hasAnnounceSoundFrequency() const { return this->announceSoundFrequency_ != nullptr;};
      void deleteAnnounceSoundFrequency() { this->announceSoundFrequency_ = nullptr;};
      inline int64_t getAnnounceSoundFrequency() const { DARABONBA_PTR_GET_DEFAULT(announceSoundFrequency_, 0L) };
      inline Queue& setAnnounceSoundFrequency(int64_t announceSoundFrequency) { DARABONBA_PTR_SET_VALUE(announceSoundFrequency_, announceSoundFrequency) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Queue& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Queue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // joinEmpty Field Functions 
      bool hasJoinEmpty() const { return this->joinEmpty_ != nullptr;};
      void deleteJoinEmpty() { this->joinEmpty_ = nullptr;};
      inline int64_t getJoinEmpty() const { DARABONBA_PTR_GET_DEFAULT(joinEmpty_, 0L) };
      inline Queue& setJoinEmpty(int64_t joinEmpty) { DARABONBA_PTR_SET_VALUE(joinEmpty_, joinEmpty) };


      // maxLen Field Functions 
      bool hasMaxLen() const { return this->maxLen_ != nullptr;};
      void deleteMaxLen() { this->maxLen_ = nullptr;};
      inline int64_t getMaxLen() const { DARABONBA_PTR_GET_DEFAULT(maxLen_, 0L) };
      inline Queue& setMaxLen(int64_t maxLen) { DARABONBA_PTR_SET_VALUE(maxLen_, maxLen) };


      // memberTimeout Field Functions 
      bool hasMemberTimeout() const { return this->memberTimeout_ != nullptr;};
      void deleteMemberTimeout() { this->memberTimeout_ = nullptr;};
      inline int64_t getMemberTimeout() const { DARABONBA_PTR_GET_DEFAULT(memberTimeout_, 0L) };
      inline Queue& setMemberTimeout(int64_t memberTimeout) { DARABONBA_PTR_SET_VALUE(memberTimeout_, memberTimeout) };


      // musicClass Field Functions 
      bool hasMusicClass() const { return this->musicClass_ != nullptr;};
      void deleteMusicClass() { this->musicClass_ = nullptr;};
      inline string getMusicClass() const { DARABONBA_PTR_GET_DEFAULT(musicClass_, "") };
      inline Queue& setMusicClass(string musicClass) { DARABONBA_PTR_SET_VALUE(musicClass_, musicClass) };


      // qno Field Functions 
      bool hasQno() const { return this->qno_ != nullptr;};
      void deleteQno() { this->qno_ = nullptr;};
      inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
      inline Queue& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


      // queueTimeout Field Functions 
      bool hasQueueTimeout() const { return this->queueTimeout_ != nullptr;};
      void deleteQueueTimeout() { this->queueTimeout_ = nullptr;};
      inline int64_t getQueueTimeout() const { DARABONBA_PTR_GET_DEFAULT(queueTimeout_, 0L) };
      inline Queue& setQueueTimeout(int64_t queueTimeout) { DARABONBA_PTR_SET_VALUE(queueTimeout_, queueTimeout) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
      inline Queue& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


      // sayAgentno Field Functions 
      bool hasSayAgentno() const { return this->sayAgentno_ != nullptr;};
      void deleteSayAgentno() { this->sayAgentno_ = nullptr;};
      inline bool getSayAgentno() const { DARABONBA_PTR_GET_DEFAULT(sayAgentno_, false) };
      inline Queue& setSayAgentno(bool sayAgentno) { DARABONBA_PTR_SET_VALUE(sayAgentno_, sayAgentno) };


      // serviceLevel Field Functions 
      bool hasServiceLevel() const { return this->serviceLevel_ != nullptr;};
      void deleteServiceLevel() { this->serviceLevel_ = nullptr;};
      inline int64_t getServiceLevel() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel_, 0L) };
      inline Queue& setServiceLevel(int64_t serviceLevel) { DARABONBA_PTR_SET_VALUE(serviceLevel_, serviceLevel) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
      inline Queue& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


      // vipSupport Field Functions 
      bool hasVipSupport() const { return this->vipSupport_ != nullptr;};
      void deleteVipSupport() { this->vipSupport_ = nullptr;};
      inline int64_t getVipSupport() const { DARABONBA_PTR_GET_DEFAULT(vipSupport_, 0L) };
      inline Queue& setVipSupport(int64_t vipSupport) { DARABONBA_PTR_SET_VALUE(vipSupport_, vipSupport) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline Queue& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      // wrapupTime Field Functions 
      bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
      void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
      inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
      inline Queue& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


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
      // 
      // This parameter is required.
      shared_ptr<int64_t> announceSound_ {};
      // 固定语音文件
      shared_ptr<string> announceSoundFile_ {};
      // 播放固定语音周期，秒数
      shared_ptr<int64_t> announceSoundFrequency_ {};
      // 创建时间，格式: yyyy-MM-dd HH:mm:ss
      shared_ptr<string> createTime_ {};
      // 队列名
      // 
      // This parameter is required.
      shared_ptr<string> description_ {};
      // 队列中为空时是否可以join，取值：1：置忙 2：通话中 4：振铃 8：无效 16：整理
      // 
      // This parameter is required.
      shared_ptr<int64_t> joinEmpty_ {};
      // 最大等待数，设置范围0-999，0表示不做任何限制
      // 
      // This parameter is required.
      shared_ptr<int64_t> maxLen_ {};
      // 座席超时时间，取值范围20-60秒，默认25秒
      // 
      // This parameter is required.
      shared_ptr<int64_t> memberTimeout_ {};
      // 等待语音class
      // 
      // This parameter is required.
      shared_ptr<string> musicClass_ {};
      // 队列号
      // 
      // This parameter is required.
      shared_ptr<string> qno_ {};
      // 队列超时时间，取值范围20-600秒，默认600秒
      // 
      // This parameter is required.
      shared_ptr<int64_t> queueTimeout_ {};
      // 座席超时无应答,呼叫下一座席的延迟秒数
      // 
      // This parameter is required.
      shared_ptr<int64_t> retry_ {};
      // 语音报号，true:播报，false:不播报
      // 
      // This parameter is required.
      shared_ptr<bool> sayAgentno_ {};
      // 服务水平秒数，低于此时间内接听的认为是高服务水平
      // 
      // This parameter is required.
      shared_ptr<int64_t> serviceLevel_ {};
      // 呼叫策略：rrordered:技能优先 rrmemory:轮选 fewestcalls:平均 random:随机 linear:顺序 leastrecent:最长空闲时间
      // 
      // This parameter is required.
      shared_ptr<string> strategy_ {};
      // 是否支持vip，1:支持，0:不支持
      // 
      // This parameter is required.
      shared_ptr<int64_t> vipSupport_ {};
      // 队列优先级，取值范围1-10，数值越高，优先级越高
      // 
      // This parameter is required.
      shared_ptr<int64_t> weight_ {};
      // 整理时间，取值范围3-3600秒
      // 
      // This parameter is required.
      shared_ptr<int64_t> wrapupTime_ {};
    };

    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->ownerId_ == nullptr && this->queue_ == nullptr && this->queueSkills_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateQueueRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudCreateQueueRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline const CloudCreateQueueRequest::Queue & getQueue() const { DARABONBA_PTR_GET_CONST(queue_, CloudCreateQueueRequest::Queue) };
    inline CloudCreateQueueRequest::Queue getQueue() { DARABONBA_PTR_GET(queue_, CloudCreateQueueRequest::Queue) };
    inline CloudCreateQueueRequest& setQueue(const CloudCreateQueueRequest::Queue & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
    inline CloudCreateQueueRequest& setQueue(CloudCreateQueueRequest::Queue && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


    // queueSkills Field Functions 
    bool hasQueueSkills() const { return this->queueSkills_ != nullptr;};
    void deleteQueueSkills() { this->queueSkills_ = nullptr;};
    inline const vector<CloudCreateQueueRequest::QueueSkills> & getQueueSkills() const { DARABONBA_PTR_GET_CONST(queueSkills_, vector<CloudCreateQueueRequest::QueueSkills>) };
    inline vector<CloudCreateQueueRequest::QueueSkills> getQueueSkills() { DARABONBA_PTR_GET(queueSkills_, vector<CloudCreateQueueRequest::QueueSkills>) };
    inline CloudCreateQueueRequest& setQueueSkills(const vector<CloudCreateQueueRequest::QueueSkills> & queueSkills) { DARABONBA_PTR_SET_VALUE(queueSkills_, queueSkills) };
    inline CloudCreateQueueRequest& setQueueSkills(vector<CloudCreateQueueRequest::QueueSkills> && queueSkills) { DARABONBA_PTR_SET_RVALUE(queueSkills_, queueSkills) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudCreateQueueRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudCreateQueueRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列信息
    // 
    // This parameter is required.
    shared_ptr<CloudCreateQueueRequest::Queue> queue_ {};
    // 队列技能
    // 
    // This parameter is required.
    shared_ptr<vector<CloudCreateQueueRequest::QueueSkills>> queueSkills_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
