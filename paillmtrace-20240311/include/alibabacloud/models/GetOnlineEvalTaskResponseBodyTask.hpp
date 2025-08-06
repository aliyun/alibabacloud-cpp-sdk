// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINEEVALTASKRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_GETONLINEEVALTASKRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOnlineEvalTaskResponseBodyTaskFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class GetOnlineEvalTaskResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineEvalTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EvalResults, evalResults_);
      DARABONBA_PTR_TO_JSON(EvaluationConfig, evaluationConfig_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_TO_JSON(GmtLastSamplingWindowEndTime, gmtLastSamplingWindowEndTime_);
      DARABONBA_PTR_TO_JSON(GmtLastSamplingWindowStartTime, gmtLastSamplingWindowStartTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(SamplingFrequencyMinutes, samplingFrequencyMinutes_);
      DARABONBA_PTR_TO_JSON(SamplingRatio, samplingRatio_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnlineEvalTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EvalResults, evalResults_);
      DARABONBA_PTR_FROM_JSON(EvaluationConfig, evaluationConfig_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_FROM_JSON(GmtLastSamplingWindowEndTime, gmtLastSamplingWindowEndTime_);
      DARABONBA_PTR_FROM_JSON(GmtLastSamplingWindowStartTime, gmtLastSamplingWindowStartTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(SamplingFrequencyMinutes, samplingFrequencyMinutes_);
      DARABONBA_PTR_FROM_JSON(SamplingRatio, samplingRatio_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetOnlineEvalTaskResponseBodyTask() = default ;
    GetOnlineEvalTaskResponseBodyTask(const GetOnlineEvalTaskResponseBodyTask &) = default ;
    GetOnlineEvalTaskResponseBodyTask(GetOnlineEvalTaskResponseBodyTask &&) = default ;
    GetOnlineEvalTaskResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineEvalTaskResponseBodyTask() = default ;
    GetOnlineEvalTaskResponseBodyTask& operator=(const GetOnlineEvalTaskResponseBodyTask &) = default ;
    GetOnlineEvalTaskResponseBodyTask& operator=(GetOnlineEvalTaskResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->appName_ != nullptr && this->description_ != nullptr && this->evalResults_ != nullptr && this->evaluationConfig_ != nullptr && this->filters_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->gmtEndTime_ != nullptr && this->gmtLastSamplingWindowEndTime_ != nullptr && this->gmtLastSamplingWindowStartTime_ != nullptr && this->gmtStartTime_ != nullptr
        && this->id_ != nullptr && this->modelConfig_ != nullptr && this->name_ != nullptr && this->recordCount_ != nullptr && this->samplingFrequencyMinutes_ != nullptr
        && this->samplingRatio_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evalResults Field Functions 
    bool hasEvalResults() const { return this->evalResults_ != nullptr;};
    void deleteEvalResults() { this->evalResults_ = nullptr;};
    inline string evalResults() const { DARABONBA_PTR_GET_DEFAULT(evalResults_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setEvalResults(string evalResults) { DARABONBA_PTR_SET_VALUE(evalResults_, evalResults) };


    // evaluationConfig Field Functions 
    bool hasEvaluationConfig() const { return this->evaluationConfig_ != nullptr;};
    void deleteEvaluationConfig() { this->evaluationConfig_ = nullptr;};
    inline const Models::EvaluationConfig & evaluationConfig() const { DARABONBA_PTR_GET_CONST(evaluationConfig_, Models::EvaluationConfig) };
    inline Models::EvaluationConfig evaluationConfig() { DARABONBA_PTR_GET(evaluationConfig_, Models::EvaluationConfig) };
    inline GetOnlineEvalTaskResponseBodyTask& setEvaluationConfig(const Models::EvaluationConfig & evaluationConfig) { DARABONBA_PTR_SET_VALUE(evaluationConfig_, evaluationConfig) };
    inline GetOnlineEvalTaskResponseBodyTask& setEvaluationConfig(Models::EvaluationConfig && evaluationConfig) { DARABONBA_PTR_SET_RVALUE(evaluationConfig_, evaluationConfig) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters>) };
    inline vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters>) };
    inline GetOnlineEvalTaskResponseBodyTask& setFilters(const vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline GetOnlineEvalTaskResponseBodyTask& setFilters(vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtEndTime Field Functions 
    bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
    void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
    inline string gmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


    // gmtLastSamplingWindowEndTime Field Functions 
    bool hasGmtLastSamplingWindowEndTime() const { return this->gmtLastSamplingWindowEndTime_ != nullptr;};
    void deleteGmtLastSamplingWindowEndTime() { this->gmtLastSamplingWindowEndTime_ = nullptr;};
    inline string gmtLastSamplingWindowEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtLastSamplingWindowEndTime_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setGmtLastSamplingWindowEndTime(string gmtLastSamplingWindowEndTime) { DARABONBA_PTR_SET_VALUE(gmtLastSamplingWindowEndTime_, gmtLastSamplingWindowEndTime) };


    // gmtLastSamplingWindowStartTime Field Functions 
    bool hasGmtLastSamplingWindowStartTime() const { return this->gmtLastSamplingWindowStartTime_ != nullptr;};
    void deleteGmtLastSamplingWindowStartTime() { this->gmtLastSamplingWindowStartTime_ = nullptr;};
    inline string gmtLastSamplingWindowStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtLastSamplingWindowStartTime_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setGmtLastSamplingWindowStartTime(string gmtLastSamplingWindowStartTime) { DARABONBA_PTR_SET_VALUE(gmtLastSamplingWindowStartTime_, gmtLastSamplingWindowStartTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const Models::ModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, Models::ModelConfig) };
    inline Models::ModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, Models::ModelConfig) };
    inline GetOnlineEvalTaskResponseBodyTask& setModelConfig(const Models::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline GetOnlineEvalTaskResponseBodyTask& setModelConfig(Models::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int32_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0) };
    inline GetOnlineEvalTaskResponseBodyTask& setRecordCount(int32_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // samplingFrequencyMinutes Field Functions 
    bool hasSamplingFrequencyMinutes() const { return this->samplingFrequencyMinutes_ != nullptr;};
    void deleteSamplingFrequencyMinutes() { this->samplingFrequencyMinutes_ = nullptr;};
    inline int32_t samplingFrequencyMinutes() const { DARABONBA_PTR_GET_DEFAULT(samplingFrequencyMinutes_, 0) };
    inline GetOnlineEvalTaskResponseBodyTask& setSamplingFrequencyMinutes(int32_t samplingFrequencyMinutes) { DARABONBA_PTR_SET_VALUE(samplingFrequencyMinutes_, samplingFrequencyMinutes) };


    // samplingRatio Field Functions 
    bool hasSamplingRatio() const { return this->samplingRatio_ != nullptr;};
    void deleteSamplingRatio() { this->samplingRatio_ = nullptr;};
    inline int32_t samplingRatio() const { DARABONBA_PTR_GET_DEFAULT(samplingRatio_, 0) };
    inline GetOnlineEvalTaskResponseBodyTask& setSamplingRatio(int32_t samplingRatio) { DARABONBA_PTR_SET_VALUE(samplingRatio_, samplingRatio) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetOnlineEvalTaskResponseBodyTask& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The Alibaba Cloud account (primary account) of the task creator.
    std::shared_ptr<string> aliyunUid_ = nullptr;
    // The name of the user application targeted by this task.
    std::shared_ptr<string> appName_ = nullptr;
    // Task description information
    std::shared_ptr<string> description_ = nullptr;
    // Deprecated. Will be removed.
    std::shared_ptr<string> evalResults_ = nullptr;
    // Extract specific path values from JSON-formatted trace data as input for the evaluation operation. These JSON paths are defined within this EvaluationConfig structure.
    std::shared_ptr<Models::EvaluationConfig> evaluationConfig_ = nullptr;
    // The evaluation task needs to search for a certain amount of trace data generated by the user application as input data for the evaluation operation. This is a list that defines the search filter conditions.
    std::shared_ptr<vector<Models::GetOnlineEvalTaskResponseBodyTaskFilters>> filters_ = nullptr;
    // UTC creation time of the task.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // UTC end time of the trace data.
    std::shared_ptr<string> gmtEndTime_ = nullptr;
    // UTC upper bound of the last sampling window
    std::shared_ptr<string> gmtLastSamplingWindowEndTime_ = nullptr;
    // UTC lower bound of the last sampling window.
    std::shared_ptr<string> gmtLastSamplingWindowStartTime_ = nullptr;
    // UTC start time of the trace data.
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    // Task ID
    std::shared_ptr<string> id_ = nullptr;
    // Access configuration structure for the large model used internally by the evaluation task.
    std::shared_ptr<Models::ModelConfig> modelConfig_ = nullptr;
    // Task name.
    std::shared_ptr<string> name_ = nullptr;
    // Number of evaluation records
    std::shared_ptr<int32_t> recordCount_ = nullptr;
    // The evaluation task needs to search for a certain amount of trace data generated by the user application as input data for the evaluation operation. This defines the width of the time window for each search of input data.
    std::shared_ptr<int32_t> samplingFrequencyMinutes_ = nullptr;
    // The percentage of the data found within a time window that is actually used as input for the evaluation task. For example, 100 means all the found data is used as input, 20 means 20% of the found data is randomly selected as input.
    std::shared_ptr<int32_t> samplingRatio_ = nullptr;
    // Task status
    std::shared_ptr<string> status_ = nullptr;
    // The Alibaba Cloud sub-account of the task creator.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
