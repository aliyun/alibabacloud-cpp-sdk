// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXPERIMENTRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXPERIMENTRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateExperimentRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExperimentRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(completedTasks, completedTasks_);
      DARABONBA_PTR_TO_JSON(executedAt, executedAt_);
      DARABONBA_PTR_TO_JSON(failedTasks, failedTasks_);
      DARABONBA_PTR_TO_JSON(recordName, recordName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalTasks, totalTasks_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExperimentRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(completedTasks, completedTasks_);
      DARABONBA_PTR_FROM_JSON(executedAt, executedAt_);
      DARABONBA_PTR_FROM_JSON(failedTasks, failedTasks_);
      DARABONBA_PTR_FROM_JSON(recordName, recordName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalTasks, totalTasks_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateExperimentRunRequest() = default ;
    UpdateExperimentRunRequest(const UpdateExperimentRunRequest &) = default ;
    UpdateExperimentRunRequest(UpdateExperimentRunRequest &&) = default ;
    UpdateExperimentRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExperimentRunRequest() = default ;
    UpdateExperimentRunRequest& operator=(const UpdateExperimentRunRequest &) = default ;
    UpdateExperimentRunRequest& operator=(UpdateExperimentRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->completedTasks_ == nullptr && this->executedAt_ == nullptr && this->failedTasks_ == nullptr && this->recordName_ == nullptr && this->status_ == nullptr
        && this->totalTasks_ == nullptr && this->clientToken_ == nullptr; };
    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline int64_t getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, 0L) };
    inline UpdateExperimentRunRequest& setCompletedAt(int64_t completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // completedTasks Field Functions 
    bool hasCompletedTasks() const { return this->completedTasks_ != nullptr;};
    void deleteCompletedTasks() { this->completedTasks_ = nullptr;};
    inline int32_t getCompletedTasks() const { DARABONBA_PTR_GET_DEFAULT(completedTasks_, 0) };
    inline UpdateExperimentRunRequest& setCompletedTasks(int32_t completedTasks) { DARABONBA_PTR_SET_VALUE(completedTasks_, completedTasks) };


    // executedAt Field Functions 
    bool hasExecutedAt() const { return this->executedAt_ != nullptr;};
    void deleteExecutedAt() { this->executedAt_ = nullptr;};
    inline int64_t getExecutedAt() const { DARABONBA_PTR_GET_DEFAULT(executedAt_, 0L) };
    inline UpdateExperimentRunRequest& setExecutedAt(int64_t executedAt) { DARABONBA_PTR_SET_VALUE(executedAt_, executedAt) };


    // failedTasks Field Functions 
    bool hasFailedTasks() const { return this->failedTasks_ != nullptr;};
    void deleteFailedTasks() { this->failedTasks_ = nullptr;};
    inline int32_t getFailedTasks() const { DARABONBA_PTR_GET_DEFAULT(failedTasks_, 0) };
    inline UpdateExperimentRunRequest& setFailedTasks(int32_t failedTasks) { DARABONBA_PTR_SET_VALUE(failedTasks_, failedTasks) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline UpdateExperimentRunRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateExperimentRunRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalTasks Field Functions 
    bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
    void deleteTotalTasks() { this->totalTasks_ = nullptr;};
    inline int32_t getTotalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0) };
    inline UpdateExperimentRunRequest& setTotalTasks(int32_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateExperimentRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The experiment completion time. A millisecond-level UNIX timestamp.
    shared_ptr<int64_t> completedAt_ {};
    // The number of completed tasks.
    shared_ptr<int32_t> completedTasks_ {};
    // The experiment execution time. A millisecond-level UNIX timestamp.
    shared_ptr<int64_t> executedAt_ {};
    // The number of failed tasks.
    shared_ptr<int32_t> failedTasks_ {};
    // The experiment record name.
    shared_ptr<string> recordName_ {};
    // The experiment record status. Set to cancelled to cancel execution.
    shared_ptr<string> status_ {};
    // The total number of tasks.
    shared_ptr<int32_t> totalTasks_ {};
    // Optional.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
