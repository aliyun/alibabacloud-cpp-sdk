// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXTMULTIMODALMEDIASELECTIONTEXTSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXTMULTIMODALMEDIASELECTIONTEXTSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
    };
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult() = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult(const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult &) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult(RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult &&) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult() = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult& operator=(const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult &) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult& operator=(RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchResult_ == nullptr; };
    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult> & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult>) };
    inline vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult> searchResult() { DARABONBA_PTR_GET(searchResult_, vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult>) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult& setSearchResult(const vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult& setSearchResult(vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


  protected:
    std::shared_ptr<vector<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResultSearchResult>> searchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
