// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTBUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTBUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventBusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventBusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventBusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
    };
    CreateEventBusRequest() = default ;
    CreateEventBusRequest(const CreateEventBusRequest &) = default ;
    CreateEventBusRequest(CreateEventBusRequest &&) = default ;
    CreateEventBusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventBusRequest() = default ;
    CreateEventBusRequest& operator=(const CreateEventBusRequest &) = default ;
    CreateEventBusRequest& operator=(CreateEventBusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventBusName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventBusRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline CreateEventBusRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


  protected:
    // The description of the event bus.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the request is successful. The value true indicates that the request is successful.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
