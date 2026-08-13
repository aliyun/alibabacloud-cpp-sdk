// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEAGENTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKEAGENTUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RevokeAgentUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeAgentUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(revokedCount, revokedCount_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeAgentUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(revokedCount, revokedCount_);
    };
    RevokeAgentUsersResponseBody() = default ;
    RevokeAgentUsersResponseBody(const RevokeAgentUsersResponseBody &) = default ;
    RevokeAgentUsersResponseBody(RevokeAgentUsersResponseBody &&) = default ;
    RevokeAgentUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeAgentUsersResponseBody() = default ;
    RevokeAgentUsersResponseBody& operator=(const RevokeAgentUsersResponseBody &) = default ;
    RevokeAgentUsersResponseBody& operator=(RevokeAgentUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->revokedCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RevokeAgentUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RevokeAgentUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevokeAgentUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revokedCount Field Functions 
    bool hasRevokedCount() const { return this->revokedCount_ != nullptr;};
    void deleteRevokedCount() { this->revokedCount_ = nullptr;};
    inline int64_t getRevokedCount() const { DARABONBA_PTR_GET_DEFAULT(revokedCount_, 0L) };
    inline RevokeAgentUsersResponseBody& setRevokedCount(int64_t revokedCount) { DARABONBA_PTR_SET_VALUE(revokedCount_, revokedCount) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 本次成功撤销的记录数
    shared_ptr<int64_t> revokedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
