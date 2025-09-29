// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTCLUSTERTOPICRESULTCLUSTERTOPICSAUDIOSEARCHRESULTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTCLUSTERTOPICRESULTCLUSTERTOPICSAUDIOSEARCHRESULTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Article, article_);
      DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Article, article_);
      DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->article_ != nullptr
        && this->clipInfos_ != nullptr && this->fileUrl_ != nullptr && this->mediaId_ != nullptr; };
    // article Field Functions 
    bool hasArticle() const { return this->article_ != nullptr;};
    void deleteArticle() { this->article_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle & article() const { DARABONBA_PTR_GET_CONST(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle article() { DARABONBA_PTR_GET(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& setArticle(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& setArticle(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


    // clipInfos Field Functions 
    bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
    void deleteClipInfos() { this->clipInfos_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos> & clipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos> clipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& setClipInfos(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& setClipInfos(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultArticle> article_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos>> clipInfos_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
