// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEEXECUTIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEEXECUTIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GenerateExecutionPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateExecutionPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateExecutionPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateExecutionPolicyResponseBody() = default ;
    GenerateExecutionPolicyResponseBody(const GenerateExecutionPolicyResponseBody &) = default ;
    GenerateExecutionPolicyResponseBody(GenerateExecutionPolicyResponseBody &&) = default ;
    GenerateExecutionPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateExecutionPolicyResponseBody() = default ;
    GenerateExecutionPolicyResponseBody& operator=(const GenerateExecutionPolicyResponseBody &) = default ;
    GenerateExecutionPolicyResponseBody& operator=(GenerateExecutionPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->missingPolicy_ == nullptr
        && return this->policy_ == nullptr && return this->requestId_ == nullptr; };
    // missingPolicy Field Functions 
    bool hasMissingPolicy() const { return this->missingPolicy_ != nullptr;};
    void deleteMissingPolicy() { this->missingPolicy_ = nullptr;};
    inline string missingPolicy() const { DARABONBA_PTR_GET_DEFAULT(missingPolicy_, "") };
    inline GenerateExecutionPolicyResponseBody& setMissingPolicy(string missingPolicy) { DARABONBA_PTR_SET_VALUE(missingPolicy_, missingPolicy) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GenerateExecutionPolicyResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateExecutionPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The policies that are missing.
    std::shared_ptr<string> missingPolicy_ = nullptr;
    // The RAM policy.
    std::shared_ptr<string> policy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
