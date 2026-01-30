// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class RemoveInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoredInstances, ignoredInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoredInstances, ignoredInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    RemoveInstancesResponseBody() = default ;
    RemoveInstancesResponseBody(const RemoveInstancesResponseBody &) = default ;
    RemoveInstancesResponseBody(RemoveInstancesResponseBody &&) = default ;
    RemoveInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstancesResponseBody() = default ;
    RemoveInstancesResponseBody& operator=(const RemoveInstancesResponseBody &) = default ;
    RemoveInstancesResponseBody& operator=(RemoveInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IgnoredInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IgnoredInstances& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, IgnoredInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      IgnoredInstances() = default ;
      IgnoredInstances(const IgnoredInstances &) = default ;
      IgnoredInstances(IgnoredInstances &&) = default ;
      IgnoredInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IgnoredInstances() = default ;
      IgnoredInstances& operator=(const IgnoredInstances &) = default ;
      IgnoredInstances& operator=(IgnoredInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline IgnoredInstances& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IgnoredInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline IgnoredInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->ignoredInstances_ == nullptr
        && this->requestId_ == nullptr && this->scalingActivityId_ == nullptr; };
    // ignoredInstances Field Functions 
    bool hasIgnoredInstances() const { return this->ignoredInstances_ != nullptr;};
    void deleteIgnoredInstances() { this->ignoredInstances_ = nullptr;};
    inline const vector<RemoveInstancesResponseBody::IgnoredInstances> & getIgnoredInstances() const { DARABONBA_PTR_GET_CONST(ignoredInstances_, vector<RemoveInstancesResponseBody::IgnoredInstances>) };
    inline vector<RemoveInstancesResponseBody::IgnoredInstances> getIgnoredInstances() { DARABONBA_PTR_GET(ignoredInstances_, vector<RemoveInstancesResponseBody::IgnoredInstances>) };
    inline RemoveInstancesResponseBody& setIgnoredInstances(const vector<RemoveInstancesResponseBody::IgnoredInstances> & ignoredInstances) { DARABONBA_PTR_SET_VALUE(ignoredInstances_, ignoredInstances) };
    inline RemoveInstancesResponseBody& setIgnoredInstances(vector<RemoveInstancesResponseBody::IgnoredInstances> && ignoredInstances) { DARABONBA_PTR_SET_RVALUE(ignoredInstances_, ignoredInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline RemoveInstancesResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    shared_ptr<vector<RemoveInstancesResponseBody::IgnoredInstances>> ignoredInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the scaling activity.
    shared_ptr<string> scalingActivityId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
