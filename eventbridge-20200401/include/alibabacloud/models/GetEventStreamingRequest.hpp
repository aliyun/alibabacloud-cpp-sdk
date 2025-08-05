// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
    };
    GetEventStreamingRequest() = default ;
    GetEventStreamingRequest(const GetEventStreamingRequest &) = default ;
    GetEventStreamingRequest(GetEventStreamingRequest &&) = default ;
    GetEventStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingRequest() = default ;
    GetEventStreamingRequest& operator=(const GetEventStreamingRequest &) = default ;
    GetEventStreamingRequest& operator=(GetEventStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventStreamingName_ != nullptr; };
    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline GetEventStreamingRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


  protected:
    // The name of the event stream whose details you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventStreamingName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
