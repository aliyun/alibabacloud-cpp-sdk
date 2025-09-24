// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTMODELS_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateConnectionRequestModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequestModels& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(ToolCall, toolCall_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequestModels& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(ToolCall, toolCall_);
    };
    CreateConnectionRequestModels() = default ;
    CreateConnectionRequestModels(const CreateConnectionRequestModels &) = default ;
    CreateConnectionRequestModels(CreateConnectionRequestModels &&) = default ;
    CreateConnectionRequestModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequestModels() = default ;
    CreateConnectionRequestModels& operator=(const CreateConnectionRequestModels &) = default ;
    CreateConnectionRequestModels& operator=(CreateConnectionRequestModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->model_ != nullptr && this->modelType_ != nullptr && this->toolCall_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateConnectionRequestModels& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateConnectionRequestModels& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateConnectionRequestModels& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool toolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline CreateConnectionRequestModels& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


  protected:
    // The display name of the model.
    std::shared_ptr<string> displayName_ = nullptr;
    // The model identifier.
    std::shared_ptr<string> model_ = nullptr;
    // The model type. Valid values:
    // 
    // *   LLM
    // *   Embedding
    // *   ReRank
    std::shared_ptr<string> modelType_ = nullptr;
    // Specifies whether a tool can be called by using ToolCall. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> toolCall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
