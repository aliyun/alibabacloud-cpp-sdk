// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
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
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
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
    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
        DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
        DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Details() = default ;
      Details(const Details &) = default ;
      Details(Details &&) = default ;
      Details(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Details() = default ;
      Details& operator=(const Details &) = default ;
      Details& operator=(Details &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nameDisplay_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // nameDisplay Field Functions 
      bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
      void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
      inline string getNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
      inline Details& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Details& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The display name of the alert event.
      shared_ptr<string> nameDisplay_ {};
      // The format in which the details of the exception are displayed.
      // 
      // Valid values:
      // 
      // *   **text**
      // *   **html**
      shared_ptr<string> type_ {};
      // The attribute information about the exception. For example, if the exception is associated with an alert that is triggered by an unusual logon, the information can include the time when the logon is initiated and the location from which the logon is initiated. If the exception is associated with an alert that is triggered by a webshell file, the information can include the path of the trojan file and the type of the trojan.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->canBeDealOnLine_ == nullptr && this->dataSource_ == nullptr && this->details_ == nullptr && this->eventDesc_ == nullptr && this->eventName_ == nullptr
        && this->eventStatus_ == nullptr && this->eventTypeDesc_ == nullptr && this->id_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->lastTime_ == nullptr && this->level_ == nullptr && this->operateErrorCode_ == nullptr && this->operateMsg_ == nullptr
        && this->requestId_ == nullptr && this->saleVersion_ == nullptr && this->uuid_ == nullptr; };
    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeSuspEventDetailResponseBody& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // canBeDealOnLine Field Functions 
    bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
    void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
    inline bool getCanBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
    inline DescribeSuspEventDetailResponseBody& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DescribeSuspEventDetailResponseBody& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DescribeSuspEventDetailResponseBody::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<DescribeSuspEventDetailResponseBody::Details>) };
    inline vector<DescribeSuspEventDetailResponseBody::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<DescribeSuspEventDetailResponseBody::Details>) };
    inline DescribeSuspEventDetailResponseBody& setDetails(const vector<DescribeSuspEventDetailResponseBody::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeSuspEventDetailResponseBody& setDetails(vector<DescribeSuspEventDetailResponseBody::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // eventDesc Field Functions 
    bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
    void deleteEventDesc() { this->eventDesc_ = nullptr;};
    inline string getEventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventTypeDesc Field Functions 
    bool hasEventTypeDesc() const { return this->eventTypeDesc_ != nullptr;};
    void deleteEventTypeDesc() { this->eventTypeDesc_ = nullptr;};
    inline string getEventTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(eventTypeDesc_, "") };
    inline DescribeSuspEventDetailResponseBody& setEventTypeDesc(string eventTypeDesc) { DARABONBA_PTR_SET_VALUE(eventTypeDesc_, eventTypeDesc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeSuspEventDetailResponseBody& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSuspEventDetailResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeSuspEventDetailResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeSuspEventDetailResponseBody& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline string getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, "") };
    inline DescribeSuspEventDetailResponseBody& setLastTime(string lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSuspEventDetailResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // operateErrorCode Field Functions 
    bool hasOperateErrorCode() const { return this->operateErrorCode_ != nullptr;};
    void deleteOperateErrorCode() { this->operateErrorCode_ = nullptr;};
    inline string getOperateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(operateErrorCode_, "") };
    inline DescribeSuspEventDetailResponseBody& setOperateErrorCode(string operateErrorCode) { DARABONBA_PTR_SET_VALUE(operateErrorCode_, operateErrorCode) };


    // operateMsg Field Functions 
    bool hasOperateMsg() const { return this->operateMsg_ != nullptr;};
    void deleteOperateMsg() { this->operateMsg_ = nullptr;};
    inline string getOperateMsg() const { DARABONBA_PTR_GET_DEFAULT(operateMsg_, "") };
    inline DescribeSuspEventDetailResponseBody& setOperateMsg(string operateMsg) { DARABONBA_PTR_SET_VALUE(operateMsg_, operateMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleVersion Field Functions 
    bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
    void deleteSaleVersion() { this->saleVersion_ = nullptr;};
    inline string getSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
    inline DescribeSuspEventDetailResponseBody& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSuspEventDetailResponseBody& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The unique ID of the alarm event.
    // > If querying the anomaly information of a single alarm event, you need to provide the unique ID of the alarm event, which can be obtained by calling the [DescribeSuspEvents](~~DescribeSuspEvents~~) interface.
    shared_ptr<string> alarmUniqueInfo_ {};
    // Indicates whether the online processing of exceptions is supported, such as blocking an exception, adding an exception to the whitelist, and ignoring an exception. Valid values:
    // 
    // *   **true**: The online processing of exceptions is supported.
    // *   **false**: The online processing of exceptions is not supported.
    shared_ptr<bool> canBeDealOnLine_ {};
    // The data source of the exception.
    shared_ptr<string> dataSource_ {};
    // An array that consists of the details of the exception.
    shared_ptr<vector<DescribeSuspEventDetailResponseBody::Details>> details_ {};
    // The description of the exception.
    shared_ptr<string> eventDesc_ {};
    // The name of the exception.
    shared_ptr<string> eventName_ {};
    // The status of the exception. Valid values:
    // 
    // *   **1**: pending handling
    // *   **2**: ignored
    // *   **4**: confirmed
    // *   **8**: marked as a false positive
    // *   **16**: handling
    // *   **32**: handled
    // *   **64**: expired
    shared_ptr<string> eventStatus_ {};
    // The type of the exception.
    shared_ptr<string> eventTypeDesc_ {};
    // The ID of the exception.
    shared_ptr<int32_t> id_ {};
    // The name of the server on which the exception was detected.
    shared_ptr<string> instanceName_ {};
    // The public IP address of the server on which the exception was detected.
    shared_ptr<string> internetIp_ {};
    // The private IP address of the server on which the exception was detected.
    shared_ptr<string> intranetIp_ {};
    // The time when the exception was last detected.
    shared_ptr<string> lastTime_ {};
    // The risk level of the exception. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    shared_ptr<string> level_ {};
    // The code that indicates the handling result of the exception.
    shared_ptr<string> operateErrorCode_ {};
    // The message that indicates the handling result of the exception.
    shared_ptr<string> operateMsg_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The edition of Security Center in which the exception can be detected. Valid values:
    // 
    // *   **0**: Basic edition
    // *   **1**: Advanced edition
    // *   **2**: Enterprise edition
    shared_ptr<string> saleVersion_ {};
    // The UUID of the server on which the exception was detected.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
