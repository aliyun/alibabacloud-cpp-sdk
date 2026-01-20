// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
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
  class CreateDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBTimeZone, DBTimeZone_);
      DARABONBA_PTR_TO_JSON(DeploySchema, deploySchema_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeScaleMax, nodeScaleMax_);
      DARABONBA_PTR_TO_JSON(NodeScaleMin, nodeScaleMin_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(SourceDBInstanceId, sourceDBInstanceId_);
      DARABONBA_PTR_TO_JSON(StorageQuota, storageQuota_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBTimeZone, DBTimeZone_);
      DARABONBA_PTR_FROM_JSON(DeploySchema, deploySchema_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeScaleMax, nodeScaleMax_);
      DARABONBA_PTR_FROM_JSON(NodeScaleMin, nodeScaleMin_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(SourceDBInstanceId, sourceDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(StorageQuota, storageQuota_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBInstanceRequest() = default ;
    CreateDBInstanceRequest(const CreateDBInstanceRequest &) = default ;
    CreateDBInstanceRequest(CreateDBInstanceRequest &&) = default ;
    CreateDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceRequest() = default ;
    CreateDBInstanceRequest& operator=(const CreateDBInstanceRequest &) = default ;
    CreateDBInstanceRequest& operator=(CreateDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class MultiZone : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiZone& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, MultiZone& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      MultiZone() = default ;
      MultiZone(const MultiZone &) = default ;
      MultiZone(MultiZone &&) = default ;
      MultiZone(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiZone() = default ;
      MultiZone& operator=(const MultiZone &) = default ;
      MultiZone& operator=(MultiZone &&) = default ;
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
      inline MultiZone& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline MultiZone& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline MultiZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The vSwitch IDs.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && this->category_ == nullptr && this->clientToken_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBTimeZone_ == nullptr && this->deploySchema_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->multiZone_ == nullptr && this->nodeCount_ == nullptr && this->nodeScaleMax_ == nullptr
        && this->nodeScaleMin_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr
        && this->sourceDBInstanceId_ == nullptr && this->storageQuota_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateDBInstanceRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateDBInstanceRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBTimeZone Field Functions 
    bool hasDBTimeZone() const { return this->DBTimeZone_ != nullptr;};
    void deleteDBTimeZone() { this->DBTimeZone_ = nullptr;};
    inline string getDBTimeZone() const { DARABONBA_PTR_GET_DEFAULT(DBTimeZone_, "") };
    inline CreateDBInstanceRequest& setDBTimeZone(string DBTimeZone) { DARABONBA_PTR_SET_VALUE(DBTimeZone_, DBTimeZone) };


    // deploySchema Field Functions 
    bool hasDeploySchema() const { return this->deploySchema_ != nullptr;};
    void deleteDeploySchema() { this->deploySchema_ = nullptr;};
    inline string getDeploySchema() const { DARABONBA_PTR_GET_DEFAULT(deploySchema_, "") };
    inline CreateDBInstanceRequest& setDeploySchema(string deploySchema) { DARABONBA_PTR_SET_VALUE(deploySchema_, deploySchema) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // multiZone Field Functions 
    bool hasMultiZone() const { return this->multiZone_ != nullptr;};
    void deleteMultiZone() { this->multiZone_ = nullptr;};
    inline const vector<CreateDBInstanceRequest::MultiZone> & getMultiZone() const { DARABONBA_PTR_GET_CONST(multiZone_, vector<CreateDBInstanceRequest::MultiZone>) };
    inline vector<CreateDBInstanceRequest::MultiZone> getMultiZone() { DARABONBA_PTR_GET(multiZone_, vector<CreateDBInstanceRequest::MultiZone>) };
    inline CreateDBInstanceRequest& setMultiZone(const vector<CreateDBInstanceRequest::MultiZone> & multiZone) { DARABONBA_PTR_SET_VALUE(multiZone_, multiZone) };
    inline CreateDBInstanceRequest& setMultiZone(vector<CreateDBInstanceRequest::MultiZone> && multiZone) { DARABONBA_PTR_SET_RVALUE(multiZone_, multiZone) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CreateDBInstanceRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeScaleMax Field Functions 
    bool hasNodeScaleMax() const { return this->nodeScaleMax_ != nullptr;};
    void deleteNodeScaleMax() { this->nodeScaleMax_ = nullptr;};
    inline int32_t getNodeScaleMax() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMax_, 0) };
    inline CreateDBInstanceRequest& setNodeScaleMax(int32_t nodeScaleMax) { DARABONBA_PTR_SET_VALUE(nodeScaleMax_, nodeScaleMax) };


    // nodeScaleMin Field Functions 
    bool hasNodeScaleMin() const { return this->nodeScaleMin_ != nullptr;};
    void deleteNodeScaleMin() { this->nodeScaleMin_ = nullptr;};
    inline int32_t getNodeScaleMin() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMin_, 0) };
    inline CreateDBInstanceRequest& setNodeScaleMin(int32_t nodeScaleMin) { DARABONBA_PTR_SET_VALUE(nodeScaleMin_, nodeScaleMin) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline CreateDBInstanceRequest& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline CreateDBInstanceRequest& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // sourceDBInstanceId Field Functions 
    bool hasSourceDBInstanceId() const { return this->sourceDBInstanceId_ != nullptr;};
    void deleteSourceDBInstanceId() { this->sourceDBInstanceId_ = nullptr;};
    inline string getSourceDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBInstanceId_, "") };
    inline CreateDBInstanceRequest& setSourceDBInstanceId(string sourceDBInstanceId) { DARABONBA_PTR_SET_VALUE(sourceDBInstanceId_, sourceDBInstanceId) };


    // storageQuota Field Functions 
    bool hasStorageQuota() const { return this->storageQuota_ != nullptr;};
    void deleteStorageQuota() { this->storageQuota_ = nullptr;};
    inline int64_t getStorageQuota() const { DARABONBA_PTR_GET_DEFAULT(storageQuota_, 0L) };
    inline CreateDBInstanceRequest& setStorageQuota(int64_t storageQuota) { DARABONBA_PTR_SET_VALUE(storageQuota_, storageQuota) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateDBInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateDBInstanceRequest::Tags>) };
    inline vector<CreateDBInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateDBInstanceRequest::Tags>) };
    inline CreateDBInstanceRequest& setTags(const vector<CreateDBInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateDBInstanceRequest& setTags(vector<CreateDBInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateDBInstanceRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The backup set ID.
    shared_ptr<string> backupSetId_ {};
    shared_ptr<string> category_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token. Make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The cluster description.
    shared_ptr<string> DBInstanceDescription_ {};
    shared_ptr<string> DBTimeZone_ {};
    // The deployment status of the cluster.
    shared_ptr<string> deploySchema_ {};
    // The engine type.
    shared_ptr<string> engine_ {};
    // The engine version.
    shared_ptr<string> engineVersion_ {};
    // The configurations of multi-zone deployment.
    shared_ptr<vector<CreateDBInstanceRequest::MultiZone>> multiZone_ {};
    shared_ptr<int32_t> nodeCount_ {};
    shared_ptr<int32_t> nodeScaleMax_ {};
    shared_ptr<int32_t> nodeScaleMin_ {};
    // The region ID
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The maximum capacity for auto scaling.
    shared_ptr<string> scaleMax_ {};
    // The minimum capacity for auto scaling.
    shared_ptr<string> scaleMin_ {};
    // The cluster ID.
    shared_ptr<string> sourceDBInstanceId_ {};
    shared_ptr<int64_t> storageQuota_ {};
    shared_ptr<string> storageType_ {};
    shared_ptr<vector<CreateDBInstanceRequest::Tags>> tags_ {};
    // The virtual private cloud (VPC) ID.
    shared_ptr<string> vpcId_ {};
    // The vSwitch ID.
    shared_ptr<string> vswitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
