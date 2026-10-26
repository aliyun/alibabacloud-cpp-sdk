// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SANDBOXLIFECYCLEEVENT_HPP_
#define ALIBABACLOUD_MODELS_SANDBOXLIFECYCLEEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class SandboxLifecycleEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SandboxLifecycleEvent& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(buildID, buildID_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_ANY_TO_JSON(eventData, eventData_);
      DARABONBA_PTR_TO_JSON(eventID, eventID_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(occurredAt, occurredAt_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, SandboxLifecycleEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(buildID, buildID_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_ANY_FROM_JSON(eventData, eventData_);
      DARABONBA_PTR_FROM_JSON(eventID, eventID_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(occurredAt, occurredAt_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    SandboxLifecycleEvent() = default ;
    SandboxLifecycleEvent(const SandboxLifecycleEvent &) = default ;
    SandboxLifecycleEvent(SandboxLifecycleEvent &&) = default ;
    SandboxLifecycleEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SandboxLifecycleEvent() = default ;
    SandboxLifecycleEvent& operator=(const SandboxLifecycleEvent &) = default ;
    SandboxLifecycleEvent& operator=(SandboxLifecycleEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->buildID_ == nullptr && this->description_ == nullptr && this->eventData_ == nullptr && this->eventID_ == nullptr && this->eventType_ == nullptr
        && this->level_ == nullptr && this->occurredAt_ == nullptr && this->reason_ == nullptr && this->sandboxID_ == nullptr && this->teamID_ == nullptr
        && this->templateID_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline SandboxLifecycleEvent& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // buildID Field Functions 
    bool hasBuildID() const { return this->buildID_ != nullptr;};
    void deleteBuildID() { this->buildID_ = nullptr;};
    inline string getBuildID() const { DARABONBA_PTR_GET_DEFAULT(buildID_, "") };
    inline SandboxLifecycleEvent& setBuildID(string buildID) { DARABONBA_PTR_SET_VALUE(buildID_, buildID) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SandboxLifecycleEvent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventData Field Functions 
    bool hasEventData() const { return this->eventData_ != nullptr;};
    void deleteEventData() { this->eventData_ = nullptr;};
    inline     const Darabonba::Json & getEventData() const { DARABONBA_GET(eventData_) };
    Darabonba::Json & getEventData() { DARABONBA_GET(eventData_) };
    inline SandboxLifecycleEvent& setEventData(const Darabonba::Json & eventData) { DARABONBA_SET_VALUE(eventData_, eventData) };
    inline SandboxLifecycleEvent& setEventData(Darabonba::Json && eventData) { DARABONBA_SET_RVALUE(eventData_, eventData) };


    // eventID Field Functions 
    bool hasEventID() const { return this->eventID_ != nullptr;};
    void deleteEventID() { this->eventID_ = nullptr;};
    inline string getEventID() const { DARABONBA_PTR_GET_DEFAULT(eventID_, "") };
    inline SandboxLifecycleEvent& setEventID(string eventID) { DARABONBA_PTR_SET_VALUE(eventID_, eventID) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SandboxLifecycleEvent& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SandboxLifecycleEvent& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // occurredAt Field Functions 
    bool hasOccurredAt() const { return this->occurredAt_ != nullptr;};
    void deleteOccurredAt() { this->occurredAt_ = nullptr;};
    inline string getOccurredAt() const { DARABONBA_PTR_GET_DEFAULT(occurredAt_, "") };
    inline SandboxLifecycleEvent& setOccurredAt(string occurredAt) { DARABONBA_PTR_SET_VALUE(occurredAt_, occurredAt) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SandboxLifecycleEvent& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sandboxID Field Functions 
    bool hasSandboxID() const { return this->sandboxID_ != nullptr;};
    void deleteSandboxID() { this->sandboxID_ = nullptr;};
    inline string getSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sandboxID_, "") };
    inline SandboxLifecycleEvent& setSandboxID(string sandboxID) { DARABONBA_PTR_SET_VALUE(sandboxID_, sandboxID) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline SandboxLifecycleEvent& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline SandboxLifecycleEvent& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The action that triggered the event.
    shared_ptr<string> action_ {};
    // The template build ID. This field is not returned if there is no associated build.
    shared_ptr<string> buildID_ {};
    // The event description.
    shared_ptr<string> description_ {};
    // The event data as a JSON object. The specific fields vary depending on the event type.
    Darabonba::Json eventData_ {};
    // The event ID.
    shared_ptr<string> eventID_ {};
    // The event type.
    shared_ptr<string> eventType_ {};
    // The event category. Valid values: INFO and WARNING.
    shared_ptr<string> level_ {};
    // The time when the event occurred. The time is in UTC RFC3339 format and supports fractional seconds.
    shared_ptr<string> occurredAt_ {};
    // The reason for the event. This field is not returned if there is no reason.
    shared_ptr<string> reason_ {};
    // The instance ID.
    shared_ptr<string> sandboxID_ {};
    // The ID of the team to which the event belongs.
    shared_ptr<string> teamID_ {};
    // The template ID.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
