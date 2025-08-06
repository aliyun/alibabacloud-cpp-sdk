// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUESTSTART_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUESTSTART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequestStart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequestStart& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequestStart& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    CreateEventRequestStart() = default ;
    CreateEventRequestStart(const CreateEventRequestStart &) = default ;
    CreateEventRequestStart(CreateEventRequestStart &&) = default ;
    CreateEventRequestStart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequestStart() = default ;
    CreateEventRequestStart& operator=(const CreateEventRequestStart &) = default ;
    CreateEventRequestStart& operator=(CreateEventRequestStart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->dateTime_ != nullptr && this->timeZone_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline CreateEventRequestStart& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline CreateEventRequestStart& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateEventRequestStart& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> dateTime_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
