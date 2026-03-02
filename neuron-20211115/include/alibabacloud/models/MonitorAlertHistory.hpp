// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORALERTHISTORY_HPP_
#define ALIBABACLOUD_MODELS_MONITORALERTHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorAlertHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorAlertHistory& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(eventState, eventState_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ruleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorAlertHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(eventState, eventState_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ruleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    MonitorAlertHistory() = default ;
    MonitorAlertHistory(const MonitorAlertHistory &) = default ;
    MonitorAlertHistory(MonitorAlertHistory &&) = default ;
    MonitorAlertHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorAlertHistory() = default ;
    MonitorAlertHistory& operator=(const MonitorAlertHistory &) = default ;
    MonitorAlertHistory& operator=(MonitorAlertHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventState_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->ruleDesc_ == nullptr && this->ruleName_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MonitorAlertHistory& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventState Field Functions 
    bool hasEventState() const { return this->eventState_ != nullptr;};
    void deleteEventState() { this->eventState_ = nullptr;};
    inline string getEventState() const { DARABONBA_PTR_GET_DEFAULT(eventState_, "") };
    inline MonitorAlertHistory& setEventState(string eventState) { DARABONBA_PTR_SET_VALUE(eventState_, eventState) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorAlertHistory& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorAlertHistory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline MonitorAlertHistory& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline MonitorAlertHistory& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MonitorAlertHistory& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MonitorAlertHistory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline MonitorAlertHistory& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> eventState_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> ruleDesc_ {};
    shared_ptr<string> ruleName_ {};
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
