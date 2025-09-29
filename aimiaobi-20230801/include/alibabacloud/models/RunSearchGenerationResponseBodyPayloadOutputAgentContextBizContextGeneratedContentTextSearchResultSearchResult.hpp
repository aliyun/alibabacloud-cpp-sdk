// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTSEARCHRESULTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTSEARCHRESULTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
      DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
      DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->docId_ != nullptr && this->docUuid_ != nullptr && this->pubTime_ != nullptr && this->searchSource_ != nullptr && this->searchSourceName_ != nullptr
        && this->searchSourceType_ != nullptr && this->summary_ != nullptr && this->title_ != nullptr && this->traceabilityId_ != nullptr && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // searchSource Field Functions 
    bool hasSearchSource() const { return this->searchSource_ != nullptr;};
    void deleteSearchSource() { this->searchSource_ = nullptr;};
    inline string searchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


    // searchSourceName Field Functions 
    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
    inline string searchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


    // searchSourceType Field Functions 
    bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
    void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
    inline string searchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // traceabilityId Field Functions 
    bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
    void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
    inline string traceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextSearchResultSearchResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> searchSource_ = nullptr;
    std::shared_ptr<string> searchSourceName_ = nullptr;
    std::shared_ptr<string> searchSourceType_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> traceabilityId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
