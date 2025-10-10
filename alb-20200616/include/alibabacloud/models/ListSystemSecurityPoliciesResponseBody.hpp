// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemSecurityPoliciesResponseBodySecurityPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSystemSecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
    };
    ListSystemSecurityPoliciesResponseBody() = default ;
    ListSystemSecurityPoliciesResponseBody(const ListSystemSecurityPoliciesResponseBody &) = default ;
    ListSystemSecurityPoliciesResponseBody(ListSystemSecurityPoliciesResponseBody &&) = default ;
    ListSystemSecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPoliciesResponseBody() = default ;
    ListSystemSecurityPoliciesResponseBody& operator=(const ListSystemSecurityPoliciesResponseBody &) = default ;
    ListSystemSecurityPoliciesResponseBody& operator=(ListSystemSecurityPoliciesResponseBody &&) = default ;
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
    inline ListSystemSecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies> & securityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>) };
    inline vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies> securityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>) };
    inline ListSystemSecurityPoliciesResponseBody& setSecurityPolicies(const vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSystemSecurityPoliciesResponseBody& setSecurityPolicies(vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security policies.
    std::shared_ptr<vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>> securityPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
