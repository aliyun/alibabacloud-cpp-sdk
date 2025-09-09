// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(Backed, backed_);
      DARABONBA_PTR_TO_JSON(DealDisplayName, dealDisplayName_);
      DARABONBA_PTR_TO_JSON(DealLoginName, dealLoginName_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(DealUserId, dealUserId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(SubTypeCode, subTypeCode_);
      DARABONBA_PTR_TO_JSON(SubTypeName, subTypeName_);
      DARABONBA_PTR_TO_JSON(TargetProductCode, targetProductCode_);
      DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(Backed, backed_);
      DARABONBA_PTR_FROM_JSON(DealDisplayName, dealDisplayName_);
      DARABONBA_PTR_FROM_JSON(DealLoginName, dealLoginName_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(DealUserId, dealUserId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(SubTypeCode, subTypeCode_);
      DARABONBA_PTR_FROM_JSON(SubTypeName, subTypeName_);
      DARABONBA_PTR_FROM_JSON(TargetProductCode, targetProductCode_);
      DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
    };
    DescribeEventsResponseBodyItems() = default ;
    DescribeEventsResponseBodyItems(const DescribeEventsResponseBodyItems &) = default ;
    DescribeEventsResponseBodyItems(DescribeEventsResponseBodyItems &&) = default ;
    DescribeEventsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBodyItems() = default ;
    DescribeEventsResponseBodyItems& operator=(const DescribeEventsResponseBodyItems &) = default ;
    DescribeEventsResponseBodyItems& operator=(DescribeEventsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertTime_ != nullptr
        && this->backed_ != nullptr && this->dealDisplayName_ != nullptr && this->dealLoginName_ != nullptr && this->dealTime_ != nullptr && this->dealUserId_ != nullptr
        && this->displayName_ != nullptr && this->eventTime_ != nullptr && this->id_ != nullptr && this->loginName_ != nullptr && this->productCode_ != nullptr
        && this->status_ != nullptr && this->statusName_ != nullptr && this->subTypeCode_ != nullptr && this->subTypeName_ != nullptr && this->targetProductCode_ != nullptr
        && this->typeCode_ != nullptr && this->typeName_ != nullptr && this->userId_ != nullptr && this->warnLevel_ != nullptr; };
    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline int64_t alertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
    inline DescribeEventsResponseBodyItems& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // backed Field Functions 
    bool hasBacked() const { return this->backed_ != nullptr;};
    void deleteBacked() { this->backed_ = nullptr;};
    inline bool backed() const { DARABONBA_PTR_GET_DEFAULT(backed_, false) };
    inline DescribeEventsResponseBodyItems& setBacked(bool backed) { DARABONBA_PTR_SET_VALUE(backed_, backed) };


    // dealDisplayName Field Functions 
    bool hasDealDisplayName() const { return this->dealDisplayName_ != nullptr;};
    void deleteDealDisplayName() { this->dealDisplayName_ = nullptr;};
    inline string dealDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dealDisplayName_, "") };
    inline DescribeEventsResponseBodyItems& setDealDisplayName(string dealDisplayName) { DARABONBA_PTR_SET_VALUE(dealDisplayName_, dealDisplayName) };


    // dealLoginName Field Functions 
    bool hasDealLoginName() const { return this->dealLoginName_ != nullptr;};
    void deleteDealLoginName() { this->dealLoginName_ = nullptr;};
    inline string dealLoginName() const { DARABONBA_PTR_GET_DEFAULT(dealLoginName_, "") };
    inline DescribeEventsResponseBodyItems& setDealLoginName(string dealLoginName) { DARABONBA_PTR_SET_VALUE(dealLoginName_, dealLoginName) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline int64_t dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
    inline DescribeEventsResponseBodyItems& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // dealUserId Field Functions 
    bool hasDealUserId() const { return this->dealUserId_ != nullptr;};
    void deleteDealUserId() { this->dealUserId_ = nullptr;};
    inline int64_t dealUserId() const { DARABONBA_PTR_GET_DEFAULT(dealUserId_, 0L) };
    inline DescribeEventsResponseBodyItems& setDealUserId(int64_t dealUserId) { DARABONBA_PTR_SET_VALUE(dealUserId_, dealUserId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeEventsResponseBodyItems& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline DescribeEventsResponseBodyItems& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventsResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline DescribeEventsResponseBodyItems& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeEventsResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventsResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline DescribeEventsResponseBodyItems& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // subTypeCode Field Functions 
    bool hasSubTypeCode() const { return this->subTypeCode_ != nullptr;};
    void deleteSubTypeCode() { this->subTypeCode_ = nullptr;};
    inline string subTypeCode() const { DARABONBA_PTR_GET_DEFAULT(subTypeCode_, "") };
    inline DescribeEventsResponseBodyItems& setSubTypeCode(string subTypeCode) { DARABONBA_PTR_SET_VALUE(subTypeCode_, subTypeCode) };


    // subTypeName Field Functions 
    bool hasSubTypeName() const { return this->subTypeName_ != nullptr;};
    void deleteSubTypeName() { this->subTypeName_ = nullptr;};
    inline string subTypeName() const { DARABONBA_PTR_GET_DEFAULT(subTypeName_, "") };
    inline DescribeEventsResponseBodyItems& setSubTypeName(string subTypeName) { DARABONBA_PTR_SET_VALUE(subTypeName_, subTypeName) };


    // targetProductCode Field Functions 
    bool hasTargetProductCode() const { return this->targetProductCode_ != nullptr;};
    void deleteTargetProductCode() { this->targetProductCode_ = nullptr;};
    inline string targetProductCode() const { DARABONBA_PTR_GET_DEFAULT(targetProductCode_, "") };
    inline DescribeEventsResponseBodyItems& setTargetProductCode(string targetProductCode) { DARABONBA_PTR_SET_VALUE(targetProductCode_, targetProductCode) };


    // typeCode Field Functions 
    bool hasTypeCode() const { return this->typeCode_ != nullptr;};
    void deleteTypeCode() { this->typeCode_ = nullptr;};
    inline string typeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
    inline DescribeEventsResponseBodyItems& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeEventsResponseBodyItems& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeEventsResponseBodyItems& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // warnLevel Field Functions 
    bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
    void deleteWarnLevel() { this->warnLevel_ = nullptr;};
    inline int32_t warnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
    inline DescribeEventsResponseBodyItems& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


  protected:
    // The time when an alert was triggered for the anomalous event. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> alertTime_ = nullptr;
    // Indicates whether the detection of anomalous events is enhanced. If the detection of anomalous events is enhanced, the detection accuracy and the rate of triggering alerts for anomalous events are improved. Valid values:
    // 
    // *   true: yes
    // *   false: no
    std::shared_ptr<bool> backed_ = nullptr;
    // The display name of the account that is used to handle the anomalous event.
    std::shared_ptr<string> dealDisplayName_ = nullptr;
    // The username of the account that is used to handle the anomalous event.
    std::shared_ptr<string> dealLoginName_ = nullptr;
    // The time when the anomalous event was handled. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> dealTime_ = nullptr;
    // The ID of the account that is used to handle the anomalous event.
    std::shared_ptr<int64_t> dealUserId_ = nullptr;
    // The display name of the account that triggered the anomalous event.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the anomalous event occurred. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    // The ID of the anomalous event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The username of the account that triggered the anomalous event.
    std::shared_ptr<string> loginName_ = nullptr;
    // The name of the service in which the anomalous event was detected.
    std::shared_ptr<string> productCode_ = nullptr;
    // The handling status for the anomalous event. Valid values:
    // 
    // *   0: unhandled
    // *   1: confirmed
    // *   2: marked as false positive
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the handling status for the anomalous event.
    std::shared_ptr<string> statusName_ = nullptr;
    // The code of the anomalous event subtype.
    std::shared_ptr<string> subTypeCode_ = nullptr;
    // The name of the anomalous event subtype.
    std::shared_ptr<string> subTypeName_ = nullptr;
    // The name of the destination service in an anomalous data flow.
    std::shared_ptr<string> targetProductCode_ = nullptr;
    // The code of the anomalous event type.
    std::shared_ptr<string> typeCode_ = nullptr;
    // The name of the anomalous event type.
    std::shared_ptr<string> typeName_ = nullptr;
    // The ID of the account that triggered the anomalous event.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The severity of the anomalous event.
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    std::shared_ptr<int32_t> warnLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
