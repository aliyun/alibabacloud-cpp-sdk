// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNJOBSREQUEST_HPP_
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
  class AssignJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAsynchrony, isAsynchrony_);
      DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobsJson, jobsJson_);
      DARABONBA_PTR_TO_JSON(RosterType, rosterType_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, AssignJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAsynchrony, isAsynchrony_);
      DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobsJson, jobsJson_);
      DARABONBA_PTR_FROM_JSON(RosterType, rosterType_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    AssignJobsRequest() = default ;
    AssignJobsRequest(const AssignJobsRequest &) = default ;
    AssignJobsRequest(AssignJobsRequest &&) = default ;
    AssignJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignJobsRequest() = default ;
    AssignJobsRequest& operator=(const AssignJobsRequest &) = default ;
    AssignJobsRequest& operator=(AssignJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && this->instanceId_ == nullptr && this->isAsynchrony_ == nullptr && this->jobDataParsingTaskId_ == nullptr && this->jobGroupId_ == nullptr && this->jobsJson_ == nullptr
        && this->rosterType_ == nullptr && this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & getCallingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> getCallingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline AssignJobsRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline AssignJobsRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssignJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAsynchrony Field Functions 
    bool hasIsAsynchrony() const { return this->isAsynchrony_ != nullptr;};
    void deleteIsAsynchrony() { this->isAsynchrony_ = nullptr;};
    inline bool getIsAsynchrony() const { DARABONBA_PTR_GET_DEFAULT(isAsynchrony_, false) };
    inline AssignJobsRequest& setIsAsynchrony(bool isAsynchrony) { DARABONBA_PTR_SET_VALUE(isAsynchrony_, isAsynchrony) };


    // jobDataParsingTaskId Field Functions 
    bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
    void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
    inline string getJobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
    inline AssignJobsRequest& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline AssignJobsRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobsJson Field Functions 
    bool hasJobsJson() const { return this->jobsJson_ != nullptr;};
    void deleteJobsJson() { this->jobsJson_ = nullptr;};
    inline const vector<string> & getJobsJson() const { DARABONBA_PTR_GET_CONST(jobsJson_, vector<string>) };
    inline vector<string> getJobsJson() { DARABONBA_PTR_GET(jobsJson_, vector<string>) };
    inline AssignJobsRequest& setJobsJson(const vector<string> & jobsJson) { DARABONBA_PTR_SET_VALUE(jobsJson_, jobsJson) };
    inline AssignJobsRequest& setJobsJson(vector<string> && jobsJson) { DARABONBA_PTR_SET_RVALUE(jobsJson_, jobsJson) };


    // rosterType Field Functions 
    bool hasRosterType() const { return this->rosterType_ != nullptr;};
    void deleteRosterType() { this->rosterType_ = nullptr;};
    inline string getRosterType() const { DARABONBA_PTR_GET_DEFAULT(rosterType_, "") };
    inline AssignJobsRequest& setRosterType(string rosterType) { DARABONBA_PTR_SET_VALUE(rosterType_, rosterType) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string getStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline AssignJobsRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    shared_ptr<vector<string>> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> isAsynchrony_ {};
    shared_ptr<string> jobDataParsingTaskId_ {};
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    shared_ptr<vector<string>> jobsJson_ {};
    shared_ptr<string> rosterType_ {};
    shared_ptr<string> strategyJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
