// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceCidrsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceCidrsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamResourceCidrs, ipamResourceCidrs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceCidrsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamResourceCidrs, ipamResourceCidrs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamResourceCidrsResponseBody() = default ;
    ListIpamResourceCidrsResponseBody(const ListIpamResourceCidrsResponseBody &) = default ;
    ListIpamResourceCidrsResponseBody(ListIpamResourceCidrsResponseBody &&) = default ;
    ListIpamResourceCidrsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceCidrsResponseBody() = default ;
    ListIpamResourceCidrsResponseBody& operator=(const ListIpamResourceCidrsResponseBody &) = default ;
    ListIpamResourceCidrsResponseBody& operator=(ListIpamResourceCidrsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamResourceCidrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamResourceCidrs& obj) { 
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
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, IpamResourceCidrs& obj) { 
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
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      IpamResourceCidrs() = default ;
      IpamResourceCidrs(const IpamResourceCidrs &) = default ;
      IpamResourceCidrs(IpamResourceCidrs &&) = default ;
      IpamResourceCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamResourceCidrs() = default ;
      IpamResourceCidrs& operator=(const IpamResourceCidrs &) = default ;
      IpamResourceCidrs& operator=(IpamResourceCidrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OverlapDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OverlapDetail& obj) { 
          DARABONBA_PTR_TO_JSON(OverlapResourceCidr, overlapResourceCidr_);
          DARABONBA_PTR_TO_JSON(OverlapResourceId, overlapResourceId_);
          DARABONBA_PTR_TO_JSON(OverlapResourceRegion, overlapResourceRegion_);
        };
        friend void from_json(const Darabonba::Json& j, OverlapDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(OverlapResourceCidr, overlapResourceCidr_);
          DARABONBA_PTR_FROM_JSON(OverlapResourceId, overlapResourceId_);
          DARABONBA_PTR_FROM_JSON(OverlapResourceRegion, overlapResourceRegion_);
        };
        OverlapDetail() = default ;
        OverlapDetail(const OverlapDetail &) = default ;
        OverlapDetail(OverlapDetail &&) = default ;
        OverlapDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OverlapDetail() = default ;
        OverlapDetail& operator=(const OverlapDetail &) = default ;
        OverlapDetail& operator=(OverlapDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->overlapResourceCidr_ == nullptr
        && this->overlapResourceId_ == nullptr && this->overlapResourceRegion_ == nullptr; };
        // overlapResourceCidr Field Functions 
        bool hasOverlapResourceCidr() const { return this->overlapResourceCidr_ != nullptr;};
        void deleteOverlapResourceCidr() { this->overlapResourceCidr_ = nullptr;};
        inline string getOverlapResourceCidr() const { DARABONBA_PTR_GET_DEFAULT(overlapResourceCidr_, "") };
        inline OverlapDetail& setOverlapResourceCidr(string overlapResourceCidr) { DARABONBA_PTR_SET_VALUE(overlapResourceCidr_, overlapResourceCidr) };


        // overlapResourceId Field Functions 
        bool hasOverlapResourceId() const { return this->overlapResourceId_ != nullptr;};
        void deleteOverlapResourceId() { this->overlapResourceId_ = nullptr;};
        inline string getOverlapResourceId() const { DARABONBA_PTR_GET_DEFAULT(overlapResourceId_, "") };
        inline OverlapDetail& setOverlapResourceId(string overlapResourceId) { DARABONBA_PTR_SET_VALUE(overlapResourceId_, overlapResourceId) };


        // overlapResourceRegion Field Functions 
        bool hasOverlapResourceRegion() const { return this->overlapResourceRegion_ != nullptr;};
        void deleteOverlapResourceRegion() { this->overlapResourceRegion_ = nullptr;};
        inline string getOverlapResourceRegion() const { DARABONBA_PTR_GET_DEFAULT(overlapResourceRegion_, "") };
        inline OverlapDetail& setOverlapResourceRegion(string overlapResourceRegion) { DARABONBA_PTR_SET_VALUE(overlapResourceRegion_, overlapResourceRegion) };


      protected:
        // The CIDR block of the resource that overlaps with the current resource.
        shared_ptr<string> overlapResourceCidr_ {};
        // The instance ID of the resource that overlaps with the current resource.
        shared_ptr<string> overlapResourceId_ {};
        // The region of the instance that overlaps with the current resource.
        shared_ptr<string> overlapResourceRegion_ {};
      };

      class IpCountDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpCountDetail& obj) { 
          DARABONBA_PTR_TO_JSON(FreeIpCount, freeIpCount_);
          DARABONBA_PTR_TO_JSON(TotalIpCount, totalIpCount_);
          DARABONBA_PTR_TO_JSON(UsedIpCount, usedIpCount_);
        };
        friend void from_json(const Darabonba::Json& j, IpCountDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(FreeIpCount, freeIpCount_);
          DARABONBA_PTR_FROM_JSON(TotalIpCount, totalIpCount_);
          DARABONBA_PTR_FROM_JSON(UsedIpCount, usedIpCount_);
        };
        IpCountDetail() = default ;
        IpCountDetail(const IpCountDetail &) = default ;
        IpCountDetail(IpCountDetail &&) = default ;
        IpCountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpCountDetail() = default ;
        IpCountDetail& operator=(const IpCountDetail &) = default ;
        IpCountDetail& operator=(IpCountDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->freeIpCount_ == nullptr
        && this->totalIpCount_ == nullptr && this->usedIpCount_ == nullptr; };
        // freeIpCount Field Functions 
        bool hasFreeIpCount() const { return this->freeIpCount_ != nullptr;};
        void deleteFreeIpCount() { this->freeIpCount_ = nullptr;};
        inline string getFreeIpCount() const { DARABONBA_PTR_GET_DEFAULT(freeIpCount_, "") };
        inline IpCountDetail& setFreeIpCount(string freeIpCount) { DARABONBA_PTR_SET_VALUE(freeIpCount_, freeIpCount) };


        // totalIpCount Field Functions 
        bool hasTotalIpCount() const { return this->totalIpCount_ != nullptr;};
        void deleteTotalIpCount() { this->totalIpCount_ = nullptr;};
        inline string getTotalIpCount() const { DARABONBA_PTR_GET_DEFAULT(totalIpCount_, "") };
        inline IpCountDetail& setTotalIpCount(string totalIpCount) { DARABONBA_PTR_SET_VALUE(totalIpCount_, totalIpCount) };


        // usedIpCount Field Functions 
        bool hasUsedIpCount() const { return this->usedIpCount_ != nullptr;};
        void deleteUsedIpCount() { this->usedIpCount_ = nullptr;};
        inline string getUsedIpCount() const { DARABONBA_PTR_GET_DEFAULT(usedIpCount_, "") };
        inline IpCountDetail& setUsedIpCount(string usedIpCount) { DARABONBA_PTR_SET_VALUE(usedIpCount_, usedIpCount) };


      protected:
        // The number of available IP addresses.
        shared_ptr<string> freeIpCount_ {};
        // The total number of IP addresses.
        shared_ptr<string> totalIpCount_ {};
        // The number of allocated IP addresses.
        shared_ptr<string> usedIpCount_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->cidr_ == nullptr && this->complianceStatus_ == nullptr && this->ipCountDetail_ == nullptr && this->ipUsage_ == nullptr && this->ipamAllocationId_ == nullptr
        && this->ipamId_ == nullptr && this->ipamPoolId_ == nullptr && this->ipamScopeId_ == nullptr && this->managementStatus_ == nullptr && this->overlapDetail_ == nullptr
        && this->overlapStatus_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceRegionId_ == nullptr
        && this->resourceType_ == nullptr && this->sourceCidr_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline IpamResourceCidrs& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline IpamResourceCidrs& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // complianceStatus Field Functions 
      bool hasComplianceStatus() const { return this->complianceStatus_ != nullptr;};
      void deleteComplianceStatus() { this->complianceStatus_ = nullptr;};
      inline string getComplianceStatus() const { DARABONBA_PTR_GET_DEFAULT(complianceStatus_, "") };
      inline IpamResourceCidrs& setComplianceStatus(string complianceStatus) { DARABONBA_PTR_SET_VALUE(complianceStatus_, complianceStatus) };


      // ipCountDetail Field Functions 
      bool hasIpCountDetail() const { return this->ipCountDetail_ != nullptr;};
      void deleteIpCountDetail() { this->ipCountDetail_ = nullptr;};
      inline const IpamResourceCidrs::IpCountDetail & getIpCountDetail() const { DARABONBA_PTR_GET_CONST(ipCountDetail_, IpamResourceCidrs::IpCountDetail) };
      inline IpamResourceCidrs::IpCountDetail getIpCountDetail() { DARABONBA_PTR_GET(ipCountDetail_, IpamResourceCidrs::IpCountDetail) };
      inline IpamResourceCidrs& setIpCountDetail(const IpamResourceCidrs::IpCountDetail & ipCountDetail) { DARABONBA_PTR_SET_VALUE(ipCountDetail_, ipCountDetail) };
      inline IpamResourceCidrs& setIpCountDetail(IpamResourceCidrs::IpCountDetail && ipCountDetail) { DARABONBA_PTR_SET_RVALUE(ipCountDetail_, ipCountDetail) };


      // ipUsage Field Functions 
      bool hasIpUsage() const { return this->ipUsage_ != nullptr;};
      void deleteIpUsage() { this->ipUsage_ = nullptr;};
      inline string getIpUsage() const { DARABONBA_PTR_GET_DEFAULT(ipUsage_, "") };
      inline IpamResourceCidrs& setIpUsage(string ipUsage) { DARABONBA_PTR_SET_VALUE(ipUsage_, ipUsage) };


      // ipamAllocationId Field Functions 
      bool hasIpamAllocationId() const { return this->ipamAllocationId_ != nullptr;};
      void deleteIpamAllocationId() { this->ipamAllocationId_ = nullptr;};
      inline string getIpamAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamAllocationId_, "") };
      inline IpamResourceCidrs& setIpamAllocationId(string ipamAllocationId) { DARABONBA_PTR_SET_VALUE(ipamAllocationId_, ipamAllocationId) };


      // ipamId Field Functions 
      bool hasIpamId() const { return this->ipamId_ != nullptr;};
      void deleteIpamId() { this->ipamId_ = nullptr;};
      inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
      inline IpamResourceCidrs& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


      // ipamPoolId Field Functions 
      bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
      void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
      inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
      inline IpamResourceCidrs& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


      // ipamScopeId Field Functions 
      bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
      void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
      inline string getIpamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
      inline IpamResourceCidrs& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


      // managementStatus Field Functions 
      bool hasManagementStatus() const { return this->managementStatus_ != nullptr;};
      void deleteManagementStatus() { this->managementStatus_ = nullptr;};
      inline string getManagementStatus() const { DARABONBA_PTR_GET_DEFAULT(managementStatus_, "") };
      inline IpamResourceCidrs& setManagementStatus(string managementStatus) { DARABONBA_PTR_SET_VALUE(managementStatus_, managementStatus) };


      // overlapDetail Field Functions 
      bool hasOverlapDetail() const { return this->overlapDetail_ != nullptr;};
      void deleteOverlapDetail() { this->overlapDetail_ = nullptr;};
      inline const vector<IpamResourceCidrs::OverlapDetail> & getOverlapDetail() const { DARABONBA_PTR_GET_CONST(overlapDetail_, vector<IpamResourceCidrs::OverlapDetail>) };
      inline vector<IpamResourceCidrs::OverlapDetail> getOverlapDetail() { DARABONBA_PTR_GET(overlapDetail_, vector<IpamResourceCidrs::OverlapDetail>) };
      inline IpamResourceCidrs& setOverlapDetail(const vector<IpamResourceCidrs::OverlapDetail> & overlapDetail) { DARABONBA_PTR_SET_VALUE(overlapDetail_, overlapDetail) };
      inline IpamResourceCidrs& setOverlapDetail(vector<IpamResourceCidrs::OverlapDetail> && overlapDetail) { DARABONBA_PTR_SET_RVALUE(overlapDetail_, overlapDetail) };


      // overlapStatus Field Functions 
      bool hasOverlapStatus() const { return this->overlapStatus_ != nullptr;};
      void deleteOverlapStatus() { this->overlapStatus_ = nullptr;};
      inline string getOverlapStatus() const { DARABONBA_PTR_GET_DEFAULT(overlapStatus_, "") };
      inline IpamResourceCidrs& setOverlapStatus(string overlapStatus) { DARABONBA_PTR_SET_VALUE(overlapStatus_, overlapStatus) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline IpamResourceCidrs& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline IpamResourceCidrs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline IpamResourceCidrs& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline IpamResourceCidrs& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline IpamResourceCidrs& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sourceCidr Field Functions 
      bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
      void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
      inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
      inline IpamResourceCidrs& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpamResourceCidrs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline IpamResourceCidrs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<int64_t> aliUid_ {};
      // The CIDR block of the resource.
      shared_ptr<string> cidr_ {};
      // The compliance status of the resource.
      // 
      // - **Compliant**: The CIDR block of the managed resource complies with the allocation rules of the IPAM pool.
      // - **Noncompliant**: The CIDR block of the managed resource does not comply with one or more allocation rules of the IPAM pool.
      // - **Ignored**: The resource has been excluded from monitoring. Ignored resources are not evaluated for overlap or allocation rule compliance.
      // - **Unmanaged**: The resource does not have a CIDR block allocated from an IPAM pool. IPAM does not monitor whether the CIDR block of the resource complies with the allocation rules of the pool, but monitors the CIDR block for overlap.
      shared_ptr<string> complianceStatus_ {};
      // The details of the resource IP address count.
      shared_ptr<IpamResourceCidrs::IpCountDetail> ipCountDetail_ {};
      // The IP utilization rate, expressed as a decimal.
      shared_ptr<string> ipUsage_ {};
      // The instance ID of the IPAM pool CIDR allocation.
      shared_ptr<string> ipamAllocationId_ {};
      // The instance ID of the IPAM.
      shared_ptr<string> ipamId_ {};
      // The instance ID of the IPAM pool.
      shared_ptr<string> ipamPoolId_ {};
      // The instance ID of the IPAM scope.
      shared_ptr<string> ipamScopeId_ {};
      // The management status of the resource.
      // 
      // - **Managed**: The resource has a CIDR block allocated from an IPAM pool. IPAM monitors the resource for potential CIDR overlap and compliance with pool allocation rules.
      // - **Unmanaged**: The resource does not have a CIDR block allocated from an IPAM pool. IPAM monitors the resource for potential CIDRs that comply with pool allocation rules and monitors CIDRs for overlap.
      // - **Ignored**: The resource has been excluded from monitoring. Ignored resources are not evaluated for overlap or allocation rule compliance. When a resource is ignored, any space allocated to it from an IPAM pool is returned to the pool, and the resource is not re-imported through automatic import (if an automatic import allocation rule is configured for the pool).
      shared_ptr<string> managementStatus_ {};
      // The list of resources that overlap with the current resource.
      shared_ptr<vector<IpamResourceCidrs::OverlapDetail>> overlapDetail_ {};
      // The overlap status of the resource.
      // 
      // - **Nonoverlapping**: The CIDR block of the resource does not overlap with other CIDR blocks within the same scope.
      // - **Overlapping**: The CIDR block of the resource overlaps with another CIDR block within the same scope.
      // - **Ignored**: The resource has been excluded from monitoring. Ignored resources are not evaluated for overlap or allocation rule compliance.
      shared_ptr<string> overlapStatus_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource name.
      shared_ptr<string> resourceName_ {};
      // The Alibaba Cloud account ID of the resource ownership.
      shared_ptr<int64_t> resourceOwnerId_ {};
      // The ID of the region where the resource takes effect.
      shared_ptr<string> resourceRegionId_ {};
      // The resource type. Valid values:
      // 
      // - **VPC**: The resource type is VPC.
      // - **VSwitch**: The resource type is vSwitch.
      shared_ptr<string> resourceType_ {};
      // The source CIDR block.
      shared_ptr<string> sourceCidr_ {};
      // The status of the resource in the IPAM pool. Valid values:
      // 
      // - **Created**: created.
      // - **Deleted**: deleted.
      shared_ptr<string> status_ {};
      // The instance ID of the VPC-connected instance to which the resource belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamResourceCidrs_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamResourceCidrsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamResourceCidrs Field Functions 
    bool hasIpamResourceCidrs() const { return this->ipamResourceCidrs_ != nullptr;};
    void deleteIpamResourceCidrs() { this->ipamResourceCidrs_ = nullptr;};
    inline const vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs> & getIpamResourceCidrs() const { DARABONBA_PTR_GET_CONST(ipamResourceCidrs_, vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs>) };
    inline vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs> getIpamResourceCidrs() { DARABONBA_PTR_GET(ipamResourceCidrs_, vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs>) };
    inline ListIpamResourceCidrsResponseBody& setIpamResourceCidrs(const vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs> & ipamResourceCidrs) { DARABONBA_PTR_SET_VALUE(ipamResourceCidrs_, ipamResourceCidrs) };
    inline ListIpamResourceCidrsResponseBody& setIpamResourceCidrs(vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs> && ipamResourceCidrs) { DARABONBA_PTR_SET_RVALUE(ipamResourceCidrs_, ipamResourceCidrs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamResourceCidrsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamResourceCidrsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamResourceCidrsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamResourceCidrsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int64_t> count_ {};
    // The list of resource information.
    shared_ptr<vector<ListIpamResourceCidrsResponseBody::IpamResourceCidrs>> ipamResourceCidrs_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. Valid values:
    // - If **NextToken** is empty, no more results exist.
    // - If **NextToken** is returned, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned under the current query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
