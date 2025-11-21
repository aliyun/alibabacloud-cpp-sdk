// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestComponents.hpp>
#include <alibabacloud/models/CreateInstanceRequestTags.hpp>
#include <alibabacloud/models/CreateInstanceRequestVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(dbAdminPassword, dbAdminPassword_);
      DARABONBA_PTR_TO_JSON(dbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ha, ha_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(multiZoneMode, multiZoneMode_);
      DARABONBA_PTR_TO_JSON(paymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(dbAdminPassword, dbAdminPassword_);
      DARABONBA_PTR_FROM_JSON(dbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ha, ha_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(multiZoneMode, multiZoneMode_);
      DARABONBA_PTR_FROM_JSON(paymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->autoBackup_ == nullptr && return this->components_ == nullptr && return this->configuration_ == nullptr && return this->dbAdminPassword_ == nullptr && return this->dbVersion_ == nullptr
        && return this->encrypted_ == nullptr && return this->ha_ == nullptr && return this->instanceName_ == nullptr && return this->kmsKeyId_ == nullptr && return this->multiZoneMode_ == nullptr
        && return this->paymentDuration_ == nullptr && return this->paymentDurationUnit_ == nullptr && return this->paymentType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr
        && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr && return this->clientToken_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // autoBackup Field Functions 
    bool hasAutoBackup() const { return this->autoBackup_ != nullptr;};
    void deleteAutoBackup() { this->autoBackup_ = nullptr;};
    inline bool autoBackup() const { DARABONBA_PTR_GET_DEFAULT(autoBackup_, false) };
    inline CreateInstanceRequest& setAutoBackup(bool autoBackup) { DARABONBA_PTR_SET_VALUE(autoBackup_, autoBackup) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateInstanceRequestComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateInstanceRequestComponents>) };
    inline vector<CreateInstanceRequestComponents> components() { DARABONBA_PTR_GET(components_, vector<CreateInstanceRequestComponents>) };
    inline CreateInstanceRequest& setComponents(const vector<CreateInstanceRequestComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateInstanceRequest& setComponents(vector<CreateInstanceRequestComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string configuration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline CreateInstanceRequest& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // dbAdminPassword Field Functions 
    bool hasDbAdminPassword() const { return this->dbAdminPassword_ != nullptr;};
    void deleteDbAdminPassword() { this->dbAdminPassword_ = nullptr;};
    inline string dbAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(dbAdminPassword_, "") };
    inline CreateInstanceRequest& setDbAdminPassword(string dbAdminPassword) { DARABONBA_PTR_SET_VALUE(dbAdminPassword_, dbAdminPassword) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string dbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline CreateInstanceRequest& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateInstanceRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline CreateInstanceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateInstanceRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // multiZoneMode Field Functions 
    bool hasMultiZoneMode() const { return this->multiZoneMode_ != nullptr;};
    void deleteMultiZoneMode() { this->multiZoneMode_ = nullptr;};
    inline string multiZoneMode() const { DARABONBA_PTR_GET_DEFAULT(multiZoneMode_, "") };
    inline CreateInstanceRequest& setMultiZoneMode(string multiZoneMode) { DARABONBA_PTR_SET_VALUE(multiZoneMode_, multiZoneMode) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline CreateInstanceRequest& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateInstanceRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequestTags>) };
    inline vector<CreateInstanceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequestTags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<CreateInstanceRequestVSwitchIds> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<CreateInstanceRequestVSwitchIds>) };
    inline vector<CreateInstanceRequestVSwitchIds> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<CreateInstanceRequestVSwitchIds>) };
    inline CreateInstanceRequest& setVSwitchIds(const vector<CreateInstanceRequestVSwitchIds> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateInstanceRequest& setVSwitchIds(vector<CreateInstanceRequestVSwitchIds> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> autoBackup_ = nullptr;
    std::shared_ptr<vector<CreateInstanceRequestComponents>> components_ = nullptr;
    std::shared_ptr<string> configuration_ = nullptr;
    std::shared_ptr<string> dbAdminPassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbVersion_ = nullptr;
    std::shared_ptr<bool> encrypted_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    std::shared_ptr<string> multiZoneMode_ = nullptr;
    std::shared_ptr<int32_t> paymentDuration_ = nullptr;
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateInstanceRequestTags>> tags_ = nullptr;
    std::shared_ptr<vector<CreateInstanceRequestVSwitchIds>> vSwitchIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
