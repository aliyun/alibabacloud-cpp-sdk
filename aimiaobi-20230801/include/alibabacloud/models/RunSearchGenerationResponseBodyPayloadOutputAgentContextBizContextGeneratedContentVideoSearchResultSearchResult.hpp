// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTVIDEOSEARCHRESULTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTVIDEOSEARCHRESULTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Article, article_);
      DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Article, article_);
      DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->article_ != nullptr
        && this->clipInfos_ != nullptr && this->fileUrl_ != nullptr && this->mediaId_ != nullptr && this->traceabilityId_ != nullptr; };
    // article Field Functions 
    bool hasArticle() const { return this->article_ != nullptr;};
    void deleteArticle() { this->article_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle & article() const { DARABONBA_PTR_GET_CONST(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle article() { DARABONBA_PTR_GET(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setArticle(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setArticle(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


    // clipInfos Field Functions 
    bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
    void deleteClipInfos() { this->clipInfos_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos> & clipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos> clipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setClipInfos(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setClipInfos(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // traceabilityId Field Functions 
    bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
    void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
    inline string traceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultArticle> article_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentVideoSearchResultSearchResultClipInfos>> clipInfos_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> traceabilityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
