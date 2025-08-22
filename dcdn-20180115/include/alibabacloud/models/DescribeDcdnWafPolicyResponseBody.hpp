// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnWafPolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafPolicyResponseBody() = default ;
    DescribeDcdnWafPolicyResponseBody(const DescribeDcdnWafPolicyResponseBody &) = default ;
    DescribeDcdnWafPolicyResponseBody(DescribeDcdnWafPolicyResponseBody &&) = default ;
    DescribeDcdnWafPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafPolicyResponseBody() = default ;
    DescribeDcdnWafPolicyResponseBody& operator=(const DescribeDcdnWafPolicyResponseBody &) = default ;
    DescribeDcdnWafPolicyResponseBody& operator=(DescribeDcdnWafPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policy_ != nullptr
        && this->requestId_ != nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const DescribeDcdnWafPolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, DescribeDcdnWafPolicyResponseBodyPolicy) };
    inline DescribeDcdnWafPolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, DescribeDcdnWafPolicyResponseBodyPolicy) };
    inline DescribeDcdnWafPolicyResponseBody& setPolicy(const DescribeDcdnWafPolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline DescribeDcdnWafPolicyResponseBody& setPolicy(DescribeDcdnWafPolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the protection policy.
    std::shared_ptr<DescribeDcdnWafPolicyResponseBodyPolicy> policy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
