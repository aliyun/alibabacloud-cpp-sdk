// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EventCenterQueryEventsRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(BusName, busName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(BusName, busName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    EventCenterQueryEventsRequest() = default ;
    EventCenterQueryEventsRequest(const EventCenterQueryEventsRequest &) = default ;
    EventCenterQueryEventsRequest(EventCenterQueryEventsRequest &&) = default ;
    EventCenterQueryEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequest() = default ;
    EventCenterQueryEventsRequest& operator=(const EventCenterQueryEventsRequest &) = default ;
    EventCenterQueryEventsRequest& operator=(EventCenterQueryEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->busName_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EventCenterQueryEventsRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, EventCenterQueryEventsRequestBody) };
    inline EventCenterQueryEventsRequestBody body() { DARABONBA_PTR_GET(body_, EventCenterQueryEventsRequestBody) };
    inline EventCenterQueryEventsRequest& setBody(const EventCenterQueryEventsRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EventCenterQueryEventsRequest& setBody(EventCenterQueryEventsRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // busName Field Functions 
    bool hasBusName() const { return this->busName_ != nullptr;};
    void deleteBusName() { this->busName_ = nullptr;};
    inline string busName() const { DARABONBA_PTR_GET_DEFAULT(busName_, "") };
    inline EventCenterQueryEventsRequest& setBusName(string busName) { DARABONBA_PTR_SET_VALUE(busName_, busName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EventCenterQueryEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EventCenterQueryEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The request body.
    // 
    // This parameter is required.
    std::shared_ptr<EventCenterQueryEventsRequestBody> body_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> busName_ = nullptr;
    // The number of entries per page. Valid values: 0 to 10000. Default value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 用来标记当前开始读取的位置。置空表示从头开始。
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
