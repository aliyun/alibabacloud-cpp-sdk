// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIBEDCALENDARSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIBEDCALENDARSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSubscribedCalendarsRequestSubscribeScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateSubscribedCalendarsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscribedCalendarsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Managers, managers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubscribeScope, subscribeScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscribedCalendarsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Managers, managers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubscribeScope, subscribeScope_);
    };
    UpdateSubscribedCalendarsRequest() = default ;
    UpdateSubscribedCalendarsRequest(const UpdateSubscribedCalendarsRequest &) = default ;
    UpdateSubscribedCalendarsRequest(UpdateSubscribedCalendarsRequest &&) = default ;
    UpdateSubscribedCalendarsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscribedCalendarsRequest() = default ;
    UpdateSubscribedCalendarsRequest& operator=(const UpdateSubscribedCalendarsRequest &) = default ;
    UpdateSubscribedCalendarsRequest& operator=(UpdateSubscribedCalendarsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && return this->description_ == nullptr && return this->managers_ == nullptr && return this->name_ == nullptr && return this->subscribeScope_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline UpdateSubscribedCalendarsRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSubscribedCalendarsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managers Field Functions 
    bool hasManagers() const { return this->managers_ != nullptr;};
    void deleteManagers() { this->managers_ = nullptr;};
    inline const vector<string> & managers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
    inline vector<string> managers() { DARABONBA_PTR_GET(managers_, vector<string>) };
    inline UpdateSubscribedCalendarsRequest& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
    inline UpdateSubscribedCalendarsRequest& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSubscribedCalendarsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subscribeScope Field Functions 
    bool hasSubscribeScope() const { return this->subscribeScope_ != nullptr;};
    void deleteSubscribeScope() { this->subscribeScope_ = nullptr;};
    inline const UpdateSubscribedCalendarsRequestSubscribeScope & subscribeScope() const { DARABONBA_PTR_GET_CONST(subscribeScope_, UpdateSubscribedCalendarsRequestSubscribeScope) };
    inline UpdateSubscribedCalendarsRequestSubscribeScope subscribeScope() { DARABONBA_PTR_GET(subscribeScope_, UpdateSubscribedCalendarsRequestSubscribeScope) };
    inline UpdateSubscribedCalendarsRequest& setSubscribeScope(const UpdateSubscribedCalendarsRequestSubscribeScope & subscribeScope) { DARABONBA_PTR_SET_VALUE(subscribeScope_, subscribeScope) };
    inline UpdateSubscribedCalendarsRequest& setSubscribeScope(UpdateSubscribedCalendarsRequestSubscribeScope && subscribeScope) { DARABONBA_PTR_SET_RVALUE(subscribeScope_, subscribeScope) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> managers_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<UpdateSubscribedCalendarsRequestSubscribeScope> subscribeScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
