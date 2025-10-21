// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFODENYTOPICS_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFODENYTOPICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(TopicInfoList, topicInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(TopicInfoList, topicInfoList_);
    };
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics &&) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& operator=(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& operator=(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidenceScore_ == nullptr
        && return this->riskResult_ == nullptr && return this->topicInfoList_ == nullptr; };
    // confidenceScore Field Functions 
    bool hasConfidenceScore() const { return this->confidenceScore_ != nullptr;};
    void deleteConfidenceScore() { this->confidenceScore_ = nullptr;};
    inline double confidenceScore() const { DARABONBA_PTR_GET_DEFAULT(confidenceScore_, 0.0) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& setConfidenceScore(double confidenceScore) { DARABONBA_PTR_SET_VALUE(confidenceScore_, confidenceScore) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // topicInfoList Field Functions 
    bool hasTopicInfoList() const { return this->topicInfoList_ != nullptr;};
    void deleteTopicInfoList() { this->topicInfoList_ = nullptr;};
    inline const vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList> & topicInfoList() const { DARABONBA_PTR_GET_CONST(topicInfoList_, vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList>) };
    inline vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList> topicInfoList() { DARABONBA_PTR_GET(topicInfoList_, vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList>) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& setTopicInfoList(const vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList> & topicInfoList) { DARABONBA_PTR_SET_VALUE(topicInfoList_, topicInfoList) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics& setTopicInfoList(vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList> && topicInfoList) { DARABONBA_PTR_SET_RVALUE(topicInfoList_, topicInfoList) };


  protected:
    // Confidence score
    std::shared_ptr<double> confidenceScore_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    // List of sensitive topics
    std::shared_ptr<vector<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopicsTopicInfoList>> topicInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
