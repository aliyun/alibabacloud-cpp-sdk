// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceClassShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceClassShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScaleConfig, autoScaleConfigShrink_);
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeScaleMax, nodeScaleMax_);
      DARABONBA_PTR_TO_JSON(NodeScaleMin, nodeScaleMin_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(StorageQuota, storageQuota_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceClassShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScaleConfig, autoScaleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeScaleMax, nodeScaleMax_);
      DARABONBA_PTR_FROM_JSON(NodeScaleMin, nodeScaleMin_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(StorageQuota, storageQuota_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    ModifyDBInstanceClassShrinkRequest() = default ;
    ModifyDBInstanceClassShrinkRequest(const ModifyDBInstanceClassShrinkRequest &) = default ;
    ModifyDBInstanceClassShrinkRequest(ModifyDBInstanceClassShrinkRequest &&) = default ;
    ModifyDBInstanceClassShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceClassShrinkRequest() = default ;
    ModifyDBInstanceClassShrinkRequest& operator=(const ModifyDBInstanceClassShrinkRequest &) = default ;
    ModifyDBInstanceClassShrinkRequest& operator=(ModifyDBInstanceClassShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScaleConfigShrink_ == nullptr
        && this->computingGroupId_ == nullptr && this->DBInstanceId_ == nullptr && this->nodeCount_ == nullptr && this->nodeScaleMax_ == nullptr && this->nodeScaleMin_ == nullptr
        && this->regionId_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->storageQuota_ == nullptr && this->storageType_ == nullptr; };
    // autoScaleConfigShrink Field Functions 
    bool hasAutoScaleConfigShrink() const { return this->autoScaleConfigShrink_ != nullptr;};
    void deleteAutoScaleConfigShrink() { this->autoScaleConfigShrink_ = nullptr;};
    inline string getAutoScaleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(autoScaleConfigShrink_, "") };
    inline ModifyDBInstanceClassShrinkRequest& setAutoScaleConfigShrink(string autoScaleConfigShrink) { DARABONBA_PTR_SET_VALUE(autoScaleConfigShrink_, autoScaleConfigShrink) };


    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline ModifyDBInstanceClassShrinkRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceClassShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline ModifyDBInstanceClassShrinkRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeScaleMax Field Functions 
    bool hasNodeScaleMax() const { return this->nodeScaleMax_ != nullptr;};
    void deleteNodeScaleMax() { this->nodeScaleMax_ = nullptr;};
    inline int32_t getNodeScaleMax() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMax_, 0) };
    inline ModifyDBInstanceClassShrinkRequest& setNodeScaleMax(int32_t nodeScaleMax) { DARABONBA_PTR_SET_VALUE(nodeScaleMax_, nodeScaleMax) };


    // nodeScaleMin Field Functions 
    bool hasNodeScaleMin() const { return this->nodeScaleMin_ != nullptr;};
    void deleteNodeScaleMin() { this->nodeScaleMin_ = nullptr;};
    inline int32_t getNodeScaleMin() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMin_, 0) };
    inline ModifyDBInstanceClassShrinkRequest& setNodeScaleMin(int32_t nodeScaleMin) { DARABONBA_PTR_SET_VALUE(nodeScaleMin_, nodeScaleMin) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBInstanceClassShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline int64_t getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0L) };
    inline ModifyDBInstanceClassShrinkRequest& setScaleMax(int64_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline int64_t getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0L) };
    inline ModifyDBInstanceClassShrinkRequest& setScaleMin(int64_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // storageQuota Field Functions 
    bool hasStorageQuota() const { return this->storageQuota_ != nullptr;};
    void deleteStorageQuota() { this->storageQuota_ = nullptr;};
    inline int64_t getStorageQuota() const { DARABONBA_PTR_GET_DEFAULT(storageQuota_, 0L) };
    inline ModifyDBInstanceClassShrinkRequest& setStorageQuota(int64_t storageQuota) { DARABONBA_PTR_SET_VALUE(storageQuota_, storageQuota) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ModifyDBInstanceClassShrinkRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The autoscaling configuration for the compute group.
    shared_ptr<string> autoScaleConfigShrink_ {};
    // The compute group ID.
    shared_ptr<string> computingGroupId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The number of nodes. Valid values: 2 to 16.
    shared_ptr<int32_t> nodeCount_ {};
    // The maximum capacity per node for serverless autoscaling. Valid values: 4 to 32. This value must be greater than the minimum value.
    shared_ptr<int32_t> nodeScaleMax_ {};
    // The minimum capacity per node for serverless autoscaling. Valid values: 4 to 32.
    shared_ptr<int32_t> nodeScaleMin_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The maximum capacity for serverless autoscaling.
    shared_ptr<int64_t> scaleMax_ {};
    // The minimum capacity for serverless autoscaling.
    shared_ptr<int64_t> scaleMin_ {};
    // The pre-purchased storage capacity in GB.
    shared_ptr<int64_t> storageQuota_ {};
    // The storage type.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
