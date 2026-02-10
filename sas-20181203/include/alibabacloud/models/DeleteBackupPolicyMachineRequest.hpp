// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPPOLICYMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPPOLICYMACHINEREQUEST_HPP_
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
  class DeleteBackupPolicyMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupPolicyMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupPolicyMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    DeleteBackupPolicyMachineRequest() = default ;
    DeleteBackupPolicyMachineRequest(const DeleteBackupPolicyMachineRequest &) = default ;
    DeleteBackupPolicyMachineRequest(DeleteBackupPolicyMachineRequest &&) = default ;
    DeleteBackupPolicyMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupPolicyMachineRequest() = default ;
    DeleteBackupPolicyMachineRequest& operator=(const DeleteBackupPolicyMachineRequest &) = default ;
    DeleteBackupPolicyMachineRequest& operator=(DeleteBackupPolicyMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && this->policyVersion_ == nullptr && this->uuid_ == nullptr && this->uuidList_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DeleteBackupPolicyMachineRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline DeleteBackupPolicyMachineRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DeleteBackupPolicyMachineRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline DeleteBackupPolicyMachineRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline DeleteBackupPolicyMachineRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The ID of the anti-ransomware policy.
    // 
    // > You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the IDs of anti-ransomware policies.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The version of the anti-ransomware policy. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    // 
    // >  You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the versions of anti-ransomware policies.
    // 
    // This parameter is required.
    shared_ptr<string> policyVersion_ {};
    // The UUID of the server to which the anti-ransomware policy is applied.
    // 
    // > You must specify at least one of the `UuidList` and `Uuid` parameters.
    shared_ptr<string> uuid_ {};
    // The UUIDs of the servers to which the anti-ransomware policy is applied.
    // 
    // > You must specify at least one of the `UuidList` and `Uuid` parameters.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
