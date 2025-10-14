// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSREMINDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSREMINDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsReminders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsReminders& obj) { 
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Minutes, minutes_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsReminders& obj) { 
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
    };
    ListEventsResponseBodyEventsReminders() = default ;
    ListEventsResponseBodyEventsReminders(const ListEventsResponseBodyEventsReminders &) = default ;
    ListEventsResponseBodyEventsReminders(ListEventsResponseBodyEventsReminders &&) = default ;
    ListEventsResponseBodyEventsReminders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsReminders() = default ;
    ListEventsResponseBodyEventsReminders& operator=(const ListEventsResponseBodyEventsReminders &) = default ;
    ListEventsResponseBodyEventsReminders& operator=(ListEventsResponseBodyEventsReminders &&) = default ;
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
    inline ListEventsResponseBodyEventsReminders& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // minutes Field Functions 
    bool hasMinutes() const { return this->minutes_ != nullptr;};
    void deleteMinutes() { this->minutes_ = nullptr;};
    inline string minutes() const { DARABONBA_PTR_GET_DEFAULT(minutes_, "") };
    inline ListEventsResponseBodyEventsReminders& setMinutes(string minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };


  protected:
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> minutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
