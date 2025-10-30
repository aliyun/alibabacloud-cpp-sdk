// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMANDPIPELINECONFIGSTEPS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMANDPIPELINECONFIGSTEPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& obj) { 
      DARABONBA_PTR_TO_JSON(IsDistribute, isDistribute_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(PluginConfig, pluginConfig_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(StepType, stepType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDistribute, isDistribute_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(PluginConfig, pluginConfig_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(StepType, stepType_);
    };
    CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps() = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps(const CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps &) = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps(CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps &&) = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps() = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& operator=(const CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps &) = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& operator=(CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDistribute_ == nullptr
        && return this->key_ == nullptr && return this->pluginConfig_ == nullptr && return this->stepName_ == nullptr && return this->stepType_ == nullptr; };
    // isDistribute Field Functions 
    bool hasIsDistribute() const { return this->isDistribute_ != nullptr;};
    void deleteIsDistribute() { this->isDistribute_ = nullptr;};
    inline bool isDistribute() const { DARABONBA_PTR_GET_DEFAULT(isDistribute_, false) };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& setIsDistribute(bool isDistribute) { DARABONBA_PTR_SET_VALUE(isDistribute_, isDistribute) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // pluginConfig Field Functions 
    bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
    void deletePluginConfig() { this->pluginConfig_ = nullptr;};
    inline string pluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


  protected:
    std::shared_ptr<bool> isDistribute_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pluginConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> stepName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> stepType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
