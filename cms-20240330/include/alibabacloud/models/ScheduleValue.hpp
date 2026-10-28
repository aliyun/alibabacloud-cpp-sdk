// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEVALUE_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ScheduleValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleValue& obj) { 
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(contactName, contactName_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleValue& obj) { 
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(contactName, contactName_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    ScheduleValue() = default ;
    ScheduleValue(const ScheduleValue &) = default ;
    ScheduleValue(ScheduleValue &&) = default ;
    ScheduleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleValue() = default ;
    ScheduleValue& operator=(const ScheduleValue &) = default ;
    ScheduleValue& operator=(ScheduleValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->end_ == nullptr && this->start_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ScheduleValue& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline ScheduleValue& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline ScheduleValue& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline ScheduleValue& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    shared_ptr<string> contactId_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> end_ {};
    shared_ptr<string> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
