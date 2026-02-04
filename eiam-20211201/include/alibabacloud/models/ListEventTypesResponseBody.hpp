// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListEventTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEventTypesResponseBody() = default ;
    ListEventTypesResponseBody(const ListEventTypesResponseBody &) = default ;
    ListEventTypesResponseBody(ListEventTypesResponseBody &&) = default ;
    ListEventTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventTypesResponseBody() = default ;
    ListEventTypesResponseBody& operator=(const ListEventTypesResponseBody &) = default ;
    ListEventTypesResponseBody& operator=(ListEventTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventTypes& obj) { 
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
      };
      friend void from_json(const Darabonba::Json& j, EventTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      };
      EventTypes() = default ;
      EventTypes(const EventTypes &) = default ;
      EventTypes(EventTypes &&) = default ;
      EventTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventTypes() = default ;
      EventTypes& operator=(const EventTypes &) = default ;
      EventTypes& operator=(EventTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventType_ == nullptr; };
      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline EventTypes& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    protected:
      shared_ptr<string> eventType_ {};
    };

    virtual bool empty() const override { return this->eventTypes_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<ListEventTypesResponseBody::EventTypes> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<ListEventTypesResponseBody::EventTypes>) };
    inline vector<ListEventTypesResponseBody::EventTypes> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<ListEventTypesResponseBody::EventTypes>) };
    inline ListEventTypesResponseBody& setEventTypes(const vector<ListEventTypesResponseBody::EventTypes> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline ListEventTypesResponseBody& setEventTypes(vector<ListEventTypesResponseBody::EventTypes> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEventTypesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListEventTypesResponseBody::EventTypes>> eventTypes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
