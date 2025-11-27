// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAININGSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_TRAININGSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelSpecification.hpp>
#include <alibabacloud/models/Runtime.hpp>
#include <vector>
#include <alibabacloud/models/CustomParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TrainingSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainingSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ModelSpecification, modelSpecification_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(Transforms, transforms_);
      DARABONBA_PTR_TO_JSON(ValidationSourceURI, validationSourceURI_);
      DARABONBA_PTR_TO_JSON(ValidationSplit, validationSplit_);
    };
    friend void from_json(const Darabonba::Json& j, TrainingSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ModelSpecification, modelSpecification_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(Transforms, transforms_);
      DARABONBA_PTR_FROM_JSON(ValidationSourceURI, validationSourceURI_);
      DARABONBA_PTR_FROM_JSON(ValidationSplit, validationSplit_);
    };
    TrainingSpecification() = default ;
    TrainingSpecification(const TrainingSpecification &) = default ;
    TrainingSpecification(TrainingSpecification &&) = default ;
    TrainingSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainingSpecification() = default ;
    TrainingSpecification& operator=(const TrainingSpecification &) = default ;
    TrainingSpecification& operator=(TrainingSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->endpoint_ == nullptr && return this->modelSpecification_ == nullptr && return this->runtime_ == nullptr && return this->sourceURI_ == nullptr && return this->targetURI_ == nullptr
        && return this->transforms_ == nullptr && return this->validationSourceURI_ == nullptr && return this->validationSplit_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline TrainingSpecification& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline TrainingSpecification& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // modelSpecification Field Functions 
    bool hasModelSpecification() const { return this->modelSpecification_ != nullptr;};
    void deleteModelSpecification() { this->modelSpecification_ = nullptr;};
    inline const ModelSpecification & modelSpecification() const { DARABONBA_PTR_GET_CONST(modelSpecification_, ModelSpecification) };
    inline ModelSpecification modelSpecification() { DARABONBA_PTR_GET(modelSpecification_, ModelSpecification) };
    inline TrainingSpecification& setModelSpecification(const ModelSpecification & modelSpecification) { DARABONBA_PTR_SET_VALUE(modelSpecification_, modelSpecification) };
    inline TrainingSpecification& setModelSpecification(ModelSpecification && modelSpecification) { DARABONBA_PTR_SET_RVALUE(modelSpecification_, modelSpecification) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Runtime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Runtime) };
    inline Runtime runtime() { DARABONBA_PTR_GET(runtime_, Runtime) };
    inline TrainingSpecification& setRuntime(const Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline TrainingSpecification& setRuntime(Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline TrainingSpecification& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline TrainingSpecification& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // transforms Field Functions 
    bool hasTransforms() const { return this->transforms_ != nullptr;};
    void deleteTransforms() { this->transforms_ = nullptr;};
    inline const vector<CustomParams> & transforms() const { DARABONBA_PTR_GET_CONST(transforms_, vector<CustomParams>) };
    inline vector<CustomParams> transforms() { DARABONBA_PTR_GET(transforms_, vector<CustomParams>) };
    inline TrainingSpecification& setTransforms(const vector<CustomParams> & transforms) { DARABONBA_PTR_SET_VALUE(transforms_, transforms) };
    inline TrainingSpecification& setTransforms(vector<CustomParams> && transforms) { DARABONBA_PTR_SET_RVALUE(transforms_, transforms) };


    // validationSourceURI Field Functions 
    bool hasValidationSourceURI() const { return this->validationSourceURI_ != nullptr;};
    void deleteValidationSourceURI() { this->validationSourceURI_ = nullptr;};
    inline string validationSourceURI() const { DARABONBA_PTR_GET_DEFAULT(validationSourceURI_, "") };
    inline TrainingSpecification& setValidationSourceURI(string validationSourceURI) { DARABONBA_PTR_SET_VALUE(validationSourceURI_, validationSourceURI) };


    // validationSplit Field Functions 
    bool hasValidationSplit() const { return this->validationSplit_ != nullptr;};
    void deleteValidationSplit() { this->validationSplit_ = nullptr;};
    inline float validationSplit() const { DARABONBA_PTR_GET_DEFAULT(validationSplit_, 0.0) };
    inline TrainingSpecification& setValidationSplit(float validationSplit) { DARABONBA_PTR_SET_VALUE(validationSplit_, validationSplit) };


  protected:
    std::shared_ptr<string> datasetName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endpoint_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModelSpecification> modelSpecification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Runtime> runtime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetURI_ = nullptr;
    std::shared_ptr<vector<CustomParams>> transforms_ = nullptr;
    std::shared_ptr<string> validationSourceURI_ = nullptr;
    std::shared_ptr<float> validationSplit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
