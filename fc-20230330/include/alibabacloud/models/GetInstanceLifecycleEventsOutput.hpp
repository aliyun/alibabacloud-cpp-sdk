// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELIFECYCLEEVENTSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELIFECYCLEEVENTSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceEventItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetInstanceLifecycleEventsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLifecycleEventsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLifecycleEventsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetInstanceLifecycleEventsOutput() = default ;
    GetInstanceLifecycleEventsOutput(const GetInstanceLifecycleEventsOutput &) = default ;
    GetInstanceLifecycleEventsOutput(GetInstanceLifecycleEventsOutput &&) = default ;
    GetInstanceLifecycleEventsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLifecycleEventsOutput() = default ;
    GetInstanceLifecycleEventsOutput& operator=(const GetInstanceLifecycleEventsOutput &) = default ;
    GetInstanceLifecycleEventsOutput& operator=(GetInstanceLifecycleEventsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<InstanceEventItem> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<InstanceEventItem>) };
    inline vector<InstanceEventItem> events() { DARABONBA_PTR_GET(events_, vector<InstanceEventItem>) };
    inline GetInstanceLifecycleEventsOutput& setEvents(const vector<InstanceEventItem> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetInstanceLifecycleEventsOutput& setEvents(vector<InstanceEventItem> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceLifecycleEventsOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<InstanceEventItem>> events_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
