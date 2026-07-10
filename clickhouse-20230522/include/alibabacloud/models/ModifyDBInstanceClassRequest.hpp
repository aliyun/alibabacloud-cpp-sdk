// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScaleConfig, autoScaleConfig_);
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
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScaleConfig, autoScaleConfig_);
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
    ModifyDBInstanceClassRequest() = default ;
    ModifyDBInstanceClassRequest(const ModifyDBInstanceClassRequest &) = default ;
    ModifyDBInstanceClassRequest(ModifyDBInstanceClassRequest &&) = default ;
    ModifyDBInstanceClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceClassRequest() = default ;
    ModifyDBInstanceClassRequest& operator=(const ModifyDBInstanceClassRequest &) = default ;
    ModifyDBInstanceClassRequest& operator=(ModifyDBInstanceClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoScaleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoScaleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BurstNum, burstNum_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchInfos, vSwitchInfos_);
      };
      friend void from_json(const Darabonba::Json& j, AutoScaleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BurstNum, burstNum_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchInfos, vSwitchInfos_);
      };
      AutoScaleConfig() = default ;
      AutoScaleConfig(const AutoScaleConfig &) = default ;
      AutoScaleConfig(AutoScaleConfig &&) = default ;
      AutoScaleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoScaleConfig() = default ;
      AutoScaleConfig& operator=(const AutoScaleConfig &) = default ;
      AutoScaleConfig& operator=(AutoScaleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitchInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitchInfos& obj) { 
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitchInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VSwitchInfos() = default ;
        VSwitchInfos(const VSwitchInfos &) = default ;
        VSwitchInfos(VSwitchInfos &&) = default ;
        VSwitchInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitchInfos() = default ;
        VSwitchInfos& operator=(const VSwitchInfos &) = default ;
        VSwitchInfos& operator=(VSwitchInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vSwitchIds_ == nullptr
        && this->zoneId_ == nullptr; };
        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
        inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
        inline VSwitchInfos& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline VSwitchInfos& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitchInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The VSwitch IDs.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->burstNum_ == nullptr
        && this->status_ == nullptr && this->vSwitchInfos_ == nullptr; };
      // burstNum Field Functions 
      bool hasBurstNum() const { return this->burstNum_ != nullptr;};
      void deleteBurstNum() { this->burstNum_ = nullptr;};
      inline int32_t getBurstNum() const { DARABONBA_PTR_GET_DEFAULT(burstNum_, 0) };
      inline AutoScaleConfig& setBurstNum(int32_t burstNum) { DARABONBA_PTR_SET_VALUE(burstNum_, burstNum) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AutoScaleConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchInfos Field Functions 
      bool hasVSwitchInfos() const { return this->vSwitchInfos_ != nullptr;};
      void deleteVSwitchInfos() { this->vSwitchInfos_ = nullptr;};
      inline const vector<AutoScaleConfig::VSwitchInfos> & getVSwitchInfos() const { DARABONBA_PTR_GET_CONST(vSwitchInfos_, vector<AutoScaleConfig::VSwitchInfos>) };
      inline vector<AutoScaleConfig::VSwitchInfos> getVSwitchInfos() { DARABONBA_PTR_GET(vSwitchInfos_, vector<AutoScaleConfig::VSwitchInfos>) };
      inline AutoScaleConfig& setVSwitchInfos(const vector<AutoScaleConfig::VSwitchInfos> & vSwitchInfos) { DARABONBA_PTR_SET_VALUE(vSwitchInfos_, vSwitchInfos) };
      inline AutoScaleConfig& setVSwitchInfos(vector<AutoScaleConfig::VSwitchInfos> && vSwitchInfos) { DARABONBA_PTR_SET_RVALUE(vSwitchInfos_, vSwitchInfos) };


    protected:
      // The number of burstable nodes for autoscaling.
      shared_ptr<int32_t> burstNum_ {};
      // Specifies whether to enable or disable autoscaling. Valid values: `enable` and `disable`.
      shared_ptr<string> status_ {};
      // Information about the VSwitches.
      shared_ptr<vector<AutoScaleConfig::VSwitchInfos>> vSwitchInfos_ {};
    };

    virtual bool empty() const override { return this->autoScaleConfig_ == nullptr
        && this->computingGroupId_ == nullptr && this->DBInstanceId_ == nullptr && this->nodeCount_ == nullptr && this->nodeScaleMax_ == nullptr && this->nodeScaleMin_ == nullptr
        && this->regionId_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->storageQuota_ == nullptr && this->storageType_ == nullptr; };
    // autoScaleConfig Field Functions 
    bool hasAutoScaleConfig() const { return this->autoScaleConfig_ != nullptr;};
    void deleteAutoScaleConfig() { this->autoScaleConfig_ = nullptr;};
    inline const ModifyDBInstanceClassRequest::AutoScaleConfig & getAutoScaleConfig() const { DARABONBA_PTR_GET_CONST(autoScaleConfig_, ModifyDBInstanceClassRequest::AutoScaleConfig) };
    inline ModifyDBInstanceClassRequest::AutoScaleConfig getAutoScaleConfig() { DARABONBA_PTR_GET(autoScaleConfig_, ModifyDBInstanceClassRequest::AutoScaleConfig) };
    inline ModifyDBInstanceClassRequest& setAutoScaleConfig(const ModifyDBInstanceClassRequest::AutoScaleConfig & autoScaleConfig) { DARABONBA_PTR_SET_VALUE(autoScaleConfig_, autoScaleConfig) };
    inline ModifyDBInstanceClassRequest& setAutoScaleConfig(ModifyDBInstanceClassRequest::AutoScaleConfig && autoScaleConfig) { DARABONBA_PTR_SET_RVALUE(autoScaleConfig_, autoScaleConfig) };


    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline ModifyDBInstanceClassRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceClassRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline ModifyDBInstanceClassRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeScaleMax Field Functions 
    bool hasNodeScaleMax() const { return this->nodeScaleMax_ != nullptr;};
    void deleteNodeScaleMax() { this->nodeScaleMax_ = nullptr;};
    inline int32_t getNodeScaleMax() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMax_, 0) };
    inline ModifyDBInstanceClassRequest& setNodeScaleMax(int32_t nodeScaleMax) { DARABONBA_PTR_SET_VALUE(nodeScaleMax_, nodeScaleMax) };


    // nodeScaleMin Field Functions 
    bool hasNodeScaleMin() const { return this->nodeScaleMin_ != nullptr;};
    void deleteNodeScaleMin() { this->nodeScaleMin_ = nullptr;};
    inline int32_t getNodeScaleMin() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMin_, 0) };
    inline ModifyDBInstanceClassRequest& setNodeScaleMin(int32_t nodeScaleMin) { DARABONBA_PTR_SET_VALUE(nodeScaleMin_, nodeScaleMin) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBInstanceClassRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline int64_t getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0L) };
    inline ModifyDBInstanceClassRequest& setScaleMax(int64_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline int64_t getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0L) };
    inline ModifyDBInstanceClassRequest& setScaleMin(int64_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // storageQuota Field Functions 
    bool hasStorageQuota() const { return this->storageQuota_ != nullptr;};
    void deleteStorageQuota() { this->storageQuota_ = nullptr;};
    inline int64_t getStorageQuota() const { DARABONBA_PTR_GET_DEFAULT(storageQuota_, 0L) };
    inline ModifyDBInstanceClassRequest& setStorageQuota(int64_t storageQuota) { DARABONBA_PTR_SET_VALUE(storageQuota_, storageQuota) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ModifyDBInstanceClassRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The autoscaling configuration for the compute group.
    shared_ptr<ModifyDBInstanceClassRequest::AutoScaleConfig> autoScaleConfig_ {};
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
