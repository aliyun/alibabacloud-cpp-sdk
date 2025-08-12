// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IncidentMemberStructAcknowledge.hpp>
#include <vector>
#include <alibabacloud/models/IncidentMemberStructContacts.hpp>
#include <alibabacloud/models/IncidentMemberStructEscalation.hpp>
#include <alibabacloud/models/IncidentMemberStructScheduleGroup.hpp>
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
    virtual bool empty() const override { this->acknowledge_ != nullptr
        && this->contactId_ != nullptr && this->contacts_ != nullptr && this->escalation_ != nullptr && this->incidentId_ != nullptr && this->incidentMemberId_ != nullptr
        && this->scheduleGroup_ != nullptr && this->time_ != nullptr && this->userId_ != nullptr; };
    // acknowledge Field Functions 
    bool hasAcknowledge() const { return this->acknowledge_ != nullptr;};
    void deleteAcknowledge() { this->acknowledge_ = nullptr;};
    inline const IncidentMemberStructAcknowledge & acknowledge() const { DARABONBA_PTR_GET_CONST(acknowledge_, IncidentMemberStructAcknowledge) };
    inline IncidentMemberStructAcknowledge acknowledge() { DARABONBA_PTR_GET(acknowledge_, IncidentMemberStructAcknowledge) };
    inline IncidentMemberStruct& setAcknowledge(const IncidentMemberStructAcknowledge & acknowledge) { DARABONBA_PTR_SET_VALUE(acknowledge_, acknowledge) };
    inline IncidentMemberStruct& setAcknowledge(IncidentMemberStructAcknowledge && acknowledge) { DARABONBA_PTR_SET_RVALUE(acknowledge_, acknowledge) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline IncidentMemberStruct& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<IncidentMemberStructContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<IncidentMemberStructContacts>) };
    inline vector<IncidentMemberStructContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<IncidentMemberStructContacts>) };
    inline IncidentMemberStruct& setContacts(const vector<IncidentMemberStructContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline IncidentMemberStruct& setContacts(vector<IncidentMemberStructContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // escalation Field Functions 
    bool hasEscalation() const { return this->escalation_ != nullptr;};
    void deleteEscalation() { this->escalation_ = nullptr;};
    inline const IncidentMemberStructEscalation & escalation() const { DARABONBA_PTR_GET_CONST(escalation_, IncidentMemberStructEscalation) };
    inline IncidentMemberStructEscalation escalation() { DARABONBA_PTR_GET(escalation_, IncidentMemberStructEscalation) };
    inline IncidentMemberStruct& setEscalation(const IncidentMemberStructEscalation & escalation) { DARABONBA_PTR_SET_VALUE(escalation_, escalation) };
    inline IncidentMemberStruct& setEscalation(IncidentMemberStructEscalation && escalation) { DARABONBA_PTR_SET_RVALUE(escalation_, escalation) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentMemberStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // incidentMemberId Field Functions 
    bool hasIncidentMemberId() const { return this->incidentMemberId_ != nullptr;};
    void deleteIncidentMemberId() { this->incidentMemberId_ = nullptr;};
    inline string incidentMemberId() const { DARABONBA_PTR_GET_DEFAULT(incidentMemberId_, "") };
    inline IncidentMemberStruct& setIncidentMemberId(string incidentMemberId) { DARABONBA_PTR_SET_VALUE(incidentMemberId_, incidentMemberId) };


    // scheduleGroup Field Functions 
    bool hasScheduleGroup() const { return this->scheduleGroup_ != nullptr;};
    void deleteScheduleGroup() { this->scheduleGroup_ = nullptr;};
    inline const IncidentMemberStructScheduleGroup & scheduleGroup() const { DARABONBA_PTR_GET_CONST(scheduleGroup_, IncidentMemberStructScheduleGroup) };
    inline IncidentMemberStructScheduleGroup scheduleGroup() { DARABONBA_PTR_GET(scheduleGroup_, IncidentMemberStructScheduleGroup) };
    inline IncidentMemberStruct& setScheduleGroup(const IncidentMemberStructScheduleGroup & scheduleGroup) { DARABONBA_PTR_SET_VALUE(scheduleGroup_, scheduleGroup) };
    inline IncidentMemberStruct& setScheduleGroup(IncidentMemberStructScheduleGroup && scheduleGroup) { DARABONBA_PTR_SET_RVALUE(scheduleGroup_, scheduleGroup) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentMemberStruct& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline IncidentMemberStruct& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<IncidentMemberStructAcknowledge> acknowledge_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<vector<IncidentMemberStructContacts>> contacts_ = nullptr;
    std::shared_ptr<IncidentMemberStructEscalation> escalation_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<string> incidentMemberId_ = nullptr;
    std::shared_ptr<IncidentMemberStructScheduleGroup> scheduleGroup_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
