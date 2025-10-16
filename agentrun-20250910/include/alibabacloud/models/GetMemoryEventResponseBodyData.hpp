// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetMemoryEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryEventResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(event, event_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryEventResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(event, event_);
    };
    GetMemoryEventResponseBodyData() = default ;
    GetMemoryEventResponseBodyData(const GetMemoryEventResponseBodyData &) = default ;
    GetMemoryEventResponseBodyData(GetMemoryEventResponseBodyData &&) = default ;
    GetMemoryEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryEventResponseBodyData() = default ;
    GetMemoryEventResponseBodyData& operator=(const GetMemoryEventResponseBodyData &) = default ;
    GetMemoryEventResponseBodyData& operator=(GetMemoryEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->event_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline     const Darabonba::Json & event() const { DARABONBA_GET(event_) };
    Darabonba::Json & event() { DARABONBA_GET(event_) };
    inline GetMemoryEventResponseBodyData& setEvent(const Darabonba::Json & event) { DARABONBA_SET_VALUE(event_, event) };
    inline GetMemoryEventResponseBodyData& setEvent(Darabonba::Json & event) { DARABONBA_SET_RVALUE(event_, event) };


  protected:
    Darabonba::Json event_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
