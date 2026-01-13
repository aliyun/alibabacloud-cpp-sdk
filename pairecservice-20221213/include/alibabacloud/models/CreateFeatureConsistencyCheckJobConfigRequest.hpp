// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateFeatureConsistencyCheckJobConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureConsistencyCheckJobConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompareFeature, compareFeature_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetMountPath, datasetMountPath_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(DatasetUri, datasetUri_);
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(EasyRecPackagePath, easyRecPackagePath_);
      DARABONBA_PTR_TO_JSON(EasyRecVersion, easyRecVersion_);
      DARABONBA_PTR_TO_JSON(FeatureDisplayExclude, featureDisplayExclude_);
      DARABONBA_PTR_TO_JSON(FeatureLandingResourceId, featureLandingResourceId_);
      DARABONBA_PTR_TO_JSON(FeaturePriority, featurePriority_);
      DARABONBA_PTR_TO_JSON(FeatureStoreItemId, featureStoreItemId_);
      DARABONBA_PTR_TO_JSON(FeatureStoreModelId, featureStoreModelId_);
      DARABONBA_PTR_TO_JSON(FeatureStoreProjectId, featureStoreProjectId_);
      DARABONBA_PTR_TO_JSON(FeatureStoreProjectName, featureStoreProjectName_);
      DARABONBA_PTR_TO_JSON(FeatureStoreSeqFeatureView, featureStoreSeqFeatureView_);
      DARABONBA_PTR_TO_JSON(FeatureStoreUserId, featureStoreUserId_);
      DARABONBA_PTR_TO_JSON(FgJarVersion, fgJarVersion_);
      DARABONBA_PTR_TO_JSON(FgJsonFileName, fgJsonFileName_);
      DARABONBA_PTR_TO_JSON(GenerateZip, generateZip_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemIdField, itemIdField_);
      DARABONBA_PTR_TO_JSON(ItemTable, itemTable_);
      DARABONBA_PTR_TO_JSON(ItemTablePartitionField, itemTablePartitionField_);
      DARABONBA_PTR_TO_JSON(ItemTablePartitionFieldFormat, itemTablePartitionFieldFormat_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssResourceId, ossResourceId_);
      DARABONBA_PTR_TO_JSON(PredictWorkerCount, predictWorkerCount_);
      DARABONBA_PTR_TO_JSON(PredictWorkerCpu, predictWorkerCpu_);
      DARABONBA_PTR_TO_JSON(PredictWorkerMemory, predictWorkerMemory_);
      DARABONBA_PTR_TO_JSON(ResourceConfig, resourceConfig_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(UseFeatureStore, useFeatureStore_);
      DARABONBA_PTR_TO_JSON(UserIdField, userIdField_);
      DARABONBA_PTR_TO_JSON(UserTable, userTable_);
      DARABONBA_PTR_TO_JSON(UserTablePartitionField, userTablePartitionField_);
      DARABONBA_PTR_TO_JSON(UserTablePartitionFieldFormat, userTablePartitionFieldFormat_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureConsistencyCheckJobConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompareFeature, compareFeature_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetMountPath, datasetMountPath_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(DatasetUri, datasetUri_);
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(EasyRecPackagePath, easyRecPackagePath_);
      DARABONBA_PTR_FROM_JSON(EasyRecVersion, easyRecVersion_);
      DARABONBA_PTR_FROM_JSON(FeatureDisplayExclude, featureDisplayExclude_);
      DARABONBA_PTR_FROM_JSON(FeatureLandingResourceId, featureLandingResourceId_);
      DARABONBA_PTR_FROM_JSON(FeaturePriority, featurePriority_);
      DARABONBA_PTR_FROM_JSON(FeatureStoreItemId, featureStoreItemId_);
      DARABONBA_PTR_FROM_JSON(FeatureStoreModelId, featureStoreModelId_);
      DARABONBA_PTR_FROM_JSON(FeatureStoreProjectId, featureStoreProjectId_);
      DARABONBA_PTR_FROM_JSON(FeatureStoreProjectName, featureStoreProjectName_);
      DARABONBA_PTR_FROM_JSON(FeatureStoreSeqFeatureView, featureStoreSeqFeatureView_);
      DARABONBA_PTR_FROM_JSON(FeatureStoreUserId, featureStoreUserId_);
      DARABONBA_PTR_FROM_JSON(FgJarVersion, fgJarVersion_);
      DARABONBA_PTR_FROM_JSON(FgJsonFileName, fgJsonFileName_);
      DARABONBA_PTR_FROM_JSON(GenerateZip, generateZip_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemIdField, itemIdField_);
      DARABONBA_PTR_FROM_JSON(ItemTable, itemTable_);
      DARABONBA_PTR_FROM_JSON(ItemTablePartitionField, itemTablePartitionField_);
      DARABONBA_PTR_FROM_JSON(ItemTablePartitionFieldFormat, itemTablePartitionFieldFormat_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssResourceId, ossResourceId_);
      DARABONBA_PTR_FROM_JSON(PredictWorkerCount, predictWorkerCount_);
      DARABONBA_PTR_FROM_JSON(PredictWorkerCpu, predictWorkerCpu_);
      DARABONBA_PTR_FROM_JSON(PredictWorkerMemory, predictWorkerMemory_);
      DARABONBA_PTR_FROM_JSON(ResourceConfig, resourceConfig_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(UseFeatureStore, useFeatureStore_);
      DARABONBA_PTR_FROM_JSON(UserIdField, userIdField_);
      DARABONBA_PTR_FROM_JSON(UserTable, userTable_);
      DARABONBA_PTR_FROM_JSON(UserTablePartitionField, userTablePartitionField_);
      DARABONBA_PTR_FROM_JSON(UserTablePartitionFieldFormat, userTablePartitionFieldFormat_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateFeatureConsistencyCheckJobConfigRequest() = default ;
    CreateFeatureConsistencyCheckJobConfigRequest(const CreateFeatureConsistencyCheckJobConfigRequest &) = default ;
    CreateFeatureConsistencyCheckJobConfigRequest(CreateFeatureConsistencyCheckJobConfigRequest &&) = default ;
    CreateFeatureConsistencyCheckJobConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureConsistencyCheckJobConfigRequest() = default ;
    CreateFeatureConsistencyCheckJobConfigRequest& operator=(const CreateFeatureConsistencyCheckJobConfigRequest &) = default ;
    CreateFeatureConsistencyCheckJobConfigRequest& operator=(CreateFeatureConsistencyCheckJobConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compareFeature_ == nullptr
        && this->datasetId_ == nullptr && this->datasetMountPath_ == nullptr && this->datasetName_ == nullptr && this->datasetType_ == nullptr && this->datasetUri_ == nullptr
        && this->defaultRoute_ == nullptr && this->easServiceName_ == nullptr && this->easyRecPackagePath_ == nullptr && this->easyRecVersion_ == nullptr && this->featureDisplayExclude_ == nullptr
        && this->featureLandingResourceId_ == nullptr && this->featurePriority_ == nullptr && this->featureStoreItemId_ == nullptr && this->featureStoreModelId_ == nullptr && this->featureStoreProjectId_ == nullptr
        && this->featureStoreProjectName_ == nullptr && this->featureStoreSeqFeatureView_ == nullptr && this->featureStoreUserId_ == nullptr && this->fgJarVersion_ == nullptr && this->fgJsonFileName_ == nullptr
        && this->generateZip_ == nullptr && this->instanceId_ == nullptr && this->itemIdField_ == nullptr && this->itemTable_ == nullptr && this->itemTablePartitionField_ == nullptr
        && this->itemTablePartitionFieldFormat_ == nullptr && this->name_ == nullptr && this->ossResourceId_ == nullptr && this->predictWorkerCount_ == nullptr && this->predictWorkerCpu_ == nullptr
        && this->predictWorkerMemory_ == nullptr && this->resourceConfig_ == nullptr && this->sampleRate_ == nullptr && this->sceneId_ == nullptr && this->securityGroupId_ == nullptr
        && this->serviceId_ == nullptr && this->switchId_ == nullptr && this->useFeatureStore_ == nullptr && this->userIdField_ == nullptr && this->userTable_ == nullptr
        && this->userTablePartitionField_ == nullptr && this->userTablePartitionFieldFormat_ == nullptr && this->vpcId_ == nullptr && this->workflowName_ == nullptr && this->workspaceId_ == nullptr; };
    // compareFeature Field Functions 
    bool hasCompareFeature() const { return this->compareFeature_ != nullptr;};
    void deleteCompareFeature() { this->compareFeature_ = nullptr;};
    inline bool getCompareFeature() const { DARABONBA_PTR_GET_DEFAULT(compareFeature_, false) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setCompareFeature(bool compareFeature) { DARABONBA_PTR_SET_VALUE(compareFeature_, compareFeature) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetMountPath Field Functions 
    bool hasDatasetMountPath() const { return this->datasetMountPath_ != nullptr;};
    void deleteDatasetMountPath() { this->datasetMountPath_ = nullptr;};
    inline string getDatasetMountPath() const { DARABONBA_PTR_GET_DEFAULT(datasetMountPath_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setDatasetMountPath(string datasetMountPath) { DARABONBA_PTR_SET_VALUE(datasetMountPath_, datasetMountPath) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // datasetUri Field Functions 
    bool hasDatasetUri() const { return this->datasetUri_ != nullptr;};
    void deleteDatasetUri() { this->datasetUri_ = nullptr;};
    inline string getDatasetUri() const { DARABONBA_PTR_GET_DEFAULT(datasetUri_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setDatasetUri(string datasetUri) { DARABONBA_PTR_SET_VALUE(datasetUri_, datasetUri) };


    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string getEasServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // easyRecPackagePath Field Functions 
    bool hasEasyRecPackagePath() const { return this->easyRecPackagePath_ != nullptr;};
    void deleteEasyRecPackagePath() { this->easyRecPackagePath_ = nullptr;};
    inline string getEasyRecPackagePath() const { DARABONBA_PTR_GET_DEFAULT(easyRecPackagePath_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setEasyRecPackagePath(string easyRecPackagePath) { DARABONBA_PTR_SET_VALUE(easyRecPackagePath_, easyRecPackagePath) };


    // easyRecVersion Field Functions 
    bool hasEasyRecVersion() const { return this->easyRecVersion_ != nullptr;};
    void deleteEasyRecVersion() { this->easyRecVersion_ = nullptr;};
    inline string getEasyRecVersion() const { DARABONBA_PTR_GET_DEFAULT(easyRecVersion_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setEasyRecVersion(string easyRecVersion) { DARABONBA_PTR_SET_VALUE(easyRecVersion_, easyRecVersion) };


    // featureDisplayExclude Field Functions 
    bool hasFeatureDisplayExclude() const { return this->featureDisplayExclude_ != nullptr;};
    void deleteFeatureDisplayExclude() { this->featureDisplayExclude_ = nullptr;};
    inline string getFeatureDisplayExclude() const { DARABONBA_PTR_GET_DEFAULT(featureDisplayExclude_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureDisplayExclude(string featureDisplayExclude) { DARABONBA_PTR_SET_VALUE(featureDisplayExclude_, featureDisplayExclude) };


    // featureLandingResourceId Field Functions 
    bool hasFeatureLandingResourceId() const { return this->featureLandingResourceId_ != nullptr;};
    void deleteFeatureLandingResourceId() { this->featureLandingResourceId_ = nullptr;};
    inline string getFeatureLandingResourceId() const { DARABONBA_PTR_GET_DEFAULT(featureLandingResourceId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureLandingResourceId(string featureLandingResourceId) { DARABONBA_PTR_SET_VALUE(featureLandingResourceId_, featureLandingResourceId) };


    // featurePriority Field Functions 
    bool hasFeaturePriority() const { return this->featurePriority_ != nullptr;};
    void deleteFeaturePriority() { this->featurePriority_ = nullptr;};
    inline string getFeaturePriority() const { DARABONBA_PTR_GET_DEFAULT(featurePriority_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeaturePriority(string featurePriority) { DARABONBA_PTR_SET_VALUE(featurePriority_, featurePriority) };


    // featureStoreItemId Field Functions 
    bool hasFeatureStoreItemId() const { return this->featureStoreItemId_ != nullptr;};
    void deleteFeatureStoreItemId() { this->featureStoreItemId_ = nullptr;};
    inline string getFeatureStoreItemId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreItemId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreItemId(string featureStoreItemId) { DARABONBA_PTR_SET_VALUE(featureStoreItemId_, featureStoreItemId) };


    // featureStoreModelId Field Functions 
    bool hasFeatureStoreModelId() const { return this->featureStoreModelId_ != nullptr;};
    void deleteFeatureStoreModelId() { this->featureStoreModelId_ = nullptr;};
    inline string getFeatureStoreModelId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreModelId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreModelId(string featureStoreModelId) { DARABONBA_PTR_SET_VALUE(featureStoreModelId_, featureStoreModelId) };


    // featureStoreProjectId Field Functions 
    bool hasFeatureStoreProjectId() const { return this->featureStoreProjectId_ != nullptr;};
    void deleteFeatureStoreProjectId() { this->featureStoreProjectId_ = nullptr;};
    inline string getFeatureStoreProjectId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreProjectId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreProjectId(string featureStoreProjectId) { DARABONBA_PTR_SET_VALUE(featureStoreProjectId_, featureStoreProjectId) };


    // featureStoreProjectName Field Functions 
    bool hasFeatureStoreProjectName() const { return this->featureStoreProjectName_ != nullptr;};
    void deleteFeatureStoreProjectName() { this->featureStoreProjectName_ = nullptr;};
    inline string getFeatureStoreProjectName() const { DARABONBA_PTR_GET_DEFAULT(featureStoreProjectName_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreProjectName(string featureStoreProjectName) { DARABONBA_PTR_SET_VALUE(featureStoreProjectName_, featureStoreProjectName) };


    // featureStoreSeqFeatureView Field Functions 
    bool hasFeatureStoreSeqFeatureView() const { return this->featureStoreSeqFeatureView_ != nullptr;};
    void deleteFeatureStoreSeqFeatureView() { this->featureStoreSeqFeatureView_ = nullptr;};
    inline string getFeatureStoreSeqFeatureView() const { DARABONBA_PTR_GET_DEFAULT(featureStoreSeqFeatureView_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreSeqFeatureView(string featureStoreSeqFeatureView) { DARABONBA_PTR_SET_VALUE(featureStoreSeqFeatureView_, featureStoreSeqFeatureView) };


    // featureStoreUserId Field Functions 
    bool hasFeatureStoreUserId() const { return this->featureStoreUserId_ != nullptr;};
    void deleteFeatureStoreUserId() { this->featureStoreUserId_ = nullptr;};
    inline string getFeatureStoreUserId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreUserId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreUserId(string featureStoreUserId) { DARABONBA_PTR_SET_VALUE(featureStoreUserId_, featureStoreUserId) };


    // fgJarVersion Field Functions 
    bool hasFgJarVersion() const { return this->fgJarVersion_ != nullptr;};
    void deleteFgJarVersion() { this->fgJarVersion_ = nullptr;};
    inline string getFgJarVersion() const { DARABONBA_PTR_GET_DEFAULT(fgJarVersion_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFgJarVersion(string fgJarVersion) { DARABONBA_PTR_SET_VALUE(fgJarVersion_, fgJarVersion) };


    // fgJsonFileName Field Functions 
    bool hasFgJsonFileName() const { return this->fgJsonFileName_ != nullptr;};
    void deleteFgJsonFileName() { this->fgJsonFileName_ = nullptr;};
    inline string getFgJsonFileName() const { DARABONBA_PTR_GET_DEFAULT(fgJsonFileName_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setFgJsonFileName(string fgJsonFileName) { DARABONBA_PTR_SET_VALUE(fgJsonFileName_, fgJsonFileName) };


    // generateZip Field Functions 
    bool hasGenerateZip() const { return this->generateZip_ != nullptr;};
    void deleteGenerateZip() { this->generateZip_ = nullptr;};
    inline bool getGenerateZip() const { DARABONBA_PTR_GET_DEFAULT(generateZip_, false) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setGenerateZip(bool generateZip) { DARABONBA_PTR_SET_VALUE(generateZip_, generateZip) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemIdField Field Functions 
    bool hasItemIdField() const { return this->itemIdField_ != nullptr;};
    void deleteItemIdField() { this->itemIdField_ = nullptr;};
    inline string getItemIdField() const { DARABONBA_PTR_GET_DEFAULT(itemIdField_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setItemIdField(string itemIdField) { DARABONBA_PTR_SET_VALUE(itemIdField_, itemIdField) };


    // itemTable Field Functions 
    bool hasItemTable() const { return this->itemTable_ != nullptr;};
    void deleteItemTable() { this->itemTable_ = nullptr;};
    inline string getItemTable() const { DARABONBA_PTR_GET_DEFAULT(itemTable_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setItemTable(string itemTable) { DARABONBA_PTR_SET_VALUE(itemTable_, itemTable) };


    // itemTablePartitionField Field Functions 
    bool hasItemTablePartitionField() const { return this->itemTablePartitionField_ != nullptr;};
    void deleteItemTablePartitionField() { this->itemTablePartitionField_ = nullptr;};
    inline string getItemTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(itemTablePartitionField_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setItemTablePartitionField(string itemTablePartitionField) { DARABONBA_PTR_SET_VALUE(itemTablePartitionField_, itemTablePartitionField) };


    // itemTablePartitionFieldFormat Field Functions 
    bool hasItemTablePartitionFieldFormat() const { return this->itemTablePartitionFieldFormat_ != nullptr;};
    void deleteItemTablePartitionFieldFormat() { this->itemTablePartitionFieldFormat_ = nullptr;};
    inline string getItemTablePartitionFieldFormat() const { DARABONBA_PTR_GET_DEFAULT(itemTablePartitionFieldFormat_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setItemTablePartitionFieldFormat(string itemTablePartitionFieldFormat) { DARABONBA_PTR_SET_VALUE(itemTablePartitionFieldFormat_, itemTablePartitionFieldFormat) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossResourceId Field Functions 
    bool hasOssResourceId() const { return this->ossResourceId_ != nullptr;};
    void deleteOssResourceId() { this->ossResourceId_ = nullptr;};
    inline string getOssResourceId() const { DARABONBA_PTR_GET_DEFAULT(ossResourceId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setOssResourceId(string ossResourceId) { DARABONBA_PTR_SET_VALUE(ossResourceId_, ossResourceId) };


    // predictWorkerCount Field Functions 
    bool hasPredictWorkerCount() const { return this->predictWorkerCount_ != nullptr;};
    void deletePredictWorkerCount() { this->predictWorkerCount_ = nullptr;};
    inline int32_t getPredictWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(predictWorkerCount_, 0) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setPredictWorkerCount(int32_t predictWorkerCount) { DARABONBA_PTR_SET_VALUE(predictWorkerCount_, predictWorkerCount) };


    // predictWorkerCpu Field Functions 
    bool hasPredictWorkerCpu() const { return this->predictWorkerCpu_ != nullptr;};
    void deletePredictWorkerCpu() { this->predictWorkerCpu_ = nullptr;};
    inline int32_t getPredictWorkerCpu() const { DARABONBA_PTR_GET_DEFAULT(predictWorkerCpu_, 0) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setPredictWorkerCpu(int32_t predictWorkerCpu) { DARABONBA_PTR_SET_VALUE(predictWorkerCpu_, predictWorkerCpu) };


    // predictWorkerMemory Field Functions 
    bool hasPredictWorkerMemory() const { return this->predictWorkerMemory_ != nullptr;};
    void deletePredictWorkerMemory() { this->predictWorkerMemory_ = nullptr;};
    inline int32_t getPredictWorkerMemory() const { DARABONBA_PTR_GET_DEFAULT(predictWorkerMemory_, 0) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setPredictWorkerMemory(int32_t predictWorkerMemory) { DARABONBA_PTR_SET_VALUE(predictWorkerMemory_, predictWorkerMemory) };


    // resourceConfig Field Functions 
    bool hasResourceConfig() const { return this->resourceConfig_ != nullptr;};
    void deleteResourceConfig() { this->resourceConfig_ = nullptr;};
    inline string getResourceConfig() const { DARABONBA_PTR_GET_DEFAULT(resourceConfig_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setResourceConfig(string resourceConfig) { DARABONBA_PTR_SET_VALUE(resourceConfig_, resourceConfig) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline double getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setSampleRate(double sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // useFeatureStore Field Functions 
    bool hasUseFeatureStore() const { return this->useFeatureStore_ != nullptr;};
    void deleteUseFeatureStore() { this->useFeatureStore_ = nullptr;};
    inline bool getUseFeatureStore() const { DARABONBA_PTR_GET_DEFAULT(useFeatureStore_, false) };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setUseFeatureStore(bool useFeatureStore) { DARABONBA_PTR_SET_VALUE(useFeatureStore_, useFeatureStore) };


    // userIdField Field Functions 
    bool hasUserIdField() const { return this->userIdField_ != nullptr;};
    void deleteUserIdField() { this->userIdField_ = nullptr;};
    inline string getUserIdField() const { DARABONBA_PTR_GET_DEFAULT(userIdField_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setUserIdField(string userIdField) { DARABONBA_PTR_SET_VALUE(userIdField_, userIdField) };


    // userTable Field Functions 
    bool hasUserTable() const { return this->userTable_ != nullptr;};
    void deleteUserTable() { this->userTable_ = nullptr;};
    inline string getUserTable() const { DARABONBA_PTR_GET_DEFAULT(userTable_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setUserTable(string userTable) { DARABONBA_PTR_SET_VALUE(userTable_, userTable) };


    // userTablePartitionField Field Functions 
    bool hasUserTablePartitionField() const { return this->userTablePartitionField_ != nullptr;};
    void deleteUserTablePartitionField() { this->userTablePartitionField_ = nullptr;};
    inline string getUserTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(userTablePartitionField_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setUserTablePartitionField(string userTablePartitionField) { DARABONBA_PTR_SET_VALUE(userTablePartitionField_, userTablePartitionField) };


    // userTablePartitionFieldFormat Field Functions 
    bool hasUserTablePartitionFieldFormat() const { return this->userTablePartitionFieldFormat_ != nullptr;};
    void deleteUserTablePartitionFieldFormat() { this->userTablePartitionFieldFormat_ = nullptr;};
    inline string getUserTablePartitionFieldFormat() const { DARABONBA_PTR_GET_DEFAULT(userTablePartitionFieldFormat_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setUserTablePartitionFieldFormat(string userTablePartitionFieldFormat) { DARABONBA_PTR_SET_VALUE(userTablePartitionFieldFormat_, userTablePartitionFieldFormat) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<bool> compareFeature_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> datasetMountPath_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> datasetType_ {};
    shared_ptr<string> datasetUri_ {};
    shared_ptr<string> defaultRoute_ {};
    // This parameter is required.
    shared_ptr<string> easServiceName_ {};
    shared_ptr<string> easyRecPackagePath_ {};
    shared_ptr<string> easyRecVersion_ {};
    shared_ptr<string> featureDisplayExclude_ {};
    // This parameter is required.
    shared_ptr<string> featureLandingResourceId_ {};
    shared_ptr<string> featurePriority_ {};
    shared_ptr<string> featureStoreItemId_ {};
    shared_ptr<string> featureStoreModelId_ {};
    shared_ptr<string> featureStoreProjectId_ {};
    shared_ptr<string> featureStoreProjectName_ {};
    shared_ptr<string> featureStoreSeqFeatureView_ {};
    shared_ptr<string> featureStoreUserId_ {};
    shared_ptr<string> fgJarVersion_ {};
    // This parameter is required.
    shared_ptr<string> fgJsonFileName_ {};
    // This parameter is required.
    shared_ptr<bool> generateZip_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> itemIdField_ {};
    shared_ptr<string> itemTable_ {};
    shared_ptr<string> itemTablePartitionField_ {};
    shared_ptr<string> itemTablePartitionFieldFormat_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> ossResourceId_ {};
    shared_ptr<int32_t> predictWorkerCount_ {};
    shared_ptr<int32_t> predictWorkerCpu_ {};
    shared_ptr<int32_t> predictWorkerMemory_ {};
    shared_ptr<string> resourceConfig_ {};
    // This parameter is required.
    shared_ptr<double> sampleRate_ {};
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
    shared_ptr<string> securityGroupId_ {};
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    shared_ptr<string> switchId_ {};
    // This parameter is required.
    shared_ptr<bool> useFeatureStore_ {};
    shared_ptr<string> userIdField_ {};
    shared_ptr<string> userTable_ {};
    shared_ptr<string> userTablePartitionField_ {};
    shared_ptr<string> userTablePartitionFieldFormat_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> workflowName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
