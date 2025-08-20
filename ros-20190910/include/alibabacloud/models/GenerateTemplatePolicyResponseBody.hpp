// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateTemplatePolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplatePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplatePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplatePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateTemplatePolicyResponseBody() = default ;
    GenerateTemplatePolicyResponseBody(const GenerateTemplatePolicyResponseBody &) = default ;
    GenerateTemplatePolicyResponseBody(GenerateTemplatePolicyResponseBody &&) = default ;
    GenerateTemplatePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplatePolicyResponseBody() = default ;
    GenerateTemplatePolicyResponseBody& operator=(const GenerateTemplatePolicyResponseBody &) = default ;
    GenerateTemplatePolicyResponseBody& operator=(GenerateTemplatePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policy_ != nullptr
        && this->requestId_ != nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GenerateTemplatePolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, GenerateTemplatePolicyResponseBodyPolicy) };
    inline GenerateTemplatePolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, GenerateTemplatePolicyResponseBodyPolicy) };
    inline GenerateTemplatePolicyResponseBody& setPolicy(const GenerateTemplatePolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GenerateTemplatePolicyResponseBody& setPolicy(GenerateTemplatePolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTemplatePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the policy.
    std::shared_ptr<GenerateTemplatePolicyResponseBodyPolicy> policy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
