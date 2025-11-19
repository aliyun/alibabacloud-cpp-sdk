// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINFOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODELINFOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelFeatures.hpp>
#include <vector>
#include <alibabacloud/models/ModelParameterRule.hpp>
#include <alibabacloud/models/ModelProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelInfoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInfoConfig& obj) { 
      DARABONBA_PTR_TO_JSON(modelFeatures, modelFeatures_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelParameterRules, modelParameterRules_);
      DARABONBA_PTR_TO_JSON(modelProperties, modelProperties_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInfoConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(modelFeatures, modelFeatures_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelParameterRules, modelParameterRules_);
      DARABONBA_PTR_FROM_JSON(modelProperties, modelProperties_);
    };
    ModelInfoConfig() = default ;
    ModelInfoConfig(const ModelInfoConfig &) = default ;
    ModelInfoConfig(ModelInfoConfig &&) = default ;
    ModelInfoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInfoConfig() = default ;
    ModelInfoConfig& operator=(const ModelInfoConfig &) = default ;
    ModelInfoConfig& operator=(ModelInfoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelFeatures_ == nullptr
        && return this->modelName_ == nullptr && return this->modelParameterRules_ == nullptr && return this->modelProperties_ == nullptr; };
    // modelFeatures Field Functions 
    bool hasModelFeatures() const { return this->modelFeatures_ != nullptr;};
    void deleteModelFeatures() { this->modelFeatures_ = nullptr;};
    inline const ModelFeatures & modelFeatures() const { DARABONBA_PTR_GET_CONST(modelFeatures_, ModelFeatures) };
    inline ModelFeatures modelFeatures() { DARABONBA_PTR_GET(modelFeatures_, ModelFeatures) };
    inline ModelInfoConfig& setModelFeatures(const ModelFeatures & modelFeatures) { DARABONBA_PTR_SET_VALUE(modelFeatures_, modelFeatures) };
    inline ModelInfoConfig& setModelFeatures(ModelFeatures && modelFeatures) { DARABONBA_PTR_SET_RVALUE(modelFeatures_, modelFeatures) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelInfoConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParameterRules Field Functions 
    bool hasModelParameterRules() const { return this->modelParameterRules_ != nullptr;};
    void deleteModelParameterRules() { this->modelParameterRules_ = nullptr;};
    inline const vector<ModelParameterRule> & modelParameterRules() const { DARABONBA_PTR_GET_CONST(modelParameterRules_, vector<ModelParameterRule>) };
    inline vector<ModelParameterRule> modelParameterRules() { DARABONBA_PTR_GET(modelParameterRules_, vector<ModelParameterRule>) };
    inline ModelInfoConfig& setModelParameterRules(const vector<ModelParameterRule> & modelParameterRules) { DARABONBA_PTR_SET_VALUE(modelParameterRules_, modelParameterRules) };
    inline ModelInfoConfig& setModelParameterRules(vector<ModelParameterRule> && modelParameterRules) { DARABONBA_PTR_SET_RVALUE(modelParameterRules_, modelParameterRules) };


    // modelProperties Field Functions 
    bool hasModelProperties() const { return this->modelProperties_ != nullptr;};
    void deleteModelProperties() { this->modelProperties_ = nullptr;};
    inline const ModelProperties & modelProperties() const { DARABONBA_PTR_GET_CONST(modelProperties_, ModelProperties) };
    inline ModelProperties modelProperties() { DARABONBA_PTR_GET(modelProperties_, ModelProperties) };
    inline ModelInfoConfig& setModelProperties(const ModelProperties & modelProperties) { DARABONBA_PTR_SET_VALUE(modelProperties_, modelProperties) };
    inline ModelInfoConfig& setModelProperties(ModelProperties && modelProperties) { DARABONBA_PTR_SET_RVALUE(modelProperties_, modelProperties) };


  protected:
    std::shared_ptr<ModelFeatures> modelFeatures_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<vector<ModelParameterRule>> modelParameterRules_ = nullptr;
    std::shared_ptr<ModelProperties> modelProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
