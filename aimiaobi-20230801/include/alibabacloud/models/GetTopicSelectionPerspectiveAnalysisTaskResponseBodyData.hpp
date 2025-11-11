// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FreshViewPointsResult, freshViewPointsResult_);
      DARABONBA_PTR_TO_JSON(HotViewPointsResult, hotViewPointsResult_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimedViewPointsResult, timedViewPointsResult_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSummaryResult, topicSummaryResult_);
      DARABONBA_PTR_TO_JSON(WebReviewPointsResult, webReviewPointsResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FreshViewPointsResult, freshViewPointsResult_);
      DARABONBA_PTR_FROM_JSON(HotViewPointsResult, hotViewPointsResult_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimedViewPointsResult, timedViewPointsResult_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSummaryResult, topicSummaryResult_);
      DARABONBA_PTR_FROM_JSON(WebReviewPointsResult, webReviewPointsResult_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->freshViewPointsResult_ == nullptr && return this->hotViewPointsResult_ == nullptr && return this->status_ == nullptr && return this->timedViewPointsResult_ == nullptr && return this->topic_ == nullptr
        && return this->topicSummaryResult_ == nullptr && return this->webReviewPointsResult_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // freshViewPointsResult Field Functions 
    bool hasFreshViewPointsResult() const { return this->freshViewPointsResult_ != nullptr;};
    void deleteFreshViewPointsResult() { this->freshViewPointsResult_ = nullptr;};
    inline const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult & freshViewPointsResult() const { DARABONBA_PTR_GET_CONST(freshViewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult) };
    inline Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult freshViewPointsResult() { DARABONBA_PTR_GET(freshViewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setFreshViewPointsResult(const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult & freshViewPointsResult) { DARABONBA_PTR_SET_VALUE(freshViewPointsResult_, freshViewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setFreshViewPointsResult(Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult && freshViewPointsResult) { DARABONBA_PTR_SET_RVALUE(freshViewPointsResult_, freshViewPointsResult) };


    // hotViewPointsResult Field Functions 
    bool hasHotViewPointsResult() const { return this->hotViewPointsResult_ != nullptr;};
    void deleteHotViewPointsResult() { this->hotViewPointsResult_ = nullptr;};
    inline const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult & hotViewPointsResult() const { DARABONBA_PTR_GET_CONST(hotViewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult) };
    inline Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult hotViewPointsResult() { DARABONBA_PTR_GET(hotViewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setHotViewPointsResult(const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult & hotViewPointsResult) { DARABONBA_PTR_SET_VALUE(hotViewPointsResult_, hotViewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setHotViewPointsResult(Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult && hotViewPointsResult) { DARABONBA_PTR_SET_RVALUE(hotViewPointsResult_, hotViewPointsResult) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timedViewPointsResult Field Functions 
    bool hasTimedViewPointsResult() const { return this->timedViewPointsResult_ != nullptr;};
    void deleteTimedViewPointsResult() { this->timedViewPointsResult_ = nullptr;};
    inline const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult & timedViewPointsResult() const { DARABONBA_PTR_GET_CONST(timedViewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult) };
    inline Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult timedViewPointsResult() { DARABONBA_PTR_GET(timedViewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setTimedViewPointsResult(const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult & timedViewPointsResult) { DARABONBA_PTR_SET_VALUE(timedViewPointsResult_, timedViewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setTimedViewPointsResult(Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult && timedViewPointsResult) { DARABONBA_PTR_SET_RVALUE(timedViewPointsResult_, timedViewPointsResult) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSummaryResult Field Functions 
    bool hasTopicSummaryResult() const { return this->topicSummaryResult_ != nullptr;};
    void deleteTopicSummaryResult() { this->topicSummaryResult_ = nullptr;};
    inline const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult & topicSummaryResult() const { DARABONBA_PTR_GET_CONST(topicSummaryResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult) };
    inline Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult topicSummaryResult() { DARABONBA_PTR_GET(topicSummaryResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setTopicSummaryResult(const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult & topicSummaryResult) { DARABONBA_PTR_SET_VALUE(topicSummaryResult_, topicSummaryResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setTopicSummaryResult(Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult && topicSummaryResult) { DARABONBA_PTR_SET_RVALUE(topicSummaryResult_, topicSummaryResult) };


    // webReviewPointsResult Field Functions 
    bool hasWebReviewPointsResult() const { return this->webReviewPointsResult_ != nullptr;};
    void deleteWebReviewPointsResult() { this->webReviewPointsResult_ = nullptr;};
    inline const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult & webReviewPointsResult() const { DARABONBA_PTR_GET_CONST(webReviewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult) };
    inline Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult webReviewPointsResult() { DARABONBA_PTR_GET(webReviewPointsResult_, Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setWebReviewPointsResult(const Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult & webReviewPointsResult) { DARABONBA_PTR_SET_VALUE(webReviewPointsResult_, webReviewPointsResult) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setWebReviewPointsResult(Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult && webReviewPointsResult) { DARABONBA_PTR_SET_RVALUE(webReviewPointsResult_, webReviewPointsResult) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult> freshViewPointsResult_ = nullptr;
    std::shared_ptr<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult> hotViewPointsResult_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult> timedViewPointsResult_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult> topicSummaryResult_ = nullptr;
    std::shared_ptr<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult> webReviewPointsResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
