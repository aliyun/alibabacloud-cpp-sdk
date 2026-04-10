// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPERIMENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_EXPERIMENTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelParameters.hpp>
#include <vector>
#include <alibabacloud/models/PromptTemplateItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ExperimentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExperimentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(endpointConnectorId, endpointConnectorId_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelParameters, modelParameters_);
      DARABONBA_PTR_TO_JSON(modelProvider, modelProvider_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(promptTemplate, promptTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, ExperimentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointConnectorId, endpointConnectorId_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelParameters, modelParameters_);
      DARABONBA_PTR_FROM_JSON(modelProvider, modelProvider_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(promptTemplate, promptTemplate_);
    };
    ExperimentConfig() = default ;
    ExperimentConfig(const ExperimentConfig &) = default ;
    ExperimentConfig(ExperimentConfig &&) = default ;
    ExperimentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExperimentConfig() = default ;
    ExperimentConfig& operator=(const ExperimentConfig &) = default ;
    ExperimentConfig& operator=(ExperimentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointConnectorId_ == nullptr
        && this->label_ == nullptr && this->modelName_ == nullptr && this->modelParameters_ == nullptr && this->modelProvider_ == nullptr && this->name_ == nullptr
        && this->promptTemplate_ == nullptr; };
    // endpointConnectorId Field Functions 
    bool hasEndpointConnectorId() const { return this->endpointConnectorId_ != nullptr;};
    void deleteEndpointConnectorId() { this->endpointConnectorId_ = nullptr;};
    inline string getEndpointConnectorId() const { DARABONBA_PTR_GET_DEFAULT(endpointConnectorId_, "") };
    inline ExperimentConfig& setEndpointConnectorId(string endpointConnectorId) { DARABONBA_PTR_SET_VALUE(endpointConnectorId_, endpointConnectorId) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ExperimentConfig& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ExperimentConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParameters Field Functions 
    bool hasModelParameters() const { return this->modelParameters_ != nullptr;};
    void deleteModelParameters() { this->modelParameters_ = nullptr;};
    inline const ModelParameters & getModelParameters() const { DARABONBA_PTR_GET_CONST(modelParameters_, ModelParameters) };
    inline ModelParameters getModelParameters() { DARABONBA_PTR_GET(modelParameters_, ModelParameters) };
    inline ExperimentConfig& setModelParameters(const ModelParameters & modelParameters) { DARABONBA_PTR_SET_VALUE(modelParameters_, modelParameters) };
    inline ExperimentConfig& setModelParameters(ModelParameters && modelParameters) { DARABONBA_PTR_SET_RVALUE(modelParameters_, modelParameters) };


    // modelProvider Field Functions 
    bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
    void deleteModelProvider() { this->modelProvider_ = nullptr;};
    inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
    inline ExperimentConfig& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExperimentConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // promptTemplate Field Functions 
    bool hasPromptTemplate() const { return this->promptTemplate_ != nullptr;};
    void deletePromptTemplate() { this->promptTemplate_ = nullptr;};
    inline const vector<PromptTemplateItem> & getPromptTemplate() const { DARABONBA_PTR_GET_CONST(promptTemplate_, vector<PromptTemplateItem>) };
    inline vector<PromptTemplateItem> getPromptTemplate() { DARABONBA_PTR_GET(promptTemplate_, vector<PromptTemplateItem>) };
    inline ExperimentConfig& setPromptTemplate(const vector<PromptTemplateItem> & promptTemplate) { DARABONBA_PTR_SET_VALUE(promptTemplate_, promptTemplate) };
    inline ExperimentConfig& setPromptTemplate(vector<PromptTemplateItem> && promptTemplate) { DARABONBA_PTR_SET_RVALUE(promptTemplate_, promptTemplate) };


  protected:
    shared_ptr<string> endpointConnectorId_ {};
    shared_ptr<string> label_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<ModelParameters> modelParameters_ {};
    shared_ptr<string> modelProvider_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<PromptTemplateItem>> promptTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
