// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StartInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartInstancesResponseBody() = default ;
    StartInstancesResponseBody(const StartInstancesResponseBody &) = default ;
    StartInstancesResponseBody(StartInstancesResponseBody &&) = default ;
    StartInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstancesResponseBody() = default ;
    StartInstancesResponseBody& operator=(const StartInstancesResponseBody &) = default ;
    StartInstancesResponseBody& operator=(StartInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceResponses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceResponses& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceResponse, instanceResponse_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceResponses& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceResponse, instanceResponse_);
      };
      InstanceResponses() = default ;
      InstanceResponses(const InstanceResponses &) = default ;
      InstanceResponses(InstanceResponses &&) = default ;
      InstanceResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceResponses() = default ;
      InstanceResponses& operator=(const InstanceResponses &) = default ;
      InstanceResponses& operator=(InstanceResponses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceResponse& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PreviousStatus, previousStatus_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PreviousStatus, previousStatus_);
        };
        InstanceResponse() = default ;
        InstanceResponse(const InstanceResponse &) = default ;
        InstanceResponse(InstanceResponse &&) = default ;
        InstanceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceResponse() = default ;
        InstanceResponse& operator=(const InstanceResponse &) = default ;
        InstanceResponse& operator=(InstanceResponse &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->currentStatus_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr && this->previousStatus_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline InstanceResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // currentStatus Field Functions 
        bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
        void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
        inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
        inline InstanceResponse& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceResponse& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline InstanceResponse& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // previousStatus Field Functions 
        bool hasPreviousStatus() const { return this->previousStatus_ != nullptr;};
        void deletePreviousStatus() { this->previousStatus_ = nullptr;};
        inline string getPreviousStatus() const { DARABONBA_PTR_GET_DEFAULT(previousStatus_, "") };
        inline InstanceResponse& setPreviousStatus(string previousStatus) { DARABONBA_PTR_SET_VALUE(previousStatus_, previousStatus) };


      protected:
        // The error code that is returned for the operation on the ECS instance. The value 200 indicates that the operation is successful. For more information, see the "Error codes" section in this topic.
        shared_ptr<string> code_ {};
        // The status of the ECS instance after the operation is called.
        shared_ptr<string> currentStatus_ {};
        // The ID of the ECS instance.
        shared_ptr<string> instanceId_ {};
        // The error message that is returned for the operation on the ECS instance. The value success indicates that the operation is successful. For more information, see the "Error codes" section in this topic.
        shared_ptr<string> message_ {};
        // The status of the ECS instance before the operation is called.
        shared_ptr<string> previousStatus_ {};
      };

      virtual bool empty() const override { return this->instanceResponse_ == nullptr; };
      // instanceResponse Field Functions 
      bool hasInstanceResponse() const { return this->instanceResponse_ != nullptr;};
      void deleteInstanceResponse() { this->instanceResponse_ = nullptr;};
      inline const vector<InstanceResponses::InstanceResponse> & getInstanceResponse() const { DARABONBA_PTR_GET_CONST(instanceResponse_, vector<InstanceResponses::InstanceResponse>) };
      inline vector<InstanceResponses::InstanceResponse> getInstanceResponse() { DARABONBA_PTR_GET(instanceResponse_, vector<InstanceResponses::InstanceResponse>) };
      inline InstanceResponses& setInstanceResponse(const vector<InstanceResponses::InstanceResponse> & instanceResponse) { DARABONBA_PTR_SET_VALUE(instanceResponse_, instanceResponse) };
      inline InstanceResponses& setInstanceResponse(vector<InstanceResponses::InstanceResponse> && instanceResponse) { DARABONBA_PTR_SET_RVALUE(instanceResponse_, instanceResponse) };


    protected:
      shared_ptr<vector<InstanceResponses::InstanceResponse>> instanceResponse_ {};
    };

    virtual bool empty() const override { return this->instanceResponses_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceResponses Field Functions 
    bool hasInstanceResponses() const { return this->instanceResponses_ != nullptr;};
    void deleteInstanceResponses() { this->instanceResponses_ = nullptr;};
    inline const StartInstancesResponseBody::InstanceResponses & getInstanceResponses() const { DARABONBA_PTR_GET_CONST(instanceResponses_, StartInstancesResponseBody::InstanceResponses) };
    inline StartInstancesResponseBody::InstanceResponses getInstanceResponses() { DARABONBA_PTR_GET(instanceResponses_, StartInstancesResponseBody::InstanceResponses) };
    inline StartInstancesResponseBody& setInstanceResponses(const StartInstancesResponseBody::InstanceResponses & instanceResponses) { DARABONBA_PTR_SET_VALUE(instanceResponses_, instanceResponses) };
    inline StartInstancesResponseBody& setInstanceResponses(StartInstancesResponseBody::InstanceResponses && instanceResponses) { DARABONBA_PTR_SET_RVALUE(instanceResponses_, instanceResponses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ECS instance, such as the status of each instance before and after the operation is called and the operation results.
    shared_ptr<StartInstancesResponseBody::InstanceResponses> instanceResponses_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
