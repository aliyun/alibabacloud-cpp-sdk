// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCJOBSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCJOBSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateContextDatabaseSyncJobScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextDatabaseSyncJobScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DailyTimes, dailyTimes_);
      DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MissedPolicy, missedPolicy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextDatabaseSyncJobScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DailyTimes, dailyTimes_);
      DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MissedPolicy, missedPolicy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateContextDatabaseSyncJobScheduleRequest() = default ;
    UpdateContextDatabaseSyncJobScheduleRequest(const UpdateContextDatabaseSyncJobScheduleRequest &) = default ;
    UpdateContextDatabaseSyncJobScheduleRequest(UpdateContextDatabaseSyncJobScheduleRequest &&) = default ;
    UpdateContextDatabaseSyncJobScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextDatabaseSyncJobScheduleRequest() = default ;
    UpdateContextDatabaseSyncJobScheduleRequest& operator=(const UpdateContextDatabaseSyncJobScheduleRequest &) = default ;
    UpdateContextDatabaseSyncJobScheduleRequest& operator=(UpdateContextDatabaseSyncJobScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dailyTimes_ == nullptr && this->intervalMinutes_ == nullptr && this->jobId_ == nullptr && this->missedPolicy_ == nullptr && this->type_ == nullptr
        && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dailyTimes Field Functions 
    bool hasDailyTimes() const { return this->dailyTimes_ != nullptr;};
    void deleteDailyTimes() { this->dailyTimes_ = nullptr;};
    inline const vector<string> & getDailyTimes() const { DARABONBA_PTR_GET_CONST(dailyTimes_, vector<string>) };
    inline vector<string> getDailyTimes() { DARABONBA_PTR_GET(dailyTimes_, vector<string>) };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setDailyTimes(const vector<string> & dailyTimes) { DARABONBA_PTR_SET_VALUE(dailyTimes_, dailyTimes) };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setDailyTimes(vector<string> && dailyTimes) { DARABONBA_PTR_SET_RVALUE(dailyTimes_, dailyTimes) };


    // intervalMinutes Field Functions 
    bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
    void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
    inline int32_t getIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // missedPolicy Field Functions 
    bool hasMissedPolicy() const { return this->missedPolicy_ != nullptr;};
    void deleteMissedPolicy() { this->missedPolicy_ = nullptr;};
    inline string getMissedPolicy() const { DARABONBA_PTR_GET_DEFAULT(missedPolicy_, "") };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setMissedPolicy(string missedPolicy) { DARABONBA_PTR_SET_VALUE(missedPolicy_, missedPolicy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateContextDatabaseSyncJobScheduleRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<string>> dailyTimes_ {};
    shared_ptr<int32_t> intervalMinutes_ {};
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    shared_ptr<string> missedPolicy_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
