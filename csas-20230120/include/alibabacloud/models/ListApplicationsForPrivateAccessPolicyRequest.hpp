// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSPOLICYREQUEST_HPP_
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
  class ListApplicationsForPrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForPrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForPrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    ListApplicationsForPrivateAccessPolicyRequest() = default ;
    ListApplicationsForPrivateAccessPolicyRequest(const ListApplicationsForPrivateAccessPolicyRequest &) = default ;
    ListApplicationsForPrivateAccessPolicyRequest(ListApplicationsForPrivateAccessPolicyRequest &&) = default ;
    ListApplicationsForPrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForPrivateAccessPolicyRequest() = default ;
    ListApplicationsForPrivateAccessPolicyRequest& operator=(const ListApplicationsForPrivateAccessPolicyRequest &) = default ;
    ListApplicationsForPrivateAccessPolicyRequest& operator=(ListApplicationsForPrivateAccessPolicyRequest &&) = default ;
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
    inline ListApplicationsForPrivateAccessPolicyRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListApplicationsForPrivateAccessPolicyRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
