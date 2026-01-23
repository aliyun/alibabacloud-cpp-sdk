// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEDOMAINROUTINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEDOMAINROUTINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateStorageDomainRoutingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageDomainRoutingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageDomainRoutingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateStorageDomainRoutingRuleResponseBody() = default ;
    CreateStorageDomainRoutingRuleResponseBody(const CreateStorageDomainRoutingRuleResponseBody &) = default ;
    CreateStorageDomainRoutingRuleResponseBody(CreateStorageDomainRoutingRuleResponseBody &&) = default ;
    CreateStorageDomainRoutingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageDomainRoutingRuleResponseBody() = default ;
    CreateStorageDomainRoutingRuleResponseBody& operator=(const CreateStorageDomainRoutingRuleResponseBody &) = default ;
    CreateStorageDomainRoutingRuleResponseBody& operator=(CreateStorageDomainRoutingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->requestId_ == nullptr && this->ruleId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateStorageDomainRoutingRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStorageDomainRoutingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateStorageDomainRoutingRuleResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateStorageDomainRoutingRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The request ID
    shared_ptr<string> requestId_ {};
    // The rule ID.
    shared_ptr<string> ruleId_ {};
    // Identification of whether the request is successful or not
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
