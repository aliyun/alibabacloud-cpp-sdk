// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetTaskAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetTaskAttributeResponseBody() = default ;
    GetTaskAttributeResponseBody(const GetTaskAttributeResponseBody &) = default ;
    GetTaskAttributeResponseBody(GetTaskAttributeResponseBody &&) = default ;
    GetTaskAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskAttributeResponseBody() = default ;
    GetTaskAttributeResponseBody& operator=(const GetTaskAttributeResponseBody &) = default ;
    GetTaskAttributeResponseBody& operator=(GetTaskAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskMessage_ == nullptr && this->taskStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskMessage Field Functions 
    bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
    void deleteTaskMessage() { this->taskMessage_ = nullptr;};
    inline string getTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
    inline GetTaskAttributeResponseBody& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetTaskAttributeResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskMessage_ {};
    shared_ptr<string> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
