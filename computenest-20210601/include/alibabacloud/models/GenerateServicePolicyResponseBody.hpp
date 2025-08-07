// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateServicePolicyResponseBodyMissingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GenerateServicePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateServicePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateServicePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateServicePolicyResponseBody() = default ;
    GenerateServicePolicyResponseBody(const GenerateServicePolicyResponseBody &) = default ;
    GenerateServicePolicyResponseBody(GenerateServicePolicyResponseBody &&) = default ;
    GenerateServicePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateServicePolicyResponseBody() = default ;
    GenerateServicePolicyResponseBody& operator=(const GenerateServicePolicyResponseBody &) = default ;
    GenerateServicePolicyResponseBody& operator=(GenerateServicePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->missingPolicy_ != nullptr
        && this->policy_ != nullptr && this->requestId_ != nullptr; };
    // missingPolicy Field Functions 
    bool hasMissingPolicy() const { return this->missingPolicy_ != nullptr;};
    void deleteMissingPolicy() { this->missingPolicy_ = nullptr;};
    inline const vector<GenerateServicePolicyResponseBodyMissingPolicy> & missingPolicy() const { DARABONBA_PTR_GET_CONST(missingPolicy_, vector<GenerateServicePolicyResponseBodyMissingPolicy>) };
    inline vector<GenerateServicePolicyResponseBodyMissingPolicy> missingPolicy() { DARABONBA_PTR_GET(missingPolicy_, vector<GenerateServicePolicyResponseBodyMissingPolicy>) };
    inline GenerateServicePolicyResponseBody& setMissingPolicy(const vector<GenerateServicePolicyResponseBodyMissingPolicy> & missingPolicy) { DARABONBA_PTR_SET_VALUE(missingPolicy_, missingPolicy) };
    inline GenerateServicePolicyResponseBody& setMissingPolicy(vector<GenerateServicePolicyResponseBodyMissingPolicy> && missingPolicy) { DARABONBA_PTR_SET_RVALUE(missingPolicy_, missingPolicy) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GenerateServicePolicyResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateServicePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The policies that are missing.
    std::shared_ptr<vector<GenerateServicePolicyResponseBodyMissingPolicy>> missingPolicy_ = nullptr;
    // The RAM policy.
    std::shared_ptr<string> policy_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
