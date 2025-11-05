// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARREPLICAGROUPDRILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARREPLICAGROUPDRILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ClearReplicaGroupDrillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearReplicaGroupDrillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrillId, drillId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearReplicaGroupDrillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ClearReplicaGroupDrillRequest() = default ;
    ClearReplicaGroupDrillRequest(const ClearReplicaGroupDrillRequest &) = default ;
    ClearReplicaGroupDrillRequest(ClearReplicaGroupDrillRequest &&) = default ;
    ClearReplicaGroupDrillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearReplicaGroupDrillRequest() = default ;
    ClearReplicaGroupDrillRequest& operator=(const ClearReplicaGroupDrillRequest &) = default ;
    ClearReplicaGroupDrillRequest& operator=(ClearReplicaGroupDrillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillId_ == nullptr
        && return this->groupId_ == nullptr && return this->regionId_ == nullptr; };
    // drillId Field Functions 
    bool hasDrillId() const { return this->drillId_ != nullptr;};
    void deleteDrillId() { this->drillId_ = nullptr;};
    inline string drillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
    inline ClearReplicaGroupDrillRequest& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ClearReplicaGroupDrillRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ClearReplicaGroupDrillRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the drill. You can call the [DescribeReplicaGroupDrills](https://help.aliyun.com/document_detail/2584481.html) operation to query disaster recovery drills that were performed on replication pairs in a specific region.
    // 
    // This parameter is required.
    std::shared_ptr<string> drillId_ = nullptr;
    // The ID of the replication pair-consistent group. You can call the [DescribeDiskReplicaGroups](https://help.aliyun.com/document_detail/426614.html) operation to query the most recent list of replication pair-consistent groups, including group IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
