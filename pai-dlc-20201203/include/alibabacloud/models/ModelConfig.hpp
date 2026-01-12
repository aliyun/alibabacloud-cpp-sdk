// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#include <darabonba/Core.hpp>
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
    };
    friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
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
    virtual bool empty() const override { return this->modelName_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    shared_ptr<string> modelName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
