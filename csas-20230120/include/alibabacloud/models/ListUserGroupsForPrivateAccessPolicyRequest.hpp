// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsForPrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForPrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForPrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    ListUserGroupsForPrivateAccessPolicyRequest() = default ;
    ListUserGroupsForPrivateAccessPolicyRequest(const ListUserGroupsForPrivateAccessPolicyRequest &) = default ;
    ListUserGroupsForPrivateAccessPolicyRequest(ListUserGroupsForPrivateAccessPolicyRequest &&) = default ;
    ListUserGroupsForPrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForPrivateAccessPolicyRequest() = default ;
    ListUserGroupsForPrivateAccessPolicyRequest& operator=(const ListUserGroupsForPrivateAccessPolicyRequest &) = default ;
    ListUserGroupsForPrivateAccessPolicyRequest& operator=(ListUserGroupsForPrivateAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIds_ == nullptr; };
    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline ListUserGroupsForPrivateAccessPolicyRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListUserGroupsForPrivateAccessPolicyRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
