// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMPLECONSISTENCYJOBSRESPONSEBODYSAMPLECONSISTENCYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMPLECONSISTENCYJOBSRESPONSEBODYSAMPLECONSISTENCYJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListSampleConsistencyJobsResponseBodySampleConsistencyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EasModelServiceName, easModelServiceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FeatureSaveResourceId, featureSaveResourceId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ItemIdField, itemIdField_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartitionField, partitionField_);
      DARABONBA_PTR_TO_JSON(PartitionFieldFormat, partitionFieldFormat_);
      DARABONBA_PTR_TO_JSON(RequestIdField, requestIdField_);
      DARABONBA_PTR_TO_JSON(SampleConsistencyJobId, sampleConsistencyJobId_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SampleTableName, sampleTableName_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserIdField, userIdField_);
    };
    friend void from_json(const Darabonba::Json& j, ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EasModelServiceName, easModelServiceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FeatureSaveResourceId, featureSaveResourceId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ItemIdField, itemIdField_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartitionField, partitionField_);
      DARABONBA_PTR_FROM_JSON(PartitionFieldFormat, partitionFieldFormat_);
      DARABONBA_PTR_FROM_JSON(RequestIdField, requestIdField_);
      DARABONBA_PTR_FROM_JSON(SampleConsistencyJobId, sampleConsistencyJobId_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SampleTableName, sampleTableName_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserIdField, userIdField_);
    };
    ListSampleConsistencyJobsResponseBodySampleConsistencyJobs() = default ;
    ListSampleConsistencyJobsResponseBodySampleConsistencyJobs(const ListSampleConsistencyJobsResponseBodySampleConsistencyJobs &) = default ;
    ListSampleConsistencyJobsResponseBodySampleConsistencyJobs(ListSampleConsistencyJobsResponseBodySampleConsistencyJobs &&) = default ;
    ListSampleConsistencyJobsResponseBodySampleConsistencyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSampleConsistencyJobsResponseBodySampleConsistencyJobs() = default ;
    ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& operator=(const ListSampleConsistencyJobsResponseBodySampleConsistencyJobs &) = default ;
    ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& operator=(ListSampleConsistencyJobsResponseBodySampleConsistencyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->duration_ != nullptr && this->easModelServiceName_ != nullptr && this->endTime_ != nullptr && this->featureSaveResourceId_ != nullptr && this->gmtCreateTime_ != nullptr
        && this->gmtModifiedTime_ != nullptr && this->itemIdField_ != nullptr && this->logs_ != nullptr && this->name_ != nullptr && this->partitionField_ != nullptr
        && this->partitionFieldFormat_ != nullptr && this->requestIdField_ != nullptr && this->sampleConsistencyJobId_ != nullptr && this->sampleRate_ != nullptr && this->sampleTableName_ != nullptr
        && this->sceneId_ != nullptr && this->sceneName_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->userIdField_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // easModelServiceName Field Functions 
    bool hasEasModelServiceName() const { return this->easModelServiceName_ != nullptr;};
    void deleteEasModelServiceName() { this->easModelServiceName_ = nullptr;};
    inline string easModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(easModelServiceName_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setEasModelServiceName(string easModelServiceName) { DARABONBA_PTR_SET_VALUE(easModelServiceName_, easModelServiceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // featureSaveResourceId Field Functions 
    bool hasFeatureSaveResourceId() const { return this->featureSaveResourceId_ != nullptr;};
    void deleteFeatureSaveResourceId() { this->featureSaveResourceId_ = nullptr;};
    inline string featureSaveResourceId() const { DARABONBA_PTR_GET_DEFAULT(featureSaveResourceId_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setFeatureSaveResourceId(string featureSaveResourceId) { DARABONBA_PTR_SET_VALUE(featureSaveResourceId_, featureSaveResourceId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // itemIdField Field Functions 
    bool hasItemIdField() const { return this->itemIdField_ != nullptr;};
    void deleteItemIdField() { this->itemIdField_ = nullptr;};
    inline string itemIdField() const { DARABONBA_PTR_GET_DEFAULT(itemIdField_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setItemIdField(string itemIdField) { DARABONBA_PTR_SET_VALUE(itemIdField_, itemIdField) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline string logs() const { DARABONBA_PTR_GET_DEFAULT(logs_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setLogs(string logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionField Field Functions 
    bool hasPartitionField() const { return this->partitionField_ != nullptr;};
    void deletePartitionField() { this->partitionField_ = nullptr;};
    inline string partitionField() const { DARABONBA_PTR_GET_DEFAULT(partitionField_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setPartitionField(string partitionField) { DARABONBA_PTR_SET_VALUE(partitionField_, partitionField) };


    // partitionFieldFormat Field Functions 
    bool hasPartitionFieldFormat() const { return this->partitionFieldFormat_ != nullptr;};
    void deletePartitionFieldFormat() { this->partitionFieldFormat_ = nullptr;};
    inline string partitionFieldFormat() const { DARABONBA_PTR_GET_DEFAULT(partitionFieldFormat_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setPartitionFieldFormat(string partitionFieldFormat) { DARABONBA_PTR_SET_VALUE(partitionFieldFormat_, partitionFieldFormat) };


    // requestIdField Field Functions 
    bool hasRequestIdField() const { return this->requestIdField_ != nullptr;};
    void deleteRequestIdField() { this->requestIdField_ = nullptr;};
    inline string requestIdField() const { DARABONBA_PTR_GET_DEFAULT(requestIdField_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setRequestIdField(string requestIdField) { DARABONBA_PTR_SET_VALUE(requestIdField_, requestIdField) };


    // sampleConsistencyJobId Field Functions 
    bool hasSampleConsistencyJobId() const { return this->sampleConsistencyJobId_ != nullptr;};
    void deleteSampleConsistencyJobId() { this->sampleConsistencyJobId_ = nullptr;};
    inline string sampleConsistencyJobId() const { DARABONBA_PTR_GET_DEFAULT(sampleConsistencyJobId_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setSampleConsistencyJobId(string sampleConsistencyJobId) { DARABONBA_PTR_SET_VALUE(sampleConsistencyJobId_, sampleConsistencyJobId) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline string sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sampleTableName Field Functions 
    bool hasSampleTableName() const { return this->sampleTableName_ != nullptr;};
    void deleteSampleTableName() { this->sampleTableName_ = nullptr;};
    inline string sampleTableName() const { DARABONBA_PTR_GET_DEFAULT(sampleTableName_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setSampleTableName(string sampleTableName) { DARABONBA_PTR_SET_VALUE(sampleTableName_, sampleTableName) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userIdField Field Functions 
    bool hasUserIdField() const { return this->userIdField_ != nullptr;};
    void deleteUserIdField() { this->userIdField_ = nullptr;};
    inline string userIdField() const { DARABONBA_PTR_GET_DEFAULT(userIdField_, "") };
    inline ListSampleConsistencyJobsResponseBodySampleConsistencyJobs& setUserIdField(string userIdField) { DARABONBA_PTR_SET_VALUE(userIdField_, userIdField) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> easModelServiceName_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> featureSaveResourceId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> itemIdField_ = nullptr;
    std::shared_ptr<string> logs_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> partitionField_ = nullptr;
    std::shared_ptr<string> partitionFieldFormat_ = nullptr;
    std::shared_ptr<string> requestIdField_ = nullptr;
    std::shared_ptr<string> sampleConsistencyJobId_ = nullptr;
    std::shared_ptr<string> sampleRate_ = nullptr;
    std::shared_ptr<string> sampleTableName_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userIdField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
