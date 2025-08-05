// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteEventSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
    };
    DeleteEventSourceRequest() = default ;
    DeleteEventSourceRequest(const DeleteEventSourceRequest &) = default ;
    DeleteEventSourceRequest(DeleteEventSourceRequest &&) = default ;
    DeleteEventSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventSourceRequest() = default ;
    DeleteEventSourceRequest& operator=(const DeleteEventSourceRequest &) = default ;
    DeleteEventSourceRequest& operator=(DeleteEventSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->eventSourceName_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline DeleteEventSourceRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string eventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline DeleteEventSourceRequest& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


  protected:
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The name of the event source.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventSourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
