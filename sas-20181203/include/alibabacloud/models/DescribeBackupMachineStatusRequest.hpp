// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupMachineStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupMachineStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupMachineStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeBackupMachineStatusRequest() = default ;
    DescribeBackupMachineStatusRequest(const DescribeBackupMachineStatusRequest &) = default ;
    DescribeBackupMachineStatusRequest(DescribeBackupMachineStatusRequest &&) = default ;
    DescribeBackupMachineStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupMachineStatusRequest() = default ;
    DescribeBackupMachineStatusRequest& operator=(const DescribeBackupMachineStatusRequest &) = default ;
    DescribeBackupMachineStatusRequest& operator=(DescribeBackupMachineStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && this->policyVersion_ == nullptr && this->uuid_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeBackupMachineStatusRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline DescribeBackupMachineStatusRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeBackupMachineStatusRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the anti-ransomware policy.
    // 
    // >  You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the IDs of anti-ransomware policies.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The version of the anti-ransomware policy. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    shared_ptr<string> policyVersion_ {};
    // The UUID of the server.
    // 
    // >  You can call the [DescribeBackupPolicy](~~DescribeBackupPolicy~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
