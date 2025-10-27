// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEEVENTOPERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEEVENTOPERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetImageEventOperationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageEventOperationResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetImageEventOperationResponseBodyData& obj) { 
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
    GetImageEventOperationResponseBodyData() = default ;
    GetImageEventOperationResponseBodyData(const GetImageEventOperationResponseBodyData &) = default ;
    GetImageEventOperationResponseBodyData(GetImageEventOperationResponseBodyData &&) = default ;
    GetImageEventOperationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageEventOperationResponseBodyData() = default ;
    GetImageEventOperationResponseBodyData& operator=(const GetImageEventOperationResponseBodyData &) = default ;
    GetImageEventOperationResponseBodyData& operator=(GetImageEventOperationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->eventKey_ == nullptr && return this->eventName_ == nullptr && return this->eventType_ == nullptr && return this->id_ == nullptr && return this->note_ == nullptr
        && return this->operationCode_ == nullptr && return this->scenarios_ == nullptr && return this->source_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline GetImageEventOperationResponseBodyData& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string eventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline GetImageEventOperationResponseBodyData& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline GetImageEventOperationResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline GetImageEventOperationResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetImageEventOperationResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline GetImageEventOperationResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline GetImageEventOperationResponseBodyData& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // scenarios Field Functions 
    bool hasScenarios() const { return this->scenarios_ != nullptr;};
    void deleteScenarios() { this->scenarios_ = nullptr;};
    inline string scenarios() const { DARABONBA_PTR_GET_DEFAULT(scenarios_, "") };
    inline GetImageEventOperationResponseBodyData& setScenarios(string scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetImageEventOperationResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The rule conditions. The value is in the JSON format. Valid values of keys:
    // 
    // *   **condition**: the matching condition.
    // *   **type**: the matching type.
    // *   **value**: the matching value.
    std::shared_ptr<string> conditions_ = nullptr;
    // The keyword of the alert item.
    std::shared_ptr<string> eventKey_ = nullptr;
    // The name of the alert item.
    std::shared_ptr<string> eventName_ = nullptr;
    // The alert type. Valid values:
    // 
    // *   **sensitiveFile**
    std::shared_ptr<string> eventType_ = nullptr;
    // The primary key of the alert handling rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The remarks.
    std::shared_ptr<string> note_ = nullptr;
    // The operation code. Valid values:
    // 
    // *   **whitelist**: added to the whitelist.
    std::shared_ptr<string> operationCode_ = nullptr;
    // The application scope of the rule. The value is in the JSON format. Valid values of keys:
    // 
    // *   **type**
    // *   **value**
    std::shared_ptr<string> scenarios_ = nullptr;
    // The source of the whitelist. Valid values:
    // 
    // *   **default**: image
    // *   **agentless**: agentless detection
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
