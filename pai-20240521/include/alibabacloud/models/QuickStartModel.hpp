// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUICKSTARTMODEL_HPP_
#define ALIBABACLOUD_MODELS_QUICKSTARTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/ModelVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class QuickStartModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuickStartModel& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DeploymentCount, deploymentCount_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_TO_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_ANY_TO_JSON(QuickStartModelDescription, quickStartModelDescription_);
      DARABONBA_ANY_TO_JSON(QuickStartModelName, quickStartModelName_);
      DARABONBA_PTR_TO_JSON(RelatedModelId, relatedModelId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(TrainingCount, trainingCount_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
      DARABONBA_PTR_TO_JSON(ViewCount7Days, viewCount7Days_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QuickStartModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DeploymentCount, deploymentCount_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_FROM_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_ANY_FROM_JSON(QuickStartModelDescription, quickStartModelDescription_);
      DARABONBA_ANY_FROM_JSON(QuickStartModelName, quickStartModelName_);
      DARABONBA_PTR_FROM_JSON(RelatedModelId, relatedModelId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(TrainingCount, trainingCount_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
      DARABONBA_PTR_FROM_JSON(ViewCount7Days, viewCount7Days_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QuickStartModel() = default ;
    QuickStartModel(const QuickStartModel &) = default ;
    QuickStartModel(QuickStartModel &&) = default ;
    QuickStartModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuickStartModel() = default ;
    QuickStartModel& operator=(const QuickStartModel &) = default ;
    QuickStartModel& operator=(QuickStartModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->deploymentCount_ == nullptr && this->domain_ == nullptr && this->extraInfo_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->labels_ == nullptr && this->latestVersion_ == nullptr && this->modelDescription_ == nullptr && this->modelDoc_ == nullptr && this->modelId_ == nullptr
        && this->modelName_ == nullptr && this->orderNumber_ == nullptr && this->origin_ == nullptr && this->ownerId_ == nullptr && this->provider_ == nullptr
        && this->quickStartModelDescription_ == nullptr && this->quickStartModelName_ == nullptr && this->relatedModelId_ == nullptr && this->task_ == nullptr && this->trainingCount_ == nullptr
        && this->userId_ == nullptr && this->viewCount_ == nullptr && this->viewCount7Days_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline QuickStartModel& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // deploymentCount Field Functions 
    bool hasDeploymentCount() const { return this->deploymentCount_ != nullptr;};
    void deleteDeploymentCount() { this->deploymentCount_ = nullptr;};
    inline int64_t getDeploymentCount() const { DARABONBA_PTR_GET_DEFAULT(deploymentCount_, 0L) };
    inline QuickStartModel& setDeploymentCount(int64_t deploymentCount) { DARABONBA_PTR_SET_VALUE(deploymentCount_, deploymentCount) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline QuickStartModel& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline QuickStartModel& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline QuickStartModel& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline QuickStartModel& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline QuickStartModel& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline QuickStartModel& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline QuickStartModel& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const ModelVersion & getLatestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, ModelVersion) };
    inline ModelVersion getLatestVersion() { DARABONBA_PTR_GET(latestVersion_, ModelVersion) };
    inline QuickStartModel& setLatestVersion(const ModelVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline QuickStartModel& setLatestVersion(ModelVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // modelDescription Field Functions 
    bool hasModelDescription() const { return this->modelDescription_ != nullptr;};
    void deleteModelDescription() { this->modelDescription_ = nullptr;};
    inline string getModelDescription() const { DARABONBA_PTR_GET_DEFAULT(modelDescription_, "") };
    inline QuickStartModel& setModelDescription(string modelDescription) { DARABONBA_PTR_SET_VALUE(modelDescription_, modelDescription) };


    // modelDoc Field Functions 
    bool hasModelDoc() const { return this->modelDoc_ != nullptr;};
    void deleteModelDoc() { this->modelDoc_ = nullptr;};
    inline string getModelDoc() const { DARABONBA_PTR_GET_DEFAULT(modelDoc_, "") };
    inline QuickStartModel& setModelDoc(string modelDoc) { DARABONBA_PTR_SET_VALUE(modelDoc_, modelDoc) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline QuickStartModel& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline QuickStartModel& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int64_t getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0L) };
    inline QuickStartModel& setOrderNumber(int64_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline QuickStartModel& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QuickStartModel& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline QuickStartModel& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // quickStartModelDescription Field Functions 
    bool hasQuickStartModelDescription() const { return this->quickStartModelDescription_ != nullptr;};
    void deleteQuickStartModelDescription() { this->quickStartModelDescription_ = nullptr;};
    inline     const Darabonba::Json & getQuickStartModelDescription() const { DARABONBA_GET(quickStartModelDescription_) };
    Darabonba::Json & getQuickStartModelDescription() { DARABONBA_GET(quickStartModelDescription_) };
    inline QuickStartModel& setQuickStartModelDescription(const Darabonba::Json & quickStartModelDescription) { DARABONBA_SET_VALUE(quickStartModelDescription_, quickStartModelDescription) };
    inline QuickStartModel& setQuickStartModelDescription(Darabonba::Json && quickStartModelDescription) { DARABONBA_SET_RVALUE(quickStartModelDescription_, quickStartModelDescription) };


    // quickStartModelName Field Functions 
    bool hasQuickStartModelName() const { return this->quickStartModelName_ != nullptr;};
    void deleteQuickStartModelName() { this->quickStartModelName_ = nullptr;};
    inline     const Darabonba::Json & getQuickStartModelName() const { DARABONBA_GET(quickStartModelName_) };
    Darabonba::Json & getQuickStartModelName() { DARABONBA_GET(quickStartModelName_) };
    inline QuickStartModel& setQuickStartModelName(const Darabonba::Json & quickStartModelName) { DARABONBA_SET_VALUE(quickStartModelName_, quickStartModelName) };
    inline QuickStartModel& setQuickStartModelName(Darabonba::Json && quickStartModelName) { DARABONBA_SET_RVALUE(quickStartModelName_, quickStartModelName) };


    // relatedModelId Field Functions 
    bool hasRelatedModelId() const { return this->relatedModelId_ != nullptr;};
    void deleteRelatedModelId() { this->relatedModelId_ = nullptr;};
    inline string getRelatedModelId() const { DARABONBA_PTR_GET_DEFAULT(relatedModelId_, "") };
    inline QuickStartModel& setRelatedModelId(string relatedModelId) { DARABONBA_PTR_SET_VALUE(relatedModelId_, relatedModelId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline QuickStartModel& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // trainingCount Field Functions 
    bool hasTrainingCount() const { return this->trainingCount_ != nullptr;};
    void deleteTrainingCount() { this->trainingCount_ = nullptr;};
    inline int64_t getTrainingCount() const { DARABONBA_PTR_GET_DEFAULT(trainingCount_, 0L) };
    inline QuickStartModel& setTrainingCount(int64_t trainingCount) { DARABONBA_PTR_SET_VALUE(trainingCount_, trainingCount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuickStartModel& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // viewCount Field Functions 
    bool hasViewCount() const { return this->viewCount_ != nullptr;};
    void deleteViewCount() { this->viewCount_ = nullptr;};
    inline int64_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
    inline QuickStartModel& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


    // viewCount7Days Field Functions 
    bool hasViewCount7Days() const { return this->viewCount7Days_ != nullptr;};
    void deleteViewCount7Days() { this->viewCount7Days_ = nullptr;};
    inline int64_t getViewCount7Days() const { DARABONBA_PTR_GET_DEFAULT(viewCount7Days_, 0L) };
    inline QuickStartModel& setViewCount7Days(int64_t viewCount7Days) { DARABONBA_PTR_SET_VALUE(viewCount7Days_, viewCount7Days) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QuickStartModel& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<int64_t> deploymentCount_ {};
    shared_ptr<string> domain_ {};
    Darabonba::Json extraInfo_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<vector<Label>> labels_ {};
    shared_ptr<ModelVersion> latestVersion_ {};
    shared_ptr<string> modelDescription_ {};
    shared_ptr<string> modelDoc_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<int64_t> orderNumber_ {};
    shared_ptr<string> origin_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> provider_ {};
    Darabonba::Json quickStartModelDescription_ {};
    Darabonba::Json quickStartModelName_ {};
    shared_ptr<string> relatedModelId_ {};
    shared_ptr<string> task_ {};
    shared_ptr<int64_t> trainingCount_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<int64_t> viewCount_ {};
    shared_ptr<int64_t> viewCount7Days_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
