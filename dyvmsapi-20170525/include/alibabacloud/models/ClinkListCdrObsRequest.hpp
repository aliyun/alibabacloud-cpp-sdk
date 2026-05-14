// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCDROBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCDROBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListCdrObsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListCdrObsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedId, associatedId_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Evaluation, evaluation_);
      DARABONBA_PTR_TO_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_TO_JSON(Hotline, hotline_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_TO_JSON(Mark, mark_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(QueueAnswerInTime, queueAnswerInTime_);
      DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListCdrObsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedId, associatedId_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Evaluation, evaluation_);
      DARABONBA_PTR_FROM_JSON(HiddenType, hiddenType_);
      DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_FROM_JSON(Mark, mark_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(QueueAnswerInTime, queueAnswerInTime_);
      DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ClinkListCdrObsRequest() = default ;
    ClinkListCdrObsRequest(const ClinkListCdrObsRequest &) = default ;
    ClinkListCdrObsRequest(ClinkListCdrObsRequest &&) = default ;
    ClinkListCdrObsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListCdrObsRequest() = default ;
    ClinkListCdrObsRequest& operator=(const ClinkListCdrObsRequest &) = default ;
    ClinkListCdrObsRequest& operator=(ClinkListCdrObsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedId_ == nullptr
        && this->city_ == nullptr && this->clientNumber_ == nullptr && this->cno_ == nullptr && this->customerNumber_ == nullptr && this->endTime_ == nullptr
        && this->enterpriseId_ == nullptr && this->evaluation_ == nullptr && this->hiddenType_ == nullptr && this->hotline_ == nullptr && this->idType_ == nullptr
        && this->limit_ == nullptr && this->mainUniqueId_ == nullptr && this->mark_ == nullptr && this->offset_ == nullptr && this->ownerId_ == nullptr
        && this->province_ == nullptr && this->queueAnswerInTime_ == nullptr && this->requestUniqueId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
    // associatedId Field Functions 
    bool hasAssociatedId() const { return this->associatedId_ != nullptr;};
    void deleteAssociatedId() { this->associatedId_ = nullptr;};
    inline int64_t getAssociatedId() const { DARABONBA_PTR_GET_DEFAULT(associatedId_, 0L) };
    inline ClinkListCdrObsRequest& setAssociatedId(int64_t associatedId) { DARABONBA_PTR_SET_VALUE(associatedId_, associatedId) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ClinkListCdrObsRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clientNumber Field Functions 
    bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
    void deleteClientNumber() { this->clientNumber_ = nullptr;};
    inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
    inline ClinkListCdrObsRequest& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline ClinkListCdrObsRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline ClinkListCdrObsRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ClinkListCdrObsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkListCdrObsRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // evaluation Field Functions 
    bool hasEvaluation() const { return this->evaluation_ != nullptr;};
    void deleteEvaluation() { this->evaluation_ = nullptr;};
    inline int64_t getEvaluation() const { DARABONBA_PTR_GET_DEFAULT(evaluation_, 0L) };
    inline ClinkListCdrObsRequest& setEvaluation(int64_t evaluation) { DARABONBA_PTR_SET_VALUE(evaluation_, evaluation) };


    // hiddenType Field Functions 
    bool hasHiddenType() const { return this->hiddenType_ != nullptr;};
    void deleteHiddenType() { this->hiddenType_ = nullptr;};
    inline int64_t getHiddenType() const { DARABONBA_PTR_GET_DEFAULT(hiddenType_, 0L) };
    inline ClinkListCdrObsRequest& setHiddenType(int64_t hiddenType) { DARABONBA_PTR_SET_VALUE(hiddenType_, hiddenType) };


    // hotline Field Functions 
    bool hasHotline() const { return this->hotline_ != nullptr;};
    void deleteHotline() { this->hotline_ = nullptr;};
    inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
    inline ClinkListCdrObsRequest& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline int64_t getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, 0L) };
    inline ClinkListCdrObsRequest& setIdType(int64_t idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ClinkListCdrObsRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline ClinkListCdrObsRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


    // mark Field Functions 
    bool hasMark() const { return this->mark_ != nullptr;};
    void deleteMark() { this->mark_ = nullptr;};
    inline int64_t getMark() const { DARABONBA_PTR_GET_DEFAULT(mark_, 0L) };
    inline ClinkListCdrObsRequest& setMark(int64_t mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ClinkListCdrObsRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkListCdrObsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ClinkListCdrObsRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // queueAnswerInTime Field Functions 
    bool hasQueueAnswerInTime() const { return this->queueAnswerInTime_ != nullptr;};
    void deleteQueueAnswerInTime() { this->queueAnswerInTime_ = nullptr;};
    inline int64_t getQueueAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(queueAnswerInTime_, 0L) };
    inline ClinkListCdrObsRequest& setQueueAnswerInTime(int64_t queueAnswerInTime) { DARABONBA_PTR_SET_VALUE(queueAnswerInTime_, queueAnswerInTime) };


    // requestUniqueId Field Functions 
    bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
    void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
    inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
    inline ClinkListCdrObsRequest& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkListCdrObsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkListCdrObsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ClinkListCdrObsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ClinkListCdrObsRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 业务ID
    shared_ptr<int64_t> associatedId_ {};
    // 客户城市
    shared_ptr<string> city_ {};
    // 座席电话
    shared_ptr<string> clientNumber_ {};
    // 座席号，要求只能是 4-11 位数字
    shared_ptr<string> cno_ {};
    // 客户号码
    shared_ptr<string> customerNumber_ {};
    // 结束时间，时间戳格式精确到秒，开始时间和结束时间跨度不能超过一个月。默认值取当前时间
    shared_ptr<int64_t> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 是否邀评: 0: 否 1: 是 2: -
    shared_ptr<int64_t> evaluation_ {};
    // 是否隐藏号码。 0: 不隐藏，1: 中间四位，2: 最后八位 3: 全部号码，4: 最后四位。默认值为 0
    shared_ptr<int64_t> hiddenType_ {};
    // 热线号码
    shared_ptr<string> hotline_ {};
    // 业务ID类型，1：工单；2：业务记录
    shared_ptr<int64_t> idType_ {};
    // 查询条数，范围 10-100。默认值为 10。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> limit_ {};
    // 通话记录唯一标识
    shared_ptr<string> mainUniqueId_ {};
    // 标记。取值范围如下： 为空表示全部， 1:留言 2:转移 3:咨询 4:三方 5:传真接收 6:会议 7:交互 8:IVR中放弃 9:已进入IVR 10:未进入IVR 11:队列中放弃 12:队列中溢出 注： 其中mark值2,3,4,7仅在status=1(座席接听)时有效， mark值1,5,6,8,9,10,11,12在status=3(系统接听)时有效
    shared_ptr<int64_t> mark_ {};
    // 偏移量，范围 0-99990。默认值为 0。注：limit + offset 不允许超过100000
    shared_ptr<int64_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 客户省份
    shared_ptr<string> province_ {};
    // 队列及时应答: 0: 否 1: 是 2: -
    shared_ptr<int64_t> queueAnswerInTime_ {};
    // 请求唯一标识
    shared_ptr<string> requestUniqueId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 开始时间，时间戳格式精确到秒。默认值取当前月份第一天
    shared_ptr<int64_t> startTime_ {};
    // 接听状态。取值范围如下： 0: 全部 1: 客户未接听 2: 座席未接听 3: 双方接听 默认值为0
    shared_ptr<int64_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
