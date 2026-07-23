// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OfflineExperimentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateExperimentRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(completedTasks, completedTasks_);
      DARABONBA_PTR_TO_JSON(executedAt, executedAt_);
      DARABONBA_PTR_TO_JSON(experimentPlanId, experimentPlanId_);
      DARABONBA_PTR_TO_JSON(failedTasks, failedTasks_);
      DARABONBA_PTR_TO_JSON(offlineExperiments, offlineExperiments_);
      DARABONBA_PTR_TO_JSON(recordName, recordName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalTasks, totalTasks_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(completedTasks, completedTasks_);
      DARABONBA_PTR_FROM_JSON(executedAt, executedAt_);
      DARABONBA_PTR_FROM_JSON(experimentPlanId, experimentPlanId_);
      DARABONBA_PTR_FROM_JSON(failedTasks, failedTasks_);
      DARABONBA_PTR_FROM_JSON(offlineExperiments, offlineExperiments_);
      DARABONBA_PTR_FROM_JSON(recordName, recordName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalTasks, totalTasks_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateExperimentRunRequest() = default ;
    CreateExperimentRunRequest(const CreateExperimentRunRequest &) = default ;
    CreateExperimentRunRequest(CreateExperimentRunRequest &&) = default ;
    CreateExperimentRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentRunRequest() = default ;
    CreateExperimentRunRequest& operator=(const CreateExperimentRunRequest &) = default ;
    CreateExperimentRunRequest& operator=(CreateExperimentRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->completedTasks_ == nullptr && this->executedAt_ == nullptr && this->experimentPlanId_ == nullptr && this->failedTasks_ == nullptr && this->offlineExperiments_ == nullptr
        && this->recordName_ == nullptr && this->status_ == nullptr && this->totalTasks_ == nullptr && this->clientToken_ == nullptr; };
    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline int64_t getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, 0L) };
    inline CreateExperimentRunRequest& setCompletedAt(int64_t completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // completedTasks Field Functions 
    bool hasCompletedTasks() const { return this->completedTasks_ != nullptr;};
    void deleteCompletedTasks() { this->completedTasks_ = nullptr;};
    inline int32_t getCompletedTasks() const { DARABONBA_PTR_GET_DEFAULT(completedTasks_, 0) };
    inline CreateExperimentRunRequest& setCompletedTasks(int32_t completedTasks) { DARABONBA_PTR_SET_VALUE(completedTasks_, completedTasks) };


    // executedAt Field Functions 
    bool hasExecutedAt() const { return this->executedAt_ != nullptr;};
    void deleteExecutedAt() { this->executedAt_ = nullptr;};
    inline int64_t getExecutedAt() const { DARABONBA_PTR_GET_DEFAULT(executedAt_, 0L) };
    inline CreateExperimentRunRequest& setExecutedAt(int64_t executedAt) { DARABONBA_PTR_SET_VALUE(executedAt_, executedAt) };


    // experimentPlanId Field Functions 
    bool hasExperimentPlanId() const { return this->experimentPlanId_ != nullptr;};
    void deleteExperimentPlanId() { this->experimentPlanId_ = nullptr;};
    inline string getExperimentPlanId() const { DARABONBA_PTR_GET_DEFAULT(experimentPlanId_, "") };
    inline CreateExperimentRunRequest& setExperimentPlanId(string experimentPlanId) { DARABONBA_PTR_SET_VALUE(experimentPlanId_, experimentPlanId) };


    // failedTasks Field Functions 
    bool hasFailedTasks() const { return this->failedTasks_ != nullptr;};
    void deleteFailedTasks() { this->failedTasks_ = nullptr;};
    inline int32_t getFailedTasks() const { DARABONBA_PTR_GET_DEFAULT(failedTasks_, 0) };
    inline CreateExperimentRunRequest& setFailedTasks(int32_t failedTasks) { DARABONBA_PTR_SET_VALUE(failedTasks_, failedTasks) };


    // offlineExperiments Field Functions 
    bool hasOfflineExperiments() const { return this->offlineExperiments_ != nullptr;};
    void deleteOfflineExperiments() { this->offlineExperiments_ = nullptr;};
    inline const vector<OfflineExperimentConfig> & getOfflineExperiments() const { DARABONBA_PTR_GET_CONST(offlineExperiments_, vector<OfflineExperimentConfig>) };
    inline vector<OfflineExperimentConfig> getOfflineExperiments() { DARABONBA_PTR_GET(offlineExperiments_, vector<OfflineExperimentConfig>) };
    inline CreateExperimentRunRequest& setOfflineExperiments(const vector<OfflineExperimentConfig> & offlineExperiments) { DARABONBA_PTR_SET_VALUE(offlineExperiments_, offlineExperiments) };
    inline CreateExperimentRunRequest& setOfflineExperiments(vector<OfflineExperimentConfig> && offlineExperiments) { DARABONBA_PTR_SET_RVALUE(offlineExperiments_, offlineExperiments) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateExperimentRunRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateExperimentRunRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalTasks Field Functions 
    bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
    void deleteTotalTasks() { this->totalTasks_ = nullptr;};
    inline int32_t getTotalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0) };
    inline CreateExperimentRunRequest& setTotalTasks(int32_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExperimentRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The completion time, in millisecond-level UNIX timestamp.
    shared_ptr<int64_t> completedAt_ {};
    // The number of completed tasks. If not specified, the default value is 0.
    shared_ptr<int32_t> completedTasks_ {};
    // The execution time, in millisecond-level UNIX timestamp.
    shared_ptr<int64_t> executedAt_ {};
    // The experiment plan ID.
    // 
    // This parameter is required.
    shared_ptr<string> experimentPlanId_ {};
    // The number of failed tasks. If not specified, the default value is 0.
    shared_ptr<int32_t> failedTasks_ {};
    // The list of offline experiment configurations. Required when the plan type is offline. The number of items ranges from 1 to 5.
    shared_ptr<vector<OfflineExperimentConfig>> offlineExperiments_ {};
    // The experiment record name. If not specified, the default value is the plan name plus a timestamp.
    shared_ptr<string> recordName_ {};
    // The initial status. If not specified, the default value is `pending`.
    shared_ptr<string> status_ {};
    // The total number of tasks. For online experiments, if not specified, the value is calculated based on the number of generated tasks.
    shared_ptr<int32_t> totalTasks_ {};
    // Optional.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
