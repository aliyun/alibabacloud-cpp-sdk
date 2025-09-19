// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSuspEventDetailResponseBodyDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(EventDesc, eventDesc_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventTypeDesc, eventTypeDesc_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OperateErrorCode, operateErrorCode_);
      DARABONBA_PTR_TO_JSON(OperateMsg, operateMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(EventDesc, eventDesc_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventTypeDesc, eventTypeDesc_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OperateErrorCode, operateErrorCode_);
      DARABONBA_PTR_FROM_JSON(OperateMsg, operateMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSuspEventDetailResponseBody() = default ;
    DescribeSuspEventDetailResponseBody(const DescribeSuspEventDetailResponseBody &) = default ;
    DescribeSuspEventDetailResponseBody(DescribeSuspEventDetailResponseBody &&) = default ;
    DescribeSuspEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventDetailResponseBody() = default ;
    DescribeSuspEventDetailResponseBody& operator=(const DescribeSuspEventDetailResponseBody &) = default ;
    DescribeSuspEventDetailResponseBody& operator=(DescribeSuspEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canBeDealOnLine_ != nullptr
        && this->dataSource_ != nullptr && this->details_ != nullptr && this->eventDesc_ != nullptr && this->eventName_ != nullptr && this->eventStatus_ != nullptr
        && this->eventTypeDesc_ != nullptr && this->id_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->lastTime_ != nullptr && this->level_ != nullptr && this->operateErrorCode_ != nullptr && this->operateMsg_ != nullptr && this->requestId_ != nullptr
        && this->saleVersion_ != nullptr && this->uuid_ != nullptr; };
    // canBeDealOnLine Field Functions 
    bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
    void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
    inline bool canBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
    inline DescribeSuspEventDetailResponseBody& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DescribeSuspEventDetailResponseBody& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DescribeSuspEventDetailResponseBodyDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<DescribeSuspEventDetailResponseBodyDetails>) };
    inline vector<DescribeSuspEventDetailResponseBodyDetails> details() { DARABONBA_PTR_GET(details_, vector<DescribeSuspEventDetailResponseBodyDetails>) };
    inline DescribeSuspEventDetailResponseBody& setDetails(const vector<DescribeSuspEventDetailResponseBodyDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeSuspEventDetailResponseBody& setDetails(vector<DescribeSuspEventDetailResponseBodyDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // eventDesc Field Functions 
    bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
    void deleteEventDesc() { this->eventDesc_ = nullptr;};
    inline string eventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventTypeDesc Field Functions 
    bool hasEventTypeDesc() const { return this->eventTypeDesc_ != nullptr;};
    void deleteEventTypeDesc() { this->eventTypeDesc_ = nullptr;};
    inline string eventTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(eventTypeDesc_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventTypeDesc(string eventTypeDesc) { DARABONBA_PTR_SET_VALUE(eventTypeDesc_, eventTypeDesc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeSuspEventDetailResponseBody& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSuspEventDetailResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeSuspEventDetailResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeSuspEventDetailResponseBody& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline string lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, "") };
    inline DescribeSuspEventDetailResponseBody& setLastTime(string lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSuspEventDetailResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // operateErrorCode Field Functions 
    bool hasOperateErrorCode() const { return this->operateErrorCode_ != nullptr;};
    void deleteOperateErrorCode() { this->operateErrorCode_ = nullptr;};
    inline string operateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(operateErrorCode_, "") };
    inline DescribeSuspEventDetailResponseBody& setOperateErrorCode(string operateErrorCode) { DARABONBA_PTR_SET_VALUE(operateErrorCode_, operateErrorCode) };


    // operateMsg Field Functions 
    bool hasOperateMsg() const { return this->operateMsg_ != nullptr;};
    void deleteOperateMsg() { this->operateMsg_ = nullptr;};
    inline string operateMsg() const { DARABONBA_PTR_GET_DEFAULT(operateMsg_, "") };
    inline DescribeSuspEventDetailResponseBody& setOperateMsg(string operateMsg) { DARABONBA_PTR_SET_VALUE(operateMsg_, operateMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleVersion Field Functions 
    bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
    void deleteSaleVersion() { this->saleVersion_ = nullptr;};
    inline string saleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
    inline DescribeSuspEventDetailResponseBody& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSuspEventDetailResponseBody& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Indicates whether the online processing of exceptions is supported, such as blocking an exception, adding an exception to the whitelist, and ignoring an exception. Valid values:
    // 
    // *   **true**: The online processing of exceptions is supported.
    // *   **false**: The online processing of exceptions is not supported.
    std::shared_ptr<bool> canBeDealOnLine_ = nullptr;
    // The data source of the exception.
    std::shared_ptr<string> dataSource_ = nullptr;
    // An array that consists of the details of the exception.
    std::shared_ptr<vector<DescribeSuspEventDetailResponseBodyDetails>> details_ = nullptr;
    // The description of the exception.
    std::shared_ptr<string> eventDesc_ = nullptr;
    // The name of the exception.
    std::shared_ptr<string> eventName_ = nullptr;
    // The status of the exception. Valid values:
    // 
    // *   **1**: pending handling
    // *   **2**: ignored
    // *   **4**: confirmed
    // *   **8**: marked as a false positive
    // *   **16**: handling
    // *   **32**: handled
    // *   **64**: expired
    std::shared_ptr<string> eventStatus_ = nullptr;
    // The type of the exception.
    std::shared_ptr<string> eventTypeDesc_ = nullptr;
    // The ID of the exception.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the server on which the exception was detected.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server on which the exception was detected.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server on which the exception was detected.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The time when the exception was last detected.
    std::shared_ptr<string> lastTime_ = nullptr;
    // The risk level of the exception. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
    // The code that indicates the handling result of the exception.
    std::shared_ptr<string> operateErrorCode_ = nullptr;
    // The message that indicates the handling result of the exception.
    std::shared_ptr<string> operateMsg_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The edition of Security Center in which the exception can be detected. Valid values:
    // 
    // *   **0**: Basic edition
    // *   **1**: Advanced edition
    // *   **2**: Enterprise edition
    std::shared_ptr<string> saleVersion_ = nullptr;
    // The UUID of the server on which the exception was detected.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
