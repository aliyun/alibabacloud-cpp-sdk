// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDROBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDROBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListCdrObRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrObRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
      DARABONBA_PTR_TO_JSON(BridgeDurationEnd, bridgeDurationEnd_);
      DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
      DARABONBA_PTR_TO_JSON(BridgeTimeEnd, bridgeTimeEnd_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_TO_JSON(LeftClid, leftClid_);
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(TotalDurationEnd, totalDurationEnd_);
      DARABONBA_PTR_TO_JSON(Xnumber, xnumber_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrObRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
      DARABONBA_PTR_FROM_JSON(BridgeDurationEnd, bridgeDurationEnd_);
      DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
      DARABONBA_PTR_FROM_JSON(BridgeTimeEnd, bridgeTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_FROM_JSON(LeftClid, leftClid_);
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(TotalDurationEnd, totalDurationEnd_);
      DARABONBA_PTR_FROM_JSON(Xnumber, xnumber_);
    };
    ClinkListCdrObRequest() = default ;
    ClinkListCdrObRequest(const ClinkListCdrObRequest &) = default ;
    ClinkListCdrObRequest(ClinkListCdrObRequest &&) = default ;
    ClinkListCdrObRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrObRequest() = default ;
    ClinkListCdrObRequest& operator=(const ClinkListCdrObRequest &) = default ;
    ClinkListCdrObRequest& operator=(ClinkListCdrObRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeDuration_ == nullptr
        && this->bridgeDurationEnd_ == nullptr && this->bridgeTime_ == nullptr && this->bridgeTimeEnd_ == nullptr && this->callType_ == nullptr && this->clientNumber_ == nullptr
        && this->cnos_ == nullptr && this->customerNumber_ == nullptr && this->endTime_ == nullptr && this->endTimeEnd_ == nullptr && this->enterpriseId_ == nullptr
        && this->hiddenType_ == nullptr && this->leftClid_ == nullptr && this->limit_ == nullptr && this->mainUniqueId_ == nullptr && this->offset_ == nullptr
        && this->ownerId_ == nullptr && this->qnos_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scrollId_ == nullptr
        && this->scrollSearch_ == nullptr && this->startTime_ == nullptr && this->startTimeEnd_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr
        && this->totalDuration_ == nullptr && this->totalDurationEnd_ == nullptr && this->xnumber_ == nullptr; };
    // bridgeDuration Field Functions 
    bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
    void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
    inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
    inline ClinkListCdrObRequest& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


    // bridgeDurationEnd Field Functions 
    bool hasBridgeDurationEnd() const { return this->bridgeDurationEnd_ != nullptr;};
    void deleteBridgeDurationEnd() { this->bridgeDurationEnd_ = nullptr;};
    inline int64_t getBridgeDurationEnd() const { DARABONBA_PTR_GET_DEFAULT(bridgeDurationEnd_, 0L) };
    inline ClinkListCdrObRequest& setBridgeDurationEnd(int64_t bridgeDurationEnd) { DARABONBA_PTR_SET_VALUE(bridgeDurationEnd_, bridgeDurationEnd) };


    // bridgeTime Field Functions 
    bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
    void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
    inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
    inline ClinkListCdrObRequest& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


    // bridgeTimeEnd Field Functions 
    bool hasBridgeTimeEnd() const { return this->bridgeTimeEnd_ != nullptr;};
    void deleteBridgeTimeEnd() { this->bridgeTimeEnd_ = nullptr;};
    inline int64_t getBridgeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(bridgeTimeEnd_, 0L) };
    inline ClinkListCdrObRequest& setBridgeTimeEnd(int64_t bridgeTimeEnd) { DARABONBA_PTR_SET_VALUE(bridgeTimeEnd_, bridgeTimeEnd) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
    inline ClinkListCdrObRequest& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // clientNumber Field Functions 
    bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
    void deleteClientNumber() { this->clientNumber_ = nullptr;};
    inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
    inline ClinkListCdrObRequest& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline ClinkListCdrObRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline ClinkListCdrObRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ClinkListCdrObRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline int64_t getEndTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, 0L) };
    inline ClinkListCdrObRequest& setEndTimeEnd(int64_t endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkListCdrObRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // hiddenType Field Functions 
    bool hasHiddenType() const { return this->hiddenType_ != nullptr;};
    void deleteHiddenType() { this->hiddenType_ = nullptr;};
    inline int64_t getHiddenType() const { DARABONBA_PTR_GET_DEFAULT(hiddenType_, 0L) };
    inline ClinkListCdrObRequest& setHiddenType(int64_t hiddenType) { DARABONBA_PTR_SET_VALUE(hiddenType_, hiddenType) };


    // leftClid Field Functions 
    bool hasLeftClid() const { return this->leftClid_ != nullptr;};
    void deleteLeftClid() { this->leftClid_ = nullptr;};
    inline string getLeftClid() const { DARABONBA_PTR_GET_DEFAULT(leftClid_, "") };
    inline ClinkListCdrObRequest& setLeftClid(string leftClid) { DARABONBA_PTR_SET_VALUE(leftClid_, leftClid) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ClinkListCdrObRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline ClinkListCdrObRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ClinkListCdrObRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkListCdrObRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qnos Field Functions 
    bool hasQnos() const { return this->qnos_ != nullptr;};
    void deleteQnos() { this->qnos_ = nullptr;};
    inline string getQnos() const { DARABONBA_PTR_GET_DEFAULT(qnos_, "") };
    inline ClinkListCdrObRequest& setQnos(string qnos) { DARABONBA_PTR_SET_VALUE(qnos_, qnos) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkListCdrObRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkListCdrObRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ClinkListCdrObRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // scrollSearch Field Functions 
    bool hasScrollSearch() const { return this->scrollSearch_ != nullptr;};
    void deleteScrollSearch() { this->scrollSearch_ = nullptr;};
    inline string getScrollSearch() const { DARABONBA_PTR_GET_DEFAULT(scrollSearch_, "") };
    inline ClinkListCdrObRequest& setScrollSearch(string scrollSearch) { DARABONBA_PTR_SET_VALUE(scrollSearch_, scrollSearch) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ClinkListCdrObRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline int64_t getStartTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, 0L) };
    inline ClinkListCdrObRequest& setStartTimeEnd(int64_t startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ClinkListCdrObRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ClinkListCdrObRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
    inline ClinkListCdrObRequest& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // totalDurationEnd Field Functions 
    bool hasTotalDurationEnd() const { return this->totalDurationEnd_ != nullptr;};
    void deleteTotalDurationEnd() { this->totalDurationEnd_ = nullptr;};
    inline int64_t getTotalDurationEnd() const { DARABONBA_PTR_GET_DEFAULT(totalDurationEnd_, 0L) };
    inline ClinkListCdrObRequest& setTotalDurationEnd(int64_t totalDurationEnd) { DARABONBA_PTR_SET_VALUE(totalDurationEnd_, totalDurationEnd) };


    // xnumber Field Functions 
    bool hasXnumber() const { return this->xnumber_ != nullptr;};
    void deleteXnumber() { this->xnumber_ = nullptr;};
    inline string getXnumber() const { DARABONBA_PTR_GET_DEFAULT(xnumber_, "") };
    inline ClinkListCdrObRequest& setXnumber(string xnumber) { DARABONBA_PTR_SET_VALUE(xnumber_, xnumber) };


  protected:
    // 通话时长范围查询最小值，和bridgeDurationEnd配合使用
    shared_ptr<int64_t> bridgeDuration_ {};
    // 通话时长范围查询最大值
    shared_ptr<int64_t> bridgeDurationEnd_ {};
    // 接听时间，时间戳格式精确到秒。
    shared_ptr<int64_t> bridgeTime_ {};
    // 接听时间查询截止，时间戳格式精确到秒。
    shared_ptr<int64_t> bridgeTimeEnd_ {};
    // 通话类型  4: 预览外呼，6: 主叫外呼， 默认全部
    shared_ptr<int64_t> callType_ {};
    // 座席电话
    shared_ptr<string> clientNumber_ {};
    // 座席工号
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
    // 是否隐藏号码。  0: 不隐藏，1: 中间四位，2: 最后八位，3: 全部号码，4: 最后四位。默认值为 0
    shared_ptr<int64_t> hiddenType_ {};
    // 外显号码
    shared_ptr<string> leftClid_ {};
    // 查询条数，范围 10-100。默认值为 10。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> limit_ {};
    // 通话记录唯一标识
    shared_ptr<string> mainUniqueId_ {};
    // 偏移量，范围 0-99990。默认值为 0。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 外呼组
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
    // 接听状态。取值范围如下：  1: 客户未接听  2: 座席未接听  3: 客户接听  4: 座席接听  默认全部
    shared_ptr<int64_t> status_ {};
    // 呼叫任务名称
    shared_ptr<string> taskName_ {};
    // 总时长范围查询最小值，和totalDurationEnd配合使用
    shared_ptr<int64_t> totalDuration_ {};
    // 总时长范围查询最大值
    shared_ptr<int64_t> totalDurationEnd_ {};
    // 虚拟号码
    shared_ptr<string> xnumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
