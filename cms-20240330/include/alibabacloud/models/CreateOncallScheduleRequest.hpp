// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEONCALLSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEONCALLSCHEDULEREQUEST_HPP_
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
  class CreateOncallScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOncallScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(oncallScheduleId, oncallScheduleId_);
      DARABONBA_PTR_TO_JSON(oncallScheduleName, oncallScheduleName_);
      DARABONBA_PTR_TO_JSON(rotations, rotations_);
      DARABONBA_PTR_TO_JSON(shiftRobotId, shiftRobotId_);
      DARABONBA_PTR_TO_JSON(substitudes, substitudes_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOncallScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(oncallScheduleId, oncallScheduleId_);
      DARABONBA_PTR_FROM_JSON(oncallScheduleName, oncallScheduleName_);
      DARABONBA_PTR_FROM_JSON(rotations, rotations_);
      DARABONBA_PTR_FROM_JSON(shiftRobotId, shiftRobotId_);
      DARABONBA_PTR_FROM_JSON(substitudes, substitudes_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateOncallScheduleRequest() = default ;
    CreateOncallScheduleRequest(const CreateOncallScheduleRequest &) = default ;
    CreateOncallScheduleRequest(CreateOncallScheduleRequest &&) = default ;
    CreateOncallScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOncallScheduleRequest() = default ;
    CreateOncallScheduleRequest& operator=(const CreateOncallScheduleRequest &) = default ;
    CreateOncallScheduleRequest& operator=(CreateOncallScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Substitudes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Substitudes& obj) { 
        DARABONBA_PTR_TO_JSON(contactId, contactId_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(replacedContactId, replacedContactId_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Substitudes& obj) { 
        DARABONBA_PTR_FROM_JSON(contactId, contactId_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(replacedContactId, replacedContactId_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      Substitudes() = default ;
      Substitudes(const Substitudes &) = default ;
      Substitudes(Substitudes &&) = default ;
      Substitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Substitudes() = default ;
      Substitudes& operator=(const Substitudes &) = default ;
      Substitudes& operator=(Substitudes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->endTime_ == nullptr && this->replacedContactId_ == nullptr && this->startTime_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Substitudes& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Substitudes& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // replacedContactId Field Functions 
      bool hasReplacedContactId() const { return this->replacedContactId_ != nullptr;};
      void deleteReplacedContactId() { this->replacedContactId_ = nullptr;};
      inline string getReplacedContactId() const { DARABONBA_PTR_GET_DEFAULT(replacedContactId_, "") };
      inline Substitudes& setReplacedContactId(string replacedContactId) { DARABONBA_PTR_SET_VALUE(replacedContactId_, replacedContactId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Substitudes& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The ID of the substitute contact.
      shared_ptr<string> contactId_ {};
      // The end time of the substitution. Format: YYYY-MM-DD HH:mm.
      shared_ptr<string> endTime_ {};
      // The ID of the replaced contact.
      shared_ptr<string> replacedContactId_ {};
      // The start time of the substitution. Format: YYYY-MM-DD HH:mm.
      shared_ptr<string> startTime_ {};
    };

    class Rotations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rotations& obj) { 
        DARABONBA_PTR_TO_JSON(activeDays, activeDays_);
        DARABONBA_PTR_TO_JSON(contacts, contacts_);
        DARABONBA_PTR_TO_JSON(rotationEndTime, rotationEndTime_);
        DARABONBA_PTR_TO_JSON(rotationName, rotationName_);
        DARABONBA_PTR_TO_JSON(rotationStartTime, rotationStartTime_);
        DARABONBA_PTR_TO_JSON(shiftLength, shiftLength_);
        DARABONBA_PTR_TO_JSON(shiftRecurrenceFrequency, shiftRecurrenceFrequency_);
        DARABONBA_PTR_TO_JSON(startDate, startDate_);
        DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, Rotations& obj) { 
        DARABONBA_PTR_FROM_JSON(activeDays, activeDays_);
        DARABONBA_PTR_FROM_JSON(contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(rotationEndTime, rotationEndTime_);
        DARABONBA_PTR_FROM_JSON(rotationName, rotationName_);
        DARABONBA_PTR_FROM_JSON(rotationStartTime, rotationStartTime_);
        DARABONBA_PTR_FROM_JSON(shiftLength, shiftLength_);
        DARABONBA_PTR_FROM_JSON(shiftRecurrenceFrequency, shiftRecurrenceFrequency_);
        DARABONBA_PTR_FROM_JSON(startDate, startDate_);
        DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      };
      Rotations() = default ;
      Rotations(const Rotations &) = default ;
      Rotations(Rotations &&) = default ;
      Rotations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rotations() = default ;
      Rotations& operator=(const Rotations &) = default ;
      Rotations& operator=(Rotations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeDays_ == nullptr
        && this->contacts_ == nullptr && this->rotationEndTime_ == nullptr && this->rotationName_ == nullptr && this->rotationStartTime_ == nullptr && this->shiftLength_ == nullptr
        && this->shiftRecurrenceFrequency_ == nullptr && this->startDate_ == nullptr && this->timeZone_ == nullptr; };
      // activeDays Field Functions 
      bool hasActiveDays() const { return this->activeDays_ != nullptr;};
      void deleteActiveDays() { this->activeDays_ = nullptr;};
      inline const vector<int32_t> & getActiveDays() const { DARABONBA_PTR_GET_CONST(activeDays_, vector<int32_t>) };
      inline vector<int32_t> getActiveDays() { DARABONBA_PTR_GET(activeDays_, vector<int32_t>) };
      inline Rotations& setActiveDays(const vector<int32_t> & activeDays) { DARABONBA_PTR_SET_VALUE(activeDays_, activeDays) };
      inline Rotations& setActiveDays(vector<int32_t> && activeDays) { DARABONBA_PTR_SET_RVALUE(activeDays_, activeDays) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<string> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
      inline vector<string> getContacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
      inline Rotations& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline Rotations& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // rotationEndTime Field Functions 
      bool hasRotationEndTime() const { return this->rotationEndTime_ != nullptr;};
      void deleteRotationEndTime() { this->rotationEndTime_ = nullptr;};
      inline string getRotationEndTime() const { DARABONBA_PTR_GET_DEFAULT(rotationEndTime_, "") };
      inline Rotations& setRotationEndTime(string rotationEndTime) { DARABONBA_PTR_SET_VALUE(rotationEndTime_, rotationEndTime) };


      // rotationName Field Functions 
      bool hasRotationName() const { return this->rotationName_ != nullptr;};
      void deleteRotationName() { this->rotationName_ = nullptr;};
      inline string getRotationName() const { DARABONBA_PTR_GET_DEFAULT(rotationName_, "") };
      inline Rotations& setRotationName(string rotationName) { DARABONBA_PTR_SET_VALUE(rotationName_, rotationName) };


      // rotationStartTime Field Functions 
      bool hasRotationStartTime() const { return this->rotationStartTime_ != nullptr;};
      void deleteRotationStartTime() { this->rotationStartTime_ = nullptr;};
      inline string getRotationStartTime() const { DARABONBA_PTR_GET_DEFAULT(rotationStartTime_, "") };
      inline Rotations& setRotationStartTime(string rotationStartTime) { DARABONBA_PTR_SET_VALUE(rotationStartTime_, rotationStartTime) };


      // shiftLength Field Functions 
      bool hasShiftLength() const { return this->shiftLength_ != nullptr;};
      void deleteShiftLength() { this->shiftLength_ = nullptr;};
      inline int32_t getShiftLength() const { DARABONBA_PTR_GET_DEFAULT(shiftLength_, 0) };
      inline Rotations& setShiftLength(int32_t shiftLength) { DARABONBA_PTR_SET_VALUE(shiftLength_, shiftLength) };


      // shiftRecurrenceFrequency Field Functions 
      bool hasShiftRecurrenceFrequency() const { return this->shiftRecurrenceFrequency_ != nullptr;};
      void deleteShiftRecurrenceFrequency() { this->shiftRecurrenceFrequency_ = nullptr;};
      inline string getShiftRecurrenceFrequency() const { DARABONBA_PTR_GET_DEFAULT(shiftRecurrenceFrequency_, "") };
      inline Rotations& setShiftRecurrenceFrequency(string shiftRecurrenceFrequency) { DARABONBA_PTR_SET_VALUE(shiftRecurrenceFrequency_, shiftRecurrenceFrequency) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Rotations& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline Rotations& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      // The days of the week when the rotation is active.
      // 
      // This parameter is required.
      shared_ptr<vector<int32_t>> activeDays_ {};
      // The list of contacts.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> contacts_ {};
      // The end time of the rotation. Format: HH:mm.
      // 
      // This parameter is required.
      shared_ptr<string> rotationEndTime_ {};
      // The name of the rotation.
      // 
      // This parameter is required.
      shared_ptr<string> rotationName_ {};
      // The start time of the rotation. Format: HH:mm.
      // 
      // This parameter is required.
      shared_ptr<string> rotationStartTime_ {};
      // The length of the shift interval. Use this parameter in conjunction with shiftRecurrenceFrequency. For example, set this parameter to 3 to rotate to the next on-call contact every 3 days.
      shared_ptr<int32_t> shiftLength_ {};
      // The unit of the shift interval. Use this parameter in conjunction with shiftRecurrenceFrequency. For example, set this parameter to week to rotate to the next on-call contact every week.
      // 
      // This parameter is required.
      shared_ptr<string> shiftRecurrenceFrequency_ {};
      // The start date of the rotation. Format: yyyy-MM-dd.
      // 
      // This parameter is required.
      shared_ptr<string> startDate_ {};
      // The name of the time zone. The time zone must follow the **IANA Time Zone Database** standard, such as `Asia/Shanghai`.
      // 
      // This parameter is required.
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->oncallScheduleId_ == nullptr
        && this->oncallScheduleName_ == nullptr && this->rotations_ == nullptr && this->shiftRobotId_ == nullptr && this->substitudes_ == nullptr && this->workspace_ == nullptr; };
    // oncallScheduleId Field Functions 
    bool hasOncallScheduleId() const { return this->oncallScheduleId_ != nullptr;};
    void deleteOncallScheduleId() { this->oncallScheduleId_ = nullptr;};
    inline string getOncallScheduleId() const { DARABONBA_PTR_GET_DEFAULT(oncallScheduleId_, "") };
    inline CreateOncallScheduleRequest& setOncallScheduleId(string oncallScheduleId) { DARABONBA_PTR_SET_VALUE(oncallScheduleId_, oncallScheduleId) };


    // oncallScheduleName Field Functions 
    bool hasOncallScheduleName() const { return this->oncallScheduleName_ != nullptr;};
    void deleteOncallScheduleName() { this->oncallScheduleName_ = nullptr;};
    inline string getOncallScheduleName() const { DARABONBA_PTR_GET_DEFAULT(oncallScheduleName_, "") };
    inline CreateOncallScheduleRequest& setOncallScheduleName(string oncallScheduleName) { DARABONBA_PTR_SET_VALUE(oncallScheduleName_, oncallScheduleName) };


    // rotations Field Functions 
    bool hasRotations() const { return this->rotations_ != nullptr;};
    void deleteRotations() { this->rotations_ = nullptr;};
    inline const vector<CreateOncallScheduleRequest::Rotations> & getRotations() const { DARABONBA_PTR_GET_CONST(rotations_, vector<CreateOncallScheduleRequest::Rotations>) };
    inline vector<CreateOncallScheduleRequest::Rotations> getRotations() { DARABONBA_PTR_GET(rotations_, vector<CreateOncallScheduleRequest::Rotations>) };
    inline CreateOncallScheduleRequest& setRotations(const vector<CreateOncallScheduleRequest::Rotations> & rotations) { DARABONBA_PTR_SET_VALUE(rotations_, rotations) };
    inline CreateOncallScheduleRequest& setRotations(vector<CreateOncallScheduleRequest::Rotations> && rotations) { DARABONBA_PTR_SET_RVALUE(rotations_, rotations) };


    // shiftRobotId Field Functions 
    bool hasShiftRobotId() const { return this->shiftRobotId_ != nullptr;};
    void deleteShiftRobotId() { this->shiftRobotId_ = nullptr;};
    inline string getShiftRobotId() const { DARABONBA_PTR_GET_DEFAULT(shiftRobotId_, "") };
    inline CreateOncallScheduleRequest& setShiftRobotId(string shiftRobotId) { DARABONBA_PTR_SET_VALUE(shiftRobotId_, shiftRobotId) };


    // substitudes Field Functions 
    bool hasSubstitudes() const { return this->substitudes_ != nullptr;};
    void deleteSubstitudes() { this->substitudes_ = nullptr;};
    inline const vector<CreateOncallScheduleRequest::Substitudes> & getSubstitudes() const { DARABONBA_PTR_GET_CONST(substitudes_, vector<CreateOncallScheduleRequest::Substitudes>) };
    inline vector<CreateOncallScheduleRequest::Substitudes> getSubstitudes() { DARABONBA_PTR_GET(substitudes_, vector<CreateOncallScheduleRequest::Substitudes>) };
    inline CreateOncallScheduleRequest& setSubstitudes(const vector<CreateOncallScheduleRequest::Substitudes> & substitudes) { DARABONBA_PTR_SET_VALUE(substitudes_, substitudes) };
    inline CreateOncallScheduleRequest& setSubstitudes(vector<CreateOncallScheduleRequest::Substitudes> && substitudes) { DARABONBA_PTR_SET_RVALUE(substitudes_, substitudes) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateOncallScheduleRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The unique identifier of the on-call schedule.
    shared_ptr<string> oncallScheduleId_ {};
    // The name of the on-call schedule.
    shared_ptr<string> oncallScheduleName_ {};
    // The list of rotations.
    shared_ptr<vector<CreateOncallScheduleRequest::Rotations>> rotations_ {};
    // The ID of the chatbot for shift reminders.
    shared_ptr<string> shiftRobotId_ {};
    // The list of substitution rules.
    shared_ptr<vector<CreateOncallScheduleRequest::Substitudes>> substitudes_ {};
    // The name of the workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
