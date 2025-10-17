// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOMINDMAPPINGGENERATERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOMINDMAPPINGGENERATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
      DARABONBA_PTR_TO_JSON(videoMindMappings, videoMindMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
      DARABONBA_PTR_FROM_JSON(videoMindMappings, videoMindMappings_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->text_ == nullptr && return this->usage_ == nullptr && return this->videoMindMappings_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& setUsage(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& setUsage(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // videoMindMappings Field Functions 
    bool hasVideoMindMappings() const { return this->videoMindMappings_ != nullptr;};
    void deleteVideoMindMappings() { this->videoMindMappings_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> & videoMindMappings() const { DARABONBA_PTR_GET_CONST(videoMindMappings_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> videoMindMappings() { DARABONBA_PTR_GET(videoMindMappings_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& setVideoMindMappings(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> & videoMindMappings) { DARABONBA_PTR_SET_VALUE(videoMindMappings_, videoMindMappings) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult& setVideoMindMappings(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> && videoMindMappings) { DARABONBA_PTR_SET_RVALUE(videoMindMappings_, videoMindMappings) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage> usage_ = nullptr;
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>> videoMindMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
