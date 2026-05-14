// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATEQUEUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATEQUEUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkCreateQueueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatLocation, chatLocation_);
      DARABONBA_PTR_TO_JSON(ChatMaxWait, chatMaxWait_);
      DARABONBA_PTR_TO_JSON(ChatStrategy, chatStrategy_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(IbAllowed, ibAllowed_);
      DARABONBA_PTR_TO_JSON(JoinEmpty, joinEmpty_);
      DARABONBA_PTR_TO_JSON(MaxPauseClientFlag, maxPauseClientFlag_);
      DARABONBA_PTR_TO_JSON(MaxPauseClientType, maxPauseClientType_);
      DARABONBA_PTR_TO_JSON(MaxPauseClientValue, maxPauseClientValue_);
      DARABONBA_PTR_TO_JSON(MaxWait, maxWait_);
      DARABONBA_PTR_TO_JSON(MemberTimeout, memberTimeout_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Qno, qno_);
      DARABONBA_PTR_TO_JSON(QueueMembers, queueMembersShrink_);
      DARABONBA_PTR_TO_JSON(QueueTimeout, queueTimeout_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SayCno, sayCno_);
      DARABONBA_PTR_TO_JSON(ServiceLevel, serviceLevel_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(VipSupport, vipSupport_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatLocation, chatLocation_);
      DARABONBA_PTR_FROM_JSON(ChatMaxWait, chatMaxWait_);
      DARABONBA_PTR_FROM_JSON(ChatStrategy, chatStrategy_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(IbAllowed, ibAllowed_);
      DARABONBA_PTR_FROM_JSON(JoinEmpty, joinEmpty_);
      DARABONBA_PTR_FROM_JSON(MaxPauseClientFlag, maxPauseClientFlag_);
      DARABONBA_PTR_FROM_JSON(MaxPauseClientType, maxPauseClientType_);
      DARABONBA_PTR_FROM_JSON(MaxPauseClientValue, maxPauseClientValue_);
      DARABONBA_PTR_FROM_JSON(MaxWait, maxWait_);
      DARABONBA_PTR_FROM_JSON(MemberTimeout, memberTimeout_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Qno, qno_);
      DARABONBA_PTR_FROM_JSON(QueueMembers, queueMembersShrink_);
      DARABONBA_PTR_FROM_JSON(QueueTimeout, queueTimeout_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SayCno, sayCno_);
      DARABONBA_PTR_FROM_JSON(ServiceLevel, serviceLevel_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(VipSupport, vipSupport_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
    };
    ClinkCreateQueueShrinkRequest() = default ;
    ClinkCreateQueueShrinkRequest(const ClinkCreateQueueShrinkRequest &) = default ;
    ClinkCreateQueueShrinkRequest(ClinkCreateQueueShrinkRequest &&) = default ;
    ClinkCreateQueueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateQueueShrinkRequest() = default ;
    ClinkCreateQueueShrinkRequest& operator=(const ClinkCreateQueueShrinkRequest &) = default ;
    ClinkCreateQueueShrinkRequest& operator=(ClinkCreateQueueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatLocation_ == nullptr
        && this->chatMaxWait_ == nullptr && this->chatStrategy_ == nullptr && this->enterpriseId_ == nullptr && this->ibAllowed_ == nullptr && this->joinEmpty_ == nullptr
        && this->maxPauseClientFlag_ == nullptr && this->maxPauseClientType_ == nullptr && this->maxPauseClientValue_ == nullptr && this->maxWait_ == nullptr && this->memberTimeout_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->qno_ == nullptr && this->queueMembersShrink_ == nullptr && this->queueTimeout_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sayCno_ == nullptr && this->serviceLevel_ == nullptr && this->strategy_ == nullptr
        && this->vipSupport_ == nullptr && this->weight_ == nullptr && this->wrapupTime_ == nullptr; };
    // chatLocation Field Functions 
    bool hasChatLocation() const { return this->chatLocation_ != nullptr;};
    void deleteChatLocation() { this->chatLocation_ = nullptr;};
    inline int64_t getChatLocation() const { DARABONBA_PTR_GET_DEFAULT(chatLocation_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setChatLocation(int64_t chatLocation) { DARABONBA_PTR_SET_VALUE(chatLocation_, chatLocation) };


    // chatMaxWait Field Functions 
    bool hasChatMaxWait() const { return this->chatMaxWait_ != nullptr;};
    void deleteChatMaxWait() { this->chatMaxWait_ = nullptr;};
    inline int64_t getChatMaxWait() const { DARABONBA_PTR_GET_DEFAULT(chatMaxWait_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setChatMaxWait(int64_t chatMaxWait) { DARABONBA_PTR_SET_VALUE(chatMaxWait_, chatMaxWait) };


    // chatStrategy Field Functions 
    bool hasChatStrategy() const { return this->chatStrategy_ != nullptr;};
    void deleteChatStrategy() { this->chatStrategy_ = nullptr;};
    inline int64_t getChatStrategy() const { DARABONBA_PTR_GET_DEFAULT(chatStrategy_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setChatStrategy(int64_t chatStrategy) { DARABONBA_PTR_SET_VALUE(chatStrategy_, chatStrategy) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ibAllowed Field Functions 
    bool hasIbAllowed() const { return this->ibAllowed_ != nullptr;};
    void deleteIbAllowed() { this->ibAllowed_ = nullptr;};
    inline int64_t getIbAllowed() const { DARABONBA_PTR_GET_DEFAULT(ibAllowed_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setIbAllowed(int64_t ibAllowed) { DARABONBA_PTR_SET_VALUE(ibAllowed_, ibAllowed) };


    // joinEmpty Field Functions 
    bool hasJoinEmpty() const { return this->joinEmpty_ != nullptr;};
    void deleteJoinEmpty() { this->joinEmpty_ = nullptr;};
    inline int64_t getJoinEmpty() const { DARABONBA_PTR_GET_DEFAULT(joinEmpty_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setJoinEmpty(int64_t joinEmpty) { DARABONBA_PTR_SET_VALUE(joinEmpty_, joinEmpty) };


    // maxPauseClientFlag Field Functions 
    bool hasMaxPauseClientFlag() const { return this->maxPauseClientFlag_ != nullptr;};
    void deleteMaxPauseClientFlag() { this->maxPauseClientFlag_ = nullptr;};
    inline int64_t getMaxPauseClientFlag() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientFlag_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setMaxPauseClientFlag(int64_t maxPauseClientFlag) { DARABONBA_PTR_SET_VALUE(maxPauseClientFlag_, maxPauseClientFlag) };


    // maxPauseClientType Field Functions 
    bool hasMaxPauseClientType() const { return this->maxPauseClientType_ != nullptr;};
    void deleteMaxPauseClientType() { this->maxPauseClientType_ = nullptr;};
    inline int64_t getMaxPauseClientType() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientType_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setMaxPauseClientType(int64_t maxPauseClientType) { DARABONBA_PTR_SET_VALUE(maxPauseClientType_, maxPauseClientType) };


    // maxPauseClientValue Field Functions 
    bool hasMaxPauseClientValue() const { return this->maxPauseClientValue_ != nullptr;};
    void deleteMaxPauseClientValue() { this->maxPauseClientValue_ = nullptr;};
    inline int64_t getMaxPauseClientValue() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientValue_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setMaxPauseClientValue(int64_t maxPauseClientValue) { DARABONBA_PTR_SET_VALUE(maxPauseClientValue_, maxPauseClientValue) };


    // maxWait Field Functions 
    bool hasMaxWait() const { return this->maxWait_ != nullptr;};
    void deleteMaxWait() { this->maxWait_ = nullptr;};
    inline int64_t getMaxWait() const { DARABONBA_PTR_GET_DEFAULT(maxWait_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setMaxWait(int64_t maxWait) { DARABONBA_PTR_SET_VALUE(maxWait_, maxWait) };


    // memberTimeout Field Functions 
    bool hasMemberTimeout() const { return this->memberTimeout_ != nullptr;};
    void deleteMemberTimeout() { this->memberTimeout_ = nullptr;};
    inline int64_t getMemberTimeout() const { DARABONBA_PTR_GET_DEFAULT(memberTimeout_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setMemberTimeout(int64_t memberTimeout) { DARABONBA_PTR_SET_VALUE(memberTimeout_, memberTimeout) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ClinkCreateQueueShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qno Field Functions 
    bool hasQno() const { return this->qno_ != nullptr;};
    void deleteQno() { this->qno_ = nullptr;};
    inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
    inline ClinkCreateQueueShrinkRequest& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


    // queueMembersShrink Field Functions 
    bool hasQueueMembersShrink() const { return this->queueMembersShrink_ != nullptr;};
    void deleteQueueMembersShrink() { this->queueMembersShrink_ = nullptr;};
    inline string getQueueMembersShrink() const { DARABONBA_PTR_GET_DEFAULT(queueMembersShrink_, "") };
    inline ClinkCreateQueueShrinkRequest& setQueueMembersShrink(string queueMembersShrink) { DARABONBA_PTR_SET_VALUE(queueMembersShrink_, queueMembersShrink) };


    // queueTimeout Field Functions 
    bool hasQueueTimeout() const { return this->queueTimeout_ != nullptr;};
    void deleteQueueTimeout() { this->queueTimeout_ = nullptr;};
    inline int64_t getQueueTimeout() const { DARABONBA_PTR_GET_DEFAULT(queueTimeout_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setQueueTimeout(int64_t queueTimeout) { DARABONBA_PTR_SET_VALUE(queueTimeout_, queueTimeout) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkCreateQueueShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sayCno Field Functions 
    bool hasSayCno() const { return this->sayCno_ != nullptr;};
    void deleteSayCno() { this->sayCno_ = nullptr;};
    inline int64_t getSayCno() const { DARABONBA_PTR_GET_DEFAULT(sayCno_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setSayCno(int64_t sayCno) { DARABONBA_PTR_SET_VALUE(sayCno_, sayCno) };


    // serviceLevel Field Functions 
    bool hasServiceLevel() const { return this->serviceLevel_ != nullptr;};
    void deleteServiceLevel() { this->serviceLevel_ = nullptr;};
    inline int64_t getServiceLevel() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setServiceLevel(int64_t serviceLevel) { DARABONBA_PTR_SET_VALUE(serviceLevel_, serviceLevel) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int64_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setStrategy(int64_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // vipSupport Field Functions 
    bool hasVipSupport() const { return this->vipSupport_ != nullptr;};
    void deleteVipSupport() { this->vipSupport_ = nullptr;};
    inline int64_t getVipSupport() const { DARABONBA_PTR_GET_DEFAULT(vipSupport_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setVipSupport(int64_t vipSupport) { DARABONBA_PTR_SET_VALUE(vipSupport_, vipSupport) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // wrapupTime Field Functions 
    bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
    void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
    inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
    inline ClinkCreateQueueShrinkRequest& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


  protected:
    // 在线客服排队位置推送(小于该位置则推送)；默认值为 10
    shared_ptr<int64_t> chatLocation_ {};
    // 在线客服最大排队数；默认值为 20
    shared_ptr<int64_t> chatMaxWait_ {};
    // 在线客服分配策略，2：轮选；4：随机；5：技能优先；默认值为 2
    shared_ptr<int64_t> chatStrategy_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 是否允许呼入队列，0: 否；1: 是；默认值为 1
    shared_ptr<int64_t> ibAllowed_ {};
    // 队列中为空时是否可以join，1: 置忙；2: 通话中；4: 振铃；8: 无效；16: 整理 如选多种状态则传对应数值的和，如选置忙和通话中，值为 3。默认值为 0，即都未选中
    shared_ptr<int64_t> joinEmpty_ {};
    // 最大并发置忙座席数，开关配置，0:关闭，1:开启；默认值为 0
    shared_ptr<int64_t> maxPauseClientFlag_ {};
    // 最大并发置忙座席数，配置类型，0:百分比，1:数值；默认值为 0
    shared_ptr<int64_t> maxPauseClientType_ {};
    // 最大并发置忙座席数，配置值，当配置类型为百分比时最大值为100，默认值为 0
    shared_ptr<int64_t> maxPauseClientValue_ {};
    // 最大等待数，设置范围 0-999，0 表示不做任何限制。默认值为 5
    shared_ptr<int64_t> maxWait_ {};
    // 座席超时时间，取值范围 20-60 秒。默认值为 25
    shared_ptr<int64_t> memberTimeout_ {};
    // 队列名称，只允许输入中文，字母，数字，下划线，长度不超过 20 个字符
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列工号，4 位数字，要求唯一
    // 
    // This parameter is required.
    shared_ptr<string> qno_ {};
    // 队列内座席及技能值设置。技能值 1-10，技能值 1 的优先级为最高 cno 队列下座席号 penalty该座席在队列中的优先级
    shared_ptr<string> queueMembersShrink_ {};
    // 队列超时时间，取值范围 30-600 秒。默认值为 600
    shared_ptr<int64_t> queueTimeout_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 是否报座席号，0: 否；1:是；默认值为 0
    shared_ptr<int64_t> sayCno_ {};
    // 服务水平秒数，取值范围 10-30 秒，低于此时间内接听的认为是高服务水平。默认值为 15
    shared_ptr<int64_t> serviceLevel_ {};
    // 呼叫策略， 1：顺序，2：轮选，3：平均，4：随机，5：技能优先，6：距上一通呼入空闲时间累计最长，7：技能优先+距上一通呼入空闲时间累计最长，8：距上一通呼入空闲时间累计最长(全队列)，9：技能优先+距上一通呼入空闲时间累计最长(全队列)，10：全队列平均，11：技能优先+轮选，12：最长空闲时长，13：技能优先+当前空闲状态时长最长，14：距上一通通话空闲时间累计最长，默认值为 2
    shared_ptr<int64_t> strategy_ {};
    // VIP客户优先，0:不支持；1:支持；默认值为 0
    shared_ptr<int64_t> vipSupport_ {};
    // 队列优先级，取值范围 1-10。默认值为 1 座席属于多个队列时，优先级高的队列的来电将优先接听；数值越高，优先级越高
    shared_ptr<int64_t> weight_ {};
    // 整理时长，取值范围 3-300 秒，整理期间座席不接受新的呼叫。默认值为 15
    shared_ptr<int64_t> wrapupTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
