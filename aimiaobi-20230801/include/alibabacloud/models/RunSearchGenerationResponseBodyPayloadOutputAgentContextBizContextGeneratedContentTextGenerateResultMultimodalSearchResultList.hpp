// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTGENERATERESULTMULTIMODALSEARCHRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTGENERATERESULTMULTIMODALSEARCHRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TimelineDateStr, timelineDateStr_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TimelineDateStr, timelineDateStr_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current_ != nullptr
        && this->searchQuery_ != nullptr && this->searchResult_ != nullptr && this->searchType_ != nullptr && this->size_ != nullptr && this->timelineDateStr_ != nullptr
        && this->total_ != nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult> & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult> searchResult() { DARABONBA_PTR_GET(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setSearchResult(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setSearchResult(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // timelineDateStr Field Functions 
    bool hasTimelineDateStr() const { return this->timelineDateStr_ != nullptr;};
    void deleteTimelineDateStr() { this->timelineDateStr_ = nullptr;};
    inline string timelineDateStr() const { DARABONBA_PTR_GET_DEFAULT(timelineDateStr_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setTimelineDateStr(string timelineDateStr) { DARABONBA_PTR_SET_VALUE(timelineDateStr_, timelineDateStr) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultListSearchResult>> searchResult_ = nullptr;
    std::shared_ptr<string> searchType_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> timelineDateStr_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
