// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTCLUSTERTOPICRESULTCLUSTERTOPICSAUDIOSEARCHRESULTSEARCHRESULTCLIPINFOS_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTCLUSTERTOPICRESULTCLUSTERTOPICSAUDIOSEARCHRESULTSEARCHRESULTCLIPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->score_ != nullptr && this->text_ != nullptr && this->to_ != nullptr && this->type_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline double from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline double to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentClusterTopicResultClusterTopicsAudioSearchResultSearchResultClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<double> from_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<double> to_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
