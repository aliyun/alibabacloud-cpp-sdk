// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_TO_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_FROM_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateModelRequest() = default ;
    CreateModelRequest(const CreateModelRequest &) = default ;
    CreateModelRequest(CreateModelRequest &&) = default ;
    CreateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelRequest() = default ;
    CreateModelRequest& operator=(const CreateModelRequest &) = default ;
    CreateModelRequest& operator=(CreateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->domain_ == nullptr && return this->extraInfo_ == nullptr && return this->labels_ == nullptr && return this->modelDescription_ == nullptr && return this->modelDoc_ == nullptr
        && return this->modelName_ == nullptr && return this->modelType_ == nullptr && return this->orderNumber_ == nullptr && return this->origin_ == nullptr && return this->parameterSize_ == nullptr
        && return this->tag_ == nullptr && return this->task_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateModelRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateModelRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline CreateModelRequest& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline CreateModelRequest& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateModelRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateModelRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // modelDescription Field Functions 
    bool hasModelDescription() const { return this->modelDescription_ != nullptr;};
    void deleteModelDescription() { this->modelDescription_ = nullptr;};
    inline string modelDescription() const { DARABONBA_PTR_GET_DEFAULT(modelDescription_, "") };
    inline CreateModelRequest& setModelDescription(string modelDescription) { DARABONBA_PTR_SET_VALUE(modelDescription_, modelDescription) };


    // modelDoc Field Functions 
    bool hasModelDoc() const { return this->modelDoc_ != nullptr;};
    void deleteModelDoc() { this->modelDoc_ = nullptr;};
    inline string modelDoc() const { DARABONBA_PTR_GET_DEFAULT(modelDoc_, "") };
    inline CreateModelRequest& setModelDoc(string modelDoc) { DARABONBA_PTR_SET_VALUE(modelDoc_, modelDoc) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateModelRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int64_t orderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0L) };
    inline CreateModelRequest& setOrderNumber(int64_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateModelRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // parameterSize Field Functions 
    bool hasParameterSize() const { return this->parameterSize_ != nullptr;};
    void deleteParameterSize() { this->parameterSize_ = nullptr;};
    inline int64_t parameterSize() const { DARABONBA_PTR_GET_DEFAULT(parameterSize_, 0L) };
    inline CreateModelRequest& setParameterSize(int64_t parameterSize) { DARABONBA_PTR_SET_VALUE(parameterSize_, parameterSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Label> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Label>) };
    inline vector<Label> tag() { DARABONBA_PTR_GET(tag_, vector<Label>) };
    inline CreateModelRequest& setTag(const vector<Label> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateModelRequest& setTag(vector<Label> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string task() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline CreateModelRequest& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateModelRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the model in the workspace. Valid values:
    // 
    // *   PRIVATE (default): Visible only to you and the administrator of the workspace.
    // *   PUBLIC: Vvisible to all users in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The domain of the model. Describes the domain in which the model is for. Example: nlp (natural language processing), cv (computer vision), and others.
    std::shared_ptr<string> domain_ = nullptr;
    // Other information about the model.
    Darabonba::Json extraInfo_ = nullptr;
    // The tags. This parameter will be deprecated and replaced by Tag.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The model description, used to distinguish different models.
    std::shared_ptr<string> modelDescription_ = nullptr;
    // The documentation of the model.
    std::shared_ptr<string> modelDoc_ = nullptr;
    // The name of the model. The name must be 1 to 127 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> modelName_ = nullptr;
    // The model type. Example: Checkpoint or LoRA.
    std::shared_ptr<string> modelType_ = nullptr;
    // The sequence number of the model. Can be used for custom sorting.
    std::shared_ptr<int64_t> orderNumber_ = nullptr;
    // The source of the model. The community or organization to which the source model belongs, such as ModelScope or HuggingFace.
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<int64_t> parameterSize_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Label>> tag_ = nullptr;
    // The task of the model. Describes the specific problem that the model solves. Example: text-classification.
    std::shared_ptr<string> task_ = nullptr;
    // The workspace ID. Call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
