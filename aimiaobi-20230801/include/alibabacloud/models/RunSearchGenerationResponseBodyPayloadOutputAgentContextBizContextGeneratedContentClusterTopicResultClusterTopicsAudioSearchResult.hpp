// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTCLUSTERTOPICRESULTCLUSTERTOPICSAUDIOSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTCLUSTERTOPICRESULTCLUSTERTOPICSAUDIOSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current_ != nullptr
        && this->searchResult_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult searchResult() { DARABONBA_PTR_GET(searchResult_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& setSearchResult(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& setSearchResult(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResult> searchResult_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
