// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOGENERATERESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOGENERATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelReduce, modelReduce_);
      DARABONBA_PTR_TO_JSON(reasonText, reasonText_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelReduce, modelReduce_);
      DARABONBA_PTR_FROM_JSON(reasonText, reasonText_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult(RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->index_ == nullptr && return this->modelId_ == nullptr && return this->modelReduce_ == nullptr && return this->reasonText_ == nullptr && return this->text_ == nullptr
        && return this->usage_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelReduce Field Functions 
    bool hasModelReduce() const { return this->modelReduce_ != nullptr;};
    void deleteModelReduce() { this->modelReduce_ = nullptr;};
    inline bool modelReduce() const { DARABONBA_PTR_GET_DEFAULT(modelReduce_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setModelReduce(bool modelReduce) { DARABONBA_PTR_SET_VALUE(modelReduce_, modelReduce) };


    // reasonText Field Functions 
    bool hasReasonText() const { return this->reasonText_ != nullptr;};
    void deleteReasonText() { this->reasonText_ = nullptr;};
    inline string reasonText() const { DARABONBA_PTR_GET_DEFAULT(reasonText_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setReasonText(string reasonText) { DARABONBA_PTR_SET_VALUE(reasonText_, reasonText) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setUsage(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult& setUsage(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<bool> modelReduce_ = nullptr;
    std::shared_ptr<string> reasonText_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
