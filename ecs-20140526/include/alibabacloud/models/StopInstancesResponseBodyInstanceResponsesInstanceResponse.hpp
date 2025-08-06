// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODYINSTANCERESPONSESINSTANCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODYINSTANCERESPONSESINSTANCERESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StopInstancesResponseBodyInstanceResponsesInstanceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstancesResponseBodyInstanceResponsesInstanceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PreviousStatus, previousStatus_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstancesResponseBodyInstanceResponsesInstanceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PreviousStatus, previousStatus_);
    };
    StopInstancesResponseBodyInstanceResponsesInstanceResponse() = default ;
    StopInstancesResponseBodyInstanceResponsesInstanceResponse(const StopInstancesResponseBodyInstanceResponsesInstanceResponse &) = default ;
    StopInstancesResponseBodyInstanceResponsesInstanceResponse(StopInstancesResponseBodyInstanceResponsesInstanceResponse &&) = default ;
    StopInstancesResponseBodyInstanceResponsesInstanceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstancesResponseBodyInstanceResponsesInstanceResponse() = default ;
    StopInstancesResponseBodyInstanceResponsesInstanceResponse& operator=(const StopInstancesResponseBodyInstanceResponsesInstanceResponse &) = default ;
    StopInstancesResponseBodyInstanceResponsesInstanceResponse& operator=(StopInstancesResponseBodyInstanceResponsesInstanceResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->currentStatus_ != nullptr && this->instanceId_ != nullptr && this->message_ != nullptr && this->previousStatus_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StopInstancesResponseBodyInstanceResponsesInstanceResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentStatus Field Functions 
    bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
    void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
    inline string currentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
    inline StopInstancesResponseBodyInstanceResponsesInstanceResponse& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StopInstancesResponseBodyInstanceResponsesInstanceResponse& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StopInstancesResponseBodyInstanceResponsesInstanceResponse& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // previousStatus Field Functions 
    bool hasPreviousStatus() const { return this->previousStatus_ != nullptr;};
    void deletePreviousStatus() { this->previousStatus_ = nullptr;};
    inline string previousStatus() const { DARABONBA_PTR_GET_DEFAULT(previousStatus_, "") };
    inline StopInstancesResponseBodyInstanceResponsesInstanceResponse& setPreviousStatus(string previousStatus) { DARABONBA_PTR_SET_VALUE(previousStatus_, previousStatus) };


  protected:
    // The error code returned for the instance. A return value of 200 indicates that the operation was successful. For more information, see the "Error codes" section of this topic.
    std::shared_ptr<string> code_ = nullptr;
    // The current status of the instance.
    std::shared_ptr<string> currentStatus_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The error message returned for the instance. The return value `success` indicates that the operation is successful. For more information, see the "Error codes" section of this topic.
    std::shared_ptr<string> message_ = nullptr;
    // The status of the instance before the operation was called.
    std::shared_ptr<string> previousStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
