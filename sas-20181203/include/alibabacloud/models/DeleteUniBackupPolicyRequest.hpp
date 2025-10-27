// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUNIBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUNIBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteUniBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUniBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUniBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    DeleteUniBackupPolicyRequest() = default ;
    DeleteUniBackupPolicyRequest(const DeleteUniBackupPolicyRequest &) = default ;
    DeleteUniBackupPolicyRequest(DeleteUniBackupPolicyRequest &&) = default ;
    DeleteUniBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUniBackupPolicyRequest() = default ;
    DeleteUniBackupPolicyRequest& operator=(const DeleteUniBackupPolicyRequest &) = default ;
    DeleteUniBackupPolicyRequest& operator=(DeleteUniBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && return this->policyIds_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DeleteUniBackupPolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline string policyIds() const { DARABONBA_PTR_GET_DEFAULT(policyIds_, "") };
    inline DeleteUniBackupPolicyRequest& setPolicyIds(string policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };


  protected:
    // The ID of the anti-ransomware policy.
    // 
    // >  You can call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to query the IDs of anti-ransomware policies. You must specify at least one of the PolicyId parameter and the **PolicyIds** parameter.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The IDs of anti-ransomware policies.
    // 
    // >  You can call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to query the IDs of anti-ransomware policies. You must specify at least one of the **PolicyId** parameter and the PolicyIds parameter.
    std::shared_ptr<string> policyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
