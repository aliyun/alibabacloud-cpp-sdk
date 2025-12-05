// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERSCENERUNNINGDATARESPONSEBODYRUNNINGDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERSCENERUNNINGDATARESPONSEBODYRUNNINGDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterSceneRunningDataResponseBodyRunningData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterSceneRunningDataResponseBodyRunningData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_TO_JSON(AgentIdList, agentIdList_);
      DARABONBA_ANY_TO_JSON(AllSampleStat, allSampleStat_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HasError, hasError_);
      DARABONBA_PTR_TO_JSON(HasReport, hasReport_);
      DARABONBA_PTR_TO_JSON(HoldFor, holdFor_);
      DARABONBA_PTR_TO_JSON(IsDebugging, isDebugging_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(SampleStatList, sampleStatList_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(StartTimeTS, startTimeTS_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vum, vum_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterSceneRunningDataResponseBodyRunningData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_FROM_JSON(AgentIdList, agentIdList_);
      DARABONBA_ANY_FROM_JSON(AllSampleStat, allSampleStat_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HasError, hasError_);
      DARABONBA_PTR_FROM_JSON(HasReport, hasReport_);
      DARABONBA_PTR_FROM_JSON(HoldFor, holdFor_);
      DARABONBA_PTR_FROM_JSON(IsDebugging, isDebugging_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(SampleStatList, sampleStatList_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(StartTimeTS, startTimeTS_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vum, vum_);
    };
    GetJMeterSceneRunningDataResponseBodyRunningData() = default ;
    GetJMeterSceneRunningDataResponseBodyRunningData(const GetJMeterSceneRunningDataResponseBodyRunningData &) = default ;
    GetJMeterSceneRunningDataResponseBodyRunningData(GetJMeterSceneRunningDataResponseBodyRunningData &&) = default ;
    GetJMeterSceneRunningDataResponseBodyRunningData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterSceneRunningDataResponseBodyRunningData() = default ;
    GetJMeterSceneRunningDataResponseBodyRunningData& operator=(const GetJMeterSceneRunningDataResponseBodyRunningData &) = default ;
    GetJMeterSceneRunningDataResponseBodyRunningData& operator=(GetJMeterSceneRunningDataResponseBodyRunningData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCount_ == nullptr
        && return this->agentIdList_ == nullptr && return this->allSampleStat_ == nullptr && return this->concurrency_ == nullptr && return this->errorMessage_ == nullptr && return this->hasError_ == nullptr
        && return this->hasReport_ == nullptr && return this->holdFor_ == nullptr && return this->isDebugging_ == nullptr && return this->reportId_ == nullptr && return this->sampleStatList_ == nullptr
        && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->stageName_ == nullptr && return this->startTimeTS_ == nullptr && return this->status_ == nullptr
        && return this->vum_ == nullptr; };
    // agentCount Field Functions 
    bool hasAgentCount() const { return this->agentCount_ != nullptr;};
    void deleteAgentCount() { this->agentCount_ = nullptr;};
    inline int32_t agentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // agentIdList Field Functions 
    bool hasAgentIdList() const { return this->agentIdList_ != nullptr;};
    void deleteAgentIdList() { this->agentIdList_ = nullptr;};
    inline const vector<string> & agentIdList() const { DARABONBA_PTR_GET_CONST(agentIdList_, vector<string>) };
    inline vector<string> agentIdList() { DARABONBA_PTR_GET(agentIdList_, vector<string>) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setAgentIdList(const vector<string> & agentIdList) { DARABONBA_PTR_SET_VALUE(agentIdList_, agentIdList) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setAgentIdList(vector<string> && agentIdList) { DARABONBA_PTR_SET_RVALUE(agentIdList_, agentIdList) };


    // allSampleStat Field Functions 
    bool hasAllSampleStat() const { return this->allSampleStat_ != nullptr;};
    void deleteAllSampleStat() { this->allSampleStat_ = nullptr;};
    inline     const Darabonba::Json & allSampleStat() const { DARABONBA_GET(allSampleStat_) };
    Darabonba::Json & allSampleStat() { DARABONBA_GET(allSampleStat_) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setAllSampleStat(const Darabonba::Json & allSampleStat) { DARABONBA_SET_VALUE(allSampleStat_, allSampleStat) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setAllSampleStat(Darabonba::Json & allSampleStat) { DARABONBA_SET_RVALUE(allSampleStat_, allSampleStat) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hasError Field Functions 
    bool hasHasError() const { return this->hasError_ != nullptr;};
    void deleteHasError() { this->hasError_ = nullptr;};
    inline bool hasError() const { DARABONBA_PTR_GET_DEFAULT(hasError_, false) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setHasError(bool hasError) { DARABONBA_PTR_SET_VALUE(hasError_, hasError) };


    // hasReport Field Functions 
    bool hasHasReport() const { return this->hasReport_ != nullptr;};
    void deleteHasReport() { this->hasReport_ = nullptr;};
    inline bool hasReport() const { DARABONBA_PTR_GET_DEFAULT(hasReport_, false) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setHasReport(bool hasReport) { DARABONBA_PTR_SET_VALUE(hasReport_, hasReport) };


    // holdFor Field Functions 
    bool hasHoldFor() const { return this->holdFor_ != nullptr;};
    void deleteHoldFor() { this->holdFor_ = nullptr;};
    inline int32_t holdFor() const { DARABONBA_PTR_GET_DEFAULT(holdFor_, 0) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setHoldFor(int32_t holdFor) { DARABONBA_PTR_SET_VALUE(holdFor_, holdFor) };


    // isDebugging Field Functions 
    bool hasIsDebugging() const { return this->isDebugging_ != nullptr;};
    void deleteIsDebugging() { this->isDebugging_ = nullptr;};
    inline bool isDebugging() const { DARABONBA_PTR_GET_DEFAULT(isDebugging_, false) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setIsDebugging(bool isDebugging) { DARABONBA_PTR_SET_VALUE(isDebugging_, isDebugging) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // sampleStatList Field Functions 
    bool hasSampleStatList() const { return this->sampleStatList_ != nullptr;};
    void deleteSampleStatList() { this->sampleStatList_ = nullptr;};
    inline const vector<Darabonba::Json> & sampleStatList() const { DARABONBA_PTR_GET_CONST(sampleStatList_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> sampleStatList() { DARABONBA_PTR_GET(sampleStatList_, vector<Darabonba::Json>) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setSampleStatList(const vector<Darabonba::Json> & sampleStatList) { DARABONBA_PTR_SET_VALUE(sampleStatList_, sampleStatList) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setSampleStatList(vector<Darabonba::Json> && sampleStatList) { DARABONBA_PTR_SET_RVALUE(sampleStatList_, sampleStatList) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // startTimeTS Field Functions 
    bool hasStartTimeTS() const { return this->startTimeTS_ != nullptr;};
    void deleteStartTimeTS() { this->startTimeTS_ = nullptr;};
    inline int64_t startTimeTS() const { DARABONBA_PTR_GET_DEFAULT(startTimeTS_, 0L) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setStartTimeTS(int64_t startTimeTS) { DARABONBA_PTR_SET_VALUE(startTimeTS_, startTimeTS) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vum Field Functions 
    bool hasVum() const { return this->vum_ != nullptr;};
    void deleteVum() { this->vum_ = nullptr;};
    inline int64_t vum() const { DARABONBA_PTR_GET_DEFAULT(vum_, 0L) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData& setVum(int64_t vum) { DARABONBA_PTR_SET_VALUE(vum_, vum) };


  protected:
    // The number of stress testing engines.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The stress testing engines.
    std::shared_ptr<vector<string>> agentIdList_ = nullptr;
    // The sampling status of the scenario.
    Darabonba::Json allSampleStat_ = nullptr;
    // The concurrency.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // The error message returned for the stress testing process. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates whether an error occurs in the stress testing process.
    std::shared_ptr<bool> hasError_ = nullptr;
    // Indicates whether the report is generated.
    std::shared_ptr<bool> hasReport_ = nullptr;
    // The duration of the stress testing plan. Unit: seconds.
    std::shared_ptr<int32_t> holdFor_ = nullptr;
    // Indicates whether a debugging is performed.
    std::shared_ptr<bool> isDebugging_ = nullptr;
    // The stress testing task ID. This ID also means the report ID.
    std::shared_ptr<string> reportId_ = nullptr;
    // The status of samplers.
    std::shared_ptr<vector<Darabonba::Json>> sampleStatList_ = nullptr;
    // The scenario ID.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The scenario name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The current stage.
    std::shared_ptr<string> stageName_ = nullptr;
    // The timestamp when the stress testing is scheduled to start. Unit: ms.
    std::shared_ptr<int64_t> startTimeTS_ = nullptr;
    // The stress testing status of the scenario.
    std::shared_ptr<string> status_ = nullptr;
    // The consumed Virtual User Minutes (VUM).
    std::shared_ptr<int64_t> vum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
