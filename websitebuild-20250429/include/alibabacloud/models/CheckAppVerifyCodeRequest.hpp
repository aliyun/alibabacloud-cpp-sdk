// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAPPVERIFYCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAPPVERIFYCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CheckAppVerifyCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAppVerifyCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAppVerifyCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CheckAppVerifyCodeRequest() = default ;
    CheckAppVerifyCodeRequest(const CheckAppVerifyCodeRequest &) = default ;
    CheckAppVerifyCodeRequest(CheckAppVerifyCodeRequest &&) = default ;
    CheckAppVerifyCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAppVerifyCodeRequest() = default ;
    CheckAppVerifyCodeRequest& operator=(const CheckAppVerifyCodeRequest &) = default ;
    CheckAppVerifyCodeRequest& operator=(CheckAppVerifyCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->code_ == nullptr && this->target_ == nullptr && this->type_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CheckAppVerifyCodeRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckAppVerifyCodeRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline CheckAppVerifyCodeRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckAppVerifyCodeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The verification code.
    shared_ptr<string> code_ {};
    // The phone number or email address.
    shared_ptr<string> target_ {};
    // The recipient type: phone or email.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
