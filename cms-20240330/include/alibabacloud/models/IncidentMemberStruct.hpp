// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentMemberStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentMemberStruct& obj) { 
      DARABONBA_PTR_TO_JSON(acknowledge, acknowledge_);
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(escalation, escalation_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(incidentMemberId, incidentMemberId_);
      DARABONBA_PTR_TO_JSON(scheduleGroup, scheduleGroup_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentMemberStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(acknowledge, acknowledge_);
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(escalation, escalation_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(incidentMemberId, incidentMemberId_);
      DARABONBA_PTR_FROM_JSON(scheduleGroup, scheduleGroup_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    IncidentMemberStruct() = default ;
    IncidentMemberStruct(const IncidentMemberStruct &) = default ;
    IncidentMemberStruct(IncidentMemberStruct &&) = default ;
    IncidentMemberStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentMemberStruct() = default ;
    IncidentMemberStruct& operator=(const IncidentMemberStruct &) = default ;
    IncidentMemberStruct& operator=(IncidentMemberStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleGroup& obj) { 
        DARABONBA_PTR_TO_JSON(contactId, contactId_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(contactId, contactId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      ScheduleGroup() = default ;
      ScheduleGroup(const ScheduleGroup &) = default ;
      ScheduleGroup(ScheduleGroup &&) = default ;
      ScheduleGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleGroup() = default ;
      ScheduleGroup& operator=(const ScheduleGroup &) = default ;
      ScheduleGroup& operator=(ScheduleGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->name_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline ScheduleGroup& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ScheduleGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> contactId_ {};
      shared_ptr<string> name_ {};
    };

    class Escalation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Escalation& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(incidentEscalationId, incidentEscalationId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(stageIndex, stageIndex_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Escalation& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(incidentEscalationId, incidentEscalationId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(stageIndex, stageIndex_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      Escalation() = default ;
      Escalation(const Escalation &) = default ;
      Escalation(Escalation &&) = default ;
      Escalation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Escalation() = default ;
      Escalation& operator=(const Escalation &) = default ;
      Escalation& operator=(Escalation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->incidentEscalationId_ == nullptr && this->name_ == nullptr && this->stageIndex_ == nullptr && this->title_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Escalation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // incidentEscalationId Field Functions 
      bool hasIncidentEscalationId() const { return this->incidentEscalationId_ != nullptr;};
      void deleteIncidentEscalationId() { this->incidentEscalationId_ = nullptr;};
      inline string getIncidentEscalationId() const { DARABONBA_PTR_GET_DEFAULT(incidentEscalationId_, "") };
      inline Escalation& setIncidentEscalationId(string incidentEscalationId) { DARABONBA_PTR_SET_VALUE(incidentEscalationId_, incidentEscalationId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Escalation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // stageIndex Field Functions 
      bool hasStageIndex() const { return this->stageIndex_ != nullptr;};
      void deleteStageIndex() { this->stageIndex_ = nullptr;};
      inline string getStageIndex() const { DARABONBA_PTR_GET_DEFAULT(stageIndex_, "") };
      inline Escalation& setStageIndex(string stageIndex) { DARABONBA_PTR_SET_VALUE(stageIndex_, stageIndex) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Escalation& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> incidentEscalationId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> stageIndex_ {};
      shared_ptr<string> title_ {};
    };

    class Contacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
        DARABONBA_PTR_TO_JSON(channel, channel_);
        DARABONBA_PTR_TO_JSON(contactMask, contactMask_);
      };
      friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
        DARABONBA_PTR_FROM_JSON(channel, channel_);
        DARABONBA_PTR_FROM_JSON(contactMask, contactMask_);
      };
      Contacts() = default ;
      Contacts(const Contacts &) = default ;
      Contacts(Contacts &&) = default ;
      Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contacts() = default ;
      Contacts& operator=(const Contacts &) = default ;
      Contacts& operator=(Contacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->contactMask_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Contacts& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // contactMask Field Functions 
      bool hasContactMask() const { return this->contactMask_ != nullptr;};
      void deleteContactMask() { this->contactMask_ = nullptr;};
      inline string getContactMask() const { DARABONBA_PTR_GET_DEFAULT(contactMask_, "") };
      inline Contacts& setContactMask(string contactMask) { DARABONBA_PTR_SET_VALUE(contactMask_, contactMask) };


    protected:
      shared_ptr<string> channel_ {};
      shared_ptr<string> contactMask_ {};
    };

    class Acknowledge : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acknowledge& obj) { 
        DARABONBA_PTR_TO_JSON(breakLevel, breakLevel_);
        DARABONBA_PTR_TO_JSON(verifyTime, verifyTime_);
      };
      friend void from_json(const Darabonba::Json& j, Acknowledge& obj) { 
        DARABONBA_PTR_FROM_JSON(breakLevel, breakLevel_);
        DARABONBA_PTR_FROM_JSON(verifyTime, verifyTime_);
      };
      Acknowledge() = default ;
      Acknowledge(const Acknowledge &) = default ;
      Acknowledge(Acknowledge &&) = default ;
      Acknowledge(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Acknowledge() = default ;
      Acknowledge& operator=(const Acknowledge &) = default ;
      Acknowledge& operator=(Acknowledge &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->breakLevel_ == nullptr
        && this->verifyTime_ == nullptr; };
      // breakLevel Field Functions 
      bool hasBreakLevel() const { return this->breakLevel_ != nullptr;};
      void deleteBreakLevel() { this->breakLevel_ = nullptr;};
      inline string getBreakLevel() const { DARABONBA_PTR_GET_DEFAULT(breakLevel_, "") };
      inline Acknowledge& setBreakLevel(string breakLevel) { DARABONBA_PTR_SET_VALUE(breakLevel_, breakLevel) };


      // verifyTime Field Functions 
      bool hasVerifyTime() const { return this->verifyTime_ != nullptr;};
      void deleteVerifyTime() { this->verifyTime_ = nullptr;};
      inline int64_t getVerifyTime() const { DARABONBA_PTR_GET_DEFAULT(verifyTime_, 0L) };
      inline Acknowledge& setVerifyTime(int64_t verifyTime) { DARABONBA_PTR_SET_VALUE(verifyTime_, verifyTime) };


    protected:
      shared_ptr<string> breakLevel_ {};
      shared_ptr<int64_t> verifyTime_ {};
    };

    virtual bool empty() const override { return this->acknowledge_ == nullptr
        && this->contactId_ == nullptr && this->contacts_ == nullptr && this->escalation_ == nullptr && this->incidentId_ == nullptr && this->incidentMemberId_ == nullptr
        && this->scheduleGroup_ == nullptr && this->time_ == nullptr && this->userId_ == nullptr; };
    // acknowledge Field Functions 
    bool hasAcknowledge() const { return this->acknowledge_ != nullptr;};
    void deleteAcknowledge() { this->acknowledge_ = nullptr;};
    inline const IncidentMemberStruct::Acknowledge & getAcknowledge() const { DARABONBA_PTR_GET_CONST(acknowledge_, IncidentMemberStruct::Acknowledge) };
    inline IncidentMemberStruct::Acknowledge getAcknowledge() { DARABONBA_PTR_GET(acknowledge_, IncidentMemberStruct::Acknowledge) };
    inline IncidentMemberStruct& setAcknowledge(const IncidentMemberStruct::Acknowledge & acknowledge) { DARABONBA_PTR_SET_VALUE(acknowledge_, acknowledge) };
    inline IncidentMemberStruct& setAcknowledge(IncidentMemberStruct::Acknowledge && acknowledge) { DARABONBA_PTR_SET_RVALUE(acknowledge_, acknowledge) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline IncidentMemberStruct& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<IncidentMemberStruct::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<IncidentMemberStruct::Contacts>) };
    inline vector<IncidentMemberStruct::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<IncidentMemberStruct::Contacts>) };
    inline IncidentMemberStruct& setContacts(const vector<IncidentMemberStruct::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline IncidentMemberStruct& setContacts(vector<IncidentMemberStruct::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // escalation Field Functions 
    bool hasEscalation() const { return this->escalation_ != nullptr;};
    void deleteEscalation() { this->escalation_ = nullptr;};
    inline const IncidentMemberStruct::Escalation & getEscalation() const { DARABONBA_PTR_GET_CONST(escalation_, IncidentMemberStruct::Escalation) };
    inline IncidentMemberStruct::Escalation getEscalation() { DARABONBA_PTR_GET(escalation_, IncidentMemberStruct::Escalation) };
    inline IncidentMemberStruct& setEscalation(const IncidentMemberStruct::Escalation & escalation) { DARABONBA_PTR_SET_VALUE(escalation_, escalation) };
    inline IncidentMemberStruct& setEscalation(IncidentMemberStruct::Escalation && escalation) { DARABONBA_PTR_SET_RVALUE(escalation_, escalation) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string getIncidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentMemberStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // incidentMemberId Field Functions 
    bool hasIncidentMemberId() const { return this->incidentMemberId_ != nullptr;};
    void deleteIncidentMemberId() { this->incidentMemberId_ = nullptr;};
    inline string getIncidentMemberId() const { DARABONBA_PTR_GET_DEFAULT(incidentMemberId_, "") };
    inline IncidentMemberStruct& setIncidentMemberId(string incidentMemberId) { DARABONBA_PTR_SET_VALUE(incidentMemberId_, incidentMemberId) };


    // scheduleGroup Field Functions 
    bool hasScheduleGroup() const { return this->scheduleGroup_ != nullptr;};
    void deleteScheduleGroup() { this->scheduleGroup_ = nullptr;};
    inline const IncidentMemberStruct::ScheduleGroup & getScheduleGroup() const { DARABONBA_PTR_GET_CONST(scheduleGroup_, IncidentMemberStruct::ScheduleGroup) };
    inline IncidentMemberStruct::ScheduleGroup getScheduleGroup() { DARABONBA_PTR_GET(scheduleGroup_, IncidentMemberStruct::ScheduleGroup) };
    inline IncidentMemberStruct& setScheduleGroup(const IncidentMemberStruct::ScheduleGroup & scheduleGroup) { DARABONBA_PTR_SET_VALUE(scheduleGroup_, scheduleGroup) };
    inline IncidentMemberStruct& setScheduleGroup(IncidentMemberStruct::ScheduleGroup && scheduleGroup) { DARABONBA_PTR_SET_RVALUE(scheduleGroup_, scheduleGroup) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentMemberStruct& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline IncidentMemberStruct& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<IncidentMemberStruct::Acknowledge> acknowledge_ {};
    shared_ptr<string> contactId_ {};
    shared_ptr<vector<IncidentMemberStruct::Contacts>> contacts_ {};
    shared_ptr<IncidentMemberStruct::Escalation> escalation_ {};
    shared_ptr<string> incidentId_ {};
    shared_ptr<string> incidentMemberId_ {};
    shared_ptr<IncidentMemberStruct::ScheduleGroup> scheduleGroup_ {};
    shared_ptr<int64_t> time_ {};
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
