// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICEMAILSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICEMAILSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListVoicemailsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoicemailsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(CdrStartTime, cdrStartTime_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoicemailsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(CdrStartTime, cdrStartTime_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListVoicemailsResponseBodyDataList() = default ;
    ListVoicemailsResponseBodyDataList(const ListVoicemailsResponseBodyDataList &) = default ;
    ListVoicemailsResponseBodyDataList(ListVoicemailsResponseBodyDataList &&) = default ;
    ListVoicemailsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoicemailsResponseBodyDataList() = default ;
    ListVoicemailsResponseBodyDataList& operator=(const ListVoicemailsResponseBodyDataList &) = default ;
    ListVoicemailsResponseBodyDataList& operator=(ListVoicemailsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callee_ != nullptr
        && this->caller_ != nullptr && this->cdrStartTime_ != nullptr && this->contactId_ != nullptr && this->duration_ != nullptr && this->instanceId_ != nullptr
        && this->name_ != nullptr && this->recordingDuration_ != nullptr && this->startTime_ != nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline ListVoicemailsResponseBodyDataList& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListVoicemailsResponseBodyDataList& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // cdrStartTime Field Functions 
    bool hasCdrStartTime() const { return this->cdrStartTime_ != nullptr;};
    void deleteCdrStartTime() { this->cdrStartTime_ = nullptr;};
    inline int64_t cdrStartTime() const { DARABONBA_PTR_GET_DEFAULT(cdrStartTime_, 0L) };
    inline ListVoicemailsResponseBodyDataList& setCdrStartTime(int64_t cdrStartTime) { DARABONBA_PTR_SET_VALUE(cdrStartTime_, cdrStartTime) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListVoicemailsResponseBodyDataList& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListVoicemailsResponseBodyDataList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVoicemailsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVoicemailsResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int64_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0L) };
    inline ListVoicemailsResponseBodyDataList& setRecordingDuration(int64_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListVoicemailsResponseBodyDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<int64_t> cdrStartTime_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> recordingDuration_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
