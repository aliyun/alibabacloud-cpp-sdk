// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROWDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELROWDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRowDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRowDTO& obj) { 
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRowDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    ModelRowDTO() = default ;
    ModelRowDTO(const ModelRowDTO &) = default ;
    ModelRowDTO(ModelRowDTO &&) = default ;
    ModelRowDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRowDTO() = default ;
    ModelRowDTO& operator=(const ModelRowDTO &) = default ;
    ModelRowDTO& operator=(ModelRowDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelCode_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr && this->values_ == nullptr; };
    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline ModelRowDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline ModelRowDTO& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelRowDTO& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline ModelRowDTO& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
