// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEEXPIRETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEEXPIRETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetInstanceExpireTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(found, found_);
      DARABONBA_PTR_TO_JSON(instanceExpireTime, instanceExpireTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(found, found_);
      DARABONBA_PTR_FROM_JSON(instanceExpireTime, instanceExpireTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetInstanceExpireTimeResponseBody() = default ;
    GetInstanceExpireTimeResponseBody(const GetInstanceExpireTimeResponseBody &) = default ;
    GetInstanceExpireTimeResponseBody(GetInstanceExpireTimeResponseBody &&) = default ;
    GetInstanceExpireTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceExpireTimeResponseBody() = default ;
    GetInstanceExpireTimeResponseBody& operator=(const GetInstanceExpireTimeResponseBody &) = default ;
    GetInstanceExpireTimeResponseBody& operator=(GetInstanceExpireTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->found_ == nullptr && this->instanceExpireTime_ == nullptr && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->tenantId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceExpireTimeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // found Field Functions 
    bool hasFound() const { return this->found_ != nullptr;};
    void deleteFound() { this->found_ = nullptr;};
    inline bool getFound() const { DARABONBA_PTR_GET_DEFAULT(found_, false) };
    inline GetInstanceExpireTimeResponseBody& setFound(bool found) { DARABONBA_PTR_SET_VALUE(found_, found) };


    // instanceExpireTime Field Functions 
    bool hasInstanceExpireTime() const { return this->instanceExpireTime_ != nullptr;};
    void deleteInstanceExpireTime() { this->instanceExpireTime_ = nullptr;};
    inline string getInstanceExpireTime() const { DARABONBA_PTR_GET_DEFAULT(instanceExpireTime_, "") };
    inline GetInstanceExpireTimeResponseBody& setInstanceExpireTime(string instanceExpireTime) { DARABONBA_PTR_SET_VALUE(instanceExpireTime_, instanceExpireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceExpireTimeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceExpireTimeResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceExpireTimeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceExpireTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetInstanceExpireTimeResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 是否找到标准包实例
    shared_ptr<bool> found_ {};
    // 实例过期时间（ISO格式）
    shared_ptr<string> instanceExpireTime_ {};
    // 实例ID
    shared_ptr<string> instanceId_ {};
    // 实例状态
    shared_ptr<string> instanceStatus_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 系统租户ID
    shared_ptr<int64_t> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
