// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(BusName, busName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(BusName, busName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    EventCenterQueryEventsShrinkRequest() = default ;
    EventCenterQueryEventsShrinkRequest(const EventCenterQueryEventsShrinkRequest &) = default ;
    EventCenterQueryEventsShrinkRequest(EventCenterQueryEventsShrinkRequest &&) = default ;
    EventCenterQueryEventsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsShrinkRequest() = default ;
    EventCenterQueryEventsShrinkRequest& operator=(const EventCenterQueryEventsShrinkRequest &) = default ;
    EventCenterQueryEventsShrinkRequest& operator=(EventCenterQueryEventsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyShrink_ != nullptr
        && this->busName_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string bodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline EventCenterQueryEventsShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // busName Field Functions 
    bool hasBusName() const { return this->busName_ != nullptr;};
    void deleteBusName() { this->busName_ = nullptr;};
    inline string busName() const { DARABONBA_PTR_GET_DEFAULT(busName_, "") };
    inline EventCenterQueryEventsShrinkRequest& setBusName(string busName) { DARABONBA_PTR_SET_VALUE(busName_, busName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EventCenterQueryEventsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EventCenterQueryEventsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The request body.
    // 
    // This parameter is required.
    std::shared_ptr<string> bodyShrink_ = nullptr;
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
