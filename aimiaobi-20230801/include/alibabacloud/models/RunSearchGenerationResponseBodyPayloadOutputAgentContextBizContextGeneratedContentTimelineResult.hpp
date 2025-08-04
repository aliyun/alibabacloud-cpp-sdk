// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTIMELINERESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTIMELINERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(GenerateTraceability, generateTraceability_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
      DARABONBA_PTR_TO_JSON(ReasonTextGenerate, reasonTextGenerate_);
      DARABONBA_PTR_TO_JSON(ReferenceList, referenceList_);
      DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
      DARABONBA_PTR_TO_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(GenerateTraceability, generateTraceability_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
      DARABONBA_PTR_FROM_JSON(ReasonTextGenerate, reasonTextGenerate_);
      DARABONBA_PTR_FROM_JSON(ReferenceList, referenceList_);
      DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
      DARABONBA_PTR_FROM_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generateFinished_ != nullptr
        && this->generateTraceability_ != nullptr && this->multimodalSearchResultList_ != nullptr && this->reasonTextGenerate_ != nullptr && this->referenceList_ != nullptr && this->textGenerate_ != nullptr
        && this->textGenerateMultimodalMediaList_ != nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // generateTraceability Field Functions 
    bool hasGenerateTraceability() const { return this->generateTraceability_ != nullptr;};
    void deleteGenerateTraceability() { this->generateTraceability_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability & generateTraceability() const { DARABONBA_PTR_GET_CONST(generateTraceability_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability generateTraceability() { DARABONBA_PTR_GET(generateTraceability_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setGenerateTraceability(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability & generateTraceability) { DARABONBA_PTR_SET_VALUE(generateTraceability_, generateTraceability) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setGenerateTraceability(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability && generateTraceability) { DARABONBA_PTR_SET_RVALUE(generateTraceability_, generateTraceability) };


    // multimodalSearchResultList Field Functions 
    bool hasMultimodalSearchResultList() const { return this->multimodalSearchResultList_ != nullptr;};
    void deleteMultimodalSearchResultList() { this->multimodalSearchResultList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList> & multimodalSearchResultList() const { DARABONBA_PTR_GET_CONST(multimodalSearchResultList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList> multimodalSearchResultList() { DARABONBA_PTR_GET(multimodalSearchResultList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setMultimodalSearchResultList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList> & multimodalSearchResultList) { DARABONBA_PTR_SET_VALUE(multimodalSearchResultList_, multimodalSearchResultList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setMultimodalSearchResultList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList> && multimodalSearchResultList) { DARABONBA_PTR_SET_RVALUE(multimodalSearchResultList_, multimodalSearchResultList) };


    // reasonTextGenerate Field Functions 
    bool hasReasonTextGenerate() const { return this->reasonTextGenerate_ != nullptr;};
    void deleteReasonTextGenerate() { this->reasonTextGenerate_ = nullptr;};
    inline string reasonTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(reasonTextGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setReasonTextGenerate(string reasonTextGenerate) { DARABONBA_PTR_SET_VALUE(reasonTextGenerate_, reasonTextGenerate) };


    // referenceList Field Functions 
    bool hasReferenceList() const { return this->referenceList_ != nullptr;};
    void deleteReferenceList() { this->referenceList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList> & referenceList() const { DARABONBA_PTR_GET_CONST(referenceList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList> referenceList() { DARABONBA_PTR_GET(referenceList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setReferenceList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList> & referenceList) { DARABONBA_PTR_SET_VALUE(referenceList_, referenceList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setReferenceList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList> && referenceList) { DARABONBA_PTR_SET_RVALUE(referenceList_, referenceList) };


    // textGenerate Field Functions 
    bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
    void deleteTextGenerate() { this->textGenerate_ = nullptr;};
    inline string textGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


    // textGenerateMultimodalMediaList Field Functions 
    bool hasTextGenerateMultimodalMediaList() const { return this->textGenerateMultimodalMediaList_ != nullptr;};
    void deleteTextGenerateMultimodalMediaList() { this->textGenerateMultimodalMediaList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(textGenerateMultimodalMediaList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList> textGenerateMultimodalMediaList() { DARABONBA_PTR_GET(textGenerateMultimodalMediaList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setTextGenerateMultimodalMediaList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_VALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResult& setTextGenerateMultimodalMediaList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList> && textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_RVALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability> generateTraceability_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultMultimodalSearchResultList>> multimodalSearchResultList_ = nullptr;
    std::shared_ptr<string> reasonTextGenerate_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultReferenceList>> referenceList_ = nullptr;
    std::shared_ptr<string> textGenerate_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList>> textGenerateMultimodalMediaList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
