// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateModelInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EasServiceId, easServiceId_);
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(ModelCallName, modelCallName_);
      DARABONBA_PTR_TO_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_TO_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_TO_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_TO_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_TO_JSON(ModelVpcUrl, modelVpcUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EasServiceId, easServiceId_);
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(ModelCallName, modelCallName_);
      DARABONBA_PTR_FROM_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_FROM_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_FROM_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_FROM_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_FROM_JSON(ModelVpcUrl, modelVpcUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateModelInstanceRequest() = default ;
    UpdateModelInstanceRequest(const UpdateModelInstanceRequest &) = default ;
    UpdateModelInstanceRequest(UpdateModelInstanceRequest &&) = default ;
    UpdateModelInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelInstanceRequest() = default ;
    UpdateModelInstanceRequest& operator=(const UpdateModelInstanceRequest &) = default ;
    UpdateModelInstanceRequest& operator=(UpdateModelInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->easServiceId_ == nullptr && return this->easServiceName_ == nullptr && return this->modelCallName_ == nullptr && return this->modelCategoryId_ == nullptr && return this->modelInstanceId_ == nullptr
        && return this->modelToken_ == nullptr && return this->modelUrl_ == nullptr && return this->modelVpcUrl_ == nullptr && return this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // easServiceId Field Functions 
    bool hasEasServiceId() const { return this->easServiceId_ != nullptr;};
    void deleteEasServiceId() { this->easServiceId_ = nullptr;};
    inline string easServiceId() const { DARABONBA_PTR_GET_DEFAULT(easServiceId_, "") };
    inline UpdateModelInstanceRequest& setEasServiceId(string easServiceId) { DARABONBA_PTR_SET_VALUE(easServiceId_, easServiceId) };


    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline UpdateModelInstanceRequest& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // modelCallName Field Functions 
    bool hasModelCallName() const { return this->modelCallName_ != nullptr;};
    void deleteModelCallName() { this->modelCallName_ = nullptr;};
    inline string modelCallName() const { DARABONBA_PTR_GET_DEFAULT(modelCallName_, "") };
    inline UpdateModelInstanceRequest& setModelCallName(string modelCallName) { DARABONBA_PTR_SET_VALUE(modelCallName_, modelCallName) };


    // modelCategoryId Field Functions 
    bool hasModelCategoryId() const { return this->modelCategoryId_ != nullptr;};
    void deleteModelCategoryId() { this->modelCategoryId_ = nullptr;};
    inline int64_t modelCategoryId() const { DARABONBA_PTR_GET_DEFAULT(modelCategoryId_, 0L) };
    inline UpdateModelInstanceRequest& setModelCategoryId(int64_t modelCategoryId) { DARABONBA_PTR_SET_VALUE(modelCategoryId_, modelCategoryId) };


    // modelInstanceId Field Functions 
    bool hasModelInstanceId() const { return this->modelInstanceId_ != nullptr;};
    void deleteModelInstanceId() { this->modelInstanceId_ = nullptr;};
    inline int64_t modelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(modelInstanceId_, 0L) };
    inline UpdateModelInstanceRequest& setModelInstanceId(int64_t modelInstanceId) { DARABONBA_PTR_SET_VALUE(modelInstanceId_, modelInstanceId) };


    // modelToken Field Functions 
    bool hasModelToken() const { return this->modelToken_ != nullptr;};
    void deleteModelToken() { this->modelToken_ = nullptr;};
    inline string modelToken() const { DARABONBA_PTR_GET_DEFAULT(modelToken_, "") };
    inline UpdateModelInstanceRequest& setModelToken(string modelToken) { DARABONBA_PTR_SET_VALUE(modelToken_, modelToken) };


    // modelUrl Field Functions 
    bool hasModelUrl() const { return this->modelUrl_ != nullptr;};
    void deleteModelUrl() { this->modelUrl_ = nullptr;};
    inline string modelUrl() const { DARABONBA_PTR_GET_DEFAULT(modelUrl_, "") };
    inline UpdateModelInstanceRequest& setModelUrl(string modelUrl) { DARABONBA_PTR_SET_VALUE(modelUrl_, modelUrl) };


    // modelVpcUrl Field Functions 
    bool hasModelVpcUrl() const { return this->modelVpcUrl_ != nullptr;};
    void deleteModelVpcUrl() { this->modelVpcUrl_ = nullptr;};
    inline string modelVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(modelVpcUrl_, "") };
    inline UpdateModelInstanceRequest& setModelVpcUrl(string modelVpcUrl) { DARABONBA_PTR_SET_VALUE(modelVpcUrl_, modelVpcUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdateModelInstanceRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> easServiceId_ = nullptr;
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<string> modelCallName_ = nullptr;
    std::shared_ptr<int64_t> modelCategoryId_ = nullptr;
    std::shared_ptr<int64_t> modelInstanceId_ = nullptr;
    std::shared_ptr<string> modelToken_ = nullptr;
    std::shared_ptr<string> modelUrl_ = nullptr;
    std::shared_ptr<string> modelVpcUrl_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
