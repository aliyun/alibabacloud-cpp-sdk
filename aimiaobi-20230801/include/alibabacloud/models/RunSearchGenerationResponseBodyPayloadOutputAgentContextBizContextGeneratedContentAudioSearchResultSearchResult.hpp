// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTAUDIOSEARCHRESULTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTAUDIOSEARCHRESULTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Article, article_);
      DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Article, article_);
      DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->article_ != nullptr
        && this->clipInfos_ != nullptr && this->fileUrl_ != nullptr && this->mediaId_ != nullptr && this->traceabilityId_ != nullptr; };
    // article Field Functions 
    bool hasArticle() const { return this->article_ != nullptr;};
    void deleteArticle() { this->article_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle & article() const { DARABONBA_PTR_GET_CONST(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle article() { DARABONBA_PTR_GET(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setArticle(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setArticle(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


    // clipInfos Field Functions 
    bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
    void deleteClipInfos() { this->clipInfos_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos> & clipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos> clipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setClipInfos(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setClipInfos(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // traceabilityId Field Functions 
    bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
    void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
    inline string traceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultArticle> article_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResultClipInfos>> clipInfos_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> traceabilityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
