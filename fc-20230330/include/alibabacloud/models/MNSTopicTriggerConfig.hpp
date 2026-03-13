// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MNSTOPICTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MNSTOPICTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class MNSTopicTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MNSTopicTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(filterTag, filterTag_);
      DARABONBA_PTR_TO_JSON(notifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, MNSTopicTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(filterTag, filterTag_);
      DARABONBA_PTR_FROM_JSON(notifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
    };
    MNSTopicTriggerConfig() = default ;
    MNSTopicTriggerConfig(const MNSTopicTriggerConfig &) = default ;
    MNSTopicTriggerConfig(MNSTopicTriggerConfig &&) = default ;
    MNSTopicTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MNSTopicTriggerConfig() = default ;
    MNSTopicTriggerConfig& operator=(const MNSTopicTriggerConfig &) = default ;
    MNSTopicTriggerConfig& operator=(MNSTopicTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterTag_ == nullptr
        && this->notifyContentFormat_ == nullptr && this->notifyStrategy_ == nullptr; };
    // filterTag Field Functions 
    bool hasFilterTag() const { return this->filterTag_ != nullptr;};
    void deleteFilterTag() { this->filterTag_ = nullptr;};
    inline string getFilterTag() const { DARABONBA_PTR_GET_DEFAULT(filterTag_, "") };
    inline MNSTopicTriggerConfig& setFilterTag(string filterTag) { DARABONBA_PTR_SET_VALUE(filterTag_, filterTag) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string getNotifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline MNSTopicTriggerConfig& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline MNSTopicTriggerConfig& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


  protected:
    // The filtering tag. Function execution is triggered only when a message that contains the specified filter tag is received.
    shared_ptr<string> filterTag_ {};
    // The format of the event content. The following two formats are supported:
    // 
    // *   **JSON**
    // *   **STREAM**
    // 
    // >  The default format is STREAM.
    shared_ptr<string> notifyContentFormat_ {};
    // The retry policy.
    // 
    // *   **BACKOFF_RETRY**: a backoff retry policy. A total of 3 retries are made. The interval between 2 retries is a random value between 10 and 20 seconds. This is the default value.
    // *   **EXPONENTIAL_DECAY_RETRY**: an exponential decay retry policy. A total of 176 retries are made, with the interval of each retry increases exponentially to 512 seconds, and the total retry period is 1 day. The interval between two consecutive retries exponentially increases to a maximum of 512 seconds. For example, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 512... 512. The number of 512s is 167.
    shared_ptr<string> notifyStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
