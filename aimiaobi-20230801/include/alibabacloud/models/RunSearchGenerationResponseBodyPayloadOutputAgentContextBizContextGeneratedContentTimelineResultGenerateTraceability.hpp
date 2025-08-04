// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTIMELINERESULTGENERATETRACEABILITY_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTIMELINERESULTGENERATETRACEABILITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& obj) { 
      DARABONBA_PTR_TO_JSON(Coordinates, coordinates_);
      DARABONBA_PTR_TO_JSON(Duplicate, duplicate_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& obj) { 
      DARABONBA_PTR_FROM_JSON(Coordinates, coordinates_);
      DARABONBA_PTR_FROM_JSON(Duplicate, duplicate_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coordinates_ != nullptr
        && this->duplicate_ != nullptr; };
    // coordinates Field Functions 
    bool hasCoordinates() const { return this->coordinates_ != nullptr;};
    void deleteCoordinates() { this->coordinates_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates> & coordinates() const { DARABONBA_PTR_GET_CONST(coordinates_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates> coordinates() { DARABONBA_PTR_GET(coordinates_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& setCoordinates(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates> & coordinates) { DARABONBA_PTR_SET_VALUE(coordinates_, coordinates) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& setCoordinates(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates> && coordinates) { DARABONBA_PTR_SET_RVALUE(coordinates_, coordinates) };


    // duplicate Field Functions 
    bool hasDuplicate() const { return this->duplicate_ != nullptr;};
    void deleteDuplicate() { this->duplicate_ = nullptr;};
    inline double duplicate() const { DARABONBA_PTR_GET_DEFAULT(duplicate_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceability& setDuplicate(double duplicate) { DARABONBA_PTR_SET_VALUE(duplicate_, duplicate) };


  protected:
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultGenerateTraceabilityCoordinates>> coordinates_ = nullptr;
    std::shared_ptr<double> duplicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
