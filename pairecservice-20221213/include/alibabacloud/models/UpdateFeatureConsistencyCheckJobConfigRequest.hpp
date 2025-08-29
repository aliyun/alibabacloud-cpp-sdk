// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEATURECONSISTENCYCHECKJOBCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEATURECONSISTENCYCHECKJOBCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateFeatureConsistencyCheckJobConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFeatureConsistencyCheckJobConfigRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(IsUseFeatureStore, isUseFeatureStore_);
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
      DARABONBA_PTR_TO_JSON(UserIdField, userIdField_);
      DARABONBA_PTR_TO_JSON(UserTable, userTable_);
      DARABONBA_PTR_TO_JSON(UserTablePartitionField, userTablePartitionField_);
      DARABONBA_PTR_TO_JSON(UserTablePartitionFieldFormat, userTablePartitionFieldFormat_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFeatureConsistencyCheckJobConfigRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(IsUseFeatureStore, isUseFeatureStore_);
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
      DARABONBA_PTR_FROM_JSON(UserIdField, userIdField_);
      DARABONBA_PTR_FROM_JSON(UserTable, userTable_);
      DARABONBA_PTR_FROM_JSON(UserTablePartitionField, userTablePartitionField_);
      DARABONBA_PTR_FROM_JSON(UserTablePartitionFieldFormat, userTablePartitionFieldFormat_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateFeatureConsistencyCheckJobConfigRequest() = default ;
    UpdateFeatureConsistencyCheckJobConfigRequest(const UpdateFeatureConsistencyCheckJobConfigRequest &) = default ;
    UpdateFeatureConsistencyCheckJobConfigRequest(UpdateFeatureConsistencyCheckJobConfigRequest &&) = default ;
    UpdateFeatureConsistencyCheckJobConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFeatureConsistencyCheckJobConfigRequest() = default ;
    UpdateFeatureConsistencyCheckJobConfigRequest& operator=(const UpdateFeatureConsistencyCheckJobConfigRequest &) = default ;
    UpdateFeatureConsistencyCheckJobConfigRequest& operator=(UpdateFeatureConsistencyCheckJobConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compareFeature_ != nullptr
        && this->datasetId_ != nullptr && this->datasetMountPath_ != nullptr && this->datasetName_ != nullptr && this->datasetType_ != nullptr && this->datasetUri_ != nullptr
        && this->defaultRoute_ != nullptr && this->easServiceName_ != nullptr && this->easyRecPackagePath_ != nullptr && this->easyRecVersion_ != nullptr && this->featureDisplayExclude_ != nullptr
        && this->featureLandingResourceId_ != nullptr && this->featurePriority_ != nullptr && this->featureStoreItemId_ != nullptr && this->featureStoreModelId_ != nullptr && this->featureStoreProjectId_ != nullptr
        && this->featureStoreProjectName_ != nullptr && this->featureStoreSeqFeatureView_ != nullptr && this->featureStoreUserId_ != nullptr && this->fgJarVersion_ != nullptr && this->fgJsonFileName_ != nullptr
        && this->generateZip_ != nullptr && this->instanceId_ != nullptr && this->isUseFeatureStore_ != nullptr && this->itemIdField_ != nullptr && this->itemTable_ != nullptr
        && this->itemTablePartitionField_ != nullptr && this->itemTablePartitionFieldFormat_ != nullptr && this->name_ != nullptr && this->ossResourceId_ != nullptr && this->predictWorkerCount_ != nullptr
        && this->predictWorkerCpu_ != nullptr && this->predictWorkerMemory_ != nullptr && this->resourceConfig_ != nullptr && this->sampleRate_ != nullptr && this->sceneId_ != nullptr
        && this->securityGroupId_ != nullptr && this->serviceId_ != nullptr && this->switchId_ != nullptr && this->userIdField_ != nullptr && this->userTable_ != nullptr
        && this->userTablePartitionField_ != nullptr && this->userTablePartitionFieldFormat_ != nullptr && this->vpcId_ != nullptr && this->workflowName_ != nullptr && this->workspaceId_ != nullptr; };
    // compareFeature Field Functions 
    bool hasCompareFeature() const { return this->compareFeature_ != nullptr;};
    void deleteCompareFeature() { this->compareFeature_ = nullptr;};
    inline bool compareFeature() const { DARABONBA_PTR_GET_DEFAULT(compareFeature_, false) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setCompareFeature(bool compareFeature) { DARABONBA_PTR_SET_VALUE(compareFeature_, compareFeature) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetMountPath Field Functions 
    bool hasDatasetMountPath() const { return this->datasetMountPath_ != nullptr;};
    void deleteDatasetMountPath() { this->datasetMountPath_ = nullptr;};
    inline string datasetMountPath() const { DARABONBA_PTR_GET_DEFAULT(datasetMountPath_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setDatasetMountPath(string datasetMountPath) { DARABONBA_PTR_SET_VALUE(datasetMountPath_, datasetMountPath) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // datasetUri Field Functions 
    bool hasDatasetUri() const { return this->datasetUri_ != nullptr;};
    void deleteDatasetUri() { this->datasetUri_ = nullptr;};
    inline string datasetUri() const { DARABONBA_PTR_GET_DEFAULT(datasetUri_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setDatasetUri(string datasetUri) { DARABONBA_PTR_SET_VALUE(datasetUri_, datasetUri) };


    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string defaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // easyRecPackagePath Field Functions 
    bool hasEasyRecPackagePath() const { return this->easyRecPackagePath_ != nullptr;};
    void deleteEasyRecPackagePath() { this->easyRecPackagePath_ = nullptr;};
    inline string easyRecPackagePath() const { DARABONBA_PTR_GET_DEFAULT(easyRecPackagePath_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setEasyRecPackagePath(string easyRecPackagePath) { DARABONBA_PTR_SET_VALUE(easyRecPackagePath_, easyRecPackagePath) };


    // easyRecVersion Field Functions 
    bool hasEasyRecVersion() const { return this->easyRecVersion_ != nullptr;};
    void deleteEasyRecVersion() { this->easyRecVersion_ = nullptr;};
    inline string easyRecVersion() const { DARABONBA_PTR_GET_DEFAULT(easyRecVersion_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setEasyRecVersion(string easyRecVersion) { DARABONBA_PTR_SET_VALUE(easyRecVersion_, easyRecVersion) };


    // featureDisplayExclude Field Functions 
    bool hasFeatureDisplayExclude() const { return this->featureDisplayExclude_ != nullptr;};
    void deleteFeatureDisplayExclude() { this->featureDisplayExclude_ = nullptr;};
    inline string featureDisplayExclude() const { DARABONBA_PTR_GET_DEFAULT(featureDisplayExclude_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureDisplayExclude(string featureDisplayExclude) { DARABONBA_PTR_SET_VALUE(featureDisplayExclude_, featureDisplayExclude) };


    // featureLandingResourceId Field Functions 
    bool hasFeatureLandingResourceId() const { return this->featureLandingResourceId_ != nullptr;};
    void deleteFeatureLandingResourceId() { this->featureLandingResourceId_ = nullptr;};
    inline string featureLandingResourceId() const { DARABONBA_PTR_GET_DEFAULT(featureLandingResourceId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureLandingResourceId(string featureLandingResourceId) { DARABONBA_PTR_SET_VALUE(featureLandingResourceId_, featureLandingResourceId) };


    // featurePriority Field Functions 
    bool hasFeaturePriority() const { return this->featurePriority_ != nullptr;};
    void deleteFeaturePriority() { this->featurePriority_ = nullptr;};
    inline string featurePriority() const { DARABONBA_PTR_GET_DEFAULT(featurePriority_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeaturePriority(string featurePriority) { DARABONBA_PTR_SET_VALUE(featurePriority_, featurePriority) };


    // featureStoreItemId Field Functions 
    bool hasFeatureStoreItemId() const { return this->featureStoreItemId_ != nullptr;};
    void deleteFeatureStoreItemId() { this->featureStoreItemId_ = nullptr;};
    inline string featureStoreItemId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreItemId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreItemId(string featureStoreItemId) { DARABONBA_PTR_SET_VALUE(featureStoreItemId_, featureStoreItemId) };


    // featureStoreModelId Field Functions 
    bool hasFeatureStoreModelId() const { return this->featureStoreModelId_ != nullptr;};
    void deleteFeatureStoreModelId() { this->featureStoreModelId_ = nullptr;};
    inline string featureStoreModelId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreModelId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreModelId(string featureStoreModelId) { DARABONBA_PTR_SET_VALUE(featureStoreModelId_, featureStoreModelId) };


    // featureStoreProjectId Field Functions 
    bool hasFeatureStoreProjectId() const { return this->featureStoreProjectId_ != nullptr;};
    void deleteFeatureStoreProjectId() { this->featureStoreProjectId_ = nullptr;};
    inline string featureStoreProjectId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreProjectId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreProjectId(string featureStoreProjectId) { DARABONBA_PTR_SET_VALUE(featureStoreProjectId_, featureStoreProjectId) };


    // featureStoreProjectName Field Functions 
    bool hasFeatureStoreProjectName() const { return this->featureStoreProjectName_ != nullptr;};
    void deleteFeatureStoreProjectName() { this->featureStoreProjectName_ = nullptr;};
    inline string featureStoreProjectName() const { DARABONBA_PTR_GET_DEFAULT(featureStoreProjectName_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreProjectName(string featureStoreProjectName) { DARABONBA_PTR_SET_VALUE(featureStoreProjectName_, featureStoreProjectName) };


    // featureStoreSeqFeatureView Field Functions 
    bool hasFeatureStoreSeqFeatureView() const { return this->featureStoreSeqFeatureView_ != nullptr;};
    void deleteFeatureStoreSeqFeatureView() { this->featureStoreSeqFeatureView_ = nullptr;};
    inline string featureStoreSeqFeatureView() const { DARABONBA_PTR_GET_DEFAULT(featureStoreSeqFeatureView_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreSeqFeatureView(string featureStoreSeqFeatureView) { DARABONBA_PTR_SET_VALUE(featureStoreSeqFeatureView_, featureStoreSeqFeatureView) };


    // featureStoreUserId Field Functions 
    bool hasFeatureStoreUserId() const { return this->featureStoreUserId_ != nullptr;};
    void deleteFeatureStoreUserId() { this->featureStoreUserId_ = nullptr;};
    inline string featureStoreUserId() const { DARABONBA_PTR_GET_DEFAULT(featureStoreUserId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFeatureStoreUserId(string featureStoreUserId) { DARABONBA_PTR_SET_VALUE(featureStoreUserId_, featureStoreUserId) };


    // fgJarVersion Field Functions 
    bool hasFgJarVersion() const { return this->fgJarVersion_ != nullptr;};
    void deleteFgJarVersion() { this->fgJarVersion_ = nullptr;};
    inline string fgJarVersion() const { DARABONBA_PTR_GET_DEFAULT(fgJarVersion_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFgJarVersion(string fgJarVersion) { DARABONBA_PTR_SET_VALUE(fgJarVersion_, fgJarVersion) };


    // fgJsonFileName Field Functions 
    bool hasFgJsonFileName() const { return this->fgJsonFileName_ != nullptr;};
    void deleteFgJsonFileName() { this->fgJsonFileName_ = nullptr;};
    inline string fgJsonFileName() const { DARABONBA_PTR_GET_DEFAULT(fgJsonFileName_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setFgJsonFileName(string fgJsonFileName) { DARABONBA_PTR_SET_VALUE(fgJsonFileName_, fgJsonFileName) };


    // generateZip Field Functions 
    bool hasGenerateZip() const { return this->generateZip_ != nullptr;};
    void deleteGenerateZip() { this->generateZip_ = nullptr;};
    inline bool generateZip() const { DARABONBA_PTR_GET_DEFAULT(generateZip_, false) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setGenerateZip(bool generateZip) { DARABONBA_PTR_SET_VALUE(generateZip_, generateZip) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isUseFeatureStore Field Functions 
    bool hasIsUseFeatureStore() const { return this->isUseFeatureStore_ != nullptr;};
    void deleteIsUseFeatureStore() { this->isUseFeatureStore_ = nullptr;};
    inline bool isUseFeatureStore() const { DARABONBA_PTR_GET_DEFAULT(isUseFeatureStore_, false) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setIsUseFeatureStore(bool isUseFeatureStore) { DARABONBA_PTR_SET_VALUE(isUseFeatureStore_, isUseFeatureStore) };


    // itemIdField Field Functions 
    bool hasItemIdField() const { return this->itemIdField_ != nullptr;};
    void deleteItemIdField() { this->itemIdField_ = nullptr;};
    inline string itemIdField() const { DARABONBA_PTR_GET_DEFAULT(itemIdField_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setItemIdField(string itemIdField) { DARABONBA_PTR_SET_VALUE(itemIdField_, itemIdField) };


    // itemTable Field Functions 
    bool hasItemTable() const { return this->itemTable_ != nullptr;};
    void deleteItemTable() { this->itemTable_ = nullptr;};
    inline string itemTable() const { DARABONBA_PTR_GET_DEFAULT(itemTable_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setItemTable(string itemTable) { DARABONBA_PTR_SET_VALUE(itemTable_, itemTable) };


    // itemTablePartitionField Field Functions 
    bool hasItemTablePartitionField() const { return this->itemTablePartitionField_ != nullptr;};
    void deleteItemTablePartitionField() { this->itemTablePartitionField_ = nullptr;};
    inline string itemTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(itemTablePartitionField_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setItemTablePartitionField(string itemTablePartitionField) { DARABONBA_PTR_SET_VALUE(itemTablePartitionField_, itemTablePartitionField) };


    // itemTablePartitionFieldFormat Field Functions 
    bool hasItemTablePartitionFieldFormat() const { return this->itemTablePartitionFieldFormat_ != nullptr;};
    void deleteItemTablePartitionFieldFormat() { this->itemTablePartitionFieldFormat_ = nullptr;};
    inline string itemTablePartitionFieldFormat() const { DARABONBA_PTR_GET_DEFAULT(itemTablePartitionFieldFormat_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setItemTablePartitionFieldFormat(string itemTablePartitionFieldFormat) { DARABONBA_PTR_SET_VALUE(itemTablePartitionFieldFormat_, itemTablePartitionFieldFormat) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossResourceId Field Functions 
    bool hasOssResourceId() const { return this->ossResourceId_ != nullptr;};
    void deleteOssResourceId() { this->ossResourceId_ = nullptr;};
    inline string ossResourceId() const { DARABONBA_PTR_GET_DEFAULT(ossResourceId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setOssResourceId(string ossResourceId) { DARABONBA_PTR_SET_VALUE(ossResourceId_, ossResourceId) };


    // predictWorkerCount Field Functions 
    bool hasPredictWorkerCount() const { return this->predictWorkerCount_ != nullptr;};
    void deletePredictWorkerCount() { this->predictWorkerCount_ = nullptr;};
    inline int32_t predictWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(predictWorkerCount_, 0) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setPredictWorkerCount(int32_t predictWorkerCount) { DARABONBA_PTR_SET_VALUE(predictWorkerCount_, predictWorkerCount) };


    // predictWorkerCpu Field Functions 
    bool hasPredictWorkerCpu() const { return this->predictWorkerCpu_ != nullptr;};
    void deletePredictWorkerCpu() { this->predictWorkerCpu_ = nullptr;};
    inline int32_t predictWorkerCpu() const { DARABONBA_PTR_GET_DEFAULT(predictWorkerCpu_, 0) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setPredictWorkerCpu(int32_t predictWorkerCpu) { DARABONBA_PTR_SET_VALUE(predictWorkerCpu_, predictWorkerCpu) };


    // predictWorkerMemory Field Functions 
    bool hasPredictWorkerMemory() const { return this->predictWorkerMemory_ != nullptr;};
    void deletePredictWorkerMemory() { this->predictWorkerMemory_ = nullptr;};
    inline int32_t predictWorkerMemory() const { DARABONBA_PTR_GET_DEFAULT(predictWorkerMemory_, 0) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setPredictWorkerMemory(int32_t predictWorkerMemory) { DARABONBA_PTR_SET_VALUE(predictWorkerMemory_, predictWorkerMemory) };


    // resourceConfig Field Functions 
    bool hasResourceConfig() const { return this->resourceConfig_ != nullptr;};
    void deleteResourceConfig() { this->resourceConfig_ = nullptr;};
    inline string resourceConfig() const { DARABONBA_PTR_GET_DEFAULT(resourceConfig_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setResourceConfig(string resourceConfig) { DARABONBA_PTR_SET_VALUE(resourceConfig_, resourceConfig) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline double sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setSampleRate(double sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // userIdField Field Functions 
    bool hasUserIdField() const { return this->userIdField_ != nullptr;};
    void deleteUserIdField() { this->userIdField_ = nullptr;};
    inline string userIdField() const { DARABONBA_PTR_GET_DEFAULT(userIdField_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setUserIdField(string userIdField) { DARABONBA_PTR_SET_VALUE(userIdField_, userIdField) };


    // userTable Field Functions 
    bool hasUserTable() const { return this->userTable_ != nullptr;};
    void deleteUserTable() { this->userTable_ = nullptr;};
    inline string userTable() const { DARABONBA_PTR_GET_DEFAULT(userTable_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setUserTable(string userTable) { DARABONBA_PTR_SET_VALUE(userTable_, userTable) };


    // userTablePartitionField Field Functions 
    bool hasUserTablePartitionField() const { return this->userTablePartitionField_ != nullptr;};
    void deleteUserTablePartitionField() { this->userTablePartitionField_ = nullptr;};
    inline string userTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(userTablePartitionField_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setUserTablePartitionField(string userTablePartitionField) { DARABONBA_PTR_SET_VALUE(userTablePartitionField_, userTablePartitionField) };


    // userTablePartitionFieldFormat Field Functions 
    bool hasUserTablePartitionFieldFormat() const { return this->userTablePartitionFieldFormat_ != nullptr;};
    void deleteUserTablePartitionFieldFormat() { this->userTablePartitionFieldFormat_ = nullptr;};
    inline string userTablePartitionFieldFormat() const { DARABONBA_PTR_GET_DEFAULT(userTablePartitionFieldFormat_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setUserTablePartitionFieldFormat(string userTablePartitionFieldFormat) { DARABONBA_PTR_SET_VALUE(userTablePartitionFieldFormat_, userTablePartitionFieldFormat) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string workflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateFeatureConsistencyCheckJobConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> compareFeature_ = nullptr;
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> datasetMountPath_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<string> datasetUri_ = nullptr;
    std::shared_ptr<string> defaultRoute_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<string> easyRecPackagePath_ = nullptr;
    std::shared_ptr<string> easyRecVersion_ = nullptr;
    std::shared_ptr<string> featureDisplayExclude_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> featureLandingResourceId_ = nullptr;
    std::shared_ptr<string> featurePriority_ = nullptr;
    std::shared_ptr<string> featureStoreItemId_ = nullptr;
    std::shared_ptr<string> featureStoreModelId_ = nullptr;
    std::shared_ptr<string> featureStoreProjectId_ = nullptr;
    std::shared_ptr<string> featureStoreProjectName_ = nullptr;
    std::shared_ptr<string> featureStoreSeqFeatureView_ = nullptr;
    std::shared_ptr<string> featureStoreUserId_ = nullptr;
    std::shared_ptr<string> fgJarVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fgJsonFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> generateZip_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isUseFeatureStore_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itemIdField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itemTable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itemTablePartitionField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itemTablePartitionFieldFormat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ossResourceId_ = nullptr;
    std::shared_ptr<int32_t> predictWorkerCount_ = nullptr;
    std::shared_ptr<int32_t> predictWorkerCpu_ = nullptr;
    std::shared_ptr<int32_t> predictWorkerMemory_ = nullptr;
    std::shared_ptr<string> resourceConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> sampleRate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> switchId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userIdField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userTable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userTablePartitionField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userTablePartitionFieldFormat_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> workflowName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
