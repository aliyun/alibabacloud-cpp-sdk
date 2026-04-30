// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERSAVEFLOWCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERSAVEFLOWCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterSaveFlowConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterSaveFlowConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(rpm, rpm_);
      DARABONBA_PTR_TO_JSON(smoothFlowEnabled, smoothFlowEnabled_);
      DARABONBA_PTR_TO_JSON(tpm, tpm_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterSaveFlowConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(rpm, rpm_);
      DARABONBA_PTR_FROM_JSON(smoothFlowEnabled, smoothFlowEnabled_);
      DARABONBA_PTR_FROM_JSON(tpm, tpm_);
    };
    ModelRouterSaveFlowConfigRequest() = default ;
    ModelRouterSaveFlowConfigRequest(const ModelRouterSaveFlowConfigRequest &) = default ;
    ModelRouterSaveFlowConfigRequest(ModelRouterSaveFlowConfigRequest &&) = default ;
    ModelRouterSaveFlowConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterSaveFlowConfigRequest() = default ;
    ModelRouterSaveFlowConfigRequest& operator=(const ModelRouterSaveFlowConfigRequest &) = default ;
    ModelRouterSaveFlowConfigRequest& operator=(ModelRouterSaveFlowConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr
        && this->rpm_ == nullptr && this->smoothFlowEnabled_ == nullptr && this->tpm_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int32_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
    inline ModelRouterSaveFlowConfigRequest& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // rpm Field Functions 
    bool hasRpm() const { return this->rpm_ != nullptr;};
    void deleteRpm() { this->rpm_ = nullptr;};
    inline int32_t getRpm() const { DARABONBA_PTR_GET_DEFAULT(rpm_, 0) };
    inline ModelRouterSaveFlowConfigRequest& setRpm(int32_t rpm) { DARABONBA_PTR_SET_VALUE(rpm_, rpm) };


    // smoothFlowEnabled Field Functions 
    bool hasSmoothFlowEnabled() const { return this->smoothFlowEnabled_ != nullptr;};
    void deleteSmoothFlowEnabled() { this->smoothFlowEnabled_ = nullptr;};
    inline bool getSmoothFlowEnabled() const { DARABONBA_PTR_GET_DEFAULT(smoothFlowEnabled_, false) };
    inline ModelRouterSaveFlowConfigRequest& setSmoothFlowEnabled(bool smoothFlowEnabled) { DARABONBA_PTR_SET_VALUE(smoothFlowEnabled_, smoothFlowEnabled) };


    // tpm Field Functions 
    bool hasTpm() const { return this->tpm_ != nullptr;};
    void deleteTpm() { this->tpm_ = nullptr;};
    inline int32_t getTpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0) };
    inline ModelRouterSaveFlowConfigRequest& setTpm(int32_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> modelId_ {};
    shared_ptr<int32_t> rpm_ {};
    shared_ptr<bool> smoothFlowEnabled_ {};
    shared_ptr<int32_t> tpm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
