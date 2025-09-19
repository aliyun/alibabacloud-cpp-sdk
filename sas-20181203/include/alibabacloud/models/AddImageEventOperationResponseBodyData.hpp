// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEEVENTOPERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEEVENTOPERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddImageEventOperationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageEventOperationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageEventOperationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
    };
    AddImageEventOperationResponseBodyData() = default ;
    AddImageEventOperationResponseBodyData(const AddImageEventOperationResponseBodyData &) = default ;
    AddImageEventOperationResponseBodyData(AddImageEventOperationResponseBodyData &&) = default ;
    AddImageEventOperationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageEventOperationResponseBodyData() = default ;
    AddImageEventOperationResponseBodyData& operator=(const AddImageEventOperationResponseBodyData &) = default ;
    AddImageEventOperationResponseBodyData& operator=(AddImageEventOperationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->eventKey_ != nullptr && this->eventName_ != nullptr && this->eventType_ != nullptr && this->id_ != nullptr && this->operationCode_ != nullptr
        && this->scenarios_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline AddImageEventOperationResponseBodyData& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string eventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline AddImageEventOperationResponseBodyData& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline AddImageEventOperationResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline AddImageEventOperationResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddImageEventOperationResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline AddImageEventOperationResponseBodyData& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // scenarios Field Functions 
    bool hasScenarios() const { return this->scenarios_ != nullptr;};
    void deleteScenarios() { this->scenarios_ = nullptr;};
    inline string scenarios() const { DARABONBA_PTR_GET_DEFAULT(scenarios_, "") };
    inline AddImageEventOperationResponseBodyData& setScenarios(string scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };


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
    // The alert type.
    // 
    // *   Only **sensitiveFile** may be returned.
    std::shared_ptr<string> eventType_ = nullptr;
    // The primary key of the alert handling rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The operation code.
    // 
    // *   Only **whitelist** may be returned, which indicates that the alert item is added to the whitelist.
    std::shared_ptr<string> operationCode_ = nullptr;
    // The application scope of the rule. The value is in the JSON format. Valid values of keys:
    // 
    // *   **type**
    // *   **value**
    std::shared_ptr<string> scenarios_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
