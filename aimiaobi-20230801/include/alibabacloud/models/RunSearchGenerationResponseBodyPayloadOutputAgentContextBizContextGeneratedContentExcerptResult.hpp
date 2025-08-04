// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTEXCERPTRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTEXCERPTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_TO_JSON(ReasonTextGenerate, reasonTextGenerate_);
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_FROM_JSON(ReasonTextGenerate, reasonTextGenerate_);
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generateFinished_ != nullptr
        && this->generateLevel_ != nullptr && this->reasonTextGenerate_ != nullptr && this->searchResult_ != nullptr && this->textGenerate_ != nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // generateLevel Field Functions 
    bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
    void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
    inline string generateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


    // reasonTextGenerate Field Functions 
    bool hasReasonTextGenerate() const { return this->reasonTextGenerate_ != nullptr;};
    void deleteReasonTextGenerate() { this->reasonTextGenerate_ = nullptr;};
    inline string reasonTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(reasonTextGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& setReasonTextGenerate(string reasonTextGenerate) { DARABONBA_PTR_SET_VALUE(reasonTextGenerate_, reasonTextGenerate) };


    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult> & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult> searchResult() { DARABONBA_PTR_GET(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& setSearchResult(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& setSearchResult(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


    // textGenerate Field Functions 
    bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
    void deleteTextGenerate() { this->textGenerate_ = nullptr;};
    inline string textGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> generateLevel_ = nullptr;
    std::shared_ptr<string> reasonTextGenerate_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentExcerptResultSearchResult>> searchResult_ = nullptr;
    std::shared_ptr<string> textGenerate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
