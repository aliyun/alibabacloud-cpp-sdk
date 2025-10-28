// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_TO_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_FROM_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    UpdateModelRequest() = default ;
    UpdateModelRequest(const UpdateModelRequest &) = default ;
    UpdateModelRequest(UpdateModelRequest &&) = default ;
    UpdateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelRequest() = default ;
    UpdateModelRequest& operator=(const UpdateModelRequest &) = default ;
    UpdateModelRequest& operator=(UpdateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->domain_ == nullptr && return this->extraInfo_ == nullptr && return this->modelDescription_ == nullptr && return this->modelDoc_ == nullptr && return this->modelName_ == nullptr
        && return this->modelType_ == nullptr && return this->orderNumber_ == nullptr && return this->origin_ == nullptr && return this->parameterSize_ == nullptr && return this->task_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateModelRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateModelRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline UpdateModelRequest& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline UpdateModelRequest& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // modelDescription Field Functions 
    bool hasModelDescription() const { return this->modelDescription_ != nullptr;};
    void deleteModelDescription() { this->modelDescription_ = nullptr;};
    inline string modelDescription() const { DARABONBA_PTR_GET_DEFAULT(modelDescription_, "") };
    inline UpdateModelRequest& setModelDescription(string modelDescription) { DARABONBA_PTR_SET_VALUE(modelDescription_, modelDescription) };


    // modelDoc Field Functions 
    bool hasModelDoc() const { return this->modelDoc_ != nullptr;};
    void deleteModelDoc() { this->modelDoc_ = nullptr;};
    inline string modelDoc() const { DARABONBA_PTR_GET_DEFAULT(modelDoc_, "") };
    inline UpdateModelRequest& setModelDoc(string modelDoc) { DARABONBA_PTR_SET_VALUE(modelDoc_, modelDoc) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline UpdateModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline UpdateModelRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int64_t orderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0L) };
    inline UpdateModelRequest& setOrderNumber(int64_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline UpdateModelRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // parameterSize Field Functions 
    bool hasParameterSize() const { return this->parameterSize_ != nullptr;};
    void deleteParameterSize() { this->parameterSize_ = nullptr;};
    inline int64_t parameterSize() const { DARABONBA_PTR_GET_DEFAULT(parameterSize_, 0L) };
    inline UpdateModelRequest& setParameterSize(int64_t parameterSize) { DARABONBA_PTR_SET_VALUE(parameterSize_, parameterSize) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string task() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline UpdateModelRequest& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


  protected:
    // The visibility of the model in the workspace. Valid values:
    // 
    // *   PRIVATE: The model is visible only to you and the administrator of the workspace.
    // *   PUBLIC: The model is visible to all users in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The domain. This parameter describes the domain in which the model is applied. Valid values: nlp (natural language processing) and cv (computer vision).
    std::shared_ptr<string> domain_ = nullptr;
    // Other information about the model.
    Darabonba::Json extraInfo_ = nullptr;
    // The model description.
    std::shared_ptr<string> modelDescription_ = nullptr;
    // The documentation of the model.
    std::shared_ptr<string> modelDoc_ = nullptr;
    // The model name, which must be 1 to 127 characters in length.
    std::shared_ptr<string> modelName_ = nullptr;
    // The model type. Valid values: Checkpoint and LoRA.
    std::shared_ptr<string> modelType_ = nullptr;
    // The sequence number of the model. This parameter can be used for custom sorting.
    std::shared_ptr<int64_t> orderNumber_ = nullptr;
    // The source of the model. This parameter describes the community or organization to which the source model belongs. Valid values: ModelScope and HuggingFace.
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<int64_t> parameterSize_ = nullptr;
    // The task. This parameter specifies the specific issue that the model resolves. Example: text-classification.
    std::shared_ptr<string> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
