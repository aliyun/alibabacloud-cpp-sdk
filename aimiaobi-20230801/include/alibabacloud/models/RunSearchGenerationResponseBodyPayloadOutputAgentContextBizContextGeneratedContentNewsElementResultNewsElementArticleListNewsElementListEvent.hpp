// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTNEWSELEMENTRESULTNEWSELEMENTARTICLELISTNEWSELEMENTLISTEVENT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTNEWSELEMENTRESULTNEWSELEMENTARTICLELISTNEWSELEMENTLISTEVENT_HPP_
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
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& obj) { 
      DARABONBA_PTR_TO_JSON(CauseList, causeList_);
      DARABONBA_PTR_TO_JSON(ProcessList, processList_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(CauseList, causeList_);
      DARABONBA_PTR_FROM_JSON(ProcessList, processList_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->causeList_ != nullptr
        && this->processList_ != nullptr && this->resultList_ != nullptr; };
    // causeList Field Functions 
    bool hasCauseList() const { return this->causeList_ != nullptr;};
    void deleteCauseList() { this->causeList_ = nullptr;};
    inline const vector<string> & causeList() const { DARABONBA_PTR_GET_CONST(causeList_, vector<string>) };
    inline vector<string> causeList() { DARABONBA_PTR_GET(causeList_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& setCauseList(const vector<string> & causeList) { DARABONBA_PTR_SET_VALUE(causeList_, causeList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& setCauseList(vector<string> && causeList) { DARABONBA_PTR_SET_RVALUE(causeList_, causeList) };


    // processList Field Functions 
    bool hasProcessList() const { return this->processList_ != nullptr;};
    void deleteProcessList() { this->processList_ = nullptr;};
    inline const vector<string> & processList() const { DARABONBA_PTR_GET_CONST(processList_, vector<string>) };
    inline vector<string> processList() { DARABONBA_PTR_GET(processList_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& setProcessList(const vector<string> & processList) { DARABONBA_PTR_SET_VALUE(processList_, processList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& setProcessList(vector<string> && processList) { DARABONBA_PTR_SET_RVALUE(processList_, processList) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<string> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<string>) };
    inline vector<string> resultList() { DARABONBA_PTR_GET(resultList_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& setResultList(const vector<string> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementListEvent& setResultList(vector<string> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    std::shared_ptr<vector<string>> causeList_ = nullptr;
    std::shared_ptr<vector<string>> processList_ = nullptr;
    std::shared_ptr<vector<string>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
