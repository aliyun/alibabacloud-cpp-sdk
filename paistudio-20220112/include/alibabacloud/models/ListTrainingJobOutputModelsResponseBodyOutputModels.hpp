// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODYOUTPUTMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODYOUTPUTMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobOutputModelsResponseBodyOutputModelsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobOutputModelsResponseBodyOutputModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobOutputModelsResponseBodyOutputModels& obj) { 
      DARABONBA_ANY_TO_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_TO_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_TO_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_ANY_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(OutputChannelName, outputChannelName_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_ANY_TO_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobOutputModelsResponseBodyOutputModels& obj) { 
      DARABONBA_ANY_FROM_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_FROM_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_FROM_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_ANY_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(OutputChannelName, outputChannelName_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_ANY_FROM_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    ListTrainingJobOutputModelsResponseBodyOutputModels() = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModels(const ListTrainingJobOutputModelsResponseBodyOutputModels &) = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModels(ListTrainingJobOutputModelsResponseBodyOutputModels &&) = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobOutputModelsResponseBodyOutputModels() = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModels& operator=(const ListTrainingJobOutputModelsResponseBodyOutputModels &) = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModels& operator=(ListTrainingJobOutputModelsResponseBodyOutputModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compressionSpec_ != nullptr
        && this->evaluationSpec_ != nullptr && this->inferenceSpec_ != nullptr && this->labels_ != nullptr && this->metrics_ != nullptr && this->outputChannelName_ != nullptr
        && this->sourceId_ != nullptr && this->sourceType_ != nullptr && this->trainingSpec_ != nullptr && this->uri_ != nullptr; };
    // compressionSpec Field Functions 
    bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
    void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
    inline     const Darabonba::Json & compressionSpec() const { DARABONBA_GET(compressionSpec_) };
    Darabonba::Json & compressionSpec() { DARABONBA_GET(compressionSpec_) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setCompressionSpec(Darabonba::Json & compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


    // evaluationSpec Field Functions 
    bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
    void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
    inline     const Darabonba::Json & evaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
    Darabonba::Json & evaluationSpec() { DARABONBA_GET(evaluationSpec_) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setEvaluationSpec(Darabonba::Json & evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & inferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & inferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setInferenceSpec(Darabonba::Json & inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels>) };
    inline vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels>) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setLabels(const vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setLabels(vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & metrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & metrics() { DARABONBA_GET(metrics_) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setMetrics(Darabonba::Json & metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // outputChannelName Field Functions 
    bool hasOutputChannelName() const { return this->outputChannelName_ != nullptr;};
    void deleteOutputChannelName() { this->outputChannelName_ = nullptr;};
    inline string outputChannelName() const { DARABONBA_PTR_GET_DEFAULT(outputChannelName_, "") };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setOutputChannelName(string outputChannelName) { DARABONBA_PTR_SET_VALUE(outputChannelName_, outputChannelName) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // trainingSpec Field Functions 
    bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
    void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
    inline     const Darabonba::Json & trainingSpec() const { DARABONBA_GET(trainingSpec_) };
    Darabonba::Json & trainingSpec() { DARABONBA_GET(trainingSpec_) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setTrainingSpec(Darabonba::Json & trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline ListTrainingJobOutputModelsResponseBodyOutputModels& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    Darabonba::Json compressionSpec_ = nullptr;
    Darabonba::Json evaluationSpec_ = nullptr;
    Darabonba::Json inferenceSpec_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobOutputModelsResponseBodyOutputModelsLabels>> labels_ = nullptr;
    Darabonba::Json metrics_ = nullptr;
    std::shared_ptr<string> outputChannelName_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    Darabonba::Json trainingSpec_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
