// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLISTTOPICLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLISTTOPICLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& obj) { 
      DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_TO_JSON(OffsetList, offsetList_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& obj) { 
      DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_FROM_JSON(OffsetList, offsetList_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TotalDiff, totalDiff_);
    };
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList(const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList(GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList &&) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& operator=(const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& operator=(GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastTimestamp_ != nullptr
        && this->offsetList_ != nullptr && this->topic_ != nullptr && this->totalDiff_ != nullptr; };
    // lastTimestamp Field Functions 
    bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
    void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
    inline int64_t lastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


    // offsetList Field Functions 
    bool hasOffsetList() const { return this->offsetList_ != nullptr;};
    void deleteOffsetList() { this->offsetList_ = nullptr;};
    inline const Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList & offsetList() const { DARABONBA_PTR_GET_CONST(offsetList_, Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList) };
    inline Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList offsetList() { DARABONBA_PTR_GET(offsetList_, Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& setOffsetList(const Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList & offsetList) { DARABONBA_PTR_SET_VALUE(offsetList_, offsetList) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& setOffsetList(Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList && offsetList) { DARABONBA_PTR_SET_RVALUE(offsetList_, offsetList) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // totalDiff Field Functions 
    bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
    void deleteTotalDiff() { this->totalDiff_ = nullptr;};
    inline int64_t totalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


  protected:
    // The time when the last consumed message in the topic was generated.
    std::shared_ptr<int64_t> lastTimestamp_ = nullptr;
    // The consumer offsets.
    std::shared_ptr<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList> offsetList_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topic_ = nullptr;
    // The number of unconsumed messages in the topic to which the consumer group subscribes.
    std::shared_ptr<int64_t> totalDiff_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
