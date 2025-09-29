// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTAUDIOSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTAUDIOSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->searchResult_ != nullptr; };
    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult> & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult> searchResult() { DARABONBA_PTR_GET(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult& setSearchResult(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResult& setSearchResult(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


  protected:
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentAudioSearchResultSearchResult>> searchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
