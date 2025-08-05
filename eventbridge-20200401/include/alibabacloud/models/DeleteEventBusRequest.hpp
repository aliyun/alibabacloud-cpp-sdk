// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTBUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTBUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteEventBusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventBusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventBusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
    };
    DeleteEventBusRequest() = default ;
    DeleteEventBusRequest(const DeleteEventBusRequest &) = default ;
    DeleteEventBusRequest(DeleteEventBusRequest &&) = default ;
    DeleteEventBusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventBusRequest() = default ;
    DeleteEventBusRequest& operator=(const DeleteEventBusRequest &) = default ;
    DeleteEventBusRequest& operator=(DeleteEventBusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline DeleteEventBusRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
