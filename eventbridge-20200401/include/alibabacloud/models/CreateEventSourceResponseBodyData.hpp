// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventSourceARN, eventSourceARN_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSourceARN, eventSourceARN_);
    };
    CreateEventSourceResponseBodyData() = default ;
    CreateEventSourceResponseBodyData(const CreateEventSourceResponseBodyData &) = default ;
    CreateEventSourceResponseBodyData(CreateEventSourceResponseBodyData &&) = default ;
    CreateEventSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSourceResponseBodyData() = default ;
    CreateEventSourceResponseBodyData& operator=(const CreateEventSourceResponseBodyData &) = default ;
    CreateEventSourceResponseBodyData& operator=(CreateEventSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventSourceARN_ != nullptr; };
    // eventSourceARN Field Functions 
    bool hasEventSourceARN() const { return this->eventSourceARN_ != nullptr;};
    void deleteEventSourceARN() { this->eventSourceARN_ = nullptr;};
    inline string eventSourceARN() const { DARABONBA_PTR_GET_DEFAULT(eventSourceARN_, "") };
    inline CreateEventSourceResponseBodyData& setEventSourceARN(string eventSourceARN) { DARABONBA_PTR_SET_VALUE(eventSourceARN_, eventSourceARN) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the resource.
    std::shared_ptr<string> eventSourceARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
