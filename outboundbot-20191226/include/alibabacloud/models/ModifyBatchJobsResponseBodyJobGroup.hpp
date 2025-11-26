// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBATCHJOBSRESPONSEBODYJOBGROUP_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBATCHJOBSRESPONSEBODYJOBGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyBatchJobsResponseBodyJobGroupStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBatchJobsResponseBodyJobGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBatchJobsResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBatchJobsResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    ModifyBatchJobsResponseBodyJobGroup() = default ;
    ModifyBatchJobsResponseBodyJobGroup(const ModifyBatchJobsResponseBodyJobGroup &) = default ;
    ModifyBatchJobsResponseBodyJobGroup(ModifyBatchJobsResponseBodyJobGroup &&) = default ;
    ModifyBatchJobsResponseBodyJobGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBatchJobsResponseBodyJobGroup() = default ;
    ModifyBatchJobsResponseBodyJobGroup& operator=(const ModifyBatchJobsResponseBodyJobGroup &) = default ;
    ModifyBatchJobsResponseBodyJobGroup& operator=(ModifyBatchJobsResponseBodyJobGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && return this->creationTime_ == nullptr && return this->jobFilePath_ == nullptr && return this->jobGroupDescription_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobGroupName_ == nullptr
        && return this->scenarioId_ == nullptr && return this->strategy_ == nullptr; };
    // callingNumbers Field Functions 
    bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
    void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
    inline const vector<string> & callingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
    inline vector<string> callingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
    inline ModifyBatchJobsResponseBodyJobGroup& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
    inline ModifyBatchJobsResponseBodyJobGroup& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline ModifyBatchJobsResponseBodyJobGroup& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline ModifyBatchJobsResponseBodyJobGroup& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string jobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline ModifyBatchJobsResponseBodyJobGroup& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ModifyBatchJobsResponseBodyJobGroup& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline ModifyBatchJobsResponseBodyJobGroup& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ModifyBatchJobsResponseBodyJobGroup& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::ModifyBatchJobsResponseBodyJobGroupStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::ModifyBatchJobsResponseBodyJobGroupStrategy) };
    inline Models::ModifyBatchJobsResponseBodyJobGroupStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::ModifyBatchJobsResponseBodyJobGroupStrategy) };
    inline ModifyBatchJobsResponseBodyJobGroup& setStrategy(const Models::ModifyBatchJobsResponseBodyJobGroupStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline ModifyBatchJobsResponseBodyJobGroup& setStrategy(Models::ModifyBatchJobsResponseBodyJobGroupStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<string>> callingNumbers_ = nullptr;
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<string> jobFilePath_ = nullptr;
    std::shared_ptr<string> jobGroupDescription_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<Models::ModifyBatchJobsResponseBodyJobGroupStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
