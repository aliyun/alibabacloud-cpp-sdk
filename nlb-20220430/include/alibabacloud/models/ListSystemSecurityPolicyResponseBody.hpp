// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemSecurityPolicyResponseBodySecurityPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSystemSecurityPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
    };
    ListSystemSecurityPolicyResponseBody() = default ;
    ListSystemSecurityPolicyResponseBody(const ListSystemSecurityPolicyResponseBody &) = default ;
    ListSystemSecurityPolicyResponseBody(ListSystemSecurityPolicyResponseBody &&) = default ;
    ListSystemSecurityPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPolicyResponseBody() = default ;
    ListSystemSecurityPolicyResponseBody& operator=(const ListSystemSecurityPolicyResponseBody &) = default ;
    ListSystemSecurityPolicyResponseBody& operator=(ListSystemSecurityPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityPolicies_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemSecurityPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSystemSecurityPolicyResponseBodySecurityPolicies> & securityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSystemSecurityPolicyResponseBodySecurityPolicies>) };
    inline vector<ListSystemSecurityPolicyResponseBodySecurityPolicies> securityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSystemSecurityPolicyResponseBodySecurityPolicies>) };
    inline ListSystemSecurityPolicyResponseBody& setSecurityPolicies(const vector<ListSystemSecurityPolicyResponseBodySecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSystemSecurityPolicyResponseBody& setSecurityPolicies(vector<ListSystemSecurityPolicyResponseBodySecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of TLS security policies.
    std::shared_ptr<vector<ListSystemSecurityPolicyResponseBodySecurityPolicies>> securityPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
