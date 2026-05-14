// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDRIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDRIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListCdrIbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrIbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
      DARABONBA_PTR_TO_JSON(BridgeDurationEnd, bridgeDurationEnd_);
      DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
      DARABONBA_PTR_TO_JSON(BridgeTimeEnd, bridgeTimeEnd_);
      DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(FirstCallCno, firstCallCno_);
      DARABONBA_PTR_TO_JSON(FirstCallNumber, firstCallNumber_);
      DARABONBA_PTR_TO_JSON(FirstCallQno, firstCallQno_);
      DARABONBA_PTR_TO_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Qnos, qnos_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_TO_JSON(ScrollSearch, scrollSearch_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(TotalDurationEnd, totalDurationEnd_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrIbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
      DARABONBA_PTR_FROM_JSON(BridgeDurationEnd, bridgeDurationEnd_);
      DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
      DARABONBA_PTR_FROM_JSON(BridgeTimeEnd, bridgeTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(FirstCallCno, firstCallCno_);
      DARABONBA_PTR_FROM_JSON(FirstCallNumber, firstCallNumber_);
      DARABONBA_PTR_FROM_JSON(FirstCallQno, firstCallQno_);
      DARABONBA_PTR_FROM_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Qnos, qnos_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_FROM_JSON(ScrollSearch, scrollSearch_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(TotalDurationEnd, totalDurationEnd_);
    };
    ClinkListCdrIbRequest() = default ;
    ClinkListCdrIbRequest(const ClinkListCdrIbRequest &) = default ;
    ClinkListCdrIbRequest(ClinkListCdrIbRequest &&) = default ;
    ClinkListCdrIbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrIbRequest() = default ;
    ClinkListCdrIbRequest& operator=(const ClinkListCdrIbRequest &) = default ;
    ClinkListCdrIbRequest& operator=(ClinkListCdrIbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeDuration_ == nullptr
        && this->bridgeDurationEnd_ == nullptr && this->bridgeTime_ == nullptr && this->bridgeTimeEnd_ == nullptr && this->clientNumber_ == nullptr && this->cnos_ == nullptr
        && this->customerNumber_ == nullptr && this->endTime_ == nullptr && this->endTimeEnd_ == nullptr && this->enterpriseId_ == nullptr && this->firstCallCno_ == nullptr
        && this->firstCallNumber_ == nullptr && this->firstCallQno_ == nullptr && this->hiddenType_ == nullptr && this->limit_ == nullptr && this->mainUniqueId_ == nullptr
        && this->offset_ == nullptr && this->ownerId_ == nullptr && this->qnos_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->scrollId_ == nullptr && this->scrollSearch_ == nullptr && this->startTime_ == nullptr && this->startTimeEnd_ == nullptr && this->statuses_ == nullptr
        && this->totalDuration_ == nullptr && this->totalDurationEnd_ == nullptr; };
    // bridgeDuration Field Functions 
    bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
    void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
    inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
    inline ClinkListCdrIbRequest& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


    // bridgeDurationEnd Field Functions 
    bool hasBridgeDurationEnd() const { return this->bridgeDurationEnd_ != nullptr;};
    void deleteBridgeDurationEnd() { this->bridgeDurationEnd_ = nullptr;};
    inline int64_t getBridgeDurationEnd() const { DARABONBA_PTR_GET_DEFAULT(bridgeDurationEnd_, 0L) };
    inline ClinkListCdrIbRequest& setBridgeDurationEnd(int64_t bridgeDurationEnd) { DARABONBA_PTR_SET_VALUE(bridgeDurationEnd_, bridgeDurationEnd) };


    // bridgeTime Field Functions 
    bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
    void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
    inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
    inline ClinkListCdrIbRequest& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


    // bridgeTimeEnd Field Functions 
    bool hasBridgeTimeEnd() const { return this->bridgeTimeEnd_ != nullptr;};
    void deleteBridgeTimeEnd() { this->bridgeTimeEnd_ = nullptr;};
    inline int64_t getBridgeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(bridgeTimeEnd_, 0L) };
    inline ClinkListCdrIbRequest& setBridgeTimeEnd(int64_t bridgeTimeEnd) { DARABONBA_PTR_SET_VALUE(bridgeTimeEnd_, bridgeTimeEnd) };


    // clientNumber Field Functions 
    bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
    void deleteClientNumber() { this->clientNumber_ = nullptr;};
    inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
    inline ClinkListCdrIbRequest& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline ClinkListCdrIbRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline ClinkListCdrIbRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ClinkListCdrIbRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline int64_t getEndTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, 0L) };
    inline ClinkListCdrIbRequest& setEndTimeEnd(int64_t endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkListCdrIbRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // firstCallCno Field Functions 
    bool hasFirstCallCno() const { return this->firstCallCno_ != nullptr;};
    void deleteFirstCallCno() { this->firstCallCno_ = nullptr;};
    inline string getFirstCallCno() const { DARABONBA_PTR_GET_DEFAULT(firstCallCno_, "") };
    inline ClinkListCdrIbRequest& setFirstCallCno(string firstCallCno) { DARABONBA_PTR_SET_VALUE(firstCallCno_, firstCallCno) };


    // firstCallNumber Field Functions 
    bool hasFirstCallNumber() const { return this->firstCallNumber_ != nullptr;};
    void deleteFirstCallNumber() { this->firstCallNumber_ = nullptr;};
    inline string getFirstCallNumber() const { DARABONBA_PTR_GET_DEFAULT(firstCallNumber_, "") };
    inline ClinkListCdrIbRequest& setFirstCallNumber(string firstCallNumber) { DARABONBA_PTR_SET_VALUE(firstCallNumber_, firstCallNumber) };


    // firstCallQno Field Functions 
    bool hasFirstCallQno() const { return this->firstCallQno_ != nullptr;};
    void deleteFirstCallQno() { this->firstCallQno_ = nullptr;};
    inline string getFirstCallQno() const { DARABONBA_PTR_GET_DEFAULT(firstCallQno_, "") };
    inline ClinkListCdrIbRequest& setFirstCallQno(string firstCallQno) { DARABONBA_PTR_SET_VALUE(firstCallQno_, firstCallQno) };


    // hiddenType Field Functions 
    bool hasHiddenType() const { return this->hiddenType_ != nullptr;};
    void deleteHiddenType() { this->hiddenType_ = nullptr;};
    inline int64_t getHiddenType() const { DARABONBA_PTR_GET_DEFAULT(hiddenType_, 0L) };
    inline ClinkListCdrIbRequest& setHiddenType(int64_t hiddenType) { DARABONBA_PTR_SET_VALUE(hiddenType_, hiddenType) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ClinkListCdrIbRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline ClinkListCdrIbRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ClinkListCdrIbRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkListCdrIbRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qnos Field Functions 
    bool hasQnos() const { return this->qnos_ != nullptr;};
    void deleteQnos() { this->qnos_ = nullptr;};
    inline string getQnos() const { DARABONBA_PTR_GET_DEFAULT(qnos_, "") };
    inline ClinkListCdrIbRequest& setQnos(string qnos) { DARABONBA_PTR_SET_VALUE(qnos_, qnos) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkListCdrIbRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkListCdrIbRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ClinkListCdrIbRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // scrollSearch Field Functions 
    bool hasScrollSearch() const { return this->scrollSearch_ != nullptr;};
    void deleteScrollSearch() { this->scrollSearch_ = nullptr;};
    inline string getScrollSearch() const { DARABONBA_PTR_GET_DEFAULT(scrollSearch_, "") };
    inline ClinkListCdrIbRequest& setScrollSearch(string scrollSearch) { DARABONBA_PTR_SET_VALUE(scrollSearch_, scrollSearch) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ClinkListCdrIbRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline int64_t getStartTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, 0L) };
    inline ClinkListCdrIbRequest& setStartTimeEnd(int64_t startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline int64_t getStatuses() const { DARABONBA_PTR_GET_DEFAULT(statuses_, 0L) };
    inline ClinkListCdrIbRequest& setStatuses(int64_t statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
    inline ClinkListCdrIbRequest& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // totalDurationEnd Field Functions 
    bool hasTotalDurationEnd() const { return this->totalDurationEnd_ != nullptr;};
    void deleteTotalDurationEnd() { this->totalDurationEnd_ = nullptr;};
    inline int64_t getTotalDurationEnd() const { DARABONBA_PTR_GET_DEFAULT(totalDurationEnd_, 0L) };
    inline ClinkListCdrIbRequest& setTotalDurationEnd(int64_t totalDurationEnd) { DARABONBA_PTR_SET_VALUE(totalDurationEnd_, totalDurationEnd) };


  protected:
    // 通话时长范围查询最小值，和bridgeDurationEnd配合使用
    shared_ptr<int64_t> bridgeDuration_ {};
    // 通话时长范围查询最大值
    shared_ptr<int64_t> bridgeDurationEnd_ {};
    // 接听时间，时间戳格式精确到秒。
    shared_ptr<int64_t> bridgeTime_ {};
    // 接听时间查询截止，时间戳格式精确到秒。
    shared_ptr<int64_t> bridgeTimeEnd_ {};
    // 座席电话
    shared_ptr<string> clientNumber_ {};
    // 座席号
    shared_ptr<string> cnos_ {};
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
    // 首呼座席
    shared_ptr<string> firstCallCno_ {};
    // 首呼座席电话
    shared_ptr<string> firstCallNumber_ {};
    // 首呼队列
    shared_ptr<string> firstCallQno_ {};
    // 是否隐藏号码。  0: 不隐藏，1: 中间四位，2: 最后八位，3: 全部号码，4: 最后四位。默认值为 0
    shared_ptr<int64_t> hiddenType_ {};
    // 查询条数，范围 10-100。默认值为 10。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> limit_ {};
    // 通话记录唯一标识
    shared_ptr<string> mainUniqueId_ {};
    // 偏移量，范围 0-99990。默认值为 0。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列号
    shared_ptr<string> qnos_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 滚动查询ID。配合scrollSearch使用，第一次查询时不需要传递此参数，后续查询可从返回列表中取值，并传参数。当scrollId为空时，代表滚动查询结束。
    shared_ptr<string> scrollId_ {};
    // 是否滚动查询。默认false，true代表使用滚动查询。
    shared_ptr<string> scrollSearch_ {};
    // 开始时间，时间戳格式精确到秒。默认值取当前月份第一天
    shared_ptr<int64_t> startTime_ {};
    // 开始时间查询截止，时间戳格式精确到秒，开始时间和结束时间跨度不能超过一个月。默认值取当前时间
    shared_ptr<int64_t> startTimeEnd_ {};
    // 接听状态。取值范围如下：  1: 人工接听  2: 人工未接听  3: 系统应答  4: 系统未应答  默认全部
    shared_ptr<int64_t> statuses_ {};
    // 总时长范围查询最小值，和totalDurationEnd配合使用
    shared_ptr<int64_t> totalDuration_ {};
    // 总时长范围查询最大值
    shared_ptr<int64_t> totalDurationEnd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
