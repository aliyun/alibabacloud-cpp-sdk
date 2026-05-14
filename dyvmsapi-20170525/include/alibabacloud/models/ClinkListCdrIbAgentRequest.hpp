// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDRIBAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDRIBAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListCdrIbAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrIbAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentAnswerInTime, agentAnswerInTime_);
      DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
      DARABONBA_PTR_TO_JSON(BridgeDurationEnd, bridgeDurationEnd_);
      DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
      DARABONBA_PTR_TO_JSON(BridgeTimeEnd, bridgeTimeEnd_);
      DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_TO_JSON(HotlineName, hotlineName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Qno, qno_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeEnd, startTimeEnd_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrIbAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentAnswerInTime, agentAnswerInTime_);
      DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
      DARABONBA_PTR_FROM_JSON(BridgeDurationEnd, bridgeDurationEnd_);
      DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
      DARABONBA_PTR_FROM_JSON(BridgeTimeEnd, bridgeTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_FROM_JSON(HotlineName, hotlineName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Qno, qno_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeEnd, startTimeEnd_);
    };
    ClinkListCdrIbAgentRequest() = default ;
    ClinkListCdrIbAgentRequest(const ClinkListCdrIbAgentRequest &) = default ;
    ClinkListCdrIbAgentRequest(ClinkListCdrIbAgentRequest &&) = default ;
    ClinkListCdrIbAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrIbAgentRequest() = default ;
    ClinkListCdrIbAgentRequest& operator=(const ClinkListCdrIbAgentRequest &) = default ;
    ClinkListCdrIbAgentRequest& operator=(ClinkListCdrIbAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentAnswerInTime_ == nullptr
        && this->bridgeDuration_ == nullptr && this->bridgeDurationEnd_ == nullptr && this->bridgeTime_ == nullptr && this->bridgeTimeEnd_ == nullptr && this->clientNumber_ == nullptr
        && this->cno_ == nullptr && this->customerNumber_ == nullptr && this->endTime_ == nullptr && this->endTimeEnd_ == nullptr && this->enterpriseId_ == nullptr
        && this->hiddenType_ == nullptr && this->hotlineName_ == nullptr && this->limit_ == nullptr && this->mainUniqueId_ == nullptr && this->offset_ == nullptr
        && this->ownerId_ == nullptr && this->qno_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scrollId_ == nullptr
        && this->startTime_ == nullptr && this->startTimeEnd_ == nullptr; };
    // agentAnswerInTime Field Functions 
    bool hasAgentAnswerInTime() const { return this->agentAnswerInTime_ != nullptr;};
    void deleteAgentAnswerInTime() { this->agentAnswerInTime_ = nullptr;};
    inline int64_t getAgentAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(agentAnswerInTime_, 0L) };
    inline ClinkListCdrIbAgentRequest& setAgentAnswerInTime(int64_t agentAnswerInTime) { DARABONBA_PTR_SET_VALUE(agentAnswerInTime_, agentAnswerInTime) };


    // bridgeDuration Field Functions 
    bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
    void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
    inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
    inline ClinkListCdrIbAgentRequest& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


    // bridgeDurationEnd Field Functions 
    bool hasBridgeDurationEnd() const { return this->bridgeDurationEnd_ != nullptr;};
    void deleteBridgeDurationEnd() { this->bridgeDurationEnd_ = nullptr;};
    inline int64_t getBridgeDurationEnd() const { DARABONBA_PTR_GET_DEFAULT(bridgeDurationEnd_, 0L) };
    inline ClinkListCdrIbAgentRequest& setBridgeDurationEnd(int64_t bridgeDurationEnd) { DARABONBA_PTR_SET_VALUE(bridgeDurationEnd_, bridgeDurationEnd) };


    // bridgeTime Field Functions 
    bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
    void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
    inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
    inline ClinkListCdrIbAgentRequest& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


    // bridgeTimeEnd Field Functions 
    bool hasBridgeTimeEnd() const { return this->bridgeTimeEnd_ != nullptr;};
    void deleteBridgeTimeEnd() { this->bridgeTimeEnd_ = nullptr;};
    inline int64_t getBridgeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(bridgeTimeEnd_, 0L) };
    inline ClinkListCdrIbAgentRequest& setBridgeTimeEnd(int64_t bridgeTimeEnd) { DARABONBA_PTR_SET_VALUE(bridgeTimeEnd_, bridgeTimeEnd) };


    // clientNumber Field Functions 
    bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
    void deleteClientNumber() { this->clientNumber_ = nullptr;};
    inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
    inline ClinkListCdrIbAgentRequest& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline ClinkListCdrIbAgentRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline ClinkListCdrIbAgentRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ClinkListCdrIbAgentRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline int64_t getEndTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, 0L) };
    inline ClinkListCdrIbAgentRequest& setEndTimeEnd(int64_t endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkListCdrIbAgentRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // hiddenType Field Functions 
    bool hasHiddenType() const { return this->hiddenType_ != nullptr;};
    void deleteHiddenType() { this->hiddenType_ = nullptr;};
    inline int64_t getHiddenType() const { DARABONBA_PTR_GET_DEFAULT(hiddenType_, 0L) };
    inline ClinkListCdrIbAgentRequest& setHiddenType(int64_t hiddenType) { DARABONBA_PTR_SET_VALUE(hiddenType_, hiddenType) };


    // hotlineName Field Functions 
    bool hasHotlineName() const { return this->hotlineName_ != nullptr;};
    void deleteHotlineName() { this->hotlineName_ = nullptr;};
    inline string getHotlineName() const { DARABONBA_PTR_GET_DEFAULT(hotlineName_, "") };
    inline ClinkListCdrIbAgentRequest& setHotlineName(string hotlineName) { DARABONBA_PTR_SET_VALUE(hotlineName_, hotlineName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ClinkListCdrIbAgentRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline ClinkListCdrIbAgentRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ClinkListCdrIbAgentRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkListCdrIbAgentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qno Field Functions 
    bool hasQno() const { return this->qno_ != nullptr;};
    void deleteQno() { this->qno_ = nullptr;};
    inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
    inline ClinkListCdrIbAgentRequest& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkListCdrIbAgentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkListCdrIbAgentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ClinkListCdrIbAgentRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ClinkListCdrIbAgentRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline int64_t getStartTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, 0L) };
    inline ClinkListCdrIbAgentRequest& setStartTimeEnd(int64_t startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


  protected:
    // 及时应答。取值范围如下： 0: 否 1: 是 默认全部
    shared_ptr<int64_t> agentAnswerInTime_ {};
    // 通话时长范围查询最小值，和bridgeDurationEnd配合使用
    shared_ptr<int64_t> bridgeDuration_ {};
    // 通话时长范围查询最大值
    shared_ptr<int64_t> bridgeDurationEnd_ {};
    // 接听时间，时间戳格式精确到秒。
    shared_ptr<int64_t> bridgeTime_ {};
    // 接听时间查询截止，时间戳格式精确到秒。
    shared_ptr<int64_t> bridgeTimeEnd_ {};
    // 座席号码
    shared_ptr<string> clientNumber_ {};
    // 座席号
    shared_ptr<string> cno_ {};
    // 客户号码
    shared_ptr<string> customerNumber_ {};
    // 结束时间，时间戳格式精确到秒。
    shared_ptr<int64_t> endTime_ {};
    // 结束时间查询截止，时间戳格式精确到秒。
    shared_ptr<int64_t> endTimeEnd_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 是否隐藏号码。 0: 不隐藏，1: 中间四位，2: 最后八位，3: 全部号码，4: 最后四位。默认值为 0
    shared_ptr<int64_t> hiddenType_ {};
    // 热线别名
    shared_ptr<string> hotlineName_ {};
    // 查询条数，范围 10-100。默认值为 10。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> limit_ {};
    // 通话记录唯一标识
    shared_ptr<string> mainUniqueId_ {};
    // 偏移量，范围 0-99990。默认值为 0。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列号
    shared_ptr<string> qno_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 滚动查询ID。配合scrollSearch使用，第一次查询时不需要传递此参数，后续查询可从返回列表中取值，并传参数。当scrollId为空时，代表滚动查询结束。
    shared_ptr<string> scrollId_ {};
    // 开始时间，时间戳格式精确到秒。默认值取当前月份第一天
    shared_ptr<int64_t> startTime_ {};
    // 开始时间查询截止，时间戳格式精确到秒，开始时间和结束时间跨度不能超过一个月。默认值取当前时间
    shared_ptr<int64_t> startTimeEnd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
