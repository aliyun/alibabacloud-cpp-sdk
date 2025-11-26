// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class AssignJobsAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignJobsAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobsJson, jobsJson_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, AssignJobsAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobsJson, jobsJson_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    AssignJobsAsyncRequest() = default ;
    AssignJobsAsyncRequest(const AssignJobsAsyncRequest &) = default ;
    AssignJobsAsyncRequest(AssignJobsAsyncRequest &&) = default ;
    AssignJobsAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignJobsAsyncRequest() = default ;
    AssignJobsAsyncRequest& operator=(const AssignJobsAsyncRequest &) = default ;
    AssignJobsAsyncRequest& operator=(AssignJobsAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobsJson_ == nullptr && return this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline AssignJobsAsyncRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline AssignJobsAsyncRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssignJobsAsyncRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline AssignJobsAsyncRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobsJson Field Functions 
    bool hasJobsJson() const { return this->jobsJson_ != nullptr;};
    void deleteJobsJson() { this->jobsJson_ = nullptr;};
    inline const vector<string> & jobsJson() const { DARABONBA_PTR_GET_CONST(jobsJson_, vector<string>) };
    inline vector<string> jobsJson() { DARABONBA_PTR_GET(jobsJson_, vector<string>) };
    inline AssignJobsAsyncRequest& setJobsJson(const vector<string> & jobsJson) { DARABONBA_PTR_SET_VALUE(jobsJson_, jobsJson) };
    inline AssignJobsAsyncRequest& setJobsJson(vector<string> && jobsJson) { DARABONBA_PTR_SET_RVALUE(jobsJson_, jobsJson) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string strategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline AssignJobsAsyncRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<vector<string>> jobsJson_ = nullptr;
    std::shared_ptr<string> strategyJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
