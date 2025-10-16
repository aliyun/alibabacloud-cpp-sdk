// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMemoryEventRequestEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateMemoryEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
    };
    CreateMemoryEventRequest() = default ;
    CreateMemoryEventRequest(const CreateMemoryEventRequest &) = default ;
    CreateMemoryEventRequest(CreateMemoryEventRequest &&) = default ;
    CreateMemoryEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryEventRequest() = default ;
    CreateMemoryEventRequest& operator=(const CreateMemoryEventRequest &) = default ;
    CreateMemoryEventRequest& operator=(CreateMemoryEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<CreateMemoryEventRequestEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<CreateMemoryEventRequestEvents>) };
    inline vector<CreateMemoryEventRequestEvents> events() { DARABONBA_PTR_GET(events_, vector<CreateMemoryEventRequestEvents>) };
    inline CreateMemoryEventRequest& setEvents(const vector<CreateMemoryEventRequestEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline CreateMemoryEventRequest& setEvents(vector<CreateMemoryEventRequestEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateMemoryEventRequestEvents>> events_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
