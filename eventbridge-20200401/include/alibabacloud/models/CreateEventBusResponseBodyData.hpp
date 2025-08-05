// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTBUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTBUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventBusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventBusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusARN, eventBusARN_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventBusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusARN, eventBusARN_);
    };
    CreateEventBusResponseBodyData() = default ;
    CreateEventBusResponseBodyData(const CreateEventBusResponseBodyData &) = default ;
    CreateEventBusResponseBodyData(CreateEventBusResponseBodyData &&) = default ;
    CreateEventBusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventBusResponseBodyData() = default ;
    CreateEventBusResponseBodyData& operator=(const CreateEventBusResponseBodyData &) = default ;
    CreateEventBusResponseBodyData& operator=(CreateEventBusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusARN_ != nullptr; };
    // eventBusARN Field Functions 
    bool hasEventBusARN() const { return this->eventBusARN_ != nullptr;};
    void deleteEventBusARN() { this->eventBusARN_ = nullptr;};
    inline string eventBusARN() const { DARABONBA_PTR_GET_DEFAULT(eventBusARN_, "") };
    inline CreateEventBusResponseBodyData& setEventBusARN(string eventBusARN) { DARABONBA_PTR_SET_VALUE(eventBusARN_, eventBusARN) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the event bus.
    std::shared_ptr<string> eventBusARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
