// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobOutputModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobOutputModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OutputModels, outputModels_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobOutputModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputModels, outputModels_);
    };
    ListTrainingJobOutputModelsResponseBody() = default ;
    ListTrainingJobOutputModelsResponseBody(const ListTrainingJobOutputModelsResponseBody &) = default ;
    ListTrainingJobOutputModelsResponseBody(ListTrainingJobOutputModelsResponseBody &&) = default ;
    ListTrainingJobOutputModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobOutputModelsResponseBody() = default ;
    ListTrainingJobOutputModelsResponseBody& operator=(const ListTrainingJobOutputModelsResponseBody &) = default ;
    ListTrainingJobOutputModelsResponseBody& operator=(ListTrainingJobOutputModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutputModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutputModels& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OutputModels& obj) { 
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
      OutputModels() = default ;
      OutputModels(const OutputModels &) = default ;
      OutputModels(OutputModels &&) = default ;
      OutputModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutputModels() = default ;
      OutputModels& operator=(const OutputModels &) = default ;
      OutputModels& operator=(OutputModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->compressionSpec_ == nullptr
        && this->evaluationSpec_ == nullptr && this->inferenceSpec_ == nullptr && this->labels_ == nullptr && this->metrics_ == nullptr && this->outputChannelName_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->trainingSpec_ == nullptr && this->uri_ == nullptr; };
      // compressionSpec Field Functions 
      bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
      void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
      inline       const Darabonba::Json & getCompressionSpec() const { DARABONBA_GET(compressionSpec_) };
      Darabonba::Json & getCompressionSpec() { DARABONBA_GET(compressionSpec_) };
      inline OutputModels& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
      inline OutputModels& setCompressionSpec(Darabonba::Json && compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


      // evaluationSpec Field Functions 
      bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
      void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
      inline       const Darabonba::Json & getEvaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
      Darabonba::Json & getEvaluationSpec() { DARABONBA_GET(evaluationSpec_) };
      inline OutputModels& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
      inline OutputModels& setEvaluationSpec(Darabonba::Json && evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


      // inferenceSpec Field Functions 
      bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
      void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
      inline       const Darabonba::Json & getInferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
      Darabonba::Json & getInferenceSpec() { DARABONBA_GET(inferenceSpec_) };
      inline OutputModels& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
      inline OutputModels& setInferenceSpec(Darabonba::Json && inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<OutputModels::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<OutputModels::Labels>) };
      inline vector<OutputModels::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<OutputModels::Labels>) };
      inline OutputModels& setLabels(const vector<OutputModels::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline OutputModels& setLabels(vector<OutputModels::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline       const Darabonba::Json & getMetrics() const { DARABONBA_GET(metrics_) };
      Darabonba::Json & getMetrics() { DARABONBA_GET(metrics_) };
      inline OutputModels& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
      inline OutputModels& setMetrics(Darabonba::Json && metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


      // outputChannelName Field Functions 
      bool hasOutputChannelName() const { return this->outputChannelName_ != nullptr;};
      void deleteOutputChannelName() { this->outputChannelName_ = nullptr;};
      inline string getOutputChannelName() const { DARABONBA_PTR_GET_DEFAULT(outputChannelName_, "") };
      inline OutputModels& setOutputChannelName(string outputChannelName) { DARABONBA_PTR_SET_VALUE(outputChannelName_, outputChannelName) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline OutputModels& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline OutputModels& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // trainingSpec Field Functions 
      bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
      void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
      inline       const Darabonba::Json & getTrainingSpec() const { DARABONBA_GET(trainingSpec_) };
      Darabonba::Json & getTrainingSpec() { DARABONBA_GET(trainingSpec_) };
      inline OutputModels& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
      inline OutputModels& setTrainingSpec(Darabonba::Json && trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline OutputModels& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      Darabonba::Json compressionSpec_ {};
      Darabonba::Json evaluationSpec_ {};
      Darabonba::Json inferenceSpec_ {};
      shared_ptr<vector<OutputModels::Labels>> labels_ {};
      Darabonba::Json metrics_ {};
      shared_ptr<string> outputChannelName_ {};
      shared_ptr<string> sourceId_ {};
      shared_ptr<string> sourceType_ {};
      Darabonba::Json trainingSpec_ {};
      shared_ptr<string> uri_ {};
    };

    virtual bool empty() const override { return this->outputModels_ == nullptr; };
    // outputModels Field Functions 
    bool hasOutputModels() const { return this->outputModels_ != nullptr;};
    void deleteOutputModels() { this->outputModels_ = nullptr;};
    inline const vector<ListTrainingJobOutputModelsResponseBody::OutputModels> & getOutputModels() const { DARABONBA_PTR_GET_CONST(outputModels_, vector<ListTrainingJobOutputModelsResponseBody::OutputModels>) };
    inline vector<ListTrainingJobOutputModelsResponseBody::OutputModels> getOutputModels() { DARABONBA_PTR_GET(outputModels_, vector<ListTrainingJobOutputModelsResponseBody::OutputModels>) };
    inline ListTrainingJobOutputModelsResponseBody& setOutputModels(const vector<ListTrainingJobOutputModelsResponseBody::OutputModels> & outputModels) { DARABONBA_PTR_SET_VALUE(outputModels_, outputModels) };
    inline ListTrainingJobOutputModelsResponseBody& setOutputModels(vector<ListTrainingJobOutputModelsResponseBody::OutputModels> && outputModels) { DARABONBA_PTR_SET_RVALUE(outputModels_, outputModels) };


  protected:
    shared_ptr<vector<ListTrainingJobOutputModelsResponseBody::OutputModels>> outputModels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
