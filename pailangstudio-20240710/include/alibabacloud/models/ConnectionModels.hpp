// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTIONMODELS_HPP_
#define ALIBABACLOUD_MODELS_CONNECTIONMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ConnectionModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectionModels& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(MaxModelLength, maxModelLength_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(SupportReasoning, supportReasoning_);
      DARABONBA_PTR_TO_JSON(SupportResponseSchema, supportResponseSchema_);
      DARABONBA_PTR_TO_JSON(SupportVision, supportVision_);
      DARABONBA_PTR_TO_JSON(ToolCall, toolCall_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectionModels& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(MaxModelLength, maxModelLength_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(SupportReasoning, supportReasoning_);
      DARABONBA_PTR_FROM_JSON(SupportResponseSchema, supportResponseSchema_);
      DARABONBA_PTR_FROM_JSON(SupportVision, supportVision_);
      DARABONBA_PTR_FROM_JSON(ToolCall, toolCall_);
    };
    ConnectionModels() = default ;
    ConnectionModels(const ConnectionModels &) = default ;
    ConnectionModels(ConnectionModels &&) = default ;
    ConnectionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectionModels() = default ;
    ConnectionModels& operator=(const ConnectionModels &) = default ;
    ConnectionModels& operator=(ConnectionModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->maxModelLength_ == nullptr && return this->model_ == nullptr && return this->modelType_ == nullptr && return this->supportReasoning_ == nullptr && return this->supportResponseSchema_ == nullptr
        && return this->supportVision_ == nullptr && return this->toolCall_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ConnectionModels& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // maxModelLength Field Functions 
    bool hasMaxModelLength() const { return this->maxModelLength_ != nullptr;};
    void deleteMaxModelLength() { this->maxModelLength_ = nullptr;};
    inline int32_t maxModelLength() const { DARABONBA_PTR_GET_DEFAULT(maxModelLength_, 0) };
    inline ConnectionModels& setMaxModelLength(int32_t maxModelLength) { DARABONBA_PTR_SET_VALUE(maxModelLength_, maxModelLength) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ConnectionModels& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ConnectionModels& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // supportReasoning Field Functions 
    bool hasSupportReasoning() const { return this->supportReasoning_ != nullptr;};
    void deleteSupportReasoning() { this->supportReasoning_ = nullptr;};
    inline bool supportReasoning() const { DARABONBA_PTR_GET_DEFAULT(supportReasoning_, false) };
    inline ConnectionModels& setSupportReasoning(bool supportReasoning) { DARABONBA_PTR_SET_VALUE(supportReasoning_, supportReasoning) };


    // supportResponseSchema Field Functions 
    bool hasSupportResponseSchema() const { return this->supportResponseSchema_ != nullptr;};
    void deleteSupportResponseSchema() { this->supportResponseSchema_ = nullptr;};
    inline bool supportResponseSchema() const { DARABONBA_PTR_GET_DEFAULT(supportResponseSchema_, false) };
    inline ConnectionModels& setSupportResponseSchema(bool supportResponseSchema) { DARABONBA_PTR_SET_VALUE(supportResponseSchema_, supportResponseSchema) };


    // supportVision Field Functions 
    bool hasSupportVision() const { return this->supportVision_ != nullptr;};
    void deleteSupportVision() { this->supportVision_ = nullptr;};
    inline bool supportVision() const { DARABONBA_PTR_GET_DEFAULT(supportVision_, false) };
    inline ConnectionModels& setSupportVision(bool supportVision) { DARABONBA_PTR_SET_VALUE(supportVision_, supportVision) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool toolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline ConnectionModels& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


  protected:
    // 模型展示名称
    std::shared_ptr<string> displayName_ = nullptr;
    // 最大上下文长度
    std::shared_ptr<int32_t> maxModelLength_ = nullptr;
    // 模型名
    std::shared_ptr<string> model_ = nullptr;
    // 模型类型
    std::shared_ptr<string> modelType_ = nullptr;
    // 是否支持Reasoning
    std::shared_ptr<bool> supportReasoning_ = nullptr;
    // 是否支持输出Schema
    std::shared_ptr<bool> supportResponseSchema_ = nullptr;
    // 是否支持Vision
    std::shared_ptr<bool> supportVision_ = nullptr;
    // 是否支持ToolCall
    std::shared_ptr<bool> toolCall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
