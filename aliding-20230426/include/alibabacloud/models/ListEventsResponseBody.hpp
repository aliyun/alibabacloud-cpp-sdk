// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventsResponseBodyEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(syncToken, syncToken_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(syncToken, syncToken_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListEventsResponseBody() = default ;
    ListEventsResponseBody(const ListEventsResponseBody &) = default ;
    ListEventsResponseBody(ListEventsResponseBody &&) = default ;
    ListEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBody() = default ;
    ListEventsResponseBody& operator=(const ListEventsResponseBody &) = default ;
    ListEventsResponseBody& operator=(ListEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->events_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->syncToken_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<ListEventsResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<ListEventsResponseBodyEvents>) };
    inline vector<ListEventsResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<ListEventsResponseBodyEvents>) };
    inline ListEventsResponseBody& setEvents(const vector<ListEventsResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListEventsResponseBody& setEvents(vector<ListEventsResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncToken Field Functions 
    bool hasSyncToken() const { return this->syncToken_ != nullptr;};
    void deleteSyncToken() { this->syncToken_ = nullptr;};
    inline string syncToken() const { DARABONBA_PTR_GET_DEFAULT(syncToken_, "") };
    inline ListEventsResponseBody& setSyncToken(string syncToken) { DARABONBA_PTR_SET_VALUE(syncToken_, syncToken) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListEventsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListEventsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<ListEventsResponseBodyEvents>> events_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> syncToken_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
