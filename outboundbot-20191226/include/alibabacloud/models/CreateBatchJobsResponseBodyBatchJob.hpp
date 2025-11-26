// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHJOBSRESPONSEBODYBATCHJOB_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHJOBSRESPONSEBODYBATCHJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateBatchJobsResponseBodyBatchJobStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBatchJobsResponseBodyBatchJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchJobsResponseBodyBatchJob& obj) { 
      DARABONBA_PTR_TO_JSON(BatchJobId, batchJobId_);
      DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchJobsResponseBodyBatchJob& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchJobId, batchJobId_);
      DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateBatchJobsResponseBodyBatchJob() = default ;
    CreateBatchJobsResponseBodyBatchJob(const CreateBatchJobsResponseBodyBatchJob &) = default ;
    CreateBatchJobsResponseBodyBatchJob(CreateBatchJobsResponseBodyBatchJob &&) = default ;
    CreateBatchJobsResponseBodyBatchJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchJobsResponseBodyBatchJob() = default ;
    CreateBatchJobsResponseBodyBatchJob& operator=(const CreateBatchJobsResponseBodyBatchJob &) = default ;
    CreateBatchJobsResponseBodyBatchJob& operator=(CreateBatchJobsResponseBodyBatchJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchJobId_ == nullptr
        && return this->callingNumbers_ == nullptr && return this->creationTime_ == nullptr && return this->jobFilePath_ == nullptr && return this->jobGroupDescription_ == nullptr && return this->jobGroupName_ == nullptr
        && return this->scenarioId_ == nullptr && return this->strategy_ == nullptr; };
    // batchJobId Field Functions 
    bool hasBatchJobId() const { return this->batchJobId_ != nullptr;};
    void deleteBatchJobId() { this->batchJobId_ = nullptr;};
    inline string batchJobId() const { DARABONBA_PTR_GET_DEFAULT(batchJobId_, "") };
    inline CreateBatchJobsResponseBodyBatchJob& setBatchJobId(string batchJobId) { DARABONBA_PTR_SET_VALUE(batchJobId_, batchJobId) };


    // callingNumbers Field Functions 
    bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
    void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
    inline const vector<string> & callingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
    inline vector<string> callingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
    inline CreateBatchJobsResponseBodyBatchJob& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
    inline CreateBatchJobsResponseBodyBatchJob& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline CreateBatchJobsResponseBodyBatchJob& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline CreateBatchJobsResponseBodyBatchJob& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string jobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline CreateBatchJobsResponseBodyBatchJob& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline CreateBatchJobsResponseBodyBatchJob& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CreateBatchJobsResponseBodyBatchJob& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::CreateBatchJobsResponseBodyBatchJobStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::CreateBatchJobsResponseBodyBatchJobStrategy) };
    inline Models::CreateBatchJobsResponseBodyBatchJobStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::CreateBatchJobsResponseBodyBatchJobStrategy) };
    inline CreateBatchJobsResponseBodyBatchJob& setStrategy(const Models::CreateBatchJobsResponseBodyBatchJobStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline CreateBatchJobsResponseBodyBatchJob& setStrategy(Models::CreateBatchJobsResponseBodyBatchJobStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<string> batchJobId_ = nullptr;
    std::shared_ptr<vector<string>> callingNumbers_ = nullptr;
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<string> jobFilePath_ = nullptr;
    std::shared_ptr<string> jobGroupDescription_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<Models::CreateBatchJobsResponseBodyBatchJobStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
