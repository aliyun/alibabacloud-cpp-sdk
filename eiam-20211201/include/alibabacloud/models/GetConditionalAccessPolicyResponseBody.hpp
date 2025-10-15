// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetConditionalAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConditionalAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicy, conditionalAccessPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConditionalAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicy, conditionalAccessPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConditionalAccessPolicyResponseBody() = default ;
    GetConditionalAccessPolicyResponseBody(const GetConditionalAccessPolicyResponseBody &) = default ;
    GetConditionalAccessPolicyResponseBody(GetConditionalAccessPolicyResponseBody &&) = default ;
    GetConditionalAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConditionalAccessPolicyResponseBody() = default ;
    GetConditionalAccessPolicyResponseBody& operator=(const GetConditionalAccessPolicyResponseBody &) = default ;
    GetConditionalAccessPolicyResponseBody& operator=(GetConditionalAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionalAccessPolicy_ == nullptr
        && return this->requestId_ == nullptr; };
    // conditionalAccessPolicy Field Functions 
    bool hasConditionalAccessPolicy() const { return this->conditionalAccessPolicy_ != nullptr;};
    void deleteConditionalAccessPolicy() { this->conditionalAccessPolicy_ = nullptr;};
    inline const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy & conditionalAccessPolicy() const { DARABONBA_PTR_GET_CONST(conditionalAccessPolicy_, GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy conditionalAccessPolicy() { DARABONBA_PTR_GET(conditionalAccessPolicy_, GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy) };
    inline GetConditionalAccessPolicyResponseBody& setConditionalAccessPolicy(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy & conditionalAccessPolicy) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicy_, conditionalAccessPolicy) };
    inline GetConditionalAccessPolicyResponseBody& setConditionalAccessPolicy(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy && conditionalAccessPolicy) { DARABONBA_PTR_SET_RVALUE(conditionalAccessPolicy_, conditionalAccessPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConditionalAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the conditional access policy
    std::shared_ptr<GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy> conditionalAccessPolicy_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
