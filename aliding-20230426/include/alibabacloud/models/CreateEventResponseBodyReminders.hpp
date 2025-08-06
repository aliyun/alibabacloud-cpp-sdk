// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODYREMINDERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODYREMINDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventResponseBodyReminders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventResponseBodyReminders& obj) { 
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Minutes, minutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventResponseBodyReminders& obj) { 
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
    };
    CreateEventResponseBodyReminders() = default ;
    CreateEventResponseBodyReminders(const CreateEventResponseBodyReminders &) = default ;
    CreateEventResponseBodyReminders(CreateEventResponseBodyReminders &&) = default ;
    CreateEventResponseBodyReminders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventResponseBodyReminders() = default ;
    CreateEventResponseBodyReminders& operator=(const CreateEventResponseBodyReminders &) = default ;
    CreateEventResponseBodyReminders& operator=(CreateEventResponseBodyReminders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->method_ != nullptr
        && this->minutes_ != nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateEventResponseBodyReminders& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // minutes Field Functions 
    bool hasMinutes() const { return this->minutes_ != nullptr;};
    void deleteMinutes() { this->minutes_ = nullptr;};
    inline string minutes() const { DARABONBA_PTR_GET_DEFAULT(minutes_, "") };
    inline CreateEventResponseBodyReminders& setMinutes(string minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };


  protected:
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> minutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
