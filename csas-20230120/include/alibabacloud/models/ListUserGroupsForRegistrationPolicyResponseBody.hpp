// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORREGISTRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORREGISTRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsForRegistrationPolicyResponseBodyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsForRegistrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserGroupsForRegistrationPolicyResponseBody() = default ;
    ListUserGroupsForRegistrationPolicyResponseBody(const ListUserGroupsForRegistrationPolicyResponseBody &) = default ;
    ListUserGroupsForRegistrationPolicyResponseBody(ListUserGroupsForRegistrationPolicyResponseBody &&) = default ;
    ListUserGroupsForRegistrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForRegistrationPolicyResponseBody() = default ;
    ListUserGroupsForRegistrationPolicyResponseBody& operator=(const ListUserGroupsForRegistrationPolicyResponseBody &) = default ;
    ListUserGroupsForRegistrationPolicyResponseBody& operator=(ListUserGroupsForRegistrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policies_ == nullptr
        && return this->requestId_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies>) };
    inline vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies>) };
    inline ListUserGroupsForRegistrationPolicyResponseBody& setPolicies(const vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListUserGroupsForRegistrationPolicyResponseBody& setPolicies(vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsForRegistrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies>> policies_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
