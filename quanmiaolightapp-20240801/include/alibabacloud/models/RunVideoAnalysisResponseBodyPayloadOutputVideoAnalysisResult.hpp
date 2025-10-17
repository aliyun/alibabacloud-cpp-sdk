// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOANALYSISRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOANALYSISRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
      DARABONBA_PTR_TO_JSON(videoShotAnalysisResults, videoShotAnalysisResults_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
      DARABONBA_PTR_FROM_JSON(videoShotAnalysisResults, videoShotAnalysisResults_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult(RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->modelId_ == nullptr && return this->text_ == nullptr && return this->usage_ == nullptr && return this->videoShotAnalysisResults_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setUsage(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setUsage(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // videoShotAnalysisResults Field Functions 
    bool hasVideoShotAnalysisResults() const { return this->videoShotAnalysisResults_ != nullptr;};
    void deleteVideoShotAnalysisResults() { this->videoShotAnalysisResults_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> & videoShotAnalysisResults() const { DARABONBA_PTR_GET_CONST(videoShotAnalysisResults_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> videoShotAnalysisResults() { DARABONBA_PTR_GET(videoShotAnalysisResults_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setVideoShotAnalysisResults(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> & videoShotAnalysisResults) { DARABONBA_PTR_SET_VALUE(videoShotAnalysisResults_, videoShotAnalysisResults) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult& setVideoShotAnalysisResults(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> && videoShotAnalysisResults) { DARABONBA_PTR_SET_RVALUE(videoShotAnalysisResults_, videoShotAnalysisResults) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage> usage_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>> videoShotAnalysisResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
