// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutonomousNotifyEventContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutonomousNotifyEventContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SpanId, spanId_);
      DARABONBA_PTR_TO_JSON(__context, context_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutonomousNotifyEventContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SpanId, spanId_);
      DARABONBA_PTR_FROM_JSON(__context, context_);
    };
    GetAutonomousNotifyEventContentRequest() = default ;
    GetAutonomousNotifyEventContentRequest(const GetAutonomousNotifyEventContentRequest &) = default ;
    GetAutonomousNotifyEventContentRequest(GetAutonomousNotifyEventContentRequest &&) = default ;
    GetAutonomousNotifyEventContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutonomousNotifyEventContentRequest() = default ;
    GetAutonomousNotifyEventContentRequest& operator=(const GetAutonomousNotifyEventContentRequest &) = default ;
    GetAutonomousNotifyEventContentRequest& operator=(GetAutonomousNotifyEventContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->spanId_ == nullptr && this->context_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAutonomousNotifyEventContentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // spanId Field Functions 
    bool hasSpanId() const { return this->spanId_ != nullptr;};
    void deleteSpanId() { this->spanId_ = nullptr;};
    inline string getSpanId() const { DARABONBA_PTR_GET_DEFAULT(spanId_, "") };
    inline GetAutonomousNotifyEventContentRequest& setSpanId(string spanId) { DARABONBA_PTR_SET_VALUE(spanId_, spanId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline GetAutonomousNotifyEventContentRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The unique identifier of the event. You can call the [GetAutonomousNotifyEventsInRange](https://help.aliyun.com/document_detail/288371.html) operation to query the unique identifier returned by the SpanId response parameter.
    // 
    // This parameter is required.
    shared_ptr<string> spanId_ {};
    // The reserved parameter.
    shared_ptr<string> context_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
