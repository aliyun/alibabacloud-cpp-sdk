// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTRUNOPTIONSRETRYSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTRUNOPTIONSRETRYSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestRunOptionsRetryStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestRunOptionsRetryStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(MaximumEventAgeInSeconds, maximumEventAgeInSeconds_);
      DARABONBA_PTR_TO_JSON(MaximumRetryAttempts, maximumRetryAttempts_);
      DARABONBA_PTR_TO_JSON(PushRetryStrategy, pushRetryStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestRunOptionsRetryStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(MaximumEventAgeInSeconds, maximumEventAgeInSeconds_);
      DARABONBA_PTR_FROM_JSON(MaximumRetryAttempts, maximumRetryAttempts_);
      DARABONBA_PTR_FROM_JSON(PushRetryStrategy, pushRetryStrategy_);
    };
    CreateEventStreamingRequestRunOptionsRetryStrategy() = default ;
    CreateEventStreamingRequestRunOptionsRetryStrategy(const CreateEventStreamingRequestRunOptionsRetryStrategy &) = default ;
    CreateEventStreamingRequestRunOptionsRetryStrategy(CreateEventStreamingRequestRunOptionsRetryStrategy &&) = default ;
    CreateEventStreamingRequestRunOptionsRetryStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestRunOptionsRetryStrategy() = default ;
    CreateEventStreamingRequestRunOptionsRetryStrategy& operator=(const CreateEventStreamingRequestRunOptionsRetryStrategy &) = default ;
    CreateEventStreamingRequestRunOptionsRetryStrategy& operator=(CreateEventStreamingRequestRunOptionsRetryStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maximumEventAgeInSeconds_ != nullptr
        && this->maximumRetryAttempts_ != nullptr && this->pushRetryStrategy_ != nullptr; };
    // maximumEventAgeInSeconds Field Functions 
    bool hasMaximumEventAgeInSeconds() const { return this->maximumEventAgeInSeconds_ != nullptr;};
    void deleteMaximumEventAgeInSeconds() { this->maximumEventAgeInSeconds_ = nullptr;};
    inline int64_t maximumEventAgeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maximumEventAgeInSeconds_, 0L) };
    inline CreateEventStreamingRequestRunOptionsRetryStrategy& setMaximumEventAgeInSeconds(int64_t maximumEventAgeInSeconds) { DARABONBA_PTR_SET_VALUE(maximumEventAgeInSeconds_, maximumEventAgeInSeconds) };


    // maximumRetryAttempts Field Functions 
    bool hasMaximumRetryAttempts() const { return this->maximumRetryAttempts_ != nullptr;};
    void deleteMaximumRetryAttempts() { this->maximumRetryAttempts_ = nullptr;};
    inline int64_t maximumRetryAttempts() const { DARABONBA_PTR_GET_DEFAULT(maximumRetryAttempts_, 0L) };
    inline CreateEventStreamingRequestRunOptionsRetryStrategy& setMaximumRetryAttempts(int64_t maximumRetryAttempts) { DARABONBA_PTR_SET_VALUE(maximumRetryAttempts_, maximumRetryAttempts) };


    // pushRetryStrategy Field Functions 
    bool hasPushRetryStrategy() const { return this->pushRetryStrategy_ != nullptr;};
    void deletePushRetryStrategy() { this->pushRetryStrategy_ = nullptr;};
    inline string pushRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(pushRetryStrategy_, "") };
    inline CreateEventStreamingRequestRunOptionsRetryStrategy& setPushRetryStrategy(string pushRetryStrategy) { DARABONBA_PTR_SET_VALUE(pushRetryStrategy_, pushRetryStrategy) };


  protected:
    // The maximum timeout period for a retry.
    std::shared_ptr<int64_t> maximumEventAgeInSeconds_ = nullptr;
    // The maximum number of retries.
    std::shared_ptr<int64_t> maximumRetryAttempts_ = nullptr;
    // The retry policy. Valid values:
    // 
    // *   BACKOFF_RETRY
    // *   EXPONENTIAL_DECAY_RETRY
    std::shared_ptr<string> pushRetryStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
