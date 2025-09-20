// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HYPERPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_HYPERPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CustomParams.hpp>
#include <vector>
#include <alibabacloud/models/Optimization.hpp>
#include <alibabacloud/models/Schedule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Hyperparameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Hyperparameters& obj) { 
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(DataLoaderWorkers, dataLoaderWorkers_);
      DARABONBA_PTR_TO_JSON(Evaluator, evaluator_);
      DARABONBA_PTR_TO_JSON(InputSize, inputSize_);
      DARABONBA_PTR_TO_JSON(MaxEpoch, maxEpoch_);
      DARABONBA_PTR_TO_JSON(Optimization, optimization_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, Hyperparameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(DataLoaderWorkers, dataLoaderWorkers_);
      DARABONBA_PTR_FROM_JSON(Evaluator, evaluator_);
      DARABONBA_PTR_FROM_JSON(InputSize, inputSize_);
      DARABONBA_PTR_FROM_JSON(MaxEpoch, maxEpoch_);
      DARABONBA_PTR_FROM_JSON(Optimization, optimization_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
    };
    Hyperparameters() = default ;
    Hyperparameters(const Hyperparameters &) = default ;
    Hyperparameters(Hyperparameters &&) = default ;
    Hyperparameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Hyperparameters() = default ;
    Hyperparameters& operator=(const Hyperparameters &) = default ;
    Hyperparameters& operator=(Hyperparameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupInterval_ != nullptr
        && this->batchSize_ != nullptr && this->dataLoaderWorkers_ != nullptr && this->evaluator_ != nullptr && this->inputSize_ != nullptr && this->maxEpoch_ != nullptr
        && this->optimization_ != nullptr && this->schedule_ != nullptr; };
    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline int64_t backupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, 0L) };
    inline Hyperparameters& setBackupInterval(int64_t backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int64_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0L) };
    inline Hyperparameters& setBatchSize(int64_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // dataLoaderWorkers Field Functions 
    bool hasDataLoaderWorkers() const { return this->dataLoaderWorkers_ != nullptr;};
    void deleteDataLoaderWorkers() { this->dataLoaderWorkers_ = nullptr;};
    inline int64_t dataLoaderWorkers() const { DARABONBA_PTR_GET_DEFAULT(dataLoaderWorkers_, 0L) };
    inline Hyperparameters& setDataLoaderWorkers(int64_t dataLoaderWorkers) { DARABONBA_PTR_SET_VALUE(dataLoaderWorkers_, dataLoaderWorkers) };


    // evaluator Field Functions 
    bool hasEvaluator() const { return this->evaluator_ != nullptr;};
    void deleteEvaluator() { this->evaluator_ = nullptr;};
    inline const CustomParams & evaluator() const { DARABONBA_PTR_GET_CONST(evaluator_, CustomParams) };
    inline CustomParams evaluator() { DARABONBA_PTR_GET(evaluator_, CustomParams) };
    inline Hyperparameters& setEvaluator(const CustomParams & evaluator) { DARABONBA_PTR_SET_VALUE(evaluator_, evaluator) };
    inline Hyperparameters& setEvaluator(CustomParams && evaluator) { DARABONBA_PTR_SET_RVALUE(evaluator_, evaluator) };


    // inputSize Field Functions 
    bool hasInputSize() const { return this->inputSize_ != nullptr;};
    void deleteInputSize() { this->inputSize_ = nullptr;};
    inline const vector<int64_t> & inputSize() const { DARABONBA_PTR_GET_CONST(inputSize_, vector<int64_t>) };
    inline vector<int64_t> inputSize() { DARABONBA_PTR_GET(inputSize_, vector<int64_t>) };
    inline Hyperparameters& setInputSize(const vector<int64_t> & inputSize) { DARABONBA_PTR_SET_VALUE(inputSize_, inputSize) };
    inline Hyperparameters& setInputSize(vector<int64_t> && inputSize) { DARABONBA_PTR_SET_RVALUE(inputSize_, inputSize) };


    // maxEpoch Field Functions 
    bool hasMaxEpoch() const { return this->maxEpoch_ != nullptr;};
    void deleteMaxEpoch() { this->maxEpoch_ = nullptr;};
    inline int64_t maxEpoch() const { DARABONBA_PTR_GET_DEFAULT(maxEpoch_, 0L) };
    inline Hyperparameters& setMaxEpoch(int64_t maxEpoch) { DARABONBA_PTR_SET_VALUE(maxEpoch_, maxEpoch) };


    // optimization Field Functions 
    bool hasOptimization() const { return this->optimization_ != nullptr;};
    void deleteOptimization() { this->optimization_ = nullptr;};
    inline const Optimization & optimization() const { DARABONBA_PTR_GET_CONST(optimization_, Optimization) };
    inline Optimization optimization() { DARABONBA_PTR_GET(optimization_, Optimization) };
    inline Hyperparameters& setOptimization(const Optimization & optimization) { DARABONBA_PTR_SET_VALUE(optimization_, optimization) };
    inline Hyperparameters& setOptimization(Optimization && optimization) { DARABONBA_PTR_SET_RVALUE(optimization_, optimization) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const Schedule & schedule() const { DARABONBA_PTR_GET_CONST(schedule_, Schedule) };
    inline Schedule schedule() { DARABONBA_PTR_GET(schedule_, Schedule) };
    inline Hyperparameters& setSchedule(const Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline Hyperparameters& setSchedule(Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


  protected:
    std::shared_ptr<int64_t> backupInterval_ = nullptr;
    std::shared_ptr<int64_t> batchSize_ = nullptr;
    std::shared_ptr<int64_t> dataLoaderWorkers_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CustomParams> evaluator_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> inputSize_ = nullptr;
    std::shared_ptr<int64_t> maxEpoch_ = nullptr;
    std::shared_ptr<Optimization> optimization_ = nullptr;
    std::shared_ptr<Schedule> schedule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
