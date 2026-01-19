// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELISUSINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELISUSINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModelIsUsingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelIsUsingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModelIsUsingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModelIsUsingRequest() = default ;
    ModelIsUsingRequest(const ModelIsUsingRequest &) = default ;
    ModelIsUsingRequest(ModelIsUsingRequest &&) = default ;
    ModelIsUsingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelIsUsingRequest() = default ;
    ModelIsUsingRequest& operator=(const ModelIsUsingRequest &) = default ;
    ModelIsUsingRequest& operator=(ModelIsUsingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelCode_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr && this->regId_ == nullptr && this->status_ == nullptr; };
    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline ModelIsUsingRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ModelIsUsingRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelIsUsingRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModelIsUsingRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelIsUsingRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Model code.
    // 
    // This parameter is required.
    shared_ptr<string> modelCode_ {};
    // Model ID.
    // 
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    // Model name.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Model status.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
