// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINVOCATIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINVOCATIONATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInvocationAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInvocationAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInvocationAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInvocationAttributeResponseBody() = default ;
    ModifyInvocationAttributeResponseBody(const ModifyInvocationAttributeResponseBody &) = default ;
    ModifyInvocationAttributeResponseBody(ModifyInvocationAttributeResponseBody &&) = default ;
    ModifyInvocationAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInvocationAttributeResponseBody() = default ;
    ModifyInvocationAttributeResponseBody& operator=(const ModifyInvocationAttributeResponseBody &) = default ;
    ModifyInvocationAttributeResponseBody& operator=(ModifyInvocationAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && this->requestId_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline ModifyInvocationAttributeResponseBody& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInvocationAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The command ID.
    //    - A new command is created and the new `CommandId` is returned only when `CommandContent` is changed.
    //    - When `CommandContent` is not changed, no new command is created, and the `CommandId` of the currently executing command is returned.
    //    - If [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) was called, or [RunCommand](https://help.aliyun.com/document_detail/141751.html) was called with `KeepCommand` set to `true`, the new command is retained. Otherwise, when the execution completes or the task is manually stopped, all commands associated with the task are deleted.
    shared_ptr<string> commandId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
