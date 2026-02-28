// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAllCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllCallbackResponseBody() = default ;
    DescribeAllCallbackResponseBody(const DescribeAllCallbackResponseBody &) = default ;
    DescribeAllCallbackResponseBody(DescribeAllCallbackResponseBody &&) = default ;
    DescribeAllCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllCallbackResponseBody() = default ;
    DescribeAllCallbackResponseBody& operator=(const DescribeAllCallbackResponseBody &) = default ;
    DescribeAllCallbackResponseBody& operator=(DescribeAllCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Callbacks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Callbacks& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SubEvent, subEvent_);
      };
      friend void from_json(const Darabonba::Json& j, Callbacks& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SubEvent, subEvent_);
      };
      Callbacks() = default ;
      Callbacks(const Callbacks &) = default ;
      Callbacks(Callbacks &&) = default ;
      Callbacks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Callbacks() = default ;
      Callbacks& operator=(const Callbacks &) = default ;
      Callbacks& operator=(Callbacks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Event, event_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SubEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Event, event_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SubEvent() = default ;
        SubEvent(const SubEvent &) = default ;
        SubEvent(SubEvent &&) = default ;
        SubEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubEvent() = default ;
        SubEvent& operator=(const SubEvent &) = default ;
        SubEvent& operator=(SubEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->event_ == nullptr
        && this->eventName_ == nullptr && this->type_ == nullptr; };
        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline int32_t getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, 0) };
        inline SubEvent& setEvent(int32_t event) { DARABONBA_PTR_SET_VALUE(event_, event) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline SubEvent& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline SubEvent& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> event_ {};
        shared_ptr<string> eventName_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->name_ == nullptr && this->subEvent_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Callbacks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Callbacks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // subEvent Field Functions 
      bool hasSubEvent() const { return this->subEvent_ != nullptr;};
      void deleteSubEvent() { this->subEvent_ = nullptr;};
      inline const vector<Callbacks::SubEvent> & getSubEvent() const { DARABONBA_PTR_GET_CONST(subEvent_, vector<Callbacks::SubEvent>) };
      inline vector<Callbacks::SubEvent> getSubEvent() { DARABONBA_PTR_GET(subEvent_, vector<Callbacks::SubEvent>) };
      inline Callbacks& setSubEvent(const vector<Callbacks::SubEvent> & subEvent) { DARABONBA_PTR_SET_VALUE(subEvent_, subEvent) };
      inline Callbacks& setSubEvent(vector<Callbacks::SubEvent> && subEvent) { DARABONBA_PTR_SET_RVALUE(subEvent_, subEvent) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Callbacks::SubEvent>> subEvent_ {};
    };

    virtual bool empty() const override { return this->callbacks_ == nullptr
        && this->requestId_ == nullptr; };
    // callbacks Field Functions 
    bool hasCallbacks() const { return this->callbacks_ != nullptr;};
    void deleteCallbacks() { this->callbacks_ = nullptr;};
    inline const vector<DescribeAllCallbackResponseBody::Callbacks> & getCallbacks() const { DARABONBA_PTR_GET_CONST(callbacks_, vector<DescribeAllCallbackResponseBody::Callbacks>) };
    inline vector<DescribeAllCallbackResponseBody::Callbacks> getCallbacks() { DARABONBA_PTR_GET(callbacks_, vector<DescribeAllCallbackResponseBody::Callbacks>) };
    inline DescribeAllCallbackResponseBody& setCallbacks(const vector<DescribeAllCallbackResponseBody::Callbacks> & callbacks) { DARABONBA_PTR_SET_VALUE(callbacks_, callbacks) };
    inline DescribeAllCallbackResponseBody& setCallbacks(vector<DescribeAllCallbackResponseBody::Callbacks> && callbacks) { DARABONBA_PTR_SET_RVALUE(callbacks_, callbacks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeAllCallbackResponseBody::Callbacks>> callbacks_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
