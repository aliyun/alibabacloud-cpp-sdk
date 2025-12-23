// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODYIPAMRESOURCECIDRS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODYIPAMRESOURCECIDRS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceCidrsResponseBodyIpamResourceCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceCidrsResponseBodyIpamResourceCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(ComplianceStatus, complianceStatus_);
      DARABONBA_PTR_TO_JSON(IpCountDetail, ipCountDetail_);
      DARABONBA_PTR_TO_JSON(IpUsage, ipUsage_);
      DARABONBA_PTR_TO_JSON(IpamAllocationId, ipamAllocationId_);
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_TO_JSON(ManagementStatus, managementStatus_);
      DARABONBA_PTR_TO_JSON(OverlapDetail, overlapDetail_);
      DARABONBA_PTR_TO_JSON(OverlapStatus, overlapStatus_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceCidrsResponseBodyIpamResourceCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(ComplianceStatus, complianceStatus_);
      DARABONBA_PTR_FROM_JSON(IpCountDetail, ipCountDetail_);
      DARABONBA_PTR_FROM_JSON(IpUsage, ipUsage_);
      DARABONBA_PTR_FROM_JSON(IpamAllocationId, ipamAllocationId_);
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_FROM_JSON(ManagementStatus, managementStatus_);
      DARABONBA_PTR_FROM_JSON(OverlapDetail, overlapDetail_);
      DARABONBA_PTR_FROM_JSON(OverlapStatus, overlapStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListIpamResourceCidrsResponseBodyIpamResourceCidrs() = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrs(const ListIpamResourceCidrsResponseBodyIpamResourceCidrs &) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrs(ListIpamResourceCidrsResponseBodyIpamResourceCidrs &&) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceCidrsResponseBodyIpamResourceCidrs() = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrs& operator=(const ListIpamResourceCidrsResponseBodyIpamResourceCidrs &) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrs& operator=(ListIpamResourceCidrsResponseBodyIpamResourceCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->cidr_ == nullptr && return this->complianceStatus_ == nullptr && return this->ipCountDetail_ == nullptr && return this->ipUsage_ == nullptr && return this->ipamAllocationId_ == nullptr
        && return this->ipamId_ == nullptr && return this->ipamPoolId_ == nullptr && return this->ipamScopeId_ == nullptr && return this->managementStatus_ == nullptr && return this->overlapDetail_ == nullptr
        && return this->overlapStatus_ == nullptr && return this->resourceId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr
        && return this->sourceCidr_ == nullptr && return this->status_ == nullptr && return this->vpcId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // complianceStatus Field Functions 
    bool hasComplianceStatus() const { return this->complianceStatus_ != nullptr;};
    void deleteComplianceStatus() { this->complianceStatus_ = nullptr;};
    inline string complianceStatus() const { DARABONBA_PTR_GET_DEFAULT(complianceStatus_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setComplianceStatus(string complianceStatus) { DARABONBA_PTR_SET_VALUE(complianceStatus_, complianceStatus) };


    // ipCountDetail Field Functions 
    bool hasIpCountDetail() const { return this->ipCountDetail_ != nullptr;};
    void deleteIpCountDetail() { this->ipCountDetail_ = nullptr;};
    inline const Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail & ipCountDetail() const { DARABONBA_PTR_GET_CONST(ipCountDetail_, Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail) };
    inline Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail ipCountDetail() { DARABONBA_PTR_GET(ipCountDetail_, Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail) };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpCountDetail(const Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail & ipCountDetail) { DARABONBA_PTR_SET_VALUE(ipCountDetail_, ipCountDetail) };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpCountDetail(Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail && ipCountDetail) { DARABONBA_PTR_SET_RVALUE(ipCountDetail_, ipCountDetail) };


    // ipUsage Field Functions 
    bool hasIpUsage() const { return this->ipUsage_ != nullptr;};
    void deleteIpUsage() { this->ipUsage_ = nullptr;};
    inline string ipUsage() const { DARABONBA_PTR_GET_DEFAULT(ipUsage_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpUsage(string ipUsage) { DARABONBA_PTR_SET_VALUE(ipUsage_, ipUsage) };


    // ipamAllocationId Field Functions 
    bool hasIpamAllocationId() const { return this->ipamAllocationId_ != nullptr;};
    void deleteIpamAllocationId() { this->ipamAllocationId_ = nullptr;};
    inline string ipamAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamAllocationId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpamAllocationId(string ipamAllocationId) { DARABONBA_PTR_SET_VALUE(ipamAllocationId_, ipamAllocationId) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string ipamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string ipamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // managementStatus Field Functions 
    bool hasManagementStatus() const { return this->managementStatus_ != nullptr;};
    void deleteManagementStatus() { this->managementStatus_ = nullptr;};
    inline string managementStatus() const { DARABONBA_PTR_GET_DEFAULT(managementStatus_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setManagementStatus(string managementStatus) { DARABONBA_PTR_SET_VALUE(managementStatus_, managementStatus) };


    // overlapDetail Field Functions 
    bool hasOverlapDetail() const { return this->overlapDetail_ != nullptr;};
    void deleteOverlapDetail() { this->overlapDetail_ = nullptr;};
    inline const vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail> & overlapDetail() const { DARABONBA_PTR_GET_CONST(overlapDetail_, vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail>) };
    inline vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail> overlapDetail() { DARABONBA_PTR_GET(overlapDetail_, vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail>) };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setOverlapDetail(const vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail> & overlapDetail) { DARABONBA_PTR_SET_VALUE(overlapDetail_, overlapDetail) };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setOverlapDetail(vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail> && overlapDetail) { DARABONBA_PTR_SET_RVALUE(overlapDetail_, overlapDetail) };


    // overlapStatus Field Functions 
    bool hasOverlapStatus() const { return this->overlapStatus_ != nullptr;};
    void deleteOverlapStatus() { this->overlapStatus_ = nullptr;};
    inline string overlapStatus() const { DARABONBA_PTR_GET_DEFAULT(overlapStatus_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setOverlapStatus(string overlapStatus) { DARABONBA_PTR_SET_VALUE(overlapStatus_, overlapStatus) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string sourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The CIDR block of the resource.
    std::shared_ptr<string> cidr_ = nullptr;
    // The compliance status of the resource.
    // 
    // *   **Compliant**
    // *   **Noncompliant**
    // *   **Ignored** Ignored resources are not monitored.
    // *   **Unmanaged**: The resource does not have a CIDR block allocated from the IPAM pool. IPAM does not monitor whether the CIDR block of the resource meets the allocation rules of the IP address pool.
    std::shared_ptr<string> complianceStatus_ = nullptr;
    std::shared_ptr<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail> ipCountDetail_ = nullptr;
    // The IP usage that is displayed in decimal form.
    std::shared_ptr<string> ipUsage_ = nullptr;
    // The ID of the instance to which CIDR blocks are allocated from the IPAM pool.
    std::shared_ptr<string> ipamAllocationId_ = nullptr;
    // The ID of the IPAM.
    std::shared_ptr<string> ipamId_ = nullptr;
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The ID of the IPAM scope.
    std::shared_ptr<string> ipamScopeId_ = nullptr;
    // The management status of the resource.
    // 
    // *   **Managed**: The resource has a CIDR block allocated from an IPAM pool. IPAM is monitoring whether the allocated CIDR block overlaps with other CIDR blocks and whether the allocated CIDR block meets the allocation rules.
    // *   **Unmanaged**: The resource does not have a CIDR block allocated from the IPAM pool. IPAM is monitoring whether the resource has CIDR blocks that meet the allocation rules. Monitor whether CIDR blocks overlap with each other.
    // *   **Ignored**: The resource is not monitored. Ignored resources are not monitored. If you ignore a resource, CIDR blocks allocated to the resource are returned to the IPAM pool and will not be automatically allocated to the resource (if automatic allocation rules are specified).
    std::shared_ptr<string> managementStatus_ = nullptr;
    // List of resources that overlap with the current resource.
    std::shared_ptr<vector<Models::ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail>> overlapDetail_ = nullptr;
    // The overlapping status of the resource.
    // 
    // *   **Nonoverlapping**
    // *   **Overlapping**
    // *   **Ignored** Ignored resources are not monitored.
    std::shared_ptr<string> overlapStatus_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The effective region ID of the resource.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The type of resource. Valid values:
    // 
    // *   **VPC**
    // *   **VSwitch**
    std::shared_ptr<string> resourceType_ = nullptr;
    // The source CIDR block.
    std::shared_ptr<string> sourceCidr_ = nullptr;
    // The status of the resource in the IPAM pool. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
