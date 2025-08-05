// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventStreamingARN, eventStreamingARN_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventStreamingARN, eventStreamingARN_);
    };
    CreateEventStreamingResponseBodyData() = default ;
    CreateEventStreamingResponseBodyData(const CreateEventStreamingResponseBodyData &) = default ;
    CreateEventStreamingResponseBodyData(CreateEventStreamingResponseBodyData &&) = default ;
    CreateEventStreamingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingResponseBodyData() = default ;
    CreateEventStreamingResponseBodyData& operator=(const CreateEventStreamingResponseBodyData &) = default ;
    CreateEventStreamingResponseBodyData& operator=(CreateEventStreamingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventStreamingARN_ != nullptr; };
    // eventStreamingARN Field Functions 
    bool hasEventStreamingARN() const { return this->eventStreamingARN_ != nullptr;};
    void deleteEventStreamingARN() { this->eventStreamingARN_ = nullptr;};
    inline string eventStreamingARN() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingARN_, "") };
    inline CreateEventStreamingResponseBodyData& setEventStreamingARN(string eventStreamingARN) { DARABONBA_PTR_SET_VALUE(eventStreamingARN_, eventStreamingARN) };


  protected:
    // The ARN of the event stream.
    std::shared_ptr<string> eventStreamingARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
