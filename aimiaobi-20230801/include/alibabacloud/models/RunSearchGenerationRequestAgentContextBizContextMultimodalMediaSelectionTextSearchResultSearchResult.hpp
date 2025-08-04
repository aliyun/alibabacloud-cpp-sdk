// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXTMULTIMODALMEDIASELECTIONTEXTSEARCHRESULTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXTMULTIMODALMEDIASELECTIONTEXTSEARCHRESULTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Chunks, chunks_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
      DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
      DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult() = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult(const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult &) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult(RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult &&) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult() = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& operator=(const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult &) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& operator=(RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunks_ != nullptr
        && this->content_ != nullptr && this->docId_ != nullptr && this->docUuid_ != nullptr && this->pubTime_ != nullptr && this->score_ != nullptr
        && this->searchSource_ != nullptr && this->searchSourceName_ != nullptr && this->searchSourceType_ != nullptr && this->source_ != nullptr && this->summary_ != nullptr
        && this->title_ != nullptr && this->url_ != nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline const vector<string> & chunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<string>) };
    inline vector<string> chunks() { DARABONBA_PTR_GET(chunks_, vector<string>) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setChunks(const vector<string> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setChunks(vector<string> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // searchSource Field Functions 
    bool hasSearchSource() const { return this->searchSource_ != nullptr;};
    void deleteSearchSource() { this->searchSource_ = nullptr;};
    inline string searchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


    // searchSourceName Field Functions 
    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
    inline string searchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


    // searchSourceType Field Functions 
    bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
    void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
    inline string searchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<vector<string>> chunks_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> searchSource_ = nullptr;
    std::shared_ptr<string> searchSourceName_ = nullptr;
    std::shared_ptr<string> searchSourceType_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
