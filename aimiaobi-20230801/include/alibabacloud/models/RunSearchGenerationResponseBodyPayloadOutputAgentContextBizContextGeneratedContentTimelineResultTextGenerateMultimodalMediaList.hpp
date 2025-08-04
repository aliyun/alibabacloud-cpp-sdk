// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTIMELINERESULTTEXTGENERATEMULTIMODALMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTIMELINERESULTTEXTGENERATEMULTIMODALMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(MultimodalMediaList, multimodalMediaList_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(MultimodalMediaList, multimodalMediaList_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->multimodalMediaList_ != nullptr && this->start_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // multimodalMediaList Field Functions 
    bool hasMultimodalMediaList() const { return this->multimodalMediaList_ != nullptr;};
    void deleteMultimodalMediaList() { this->multimodalMediaList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList> & multimodalMediaList() const { DARABONBA_PTR_GET_CONST(multimodalMediaList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList> multimodalMediaList() { DARABONBA_PTR_GET(multimodalMediaList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& setMultimodalMediaList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList> & multimodalMediaList) { DARABONBA_PTR_SET_VALUE(multimodalMediaList_, multimodalMediaList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& setMultimodalMediaList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList> && multimodalMediaList) { DARABONBA_PTR_SET_RVALUE(multimodalMediaList_, multimodalMediaList) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaList& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    std::shared_ptr<int32_t> end_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTimelineResultTextGenerateMultimodalMediaListMultimodalMediaList>> multimodalMediaList_ = nullptr;
    std::shared_ptr<int32_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
