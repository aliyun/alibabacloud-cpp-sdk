// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOANALYSISRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOANALYSISRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
      DARABONBA_PTR_TO_JSON(videoShotAnalysisResults, videoShotAnalysisResults_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
      DARABONBA_PTR_FROM_JSON(videoShotAnalysisResults, videoShotAnalysisResults_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->text_ == nullptr && return this->usage_ == nullptr && return this->videoShotAnalysisResults_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& setUsage(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& setUsage(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // videoShotAnalysisResults Field Functions 
    bool hasVideoShotAnalysisResults() const { return this->videoShotAnalysisResults_ != nullptr;};
    void deleteVideoShotAnalysisResults() { this->videoShotAnalysisResults_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> & videoShotAnalysisResults() const { DARABONBA_PTR_GET_CONST(videoShotAnalysisResults_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> videoShotAnalysisResults() { DARABONBA_PTR_GET(videoShotAnalysisResults_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& setVideoShotAnalysisResults(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> & videoShotAnalysisResults) { DARABONBA_PTR_SET_VALUE(videoShotAnalysisResults_, videoShotAnalysisResults) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult& setVideoShotAnalysisResults(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> && videoShotAnalysisResults) { DARABONBA_PTR_SET_RVALUE(videoShotAnalysisResults_, videoShotAnalysisResults) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage> usage_ = nullptr;
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>> videoShotAnalysisResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
