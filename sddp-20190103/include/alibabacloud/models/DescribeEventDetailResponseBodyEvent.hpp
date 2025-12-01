// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEventDetail.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEventHandleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBodyEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBodyEvent& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(Backed, backed_);
      DARABONBA_PTR_TO_JSON(DataInstance, dataInstance_);
      DARABONBA_PTR_TO_JSON(DealDisplayName, dealDisplayName_);
      DARABONBA_PTR_TO_JSON(DealLoginName, dealLoginName_);
      DARABONBA_PTR_TO_JSON(DealReason, dealReason_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(DealUserId, dealUserId_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(HandleInfoList, handleInfoList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogDetail, logDetail_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(NewAlarm, newAlarm_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(SubTypeCode, subTypeCode_);
      DARABONBA_PTR_TO_JSON(SubTypeName, subTypeName_);
      DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBodyEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(Backed, backed_);
      DARABONBA_PTR_FROM_JSON(DataInstance, dataInstance_);
      DARABONBA_PTR_FROM_JSON(DealDisplayName, dealDisplayName_);
      DARABONBA_PTR_FROM_JSON(DealLoginName, dealLoginName_);
      DARABONBA_PTR_FROM_JSON(DealReason, dealReason_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(DealUserId, dealUserId_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(HandleInfoList, handleInfoList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogDetail, logDetail_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(NewAlarm, newAlarm_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(SubTypeCode, subTypeCode_);
      DARABONBA_PTR_FROM_JSON(SubTypeName, subTypeName_);
      DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeEventDetailResponseBodyEvent() = default ;
    DescribeEventDetailResponseBodyEvent(const DescribeEventDetailResponseBodyEvent &) = default ;
    DescribeEventDetailResponseBodyEvent(DescribeEventDetailResponseBodyEvent &&) = default ;
    DescribeEventDetailResponseBodyEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBodyEvent() = default ;
    DescribeEventDetailResponseBodyEvent& operator=(const DescribeEventDetailResponseBodyEvent &) = default ;
    DescribeEventDetailResponseBodyEvent& operator=(DescribeEventDetailResponseBodyEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertTime_ == nullptr
        && return this->backed_ == nullptr && return this->dataInstance_ == nullptr && return this->dealDisplayName_ == nullptr && return this->dealLoginName_ == nullptr && return this->dealReason_ == nullptr
        && return this->dealTime_ == nullptr && return this->dealUserId_ == nullptr && return this->detail_ == nullptr && return this->displayName_ == nullptr && return this->eventTime_ == nullptr
        && return this->handleInfoList_ == nullptr && return this->id_ == nullptr && return this->logDetail_ == nullptr && return this->loginName_ == nullptr && return this->newAlarm_ == nullptr
        && return this->productCode_ == nullptr && return this->status_ == nullptr && return this->statusName_ == nullptr && return this->subTypeCode_ == nullptr && return this->subTypeName_ == nullptr
        && return this->typeCode_ == nullptr && return this->typeName_ == nullptr && return this->userId_ == nullptr; };
    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline int64_t alertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
    inline DescribeEventDetailResponseBodyEvent& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // backed Field Functions 
    bool hasBacked() const { return this->backed_ != nullptr;};
    void deleteBacked() { this->backed_ = nullptr;};
    inline bool backed() const { DARABONBA_PTR_GET_DEFAULT(backed_, false) };
    inline DescribeEventDetailResponseBodyEvent& setBacked(bool backed) { DARABONBA_PTR_SET_VALUE(backed_, backed) };


    // dataInstance Field Functions 
    bool hasDataInstance() const { return this->dataInstance_ != nullptr;};
    void deleteDataInstance() { this->dataInstance_ = nullptr;};
    inline string dataInstance() const { DARABONBA_PTR_GET_DEFAULT(dataInstance_, "") };
    inline DescribeEventDetailResponseBodyEvent& setDataInstance(string dataInstance) { DARABONBA_PTR_SET_VALUE(dataInstance_, dataInstance) };


    // dealDisplayName Field Functions 
    bool hasDealDisplayName() const { return this->dealDisplayName_ != nullptr;};
    void deleteDealDisplayName() { this->dealDisplayName_ = nullptr;};
    inline string dealDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dealDisplayName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setDealDisplayName(string dealDisplayName) { DARABONBA_PTR_SET_VALUE(dealDisplayName_, dealDisplayName) };


    // dealLoginName Field Functions 
    bool hasDealLoginName() const { return this->dealLoginName_ != nullptr;};
    void deleteDealLoginName() { this->dealLoginName_ = nullptr;};
    inline string dealLoginName() const { DARABONBA_PTR_GET_DEFAULT(dealLoginName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setDealLoginName(string dealLoginName) { DARABONBA_PTR_SET_VALUE(dealLoginName_, dealLoginName) };


    // dealReason Field Functions 
    bool hasDealReason() const { return this->dealReason_ != nullptr;};
    void deleteDealReason() { this->dealReason_ = nullptr;};
    inline string dealReason() const { DARABONBA_PTR_GET_DEFAULT(dealReason_, "") };
    inline DescribeEventDetailResponseBodyEvent& setDealReason(string dealReason) { DARABONBA_PTR_SET_VALUE(dealReason_, dealReason) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline int64_t dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
    inline DescribeEventDetailResponseBodyEvent& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // dealUserId Field Functions 
    bool hasDealUserId() const { return this->dealUserId_ != nullptr;};
    void deleteDealUserId() { this->dealUserId_ = nullptr;};
    inline int64_t dealUserId() const { DARABONBA_PTR_GET_DEFAULT(dealUserId_, 0L) };
    inline DescribeEventDetailResponseBodyEvent& setDealUserId(int64_t dealUserId) { DARABONBA_PTR_SET_VALUE(dealUserId_, dealUserId) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::DescribeEventDetailResponseBodyEventDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::DescribeEventDetailResponseBodyEventDetail) };
    inline Models::DescribeEventDetailResponseBodyEventDetail detail() { DARABONBA_PTR_GET(detail_, Models::DescribeEventDetailResponseBodyEventDetail) };
    inline DescribeEventDetailResponseBodyEvent& setDetail(const Models::DescribeEventDetailResponseBodyEventDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeEventDetailResponseBodyEvent& setDetail(Models::DescribeEventDetailResponseBodyEventDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline DescribeEventDetailResponseBodyEvent& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // handleInfoList Field Functions 
    bool hasHandleInfoList() const { return this->handleInfoList_ != nullptr;};
    void deleteHandleInfoList() { this->handleInfoList_ = nullptr;};
    inline const vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList> & handleInfoList() const { DARABONBA_PTR_GET_CONST(handleInfoList_, vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList>) };
    inline vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList> handleInfoList() { DARABONBA_PTR_GET(handleInfoList_, vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList>) };
    inline DescribeEventDetailResponseBodyEvent& setHandleInfoList(const vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList> & handleInfoList) { DARABONBA_PTR_SET_VALUE(handleInfoList_, handleInfoList) };
    inline DescribeEventDetailResponseBodyEvent& setHandleInfoList(vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList> && handleInfoList) { DARABONBA_PTR_SET_RVALUE(handleInfoList_, handleInfoList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventDetailResponseBodyEvent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logDetail Field Functions 
    bool hasLogDetail() const { return this->logDetail_ != nullptr;};
    void deleteLogDetail() { this->logDetail_ = nullptr;};
    inline string logDetail() const { DARABONBA_PTR_GET_DEFAULT(logDetail_, "") };
    inline DescribeEventDetailResponseBodyEvent& setLogDetail(string logDetail) { DARABONBA_PTR_SET_VALUE(logDetail_, logDetail) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // newAlarm Field Functions 
    bool hasNewAlarm() const { return this->newAlarm_ != nullptr;};
    void deleteNewAlarm() { this->newAlarm_ = nullptr;};
    inline bool newAlarm() const { DARABONBA_PTR_GET_DEFAULT(newAlarm_, false) };
    inline DescribeEventDetailResponseBodyEvent& setNewAlarm(bool newAlarm) { DARABONBA_PTR_SET_VALUE(newAlarm_, newAlarm) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeEventDetailResponseBodyEvent& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventDetailResponseBodyEvent& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // subTypeCode Field Functions 
    bool hasSubTypeCode() const { return this->subTypeCode_ != nullptr;};
    void deleteSubTypeCode() { this->subTypeCode_ = nullptr;};
    inline string subTypeCode() const { DARABONBA_PTR_GET_DEFAULT(subTypeCode_, "") };
    inline DescribeEventDetailResponseBodyEvent& setSubTypeCode(string subTypeCode) { DARABONBA_PTR_SET_VALUE(subTypeCode_, subTypeCode) };


    // subTypeName Field Functions 
    bool hasSubTypeName() const { return this->subTypeName_ != nullptr;};
    void deleteSubTypeName() { this->subTypeName_ = nullptr;};
    inline string subTypeName() const { DARABONBA_PTR_GET_DEFAULT(subTypeName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setSubTypeName(string subTypeName) { DARABONBA_PTR_SET_VALUE(subTypeName_, subTypeName) };


    // typeCode Field Functions 
    bool hasTypeCode() const { return this->typeCode_ != nullptr;};
    void deleteTypeCode() { this->typeCode_ = nullptr;};
    inline string typeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
    inline DescribeEventDetailResponseBodyEvent& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeEventDetailResponseBodyEvent& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeEventDetailResponseBodyEvent& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the alert for the anomalous event was generated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> alertTime_ = nullptr;
    // Indicates whether the handling result of the anomalous event is used to enhance the detection of anomalous events. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // > If you enhance the detection of anomalous events, the detection accuracy and the rate of triggering alerts for anomalous events are improved.
    std::shared_ptr<bool> backed_ = nullptr;
    // The instance name of the service in which the anomalous event was detected.
    std::shared_ptr<string> dataInstance_ = nullptr;
    // The display name of the account that is used to handle the anomalous event.
    std::shared_ptr<string> dealDisplayName_ = nullptr;
    // The username of the account that is used to handle the anomalous event.
    std::shared_ptr<string> dealLoginName_ = nullptr;
    // The reason why the anomalous event is handled.
    std::shared_ptr<string> dealReason_ = nullptr;
    // The time when the anomalous event was handled. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> dealTime_ = nullptr;
    // The ID of the account that is used to handle the anomalous event.
    std::shared_ptr<int64_t> dealUserId_ = nullptr;
    // The content in the details of the anomalous event.
    std::shared_ptr<Models::DescribeEventDetailResponseBodyEventDetail> detail_ = nullptr;
    // The display name of the account that triggered the anomalous event.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the anomalous event occurred. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    // An array that consists of the handling records of the anomalous event.
    std::shared_ptr<vector<Models::DescribeEventDetailResponseBodyEventHandleInfoList>> handleInfoList_ = nullptr;
    // The unique ID of the anomalous event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The details of the alert logs.
    std::shared_ptr<string> logDetail_ = nullptr;
    // The username of the account that triggered the anomalous event.
    std::shared_ptr<string> loginName_ = nullptr;
    // Whether it is a new version of the alarm. Value:
    // - **true**: Yes. 
    // - **false**: No.
    std::shared_ptr<bool> newAlarm_ = nullptr;
    // The name of the service in which the anomalous event was detected. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The handling status for the anomalous event. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: confirmed
    // *   **2**: marked as false positive
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the handling status for the anomalous event.
    std::shared_ptr<string> statusName_ = nullptr;
    // The code of the anomalous event subtype.
    std::shared_ptr<string> subTypeCode_ = nullptr;
    // The name of the anomalous event subtype.
    std::shared_ptr<string> subTypeName_ = nullptr;
    // The code of the anomalous event type.
    std::shared_ptr<string> typeCode_ = nullptr;
    // The name of the anomalous event type. Valid values:
    // 
    // *   **01**: anomalous permission usage
    // *   **02**: anomalous data flow
    // *   **03**: anomalous data operation
    std::shared_ptr<string> typeName_ = nullptr;
    // The ID of the account that triggered the anomalous event.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
