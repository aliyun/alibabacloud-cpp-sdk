// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLECREATEBIZROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLECREATEBIZROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleCreateBizRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleCreateBizRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizRoleCode, bizRoleCode_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleCreateBizRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRoleCode, bizRoleCode_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseRoleCreateBizRoleResponseBody() = default ;
    EnterpriseRoleCreateBizRoleResponseBody(const EnterpriseRoleCreateBizRoleResponseBody &) = default ;
    EnterpriseRoleCreateBizRoleResponseBody(EnterpriseRoleCreateBizRoleResponseBody &&) = default ;
    EnterpriseRoleCreateBizRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleCreateBizRoleResponseBody() = default ;
    EnterpriseRoleCreateBizRoleResponseBody& operator=(const EnterpriseRoleCreateBizRoleResponseBody &) = default ;
    EnterpriseRoleCreateBizRoleResponseBody& operator=(EnterpriseRoleCreateBizRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRoleCode_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // bizRoleCode Field Functions 
    bool hasBizRoleCode() const { return this->bizRoleCode_ != nullptr;};
    void deleteBizRoleCode() { this->bizRoleCode_ = nullptr;};
    inline string getBizRoleCode() const { DARABONBA_PTR_GET_DEFAULT(bizRoleCode_, "") };
    inline EnterpriseRoleCreateBizRoleResponseBody& setBizRoleCode(string bizRoleCode) { DARABONBA_PTR_SET_VALUE(bizRoleCode_, bizRoleCode) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseRoleCreateBizRoleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseRoleCreateBizRoleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseRoleCreateBizRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseRoleCreateBizRoleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> bizRoleCode_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
