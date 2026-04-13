// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class InstanceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ha, ha_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(multiZoneMode, multiZoneMode_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(runningTime, runningTime_);
      DARABONBA_PTR_TO_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ha, ha_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(multiZoneMode, multiZoneMode_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(runningTime, runningTime_);
      DARABONBA_PTR_FROM_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    InstanceDetail() = default ;
    InstanceDetail(const InstanceDetail &) = default ;
    InstanceDetail(InstanceDetail &&) = default ;
    InstanceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceDetail() = default ;
    InstanceDetail& operator=(const InstanceDetail &) = default ;
    InstanceDetail& operator=(InstanceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
        DARABONBA_PTR_TO_JSON(vswId, vswId_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
        DARABONBA_PTR_FROM_JSON(vswId, vswId_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      VSwitchIds() = default ;
      VSwitchIds(const VSwitchIds &) = default ;
      VSwitchIds(VSwitchIds &&) = default ;
      VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchIds() = default ;
      VSwitchIds& operator=(const VSwitchIds &) = default ;
      VSwitchIds& operator=(VSwitchIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vswId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline VSwitchIds& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VSwitchIds& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> vswId_ {};
      shared_ptr<string> zoneId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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

    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(cuNum, cuNum_);
        DARABONBA_PTR_TO_JSON(cuType, cuType_);
        DARABONBA_PTR_TO_JSON(diskSizeType, diskSizeType_);
        DARABONBA_PTR_TO_JSON(payType, payType_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(cuNum, cuNum_);
        DARABONBA_PTR_FROM_JSON(cuType, cuType_);
        DARABONBA_PTR_FROM_JSON(diskSizeType, diskSizeType_);
        DARABONBA_PTR_FROM_JSON(payType, payType_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cuNum_ == nullptr
        && this->cuType_ == nullptr && this->diskSizeType_ == nullptr && this->payType_ == nullptr && this->replica_ == nullptr && this->type_ == nullptr; };
      // cuNum Field Functions 
      bool hasCuNum() const { return this->cuNum_ != nullptr;};
      void deleteCuNum() { this->cuNum_ = nullptr;};
      inline int32_t getCuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
      inline Components& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


      // cuType Field Functions 
      bool hasCuType() const { return this->cuType_ != nullptr;};
      void deleteCuType() { this->cuType_ = nullptr;};
      inline string getCuType() const { DARABONBA_PTR_GET_DEFAULT(cuType_, "") };
      inline Components& setCuType(string cuType) { DARABONBA_PTR_SET_VALUE(cuType_, cuType) };


      // diskSizeType Field Functions 
      bool hasDiskSizeType() const { return this->diskSizeType_ != nullptr;};
      void deleteDiskSizeType() { this->diskSizeType_ = nullptr;};
      inline string getDiskSizeType() const { DARABONBA_PTR_GET_DEFAULT(diskSizeType_, "") };
      inline Components& setDiskSizeType(string diskSizeType) { DARABONBA_PTR_SET_VALUE(diskSizeType_, diskSizeType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Components& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Components& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Components& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int32_t> cuNum_ {};
      shared_ptr<string> cuType_ {};
      shared_ptr<string> diskSizeType_ {};
      shared_ptr<string> payType_ {};
      shared_ptr<int32_t> replica_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->autoBackup_ == nullptr
        && this->components_ == nullptr && this->configuration_ == nullptr && this->createTime_ == nullptr && this->dbVersion_ == nullptr && this->encrypted_ == nullptr
        && this->expireTime_ == nullptr && this->ha_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->kmsKeyId_ == nullptr
        && this->multiZoneMode_ == nullptr && this->orderId_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->runningTime_ == nullptr && this->securityGroupIds_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoBackup Field Functions 
    bool hasAutoBackup() const { return this->autoBackup_ != nullptr;};
    void deleteAutoBackup() { this->autoBackup_ = nullptr;};
    inline bool getAutoBackup() const { DARABONBA_PTR_GET_DEFAULT(autoBackup_, false) };
    inline InstanceDetail& setAutoBackup(bool autoBackup) { DARABONBA_PTR_SET_VALUE(autoBackup_, autoBackup) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<InstanceDetail::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<InstanceDetail::Components>) };
    inline vector<InstanceDetail::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<InstanceDetail::Components>) };
    inline InstanceDetail& setComponents(const vector<InstanceDetail::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline InstanceDetail& setComponents(vector<InstanceDetail::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline InstanceDetail& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline InstanceDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline InstanceDetail& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline InstanceDetail& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline InstanceDetail& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline InstanceDetail& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InstanceDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline InstanceDetail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline InstanceDetail& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // multiZoneMode Field Functions 
    bool hasMultiZoneMode() const { return this->multiZoneMode_ != nullptr;};
    void deleteMultiZoneMode() { this->multiZoneMode_ = nullptr;};
    inline string getMultiZoneMode() const { DARABONBA_PTR_GET_DEFAULT(multiZoneMode_, "") };
    inline InstanceDetail& setMultiZoneMode(string multiZoneMode) { DARABONBA_PTR_SET_VALUE(multiZoneMode_, multiZoneMode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline InstanceDetail& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline InstanceDetail& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstanceDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InstanceDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline InstanceDetail& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline InstanceDetail& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline InstanceDetail& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InstanceDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<InstanceDetail::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InstanceDetail::Tags>) };
    inline vector<InstanceDetail::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InstanceDetail::Tags>) };
    inline InstanceDetail& setTags(const vector<InstanceDetail::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline InstanceDetail& setTags(vector<InstanceDetail::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<InstanceDetail::VSwitchIds> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<InstanceDetail::VSwitchIds>) };
    inline vector<InstanceDetail::VSwitchIds> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<InstanceDetail::VSwitchIds>) };
    inline InstanceDetail& setVSwitchIds(const vector<InstanceDetail::VSwitchIds> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline InstanceDetail& setVSwitchIds(vector<InstanceDetail::VSwitchIds> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline InstanceDetail& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline InstanceDetail& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<bool> autoBackup_ {};
    shared_ptr<vector<InstanceDetail::Components>> components_ {};
    shared_ptr<string> configuration_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> createTime_ {};
    shared_ptr<string> dbVersion_ {};
    shared_ptr<bool> encrypted_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> expireTime_ {};
    shared_ptr<bool> ha_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    // kms key Id。
    shared_ptr<string> kmsKeyId_ {};
    shared_ptr<string> multiZoneMode_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> runningTime_ {};
    shared_ptr<vector<string>> securityGroupIds_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<InstanceDetail::Tags>> tags_ {};
    shared_ptr<vector<InstanceDetail::VSwitchIds>> vSwitchIds_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
