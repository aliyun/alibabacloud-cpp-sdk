// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTTRACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTTRACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryEventTracesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventTracesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventTracesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
    };
    QueryEventTracesRequest() = default ;
    QueryEventTracesRequest(const QueryEventTracesRequest &) = default ;
    QueryEventTracesRequest(QueryEventTracesRequest &&) = default ;
    QueryEventTracesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventTracesRequest() = default ;
    QueryEventTracesRequest& operator=(const QueryEventTracesRequest &) = default ;
    QueryEventTracesRequest& operator=(QueryEventTracesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->eventId_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline QueryEventTracesRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryEventTracesRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
