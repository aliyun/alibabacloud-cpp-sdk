// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class TerminateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_TO_JSON(terminated, terminated_);
    };
    friend void from_json(const Darabonba::Json& j, TerminateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_FROM_JSON(terminated, terminated_);
    };
    TerminateInstanceResponseBody() = default ;
    TerminateInstanceResponseBody(const TerminateInstanceResponseBody &) = default ;
    TerminateInstanceResponseBody(TerminateInstanceResponseBody &&) = default ;
    TerminateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminateInstanceResponseBody() = default ;
    TerminateInstanceResponseBody& operator=(const TerminateInstanceResponseBody &) = default ;
    TerminateInstanceResponseBody& operator=(TerminateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->stateVersion_ == nullptr
        && this->terminated_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TerminateInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TerminateInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline TerminateInstanceResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TerminateInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TerminateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline TerminateInstanceResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


    // terminated Field Functions 
    bool hasTerminated() const { return this->terminated_ != nullptr;};
    void deleteTerminated() { this->terminated_ = nullptr;};
    inline bool getTerminated() const { DARABONBA_PTR_GET_DEFAULT(terminated_, false) };
    inline TerminateInstanceResponseBody& setTerminated(bool terminated) { DARABONBA_PTR_SET_VALUE(terminated_, terminated) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 物理实例ID
    shared_ptr<string> instanceId_ {};
    // 终止后状态
    shared_ptr<string> instanceStatus_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 状态版本
    shared_ptr<int64_t> stateVersion_ {};
    // 终止成功为 true；失败通过 Code 和 Message 返回
    shared_ptr<bool> terminated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
