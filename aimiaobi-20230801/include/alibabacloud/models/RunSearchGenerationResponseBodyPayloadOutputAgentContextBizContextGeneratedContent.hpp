// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterTopicResult, clusterTopicResult_);
      DARABONBA_PTR_TO_JSON(ExcerptResult, excerptResult_);
      DARABONBA_PTR_TO_JSON(ImageSearchResult, imageSearchResult_);
      DARABONBA_PTR_TO_JSON(NewsElementResult, newsElementResult_);
      DARABONBA_PTR_TO_JSON(TextGenerateResult, textGenerateResult_);
      DARABONBA_PTR_TO_JSON(TextSearchResult, textSearchResult_);
      DARABONBA_PTR_TO_JSON(TimelineResult, timelineResult_);
      DARABONBA_PTR_TO_JSON(VideoSearchResult, videoSearchResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterTopicResult, clusterTopicResult_);
      DARABONBA_PTR_FROM_JSON(ExcerptResult, excerptResult_);
      DARABONBA_PTR_FROM_JSON(ImageSearchResult, imageSearchResult_);
      DARABONBA_PTR_FROM_JSON(NewsElementResult, newsElementResult_);
      DARABONBA_PTR_FROM_JSON(TextGenerateResult, textGenerateResult_);
      DARABONBA_PTR_FROM_JSON(TextSearchResult, textSearchResult_);
      DARABONBA_PTR_FROM_JSON(TimelineResult, timelineResult_);
      DARABONBA_PTR_FROM_JSON(VideoSearchResult, videoSearchResult_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterTopicResult_ != nullptr
        && this->excerptResult_ != nullptr && this->imageSearchResult_ != nullptr && this->newsElementResult_ != nullptr && this->textGenerateResult_ != nullptr && this->textSearchResult_ != nullptr
        && this->timelineResult_ != nullptr && this->videoSearchResult_ != nullptr; };
    // clusterTopicResult Field Functions 
    bool hasClusterTopicResult() const { return this->clusterTopicResult_ != nullptr;};
    void deleteClusterTopicResult() { this->clusterTopicResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult & clusterTopicResult() const { DARABONBA_PTR_GET_CONST(clusterTopicResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult clusterTopicResult() { DARABONBA_PTR_GET(clusterTopicResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setClusterTopicResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult & clusterTopicResult) { DARABONBA_PTR_SET_VALUE(clusterTopicResult_, clusterTopicResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setClusterTopicResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult && clusterTopicResult) { DARABONBA_PTR_SET_RVALUE(clusterTopicResult_, clusterTopicResult) };


    // excerptResult Field Functions 
    bool hasExcerptResult() const { return this->excerptResult_ != nullptr;};
    void deleteExcerptResult() { this->excerptResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult & excerptResult() const { DARABONBA_PTR_GET_CONST(excerptResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult excerptResult() { DARABONBA_PTR_GET(excerptResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setExcerptResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult & excerptResult) { DARABONBA_PTR_SET_VALUE(excerptResult_, excerptResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setExcerptResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult && excerptResult) { DARABONBA_PTR_SET_RVALUE(excerptResult_, excerptResult) };


    // imageSearchResult Field Functions 
    bool hasImageSearchResult() const { return this->imageSearchResult_ != nullptr;};
    void deleteImageSearchResult() { this->imageSearchResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult & imageSearchResult() const { DARABONBA_PTR_GET_CONST(imageSearchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult imageSearchResult() { DARABONBA_PTR_GET(imageSearchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setImageSearchResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult & imageSearchResult) { DARABONBA_PTR_SET_VALUE(imageSearchResult_, imageSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setImageSearchResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult && imageSearchResult) { DARABONBA_PTR_SET_RVALUE(imageSearchResult_, imageSearchResult) };


    // newsElementResult Field Functions 
    bool hasNewsElementResult() const { return this->newsElementResult_ != nullptr;};
    void deleteNewsElementResult() { this->newsElementResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult & newsElementResult() const { DARABONBA_PTR_GET_CONST(newsElementResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult newsElementResult() { DARABONBA_PTR_GET(newsElementResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setNewsElementResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult & newsElementResult) { DARABONBA_PTR_SET_VALUE(newsElementResult_, newsElementResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setNewsElementResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult && newsElementResult) { DARABONBA_PTR_SET_RVALUE(newsElementResult_, newsElementResult) };


    // textGenerateResult Field Functions 
    bool hasTextGenerateResult() const { return this->textGenerateResult_ != nullptr;};
    void deleteTextGenerateResult() { this->textGenerateResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult & textGenerateResult() const { DARABONBA_PTR_GET_CONST(textGenerateResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult textGenerateResult() { DARABONBA_PTR_GET(textGenerateResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setTextGenerateResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult & textGenerateResult) { DARABONBA_PTR_SET_VALUE(textGenerateResult_, textGenerateResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setTextGenerateResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult && textGenerateResult) { DARABONBA_PTR_SET_RVALUE(textGenerateResult_, textGenerateResult) };


    // textSearchResult Field Functions 
    bool hasTextSearchResult() const { return this->textSearchResult_ != nullptr;};
    void deleteTextSearchResult() { this->textSearchResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult & textSearchResult() const { DARABONBA_PTR_GET_CONST(textSearchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult textSearchResult() { DARABONBA_PTR_GET(textSearchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setTextSearchResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult & textSearchResult) { DARABONBA_PTR_SET_VALUE(textSearchResult_, textSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setTextSearchResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult && textSearchResult) { DARABONBA_PTR_SET_RVALUE(textSearchResult_, textSearchResult) };


    // timelineResult Field Functions 
    bool hasTimelineResult() const { return this->timelineResult_ != nullptr;};
    void deleteTimelineResult() { this->timelineResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult & timelineResult() const { DARABONBA_PTR_GET_CONST(timelineResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult timelineResult() { DARABONBA_PTR_GET(timelineResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setTimelineResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult & timelineResult) { DARABONBA_PTR_SET_VALUE(timelineResult_, timelineResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setTimelineResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult && timelineResult) { DARABONBA_PTR_SET_RVALUE(timelineResult_, timelineResult) };


    // videoSearchResult Field Functions 
    bool hasVideoSearchResult() const { return this->videoSearchResult_ != nullptr;};
    void deleteVideoSearchResult() { this->videoSearchResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult & videoSearchResult() const { DARABONBA_PTR_GET_CONST(videoSearchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult videoSearchResult() { DARABONBA_PTR_GET(videoSearchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setVideoSearchResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult & videoSearchResult) { DARABONBA_PTR_SET_VALUE(videoSearchResult_, videoSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent& setVideoSearchResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult && videoSearchResult) { DARABONBA_PTR_SET_RVALUE(videoSearchResult_, videoSearchResult) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResult> clusterTopicResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult> excerptResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResult> imageSearchResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResult> newsElementResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult> textGenerateResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResult> textSearchResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult> timelineResult_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResult> videoSearchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
