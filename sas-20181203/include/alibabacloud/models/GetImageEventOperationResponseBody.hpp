// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEEVENTOPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEEVENTOPERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetImageEventOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageEventOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageEventOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetImageEventOperationResponseBody() = default ;
    GetImageEventOperationResponseBody(const GetImageEventOperationResponseBody &) = default ;
    GetImageEventOperationResponseBody(GetImageEventOperationResponseBody &&) = default ;
    GetImageEventOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageEventOperationResponseBody() = default ;
    GetImageEventOperationResponseBody& operator=(const GetImageEventOperationResponseBody &) = default ;
    GetImageEventOperationResponseBody& operator=(GetImageEventOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Note, note_);
        DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
        DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->eventKey_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr && this->id_ == nullptr && this->note_ == nullptr
        && this->operationCode_ == nullptr && this->scenarios_ == nullptr && this->source_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline string getConditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
      inline Data& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


      // eventKey Field Functions 
      bool hasEventKey() const { return this->eventKey_ != nullptr;};
      void deleteEventKey() { this->eventKey_ = nullptr;};
      inline string getEventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
      inline Data& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // operationCode Field Functions 
      bool hasOperationCode() const { return this->operationCode_ != nullptr;};
      void deleteOperationCode() { this->operationCode_ = nullptr;};
      inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
      inline Data& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


      // scenarios Field Functions 
      bool hasScenarios() const { return this->scenarios_ != nullptr;};
      void deleteScenarios() { this->scenarios_ = nullptr;};
      inline string getScenarios() const { DARABONBA_PTR_GET_DEFAULT(scenarios_, "") };
      inline Data& setScenarios(string scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The rule conditions. The value is in the JSON format. Valid values of keys:
      // 
      // *   **condition**: the matching condition.
      // *   **type**: the matching type.
      // *   **value**: the matching value.
      shared_ptr<string> conditions_ {};
      // The keyword of the alert item.
      shared_ptr<string> eventKey_ {};
      // The name of the alert item.
      shared_ptr<string> eventName_ {};
      // The alert type. Valid values:
      // 
      // *   **sensitiveFile**
      shared_ptr<string> eventType_ {};
      // The primary key of the alert handling rule.
      shared_ptr<int64_t> id_ {};
      // The remarks.
      shared_ptr<string> note_ {};
      // The operation code. Valid values:
      // 
      // *   **whitelist**: added to the whitelist.
      shared_ptr<string> operationCode_ {};
      // The application scope of the rule. The value is in the JSON format. Valid values of keys:
      // 
      // *   **type**
      // *   **value**
      shared_ptr<string> scenarios_ {};
      // The source of the whitelist. Valid values:
      // 
      // *   **default**: image
      // *   **agentless**: agentless detection
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageEventOperationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageEventOperationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetImageEventOperationResponseBody::Data) };
    inline GetImageEventOperationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetImageEventOperationResponseBody::Data) };
    inline GetImageEventOperationResponseBody& setData(const GetImageEventOperationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageEventOperationResponseBody& setData(GetImageEventOperationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageEventOperationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageEventOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageEventOperationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetImageEventOperationResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
