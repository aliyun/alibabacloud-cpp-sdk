// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONRESPONSEBODYECGRANTRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONRESPONSEBODYECGRANTRELATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEcGrantRelationResponseBodyEcGrantRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcGrantRelationResponseBodyEcGrantRelations& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceRouterId, instanceRouterId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_TO_JSON(VbrRegionNo, vbrRegionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEcGrantRelationResponseBodyEcGrantRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceRouterId, instanceRouterId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_FROM_JSON(VbrRegionNo, vbrRegionNo_);
    };
    DescribeEcGrantRelationResponseBodyEcGrantRelations() = default ;
    DescribeEcGrantRelationResponseBodyEcGrantRelations(const DescribeEcGrantRelationResponseBodyEcGrantRelations &) = default ;
    DescribeEcGrantRelationResponseBodyEcGrantRelations(DescribeEcGrantRelationResponseBodyEcGrantRelations &&) = default ;
    DescribeEcGrantRelationResponseBodyEcGrantRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcGrantRelationResponseBodyEcGrantRelations() = default ;
    DescribeEcGrantRelationResponseBodyEcGrantRelations& operator=(const DescribeEcGrantRelationResponseBodyEcGrantRelations &) = default ;
    DescribeEcGrantRelationResponseBodyEcGrantRelations& operator=(DescribeEcGrantRelationResponseBodyEcGrantRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->gmtCreate_ != nullptr && this->grantType_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceRouterId_ != nullptr
        && this->regionNo_ != nullptr && this->status_ != nullptr && this->vbrInstanceId_ != nullptr && this->vbrOwnerUid_ != nullptr && this->vbrRegionNo_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRouterId Field Functions 
    bool hasInstanceRouterId() const { return this->instanceRouterId_ != nullptr;};
    void deleteInstanceRouterId() { this->instanceRouterId_ = nullptr;};
    inline string instanceRouterId() const { DARABONBA_PTR_GET_DEFAULT(instanceRouterId_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setInstanceRouterId(string instanceRouterId) { DARABONBA_PTR_SET_VALUE(instanceRouterId_, instanceRouterId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vbrInstanceId Field Functions 
    bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
    void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
    inline string vbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


    // vbrOwnerUid Field Functions 
    bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
    void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
    inline int64_t vbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


    // vbrRegionNo Field Functions 
    bool hasVbrRegionNo() const { return this->vbrRegionNo_ != nullptr;};
    void deleteVbrRegionNo() { this->vbrRegionNo_ = nullptr;};
    inline string vbrRegionNo() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionNo_, "") };
    inline DescribeEcGrantRelationResponseBodyEcGrantRelations& setVbrRegionNo(string vbrRegionNo) { DARABONBA_PTR_SET_VALUE(vbrRegionNo_, vbrRegionNo) };


  protected:
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The time when permissions on the VPC were granted to the VBR.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The VBRs that have permissions on the VPC. Valid values:
    // 
    // *   **All**: VBRs that reside in the specified region and belong to the specified Alibaba Cloud account all have permissions on the VPC.
    // *   **Specify**: Only the specified VBR has permissions on the VPC.
    std::shared_ptr<string> grantType_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The ID of the vRouter.
    std::shared_ptr<string> instanceRouterId_ = nullptr;
    // The ID of the region where the VPC is deployed.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The query result. Valid values:
    // 
    // *   **Created**: The VBR has permissions on the VPC.
    // *   **Deleted**: The VBR does not have permissions on the VPC.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the VBR.
    std::shared_ptr<string> vbrInstanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    std::shared_ptr<int64_t> vbrOwnerUid_ = nullptr;
    // The ID of the region where the VBR is deployed.
    std::shared_ptr<string> vbrRegionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
