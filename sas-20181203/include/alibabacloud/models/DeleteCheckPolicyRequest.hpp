// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHECKPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHECKPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCheckPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCheckPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCheckPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    DeleteCheckPolicyRequest() = default ;
    DeleteCheckPolicyRequest(const DeleteCheckPolicyRequest &) = default ;
    DeleteCheckPolicyRequest(DeleteCheckPolicyRequest &&) = default ;
    DeleteCheckPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCheckPolicyRequest() = default ;
    DeleteCheckPolicyRequest& operator=(const DeleteCheckPolicyRequest &) = default ;
    DeleteCheckPolicyRequest& operator=(DeleteCheckPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIds_ == nullptr
        && return this->policyType_ == nullptr; };
    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<int64_t> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<int64_t>) };
    inline vector<int64_t> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<int64_t>) };
    inline DeleteCheckPolicyRequest& setPolicyIds(const vector<int64_t> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline DeleteCheckPolicyRequest& setPolicyIds(vector<int64_t> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DeleteCheckPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> policyIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
