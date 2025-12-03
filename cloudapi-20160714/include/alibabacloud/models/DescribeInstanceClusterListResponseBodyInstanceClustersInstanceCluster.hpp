// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODYINSTANCECLUSTERSINSTANCECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODYINSTANCECLUSTERSINSTANCECLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_TO_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_TO_JSON(InstanceClusterStatus, instanceClusterStatus_);
      DARABONBA_PTR_TO_JSON(InstanceClusterType, instanceClusterType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterStatus, instanceClusterStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterType, instanceClusterType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster() = default ;
    DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster(const DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster &) = default ;
    DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster(DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster &&) = default ;
    DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster() = default ;
    DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& operator=(const DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster &) = default ;
    DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& operator=(DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->instanceClusterId_ == nullptr && return this->instanceClusterName_ == nullptr && return this->instanceClusterStatus_ == nullptr && return this->instanceClusterType_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->regionId_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceClusterId Field Functions 
    bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
    void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
    inline string instanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


    // instanceClusterName Field Functions 
    bool hasInstanceClusterName() const { return this->instanceClusterName_ != nullptr;};
    void deleteInstanceClusterName() { this->instanceClusterName_ = nullptr;};
    inline string instanceClusterName() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterName_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setInstanceClusterName(string instanceClusterName) { DARABONBA_PTR_SET_VALUE(instanceClusterName_, instanceClusterName) };


    // instanceClusterStatus Field Functions 
    bool hasInstanceClusterStatus() const { return this->instanceClusterStatus_ != nullptr;};
    void deleteInstanceClusterStatus() { this->instanceClusterStatus_ = nullptr;};
    inline string instanceClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterStatus_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setInstanceClusterStatus(string instanceClusterStatus) { DARABONBA_PTR_SET_VALUE(instanceClusterStatus_, instanceClusterStatus) };


    // instanceClusterType Field Functions 
    bool hasInstanceClusterType() const { return this->instanceClusterType_ != nullptr;};
    void deleteInstanceClusterType() { this->instanceClusterType_ = nullptr;};
    inline string instanceClusterType() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterType_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setInstanceClusterType(string instanceClusterType) { DARABONBA_PTR_SET_VALUE(instanceClusterType_, instanceClusterType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The time when the cluster was created. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The cluster description.
    std::shared_ptr<string> description_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> instanceClusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> instanceClusterName_ = nullptr;
    // The cluster status.
    std::shared_ptr<string> instanceClusterStatus_ = nullptr;
    // The cluster type.
    std::shared_ptr<string> instanceClusterType_ = nullptr;
    // The time when the cluster was last modified. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
