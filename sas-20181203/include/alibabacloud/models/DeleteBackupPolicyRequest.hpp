// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
    };
    DeleteBackupPolicyRequest() = default ;
    DeleteBackupPolicyRequest(const DeleteBackupPolicyRequest &) = default ;
    DeleteBackupPolicyRequest(DeleteBackupPolicyRequest &&) = default ;
    DeleteBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupPolicyRequest() = default ;
    DeleteBackupPolicyRequest& operator=(const DeleteBackupPolicyRequest &) = default ;
    DeleteBackupPolicyRequest& operator=(DeleteBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->policyVersion_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteBackupPolicyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline DeleteBackupPolicyRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


  protected:
    // The ID of the anti-ransomware policy that you want to delete.
    // 
    // >  You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the IDs of anti-ransomware policies.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The version of the anti-ransomware policy that you want to delete. You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the versions of anti-ransomware policies. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    shared_ptr<string> policyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
