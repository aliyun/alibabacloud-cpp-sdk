// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTEXCERPTRESULTSEARCHRESULTTEXTGENERATEMULTIMODALMEDIALISTMULTIMODALMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTEXCERPTRESULTSEARCHRESULTTEXTGENERATEMULTIMODALMEDIALISTMULTIMODALMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(Article, article_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Article, article_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->article_ != nullptr
        && this->fileUrl_ != nullptr && this->mediaId_ != nullptr && this->mediaType_ != nullptr; };
    // article Field Functions 
    bool hasArticle() const { return this->article_ != nullptr;};
    void deleteArticle() { this->article_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle & article() const { DARABONBA_PTR_GET_CONST(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle article() { DARABONBA_PTR_GET(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& setArticle(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& setArticle(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResultTextGenerateMultimodalMediaListMultimodalMediaListArticle> article_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
