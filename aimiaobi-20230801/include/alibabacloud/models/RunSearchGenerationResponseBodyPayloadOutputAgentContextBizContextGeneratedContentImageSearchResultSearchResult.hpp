// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTIMAGESEARCHRESULTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTIMAGESEARCHRESULTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Article, article_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Article, article_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->article_ != nullptr
        && this->fileUrl_ != nullptr && this->mediaId_ != nullptr; };
    // article Field Functions 
    bool hasArticle() const { return this->article_ != nullptr;};
    void deleteArticle() { this->article_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle & article() const { DARABONBA_PTR_GET_CONST(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle article() { DARABONBA_PTR_GET(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& setArticle(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& setArticle(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentImageSearchResultSearchResultArticle> article_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
