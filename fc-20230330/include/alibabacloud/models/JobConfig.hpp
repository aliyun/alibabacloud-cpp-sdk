// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JOBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class JobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(maxRetryTime, maxRetryTime_);
      DARABONBA_PTR_TO_JSON(triggerInterval, triggerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, JobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(maxRetryTime, maxRetryTime_);
      DARABONBA_PTR_FROM_JSON(triggerInterval, triggerInterval_);
    };
    JobConfig() = default ;
    JobConfig(const JobConfig &) = default ;
    JobConfig(JobConfig &&) = default ;
    JobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobConfig() = default ;
    JobConfig& operator=(const JobConfig &) = default ;
    JobConfig& operator=(JobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxRetryTime_ == nullptr
        && this->triggerInterval_ == nullptr; };
    // maxRetryTime Field Functions 
    bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
    void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
    inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
    inline JobConfig& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


    // triggerInterval Field Functions 
    bool hasTriggerInterval() const { return this->triggerInterval_ != nullptr;};
    void deleteTriggerInterval() { this->triggerInterval_ = nullptr;};
    inline int32_t getTriggerInterval() const { DARABONBA_PTR_GET_DEFAULT(triggerInterval_, 0) };
    inline JobConfig& setTriggerInterval(int32_t triggerInterval) { DARABONBA_PTR_SET_VALUE(triggerInterval_, triggerInterval) };


  protected:
    shared_ptr<int32_t> maxRetryTime_ {};
    shared_ptr<int32_t> triggerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
