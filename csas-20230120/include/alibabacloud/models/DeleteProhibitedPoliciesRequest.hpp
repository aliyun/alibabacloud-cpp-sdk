// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROHIBITEDPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROHIBITEDPOLICIESREQUEST_HPP_
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
  class DeleteProhibitedPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProhibitedPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProhibitedPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    DeleteProhibitedPoliciesRequest() = default ;
    DeleteProhibitedPoliciesRequest(const DeleteProhibitedPoliciesRequest &) = default ;
    DeleteProhibitedPoliciesRequest(DeleteProhibitedPoliciesRequest &&) = default ;
    DeleteProhibitedPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProhibitedPoliciesRequest() = default ;
    DeleteProhibitedPoliciesRequest& operator=(const DeleteProhibitedPoliciesRequest &) = default ;
    DeleteProhibitedPoliciesRequest& operator=(DeleteProhibitedPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIds_ == nullptr; };
    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline DeleteProhibitedPoliciesRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline DeleteProhibitedPoliciesRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


  protected:
    // The IDs of the software prohibition policies to delete. Duplicate IDs are not allowed. You can specify up to 100 IDs.
    shared_ptr<vector<string>> policyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
