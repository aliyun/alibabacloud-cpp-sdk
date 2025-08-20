// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYOPERATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYOPERATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBodyOperationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyOperationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyOperationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetStackResponseBodyOperationInfo() = default ;
    GetStackResponseBodyOperationInfo(const GetStackResponseBodyOperationInfo &) = default ;
    GetStackResponseBodyOperationInfo(GetStackResponseBodyOperationInfo &&) = default ;
    GetStackResponseBodyOperationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyOperationInfo() = default ;
    GetStackResponseBodyOperationInfo& operator=(const GetStackResponseBodyOperationInfo &) = default ;
    GetStackResponseBodyOperationInfo& operator=(GetStackResponseBodyOperationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->code_ != nullptr && this->logicalResourceId_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->resourceType_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetStackResponseBodyOperationInfo& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStackResponseBodyOperationInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline GetStackResponseBodyOperationInfo& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStackResponseBodyOperationInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResponseBodyOperationInfo& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetStackResponseBodyOperationInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The name of the API operation that belongs to another Alibaba Cloud service.
    std::shared_ptr<string> action_ = nullptr;
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The logical ID of the resource on which the operation error occurs.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request that is initiated to call the API operation of another Alibaba Cloud service.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the resource on which the operation error occurs.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
