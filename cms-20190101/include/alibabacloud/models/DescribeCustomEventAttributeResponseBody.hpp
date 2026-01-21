// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomEvents, customEvents_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomEvents, customEvents_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomEventAttributeResponseBody() = default ;
    DescribeCustomEventAttributeResponseBody(const DescribeCustomEventAttributeResponseBody &) = default ;
    DescribeCustomEventAttributeResponseBody(DescribeCustomEventAttributeResponseBody &&) = default ;
    DescribeCustomEventAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventAttributeResponseBody() = default ;
    DescribeCustomEventAttributeResponseBody& operator=(const DescribeCustomEventAttributeResponseBody &) = default ;
    DescribeCustomEventAttributeResponseBody& operator=(DescribeCustomEventAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomEvents& obj) { 
        DARABONBA_PTR_TO_JSON(CustomEvent, customEvent_);
      };
      friend void from_json(const Darabonba::Json& j, CustomEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomEvent, customEvent_);
      };
      CustomEvents() = default ;
      CustomEvents(const CustomEvents &) = default ;
      CustomEvents(CustomEvents &&) = default ;
      CustomEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomEvents() = default ;
      CustomEvents& operator=(const CustomEvents &) = default ;
      CustomEvents& operator=(CustomEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, CustomEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        CustomEvent() = default ;
        CustomEvent(const CustomEvent &) = default ;
        CustomEvent(CustomEvent &&) = default ;
        CustomEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomEvent() = default ;
        CustomEvent& operator=(const CustomEvent &) = default ;
        CustomEvent& operator=(CustomEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->time_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline CustomEvent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline CustomEvent& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline CustomEvent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomEvent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline CustomEvent& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The content of the event.
        shared_ptr<string> content_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The event ID.
        shared_ptr<string> id_ {};
        // The event name.
        shared_ptr<string> name_ {};
        // The time when the event occurred.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->customEvent_ == nullptr; };
      // customEvent Field Functions 
      bool hasCustomEvent() const { return this->customEvent_ != nullptr;};
      void deleteCustomEvent() { this->customEvent_ = nullptr;};
      inline const vector<CustomEvents::CustomEvent> & getCustomEvent() const { DARABONBA_PTR_GET_CONST(customEvent_, vector<CustomEvents::CustomEvent>) };
      inline vector<CustomEvents::CustomEvent> getCustomEvent() { DARABONBA_PTR_GET(customEvent_, vector<CustomEvents::CustomEvent>) };
      inline CustomEvents& setCustomEvent(const vector<CustomEvents::CustomEvent> & customEvent) { DARABONBA_PTR_SET_VALUE(customEvent_, customEvent) };
      inline CustomEvents& setCustomEvent(vector<CustomEvents::CustomEvent> && customEvent) { DARABONBA_PTR_SET_RVALUE(customEvent_, customEvent) };


    protected:
      shared_ptr<vector<CustomEvents::CustomEvent>> customEvent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->customEvents_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomEventAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customEvents Field Functions 
    bool hasCustomEvents() const { return this->customEvents_ != nullptr;};
    void deleteCustomEvents() { this->customEvents_ = nullptr;};
    inline const DescribeCustomEventAttributeResponseBody::CustomEvents & getCustomEvents() const { DARABONBA_PTR_GET_CONST(customEvents_, DescribeCustomEventAttributeResponseBody::CustomEvents) };
    inline DescribeCustomEventAttributeResponseBody::CustomEvents getCustomEvents() { DARABONBA_PTR_GET(customEvents_, DescribeCustomEventAttributeResponseBody::CustomEvents) };
    inline DescribeCustomEventAttributeResponseBody& setCustomEvents(const DescribeCustomEventAttributeResponseBody::CustomEvents & customEvents) { DARABONBA_PTR_SET_VALUE(customEvents_, customEvents) };
    inline DescribeCustomEventAttributeResponseBody& setCustomEvents(DescribeCustomEventAttributeResponseBody::CustomEvents && customEvents) { DARABONBA_PTR_SET_RVALUE(customEvents_, customEvents) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomEventAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomEventAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCustomEventAttributeResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The event details.
    shared_ptr<DescribeCustomEventAttributeResponseBody::CustomEvents> customEvents_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
