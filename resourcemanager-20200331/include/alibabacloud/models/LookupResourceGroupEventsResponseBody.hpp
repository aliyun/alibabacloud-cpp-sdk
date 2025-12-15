// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupResourceGroupEventsResponseBodyEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class LookupResourceGroupEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupResourceGroupEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupResourceGroupEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LookupResourceGroupEventsResponseBody() = default ;
    LookupResourceGroupEventsResponseBody(const LookupResourceGroupEventsResponseBody &) = default ;
    LookupResourceGroupEventsResponseBody(LookupResourceGroupEventsResponseBody &&) = default ;
    LookupResourceGroupEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupResourceGroupEventsResponseBody() = default ;
    LookupResourceGroupEventsResponseBody& operator=(const LookupResourceGroupEventsResponseBody &) = default ;
    LookupResourceGroupEventsResponseBody& operator=(LookupResourceGroupEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<LookupResourceGroupEventsResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<LookupResourceGroupEventsResponseBodyEvents>) };
    inline vector<LookupResourceGroupEventsResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<LookupResourceGroupEventsResponseBodyEvents>) };
    inline LookupResourceGroupEventsResponseBody& setEvents(const vector<LookupResourceGroupEventsResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline LookupResourceGroupEventsResponseBody& setEvents(vector<LookupResourceGroupEventsResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupResourceGroupEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupResourceGroupEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<LookupResourceGroupEventsResponseBodyEvents>> events_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
