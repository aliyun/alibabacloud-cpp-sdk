// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPolicyDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPolicyDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPolicyDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DescribeUniBackupPolicyDetailRequest() = default ;
    DescribeUniBackupPolicyDetailRequest(const DescribeUniBackupPolicyDetailRequest &) = default ;
    DescribeUniBackupPolicyDetailRequest(DescribeUniBackupPolicyDetailRequest &&) = default ;
    DescribeUniBackupPolicyDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPolicyDetailRequest() = default ;
    DescribeUniBackupPolicyDetailRequest& operator=(const DescribeUniBackupPolicyDetailRequest &) = default ;
    DescribeUniBackupPolicyDetailRequest& operator=(DescribeUniBackupPolicyDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeUniBackupPolicyDetailRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The ID of the anti-ransomware policy.
    // 
    // > You can call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to query the IDs of anti-ransomware policies.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
