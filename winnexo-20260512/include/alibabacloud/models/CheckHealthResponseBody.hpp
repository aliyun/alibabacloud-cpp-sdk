// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKHEALTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKHEALTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CheckHealthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckHealthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(authSource, authSource_);
      DARABONBA_PTR_TO_JSON(callerType, callerType_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckHealthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(authSource, authSource_);
      DARABONBA_PTR_FROM_JSON(callerType, callerType_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CheckHealthResponseBody() = default ;
    CheckHealthResponseBody(const CheckHealthResponseBody &) = default ;
    CheckHealthResponseBody(CheckHealthResponseBody &&) = default ;
    CheckHealthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckHealthResponseBody() = default ;
    CheckHealthResponseBody& operator=(const CheckHealthResponseBody &) = default ;
    CheckHealthResponseBody& operator=(CheckHealthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authSource_ == nullptr
        && this->callerType_ == nullptr && this->code_ == nullptr && this->digitalEmployeeName_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->tenantId_ == nullptr && this->userId_ == nullptr; };
    // authSource Field Functions 
    bool hasAuthSource() const { return this->authSource_ != nullptr;};
    void deleteAuthSource() { this->authSource_ = nullptr;};
    inline string getAuthSource() const { DARABONBA_PTR_GET_DEFAULT(authSource_, "") };
    inline CheckHealthResponseBody& setAuthSource(string authSource) { DARABONBA_PTR_SET_VALUE(authSource_, authSource) };


    // callerType Field Functions 
    bool hasCallerType() const { return this->callerType_ != nullptr;};
    void deleteCallerType() { this->callerType_ = nullptr;};
    inline string getCallerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
    inline CheckHealthResponseBody& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckHealthResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline CheckHealthResponseBody& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckHealthResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckHealthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CheckHealthResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CheckHealthResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 认证来源: bearer / aliyun_gateway
    shared_ptr<string> authSource_ {};
    shared_ptr<string> callerType_ {};
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 当前请求生效的数字员工名（运营对象）；未传且租户下无数字员工时为空
    shared_ptr<string> digitalEmployeeName_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 生效租户ID
    shared_ptr<int64_t> tenantId_ {};
    // 平台用户ID
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
