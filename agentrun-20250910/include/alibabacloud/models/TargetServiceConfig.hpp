// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_TARGETSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class TargetServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelNamePattern, modelNamePattern_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, TargetServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelNamePattern, modelNamePattern_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    TargetServiceConfig() = default ;
    TargetServiceConfig(const TargetServiceConfig &) = default ;
    TargetServiceConfig(TargetServiceConfig &&) = default ;
    TargetServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetServiceConfig() = default ;
    TargetServiceConfig& operator=(const TargetServiceConfig &) = default ;
    TargetServiceConfig& operator=(TargetServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr
        && return this->modelName_ == nullptr && return this->modelNamePattern_ == nullptr && return this->weight_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline TargetServiceConfig& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline TargetServiceConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelNamePattern Field Functions 
    bool hasModelNamePattern() const { return this->modelNamePattern_ != nullptr;};
    void deleteModelNamePattern() { this->modelNamePattern_ = nullptr;};
    inline string modelNamePattern() const { DARABONBA_PTR_GET_DEFAULT(modelNamePattern_, "") };
    inline TargetServiceConfig& setModelNamePattern(string modelNamePattern) { DARABONBA_PTR_SET_VALUE(modelNamePattern_, modelNamePattern) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int64_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
    inline TargetServiceConfig& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> modelNamePattern_ = nullptr;
    std::shared_ptr<int64_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
