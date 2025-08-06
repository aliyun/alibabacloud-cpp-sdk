// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYEVENTLISTRESPONSEBODYEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYEVENTLISTRESPONSEBODYEVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayEventListResponseBodyEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayEventListResponseBodyEventList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayEventListResponseBodyEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    DescribePlayEventListResponseBodyEventList() = default ;
    DescribePlayEventListResponseBodyEventList(const DescribePlayEventListResponseBodyEventList &) = default ;
    DescribePlayEventListResponseBodyEventList(DescribePlayEventListResponseBodyEventList &&) = default ;
    DescribePlayEventListResponseBodyEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayEventListResponseBodyEventList() = default ;
    DescribePlayEventListResponseBodyEventList& operator=(const DescribePlayEventListResponseBodyEventList &) = default ;
    DescribePlayEventListResponseBodyEventList& operator=(DescribePlayEventListResponseBodyEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->duration_ != nullptr && this->eventName_ != nullptr && this->time_ != nullptr && this->topic_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePlayEventListResponseBodyEventList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline DescribePlayEventListResponseBodyEventList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribePlayEventListResponseBodyEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribePlayEventListResponseBodyEventList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DescribePlayEventListResponseBodyEventList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<float> duration_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
