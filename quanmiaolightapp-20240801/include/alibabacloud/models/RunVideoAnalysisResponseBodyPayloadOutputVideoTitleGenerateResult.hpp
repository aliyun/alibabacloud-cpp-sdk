// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOTITLEGENERATERESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOTITLEGENERATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelReduce, modelReduce_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelReduce, modelReduce_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult(RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->modelId_ == nullptr && return this->modelReduce_ == nullptr && return this->text_ == nullptr && return this->usage_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelReduce Field Functions 
    bool hasModelReduce() const { return this->modelReduce_ != nullptr;};
    void deleteModelReduce() { this->modelReduce_ = nullptr;};
    inline bool modelReduce() const { DARABONBA_PTR_GET_DEFAULT(modelReduce_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& setModelReduce(bool modelReduce) { DARABONBA_PTR_SET_VALUE(modelReduce_, modelReduce) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& setUsage(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult& setUsage(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<bool> modelReduce_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
