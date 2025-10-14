// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUESTREMINDERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUESTREMINDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequestReminders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequestReminders& obj) { 
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(minutes, minutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequestReminders& obj) { 
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(minutes, minutes_);
    };
    CreateEventRequestReminders() = default ;
    CreateEventRequestReminders(const CreateEventRequestReminders &) = default ;
    CreateEventRequestReminders(CreateEventRequestReminders &&) = default ;
    CreateEventRequestReminders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequestReminders() = default ;
    CreateEventRequestReminders& operator=(const CreateEventRequestReminders &) = default ;
    CreateEventRequestReminders& operator=(CreateEventRequestReminders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->method_ == nullptr
        && return this->minutes_ == nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateEventRequestReminders& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // minutes Field Functions 
    bool hasMinutes() const { return this->minutes_ != nullptr;};
    void deleteMinutes() { this->minutes_ = nullptr;};
    inline int32_t minutes() const { DARABONBA_PTR_GET_DEFAULT(minutes_, 0) };
    inline CreateEventRequestReminders& setMinutes(int32_t minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };


  protected:
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<int32_t> minutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
