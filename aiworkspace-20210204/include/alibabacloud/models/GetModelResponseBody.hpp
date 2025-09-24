// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/ModelVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtLatestVersionModifiedTime, gmtLatestVersionModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_TO_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtLatestVersionModifiedTime, gmtLatestVersionModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_FROM_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetModelResponseBody() = default ;
    GetModelResponseBody(const GetModelResponseBody &) = default ;
    GetModelResponseBody(GetModelResponseBody &&) = default ;
    GetModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelResponseBody() = default ;
    GetModelResponseBody& operator=(const GetModelResponseBody &) = default ;
    GetModelResponseBody& operator=(GetModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->domain_ != nullptr && this->extraInfo_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtLatestVersionModifiedTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->labels_ != nullptr && this->latestVersion_ != nullptr && this->modelDescription_ != nullptr && this->modelDoc_ != nullptr && this->modelId_ != nullptr
        && this->modelName_ != nullptr && this->modelType_ != nullptr && this->orderNumber_ != nullptr && this->origin_ != nullptr && this->ownerId_ != nullptr
        && this->parameterSize_ != nullptr && this->provider_ != nullptr && this->requestId_ != nullptr && this->task_ != nullptr && this->userId_ != nullptr
        && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetModelResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetModelResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline GetModelResponseBody& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline GetModelResponseBody& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetModelResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtLatestVersionModifiedTime Field Functions 
    bool hasGmtLatestVersionModifiedTime() const { return this->gmtLatestVersionModifiedTime_ != nullptr;};
    void deleteGmtLatestVersionModifiedTime() { this->gmtLatestVersionModifiedTime_ = nullptr;};
    inline string gmtLatestVersionModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtLatestVersionModifiedTime_, "") };
    inline GetModelResponseBody& setGmtLatestVersionModifiedTime(string gmtLatestVersionModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtLatestVersionModifiedTime_, gmtLatestVersionModifiedTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetModelResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline GetModelResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetModelResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const ModelVersion & latestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, ModelVersion) };
    inline ModelVersion latestVersion() { DARABONBA_PTR_GET(latestVersion_, ModelVersion) };
    inline GetModelResponseBody& setLatestVersion(const ModelVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline GetModelResponseBody& setLatestVersion(ModelVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // modelDescription Field Functions 
    bool hasModelDescription() const { return this->modelDescription_ != nullptr;};
    void deleteModelDescription() { this->modelDescription_ = nullptr;};
    inline string modelDescription() const { DARABONBA_PTR_GET_DEFAULT(modelDescription_, "") };
    inline GetModelResponseBody& setModelDescription(string modelDescription) { DARABONBA_PTR_SET_VALUE(modelDescription_, modelDescription) };


    // modelDoc Field Functions 
    bool hasModelDoc() const { return this->modelDoc_ != nullptr;};
    void deleteModelDoc() { this->modelDoc_ = nullptr;};
    inline string modelDoc() const { DARABONBA_PTR_GET_DEFAULT(modelDoc_, "") };
    inline GetModelResponseBody& setModelDoc(string modelDoc) { DARABONBA_PTR_SET_VALUE(modelDoc_, modelDoc) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline GetModelResponseBody& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetModelResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline GetModelResponseBody& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int64_t orderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0L) };
    inline GetModelResponseBody& setOrderNumber(int64_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline GetModelResponseBody& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetModelResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterSize Field Functions 
    bool hasParameterSize() const { return this->parameterSize_ != nullptr;};
    void deleteParameterSize() { this->parameterSize_ = nullptr;};
    inline int64_t parameterSize() const { DARABONBA_PTR_GET_DEFAULT(parameterSize_, 0L) };
    inline GetModelResponseBody& setParameterSize(int64_t parameterSize) { DARABONBA_PTR_SET_VALUE(parameterSize_, parameterSize) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetModelResponseBody& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string task() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline GetModelResponseBody& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetModelResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetModelResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the workspace.
    // 
    // *   PRIVATE: The workspace is visible only to you and the administrator of the workspace.
    // *   PUBLIC: The workspace is visible to all users.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The domain. This parameter specifies the domain for which the model is developed. Valid values: nlp and cv. nlp indicates natural language processing and cv indicates computer vision.
    std::shared_ptr<string> domain_ = nullptr;
    // Other information about the model.
    Darabonba::Json extraInfo_ = nullptr;
    // The time when the model is created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtLatestVersionModifiedTime_ = nullptr;
    // The time when the model is last modified, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The model tags.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The latest version of the model.
    std::shared_ptr<ModelVersion> latestVersion_ = nullptr;
    // The model description.
    std::shared_ptr<string> modelDescription_ = nullptr;
    // The documentation of the model.
    std::shared_ptr<string> modelDoc_ = nullptr;
    // The model ID.
    std::shared_ptr<string> modelId_ = nullptr;
    // The model name.
    std::shared_ptr<string> modelName_ = nullptr;
    // The model type.
    std::shared_ptr<string> modelType_ = nullptr;
    // The sequence number of the model.
    std::shared_ptr<int64_t> orderNumber_ = nullptr;
    // The source of the model. The community or organization to which the model belongs, such as ModelScope or HuggingFace.
    std::shared_ptr<string> origin_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<int64_t> parameterSize_ = nullptr;
    // The provider.
    std::shared_ptr<string> provider_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task of the model. This parameter describes specific issues that the model solves, such as text-classification.
    std::shared_ptr<string> task_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
