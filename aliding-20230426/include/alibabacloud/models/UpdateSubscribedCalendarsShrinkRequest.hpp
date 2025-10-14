// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIBEDCALENDARSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIBEDCALENDARSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateSubscribedCalendarsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscribedCalendarsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Managers, managersShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubscribeScope, subscribeScopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscribedCalendarsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Managers, managersShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubscribeScope, subscribeScopeShrink_);
    };
    UpdateSubscribedCalendarsShrinkRequest() = default ;
    UpdateSubscribedCalendarsShrinkRequest(const UpdateSubscribedCalendarsShrinkRequest &) = default ;
    UpdateSubscribedCalendarsShrinkRequest(UpdateSubscribedCalendarsShrinkRequest &&) = default ;
    UpdateSubscribedCalendarsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscribedCalendarsShrinkRequest() = default ;
    UpdateSubscribedCalendarsShrinkRequest& operator=(const UpdateSubscribedCalendarsShrinkRequest &) = default ;
    UpdateSubscribedCalendarsShrinkRequest& operator=(UpdateSubscribedCalendarsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && return this->description_ == nullptr && return this->managersShrink_ == nullptr && return this->name_ == nullptr && return this->subscribeScopeShrink_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline UpdateSubscribedCalendarsShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSubscribedCalendarsShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managersShrink Field Functions 
    bool hasManagersShrink() const { return this->managersShrink_ != nullptr;};
    void deleteManagersShrink() { this->managersShrink_ = nullptr;};
    inline string managersShrink() const { DARABONBA_PTR_GET_DEFAULT(managersShrink_, "") };
    inline UpdateSubscribedCalendarsShrinkRequest& setManagersShrink(string managersShrink) { DARABONBA_PTR_SET_VALUE(managersShrink_, managersShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSubscribedCalendarsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subscribeScopeShrink Field Functions 
    bool hasSubscribeScopeShrink() const { return this->subscribeScopeShrink_ != nullptr;};
    void deleteSubscribeScopeShrink() { this->subscribeScopeShrink_ = nullptr;};
    inline string subscribeScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(subscribeScopeShrink_, "") };
    inline UpdateSubscribedCalendarsShrinkRequest& setSubscribeScopeShrink(string subscribeScopeShrink) { DARABONBA_PTR_SET_VALUE(subscribeScopeShrink_, subscribeScopeShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> managersShrink_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> subscribeScopeShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
