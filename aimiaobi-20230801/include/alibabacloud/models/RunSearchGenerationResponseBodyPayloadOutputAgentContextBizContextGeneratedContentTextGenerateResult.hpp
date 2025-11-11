// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTGENERATERESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTGENERATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_TO_JSON(GenerateTraceability, generateTraceability_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
      DARABONBA_PTR_TO_JSON(ReasonTextGenerate, reasonTextGenerate_);
      DARABONBA_PTR_TO_JSON(ReferenceList, referenceList_);
      DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
      DARABONBA_PTR_TO_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_FROM_JSON(GenerateTraceability, generateTraceability_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
      DARABONBA_PTR_FROM_JSON(ReasonTextGenerate, reasonTextGenerate_);
      DARABONBA_PTR_FROM_JSON(ReferenceList, referenceList_);
      DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
      DARABONBA_PTR_FROM_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->generateLevel_ == nullptr && return this->generateTraceability_ == nullptr && return this->multimodalSearchResultList_ == nullptr && return this->reasonTextGenerate_ == nullptr && return this->referenceList_ == nullptr
        && return this->textGenerate_ == nullptr && return this->textGenerateMultimodalMediaList_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // generateLevel Field Functions 
    bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
    void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
    inline string generateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


    // generateTraceability Field Functions 
    bool hasGenerateTraceability() const { return this->generateTraceability_ != nullptr;};
    void deleteGenerateTraceability() { this->generateTraceability_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability & generateTraceability() const { DARABONBA_PTR_GET_CONST(generateTraceability_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability generateTraceability() { DARABONBA_PTR_GET(generateTraceability_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setGenerateTraceability(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability & generateTraceability) { DARABONBA_PTR_SET_VALUE(generateTraceability_, generateTraceability) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setGenerateTraceability(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability && generateTraceability) { DARABONBA_PTR_SET_RVALUE(generateTraceability_, generateTraceability) };


    // multimodalSearchResultList Field Functions 
    bool hasMultimodalSearchResultList() const { return this->multimodalSearchResultList_ != nullptr;};
    void deleteMultimodalSearchResultList() { this->multimodalSearchResultList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList> & multimodalSearchResultList() const { DARABONBA_PTR_GET_CONST(multimodalSearchResultList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList> multimodalSearchResultList() { DARABONBA_PTR_GET(multimodalSearchResultList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setMultimodalSearchResultList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList> & multimodalSearchResultList) { DARABONBA_PTR_SET_VALUE(multimodalSearchResultList_, multimodalSearchResultList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setMultimodalSearchResultList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList> && multimodalSearchResultList) { DARABONBA_PTR_SET_RVALUE(multimodalSearchResultList_, multimodalSearchResultList) };


    // reasonTextGenerate Field Functions 
    bool hasReasonTextGenerate() const { return this->reasonTextGenerate_ != nullptr;};
    void deleteReasonTextGenerate() { this->reasonTextGenerate_ = nullptr;};
    inline string reasonTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(reasonTextGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setReasonTextGenerate(string reasonTextGenerate) { DARABONBA_PTR_SET_VALUE(reasonTextGenerate_, reasonTextGenerate) };


    // referenceList Field Functions 
    bool hasReferenceList() const { return this->referenceList_ != nullptr;};
    void deleteReferenceList() { this->referenceList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList> & referenceList() const { DARABONBA_PTR_GET_CONST(referenceList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList> referenceList() { DARABONBA_PTR_GET(referenceList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setReferenceList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList> & referenceList) { DARABONBA_PTR_SET_VALUE(referenceList_, referenceList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setReferenceList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList> && referenceList) { DARABONBA_PTR_SET_RVALUE(referenceList_, referenceList) };


    // textGenerate Field Functions 
    bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
    void deleteTextGenerate() { this->textGenerate_ = nullptr;};
    inline string textGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


    // textGenerateMultimodalMediaList Field Functions 
    bool hasTextGenerateMultimodalMediaList() const { return this->textGenerateMultimodalMediaList_ != nullptr;};
    void deleteTextGenerateMultimodalMediaList() { this->textGenerateMultimodalMediaList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(textGenerateMultimodalMediaList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList> textGenerateMultimodalMediaList() { DARABONBA_PTR_GET(textGenerateMultimodalMediaList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setTextGenerateMultimodalMediaList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_VALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResult& setTextGenerateMultimodalMediaList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList> && textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_RVALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> generateLevel_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceability> generateTraceability_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultMultimodalSearchResultList>> multimodalSearchResultList_ = nullptr;
    std::shared_ptr<string> reasonTextGenerate_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultReferenceList>> referenceList_ = nullptr;
    std::shared_ptr<string> textGenerate_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultTextGenerateMultimodalMediaList>> textGenerateMultimodalMediaList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
