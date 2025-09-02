// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODYDATATOPICS_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODYDATATOPICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineKeyPathResponseBodyDataTopics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineKeyPathResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineKeyPathResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetBaselineKeyPathResponseBodyDataTopics() = default ;
    GetBaselineKeyPathResponseBodyDataTopics(const GetBaselineKeyPathResponseBodyDataTopics &) = default ;
    GetBaselineKeyPathResponseBodyDataTopics(GetBaselineKeyPathResponseBodyDataTopics &&) = default ;
    GetBaselineKeyPathResponseBodyDataTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineKeyPathResponseBodyDataTopics() = default ;
    GetBaselineKeyPathResponseBodyDataTopics& operator=(const GetBaselineKeyPathResponseBodyDataTopics &) = default ;
    GetBaselineKeyPathResponseBodyDataTopics& operator=(GetBaselineKeyPathResponseBodyDataTopics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addTime_ != nullptr
        && this->instanceId_ != nullptr && this->topicId_ != nullptr && this->topicName_ != nullptr; };
    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline int64_t addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataTopics& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataTopics& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataTopics& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetBaselineKeyPathResponseBodyDataTopics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The timestamp when the event was found.
    std::shared_ptr<int64_t> addTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The event ID.
    std::shared_ptr<int64_t> topicId_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
