// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetIntegrationPolicyResponseBody() = default ;
    GetIntegrationPolicyResponseBody(const GetIntegrationPolicyResponseBody &) = default ;
    GetIntegrationPolicyResponseBody(GetIntegrationPolicyResponseBody &&) = default ;
    GetIntegrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBody() = default ;
    GetIntegrationPolicyResponseBody& operator=(const GetIntegrationPolicyResponseBody &) = default ;
    GetIntegrationPolicyResponseBody& operator=(GetIntegrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr
        && return this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetIntegrationPolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, GetIntegrationPolicyResponseBodyPolicy) };
    inline GetIntegrationPolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, GetIntegrationPolicyResponseBodyPolicy) };
    inline GetIntegrationPolicyResponseBody& setPolicy(const GetIntegrationPolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetIntegrationPolicyResponseBody& setPolicy(GetIntegrationPolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntegrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetIntegrationPolicyResponseBodyPolicy> policy_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
