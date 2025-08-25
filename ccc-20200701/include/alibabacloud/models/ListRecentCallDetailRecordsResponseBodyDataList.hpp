// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTCALLDETAILRECORDSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTCALLDETAILRECORDSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRecentCallDetailRecordsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentCallDetailRecordsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentCallDetailRecordsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListRecentCallDetailRecordsResponseBodyDataList() = default ;
    ListRecentCallDetailRecordsResponseBodyDataList(const ListRecentCallDetailRecordsResponseBodyDataList &) = default ;
    ListRecentCallDetailRecordsResponseBodyDataList(ListRecentCallDetailRecordsResponseBodyDataList &&) = default ;
    ListRecentCallDetailRecordsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentCallDetailRecordsResponseBodyDataList() = default ;
    ListRecentCallDetailRecordsResponseBodyDataList& operator=(const ListRecentCallDetailRecordsResponseBodyDataList &) = default ;
    ListRecentCallDetailRecordsResponseBodyDataList& operator=(ListRecentCallDetailRecordsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentIds_ != nullptr
        && this->callDuration_ != nullptr && this->calledNumber_ != nullptr && this->callingNumber_ != nullptr && this->contactDisposition_ != nullptr && this->contactId_ != nullptr
        && this->contactType_ != nullptr && this->duration_ != nullptr && this->instanceId_ != nullptr && this->skillGroupIds_ != nullptr && this->startTime_ != nullptr; };
    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline string agentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline string callDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setCallDuration(string callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // contactDisposition Field Functions 
    bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
    void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
    inline string contactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListRecentCallDetailRecordsResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> agentIds_ = nullptr;
    std::shared_ptr<string> callDuration_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> contactDisposition_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> skillGroupIds_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
