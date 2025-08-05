// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTPATTERNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTPATTERNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventPatternRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventPatternRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventPatternRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
    };
    TestEventPatternRequest() = default ;
    TestEventPatternRequest(const TestEventPatternRequest &) = default ;
    TestEventPatternRequest(TestEventPatternRequest &&) = default ;
    TestEventPatternRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventPatternRequest() = default ;
    TestEventPatternRequest& operator=(const TestEventPatternRequest &) = default ;
    TestEventPatternRequest& operator=(TestEventPatternRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->eventPattern_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline TestEventPatternRequest& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventPattern Field Functions 
    bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
    void deleteEventPattern() { this->eventPattern_ = nullptr;};
    inline string eventPattern() const { DARABONBA_PTR_GET_DEFAULT(eventPattern_, "") };
    inline TestEventPatternRequest& setEventPattern(string eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };


  protected:
    // The event.
    // 
    // This parameter is required.
    std::shared_ptr<string> event_ = nullptr;
    // The event pattern.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventPattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
