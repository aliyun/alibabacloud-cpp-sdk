// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList.hpp>
#include <alibabacloud/models/GetConsumerProgressResponseBodyConsumerProgressTopicList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBodyConsumerProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBodyConsumerProgress& obj) { 
      DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_TO_JSON(RebalanceInfoList, rebalanceInfoList_);
      DARABONBA_PTR_TO_JSON(TopicList, topicList_);
      DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBodyConsumerProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_FROM_JSON(RebalanceInfoList, rebalanceInfoList_);
      DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
      DARABONBA_PTR_FROM_JSON(TotalDiff, totalDiff_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    GetConsumerProgressResponseBodyConsumerProgress() = default ;
    GetConsumerProgressResponseBodyConsumerProgress(const GetConsumerProgressResponseBodyConsumerProgress &) = default ;
    GetConsumerProgressResponseBodyConsumerProgress(GetConsumerProgressResponseBodyConsumerProgress &&) = default ;
    GetConsumerProgressResponseBodyConsumerProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBodyConsumerProgress() = default ;
    GetConsumerProgressResponseBodyConsumerProgress& operator=(const GetConsumerProgressResponseBodyConsumerProgress &) = default ;
    GetConsumerProgressResponseBodyConsumerProgress& operator=(GetConsumerProgressResponseBodyConsumerProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastTimestamp_ == nullptr
        && return this->rebalanceInfoList_ == nullptr && return this->topicList_ == nullptr && return this->totalDiff_ == nullptr && return this->state_ == nullptr; };
    // lastTimestamp Field Functions 
    bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
    void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
    inline int64_t lastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgress& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


    // rebalanceInfoList Field Functions 
    bool hasRebalanceInfoList() const { return this->rebalanceInfoList_ != nullptr;};
    void deleteRebalanceInfoList() { this->rebalanceInfoList_ = nullptr;};
    inline const Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList & rebalanceInfoList() const { DARABONBA_PTR_GET_CONST(rebalanceInfoList_, Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList) };
    inline Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList rebalanceInfoList() { DARABONBA_PTR_GET(rebalanceInfoList_, Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList) };
    inline GetConsumerProgressResponseBodyConsumerProgress& setRebalanceInfoList(const Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList & rebalanceInfoList) { DARABONBA_PTR_SET_VALUE(rebalanceInfoList_, rebalanceInfoList) };
    inline GetConsumerProgressResponseBodyConsumerProgress& setRebalanceInfoList(Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList && rebalanceInfoList) { DARABONBA_PTR_SET_RVALUE(rebalanceInfoList_, rebalanceInfoList) };


    // topicList Field Functions 
    bool hasTopicList() const { return this->topicList_ != nullptr;};
    void deleteTopicList() { this->topicList_ = nullptr;};
    inline const Models::GetConsumerProgressResponseBodyConsumerProgressTopicList & topicList() const { DARABONBA_PTR_GET_CONST(topicList_, Models::GetConsumerProgressResponseBodyConsumerProgressTopicList) };
    inline Models::GetConsumerProgressResponseBodyConsumerProgressTopicList topicList() { DARABONBA_PTR_GET(topicList_, Models::GetConsumerProgressResponseBodyConsumerProgressTopicList) };
    inline GetConsumerProgressResponseBodyConsumerProgress& setTopicList(const Models::GetConsumerProgressResponseBodyConsumerProgressTopicList & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
    inline GetConsumerProgressResponseBodyConsumerProgress& setTopicList(Models::GetConsumerProgressResponseBodyConsumerProgressTopicList && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


    // totalDiff Field Functions 
    bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
    void deleteTotalDiff() { this->totalDiff_ = nullptr;};
    inline int64_t totalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgress& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetConsumerProgressResponseBodyConsumerProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The time when the last message consumed by the consumer group was generated.
    std::shared_ptr<int64_t> lastTimestamp_ = nullptr;
    // The details of rebalances in the consumer group.
    std::shared_ptr<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList> rebalanceInfoList_ = nullptr;
    // The consumer progress of each topic to which the consumer group subscribes.
    std::shared_ptr<Models::GetConsumerProgressResponseBodyConsumerProgressTopicList> topicList_ = nullptr;
    // The total number of unconsumed messages in all topics to which the consumer group subscribes.
    std::shared_ptr<int64_t> totalDiff_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
