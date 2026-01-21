// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTCOUNTRESPONSEBODY_HPP_
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
  class DescribeSystemEventCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SystemEventCounts, systemEventCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SystemEventCounts, systemEventCounts_);
    };
    DescribeSystemEventCountResponseBody() = default ;
    DescribeSystemEventCountResponseBody(const DescribeSystemEventCountResponseBody &) = default ;
    DescribeSystemEventCountResponseBody(DescribeSystemEventCountResponseBody &&) = default ;
    DescribeSystemEventCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventCountResponseBody() = default ;
    DescribeSystemEventCountResponseBody& operator=(const DescribeSystemEventCountResponseBody &) = default ;
    DescribeSystemEventCountResponseBody& operator=(DescribeSystemEventCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemEventCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemEventCounts& obj) { 
        DARABONBA_PTR_TO_JSON(SystemEventCount, systemEventCount_);
      };
      friend void from_json(const Darabonba::Json& j, SystemEventCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(SystemEventCount, systemEventCount_);
      };
      SystemEventCounts() = default ;
      SystemEventCounts(const SystemEventCounts &) = default ;
      SystemEventCounts(SystemEventCounts &&) = default ;
      SystemEventCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemEventCounts() = default ;
      SystemEventCounts& operator=(const SystemEventCounts &) = default ;
      SystemEventCounts& operator=(SystemEventCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemEventCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemEventCount& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Num, num_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, SystemEventCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Num, num_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        SystemEventCount() = default ;
        SystemEventCount(const SystemEventCount &) = default ;
        SystemEventCount(SystemEventCount &&) = default ;
        SystemEventCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemEventCount() = default ;
        SystemEventCount& operator=(const SystemEventCount &) = default ;
        SystemEventCount& operator=(SystemEventCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->groupId_ == nullptr && this->instanceName_ == nullptr && this->level_ == nullptr && this->name_ == nullptr && this->num_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr && this->time_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline SystemEventCount& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline SystemEventCount& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline SystemEventCount& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline SystemEventCount& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SystemEventCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // num Field Functions 
        bool hasNum() const { return this->num_ != nullptr;};
        void deleteNum() { this->num_ = nullptr;};
        inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
        inline SystemEventCount& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline SystemEventCount& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SystemEventCount& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline SystemEventCount& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SystemEventCount& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline SystemEventCount& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The description of the system event.
        shared_ptr<string> content_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // The level of the system event. Valid values:
        // 
        // *   Critical
        // *   Warn
        // *   Info
        shared_ptr<string> level_ {};
        // The name of the system event.
        shared_ptr<string> name_ {};
        // The number of times that the system event has occurred.
        shared_ptr<int64_t> num_ {};
        // The name of the cloud service in which the system event occurred.
        shared_ptr<string> product_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The status of the system event.
        shared_ptr<string> status_ {};
        // The time when the system event occurred. The value is a timestamp. Unit: milliseconds.
        shared_ptr<int64_t> time_ {};
      };

      virtual bool empty() const override { return this->systemEventCount_ == nullptr; };
      // systemEventCount Field Functions 
      bool hasSystemEventCount() const { return this->systemEventCount_ != nullptr;};
      void deleteSystemEventCount() { this->systemEventCount_ = nullptr;};
      inline const vector<SystemEventCounts::SystemEventCount> & getSystemEventCount() const { DARABONBA_PTR_GET_CONST(systemEventCount_, vector<SystemEventCounts::SystemEventCount>) };
      inline vector<SystemEventCounts::SystemEventCount> getSystemEventCount() { DARABONBA_PTR_GET(systemEventCount_, vector<SystemEventCounts::SystemEventCount>) };
      inline SystemEventCounts& setSystemEventCount(const vector<SystemEventCounts::SystemEventCount> & systemEventCount) { DARABONBA_PTR_SET_VALUE(systemEventCount_, systemEventCount) };
      inline SystemEventCounts& setSystemEventCount(vector<SystemEventCounts::SystemEventCount> && systemEventCount) { DARABONBA_PTR_SET_RVALUE(systemEventCount_, systemEventCount) };


    protected:
      shared_ptr<vector<SystemEventCounts::SystemEventCount>> systemEventCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->systemEventCounts_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSystemEventCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSystemEventCountResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // systemEventCounts Field Functions 
    bool hasSystemEventCounts() const { return this->systemEventCounts_ != nullptr;};
    void deleteSystemEventCounts() { this->systemEventCounts_ = nullptr;};
    inline const DescribeSystemEventCountResponseBody::SystemEventCounts & getSystemEventCounts() const { DARABONBA_PTR_GET_CONST(systemEventCounts_, DescribeSystemEventCountResponseBody::SystemEventCounts) };
    inline DescribeSystemEventCountResponseBody::SystemEventCounts getSystemEventCounts() { DARABONBA_PTR_GET(systemEventCounts_, DescribeSystemEventCountResponseBody::SystemEventCounts) };
    inline DescribeSystemEventCountResponseBody& setSystemEventCounts(const DescribeSystemEventCountResponseBody::SystemEventCounts & systemEventCounts) { DARABONBA_PTR_SET_VALUE(systemEventCounts_, systemEventCounts) };
    inline DescribeSystemEventCountResponseBody& setSystemEventCounts(DescribeSystemEventCountResponseBody::SystemEventCounts && systemEventCounts) { DARABONBA_PTR_SET_RVALUE(systemEventCounts_, systemEventCounts) };


  protected:
    // The HTTP status codes.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    // 
    // If the request was successful, a success message is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The details of the system event.
    shared_ptr<DescribeSystemEventCountResponseBody::SystemEventCounts> systemEventCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
