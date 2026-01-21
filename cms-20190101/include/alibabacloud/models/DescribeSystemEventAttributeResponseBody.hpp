// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeSystemEventAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SystemEvents, systemEvents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SystemEvents, systemEvents_);
    };
    DescribeSystemEventAttributeResponseBody() = default ;
    DescribeSystemEventAttributeResponseBody(const DescribeSystemEventAttributeResponseBody &) = default ;
    DescribeSystemEventAttributeResponseBody(DescribeSystemEventAttributeResponseBody &&) = default ;
    DescribeSystemEventAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventAttributeResponseBody() = default ;
    DescribeSystemEventAttributeResponseBody& operator=(const DescribeSystemEventAttributeResponseBody &) = default ;
    DescribeSystemEventAttributeResponseBody& operator=(DescribeSystemEventAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemEvents& obj) { 
        DARABONBA_PTR_TO_JSON(SystemEvent, systemEvent_);
      };
      friend void from_json(const Darabonba::Json& j, SystemEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(SystemEvent, systemEvent_);
      };
      SystemEvents() = default ;
      SystemEvents(const SystemEvents &) = default ;
      SystemEvents(SystemEvents &&) = default ;
      SystemEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemEvents() = default ;
      SystemEvents& operator=(const SystemEvents &) = default ;
      SystemEvents& operator=(SystemEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, SystemEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        SystemEvent() = default ;
        SystemEvent(const SystemEvent &) = default ;
        SystemEvent(SystemEvent &&) = default ;
        SystemEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemEvent() = default ;
        SystemEvent& operator=(const SystemEvent &) = default ;
        SystemEvent& operator=(SystemEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->instanceName_ == nullptr && this->level_ == nullptr && this->name_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr && this->time_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline SystemEvent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline SystemEvent& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline SystemEvent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline SystemEvent& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline SystemEvent& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SystemEvent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline SystemEvent& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SystemEvent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline SystemEvent& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SystemEvent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline SystemEvent& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The details of the event.
        shared_ptr<string> content_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The event ID.
        shared_ptr<string> id_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The level of the event. Valid values:
        // 
        // *   CRITICAL
        // *   WARN
        // *   INFO
        shared_ptr<string> level_ {};
        // The event name.
        shared_ptr<string> name_ {};
        // The abbreviation of the service name.
        shared_ptr<string> product_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The status of the event.
        shared_ptr<string> status_ {};
        // The time when the event occurred. The value is a timestamp.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> time_ {};
      };

      virtual bool empty() const override { return this->systemEvent_ == nullptr; };
      // systemEvent Field Functions 
      bool hasSystemEvent() const { return this->systemEvent_ != nullptr;};
      void deleteSystemEvent() { this->systemEvent_ = nullptr;};
      inline const vector<SystemEvents::SystemEvent> & getSystemEvent() const { DARABONBA_PTR_GET_CONST(systemEvent_, vector<SystemEvents::SystemEvent>) };
      inline vector<SystemEvents::SystemEvent> getSystemEvent() { DARABONBA_PTR_GET(systemEvent_, vector<SystemEvents::SystemEvent>) };
      inline SystemEvents& setSystemEvent(const vector<SystemEvents::SystemEvent> & systemEvent) { DARABONBA_PTR_SET_VALUE(systemEvent_, systemEvent) };
      inline SystemEvents& setSystemEvent(vector<SystemEvents::SystemEvent> && systemEvent) { DARABONBA_PTR_SET_RVALUE(systemEvent_, systemEvent) };


    protected:
      shared_ptr<vector<SystemEvents::SystemEvent>> systemEvent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->systemEvents_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSystemEventAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSystemEventAttributeResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // systemEvents Field Functions 
    bool hasSystemEvents() const { return this->systemEvents_ != nullptr;};
    void deleteSystemEvents() { this->systemEvents_ = nullptr;};
    inline const DescribeSystemEventAttributeResponseBody::SystemEvents & getSystemEvents() const { DARABONBA_PTR_GET_CONST(systemEvents_, DescribeSystemEventAttributeResponseBody::SystemEvents) };
    inline DescribeSystemEventAttributeResponseBody::SystemEvents getSystemEvents() { DARABONBA_PTR_GET(systemEvents_, DescribeSystemEventAttributeResponseBody::SystemEvents) };
    inline DescribeSystemEventAttributeResponseBody& setSystemEvents(const DescribeSystemEventAttributeResponseBody::SystemEvents & systemEvents) { DARABONBA_PTR_SET_VALUE(systemEvents_, systemEvents) };
    inline DescribeSystemEventAttributeResponseBody& setSystemEvents(DescribeSystemEventAttributeResponseBody::SystemEvents && systemEvents) { DARABONBA_PTR_SET_RVALUE(systemEvents_, systemEvents) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The message that is returned. If the call is successful, `success` is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values: True: The call is successful. false: The call fails.
    shared_ptr<string> success_ {};
    // The details of the event.
    shared_ptr<DescribeSystemEventAttributeResponseBody::SystemEvents> systemEvents_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
