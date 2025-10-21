// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateModelInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EasServiceId, easServiceId_);
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(ModelCallName, modelCallName_);
      DARABONBA_PTR_TO_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_TO_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_TO_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_TO_JSON(ModelVpcUrl, modelVpcUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EasServiceId, easServiceId_);
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(ModelCallName, modelCallName_);
      DARABONBA_PTR_FROM_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_FROM_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_FROM_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_FROM_JSON(ModelVpcUrl, modelVpcUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateModelInstanceRequest() = default ;
    CreateModelInstanceRequest(const CreateModelInstanceRequest &) = default ;
    CreateModelInstanceRequest(CreateModelInstanceRequest &&) = default ;
    CreateModelInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelInstanceRequest() = default ;
    CreateModelInstanceRequest& operator=(const CreateModelInstanceRequest &) = default ;
    CreateModelInstanceRequest& operator=(CreateModelInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->easServiceId_ == nullptr
        && return this->easServiceName_ == nullptr && return this->modelCallName_ == nullptr && return this->modelCategoryId_ == nullptr && return this->modelToken_ == nullptr && return this->modelUrl_ == nullptr
        && return this->modelVpcUrl_ == nullptr && return this->workspaceId_ == nullptr; };
    // easServiceId Field Functions 
    bool hasEasServiceId() const { return this->easServiceId_ != nullptr;};
    void deleteEasServiceId() { this->easServiceId_ = nullptr;};
    inline string easServiceId() const { DARABONBA_PTR_GET_DEFAULT(easServiceId_, "") };
    inline CreateModelInstanceRequest& setEasServiceId(string easServiceId) { DARABONBA_PTR_SET_VALUE(easServiceId_, easServiceId) };


    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline CreateModelInstanceRequest& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // modelCallName Field Functions 
    bool hasModelCallName() const { return this->modelCallName_ != nullptr;};
    void deleteModelCallName() { this->modelCallName_ = nullptr;};
    inline string modelCallName() const { DARABONBA_PTR_GET_DEFAULT(modelCallName_, "") };
    inline CreateModelInstanceRequest& setModelCallName(string modelCallName) { DARABONBA_PTR_SET_VALUE(modelCallName_, modelCallName) };


    // modelCategoryId Field Functions 
    bool hasModelCategoryId() const { return this->modelCategoryId_ != nullptr;};
    void deleteModelCategoryId() { this->modelCategoryId_ = nullptr;};
    inline int64_t modelCategoryId() const { DARABONBA_PTR_GET_DEFAULT(modelCategoryId_, 0L) };
    inline CreateModelInstanceRequest& setModelCategoryId(int64_t modelCategoryId) { DARABONBA_PTR_SET_VALUE(modelCategoryId_, modelCategoryId) };


    // modelToken Field Functions 
    bool hasModelToken() const { return this->modelToken_ != nullptr;};
    void deleteModelToken() { this->modelToken_ = nullptr;};
    inline string modelToken() const { DARABONBA_PTR_GET_DEFAULT(modelToken_, "") };
    inline CreateModelInstanceRequest& setModelToken(string modelToken) { DARABONBA_PTR_SET_VALUE(modelToken_, modelToken) };


    // modelUrl Field Functions 
    bool hasModelUrl() const { return this->modelUrl_ != nullptr;};
    void deleteModelUrl() { this->modelUrl_ = nullptr;};
    inline string modelUrl() const { DARABONBA_PTR_GET_DEFAULT(modelUrl_, "") };
    inline CreateModelInstanceRequest& setModelUrl(string modelUrl) { DARABONBA_PTR_SET_VALUE(modelUrl_, modelUrl) };


    // modelVpcUrl Field Functions 
    bool hasModelVpcUrl() const { return this->modelVpcUrl_ != nullptr;};
    void deleteModelVpcUrl() { this->modelVpcUrl_ = nullptr;};
    inline string modelVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(modelVpcUrl_, "") };
    inline CreateModelInstanceRequest& setModelVpcUrl(string modelVpcUrl) { DARABONBA_PTR_SET_VALUE(modelVpcUrl_, modelVpcUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateModelInstanceRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> easServiceId_ = nullptr;
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<string> modelCallName_ = nullptr;
    std::shared_ptr<int64_t> modelCategoryId_ = nullptr;
    // EAS Token
    std::shared_ptr<string> modelToken_ = nullptr;
    std::shared_ptr<string> modelUrl_ = nullptr;
    std::shared_ptr<string> modelVpcUrl_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
