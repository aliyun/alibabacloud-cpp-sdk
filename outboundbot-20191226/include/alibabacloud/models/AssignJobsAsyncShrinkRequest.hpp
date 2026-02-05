// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class AssignJobsAsyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignJobsAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumberShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobsJson, jobsJsonShrink_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, AssignJobsAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumberShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobsJson, jobsJsonShrink_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    AssignJobsAsyncShrinkRequest() = default ;
    AssignJobsAsyncShrinkRequest(const AssignJobsAsyncShrinkRequest &) = default ;
    AssignJobsAsyncShrinkRequest(AssignJobsAsyncShrinkRequest &&) = default ;
    AssignJobsAsyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignJobsAsyncShrinkRequest() = default ;
    AssignJobsAsyncShrinkRequest& operator=(const AssignJobsAsyncShrinkRequest &) = default ;
    AssignJobsAsyncShrinkRequest& operator=(AssignJobsAsyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumberShrink_ == nullptr
        && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobsJsonShrink_ == nullptr && this->strategyJson_ == nullptr; };
    // callingNumberShrink Field Functions 
    bool hasCallingNumberShrink() const { return this->callingNumberShrink_ != nullptr;};
    void deleteCallingNumberShrink() { this->callingNumberShrink_ = nullptr;};
    inline string getCallingNumberShrink() const { DARABONBA_PTR_GET_DEFAULT(callingNumberShrink_, "") };
    inline AssignJobsAsyncShrinkRequest& setCallingNumberShrink(string callingNumberShrink) { DARABONBA_PTR_SET_VALUE(callingNumberShrink_, callingNumberShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssignJobsAsyncShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline AssignJobsAsyncShrinkRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobsJsonShrink Field Functions 
    bool hasJobsJsonShrink() const { return this->jobsJsonShrink_ != nullptr;};
    void deleteJobsJsonShrink() { this->jobsJsonShrink_ = nullptr;};
    inline string getJobsJsonShrink() const { DARABONBA_PTR_GET_DEFAULT(jobsJsonShrink_, "") };
    inline AssignJobsAsyncShrinkRequest& setJobsJsonShrink(string jobsJsonShrink) { DARABONBA_PTR_SET_VALUE(jobsJsonShrink_, jobsJsonShrink) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string getStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline AssignJobsAsyncShrinkRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    shared_ptr<string> callingNumberShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    shared_ptr<string> jobsJsonShrink_ {};
    shared_ptr<string> strategyJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
