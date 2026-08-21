// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEPRIVATEACCESSPOLICYREQUEST_HPP_
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
  class BatchDeletePrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeletePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeletePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    BatchDeletePrivateAccessPolicyRequest() = default ;
    BatchDeletePrivateAccessPolicyRequest(const BatchDeletePrivateAccessPolicyRequest &) = default ;
    BatchDeletePrivateAccessPolicyRequest(BatchDeletePrivateAccessPolicyRequest &&) = default ;
    BatchDeletePrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeletePrivateAccessPolicyRequest() = default ;
    BatchDeletePrivateAccessPolicyRequest& operator=(const BatchDeletePrivateAccessPolicyRequest &) = default ;
    BatchDeletePrivateAccessPolicyRequest& operator=(BatchDeletePrivateAccessPolicyRequest &&) = default ;
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
    inline BatchDeletePrivateAccessPolicyRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline BatchDeletePrivateAccessPolicyRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


  protected:
    // The IDs of internal network access policies. You can specify up to 100 internal network access policy IDs.
    shared_ptr<vector<string>> policyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
