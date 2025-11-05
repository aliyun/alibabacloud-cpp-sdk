// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class BindEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskTargets, diskTargets_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, BindEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskTargets, diskTargets_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    BindEnterpriseSnapshotPolicyRequest() = default ;
    BindEnterpriseSnapshotPolicyRequest(const BindEnterpriseSnapshotPolicyRequest &) = default ;
    BindEnterpriseSnapshotPolicyRequest(BindEnterpriseSnapshotPolicyRequest &&) = default ;
    BindEnterpriseSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindEnterpriseSnapshotPolicyRequest() = default ;
    BindEnterpriseSnapshotPolicyRequest& operator=(const BindEnterpriseSnapshotPolicyRequest &) = default ;
    BindEnterpriseSnapshotPolicyRequest& operator=(BindEnterpriseSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->diskTargets_ == nullptr && return this->policyId_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline BindEnterpriseSnapshotPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskTargets Field Functions 
    bool hasDiskTargets() const { return this->diskTargets_ != nullptr;};
    void deleteDiskTargets() { this->diskTargets_ = nullptr;};
    inline const vector<string> & diskTargets() const { DARABONBA_PTR_GET_CONST(diskTargets_, vector<string>) };
    inline vector<string> diskTargets() { DARABONBA_PTR_GET(diskTargets_, vector<string>) };
    inline BindEnterpriseSnapshotPolicyRequest& setDiskTargets(const vector<string> & diskTargets) { DARABONBA_PTR_SET_VALUE(diskTargets_, diskTargets) };
    inline BindEnterpriseSnapshotPolicyRequest& setDiskTargets(vector<string> && diskTargets) { DARABONBA_PTR_SET_RVALUE(diskTargets_, diskTargets) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline BindEnterpriseSnapshotPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindEnterpriseSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The list of disks.
    std::shared_ptr<vector<string>> diskTargets_ = nullptr;
    // The id of the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The region ID . You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which snapshot policy is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
