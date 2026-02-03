// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelTemplate, modelTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelTemplate, modelTemplate_);
    };
    ModelConfig() = default ;
    ModelConfig(const ModelConfig &) = default ;
    ModelConfig(ModelConfig &&) = default ;
    ModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelConfig() = default ;
    ModelConfig& operator=(const ModelConfig &) = default ;
    ModelConfig& operator=(ModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelName_ == nullptr
        && this->modelTemplate_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelTemplate Field Functions 
    bool hasModelTemplate() const { return this->modelTemplate_ != nullptr;};
    void deleteModelTemplate() { this->modelTemplate_ = nullptr;};
    inline const ModelTemplate & getModelTemplate() const { DARABONBA_PTR_GET_CONST(modelTemplate_, ModelTemplate) };
    inline ModelTemplate getModelTemplate() { DARABONBA_PTR_GET(modelTemplate_, ModelTemplate) };
    inline ModelConfig& setModelTemplate(const ModelTemplate & modelTemplate) { DARABONBA_PTR_SET_VALUE(modelTemplate_, modelTemplate) };
    inline ModelConfig& setModelTemplate(ModelTemplate && modelTemplate) { DARABONBA_PTR_SET_RVALUE(modelTemplate_, modelTemplate) };


  protected:
    shared_ptr<string> modelName_ {};
    shared_ptr<ModelTemplate> modelTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
