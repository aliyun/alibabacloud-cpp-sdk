// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTMVRECOMMENDTASKMODEL_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTMVRECOMMENDTASKMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructMvRecommendTaskModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructMvRecommendTaskModel& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LastRunAt, lastRunAt_);
      DARABONBA_PTR_TO_JSON(MinRewriteQueryCount, minRewriteQueryCount_);
      DARABONBA_PTR_TO_JSON(MinRewriteQueryPattern, minRewriteQueryPattern_);
      DARABONBA_PTR_TO_JSON(ScanQueriesRange, scanQueriesRange_);
      DARABONBA_PTR_TO_JSON(SchedulingSettings, schedulingSettings_);
      DARABONBA_PTR_TO_JSON(SlowQueryThreshold, slowQueryThreshold_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructMvRecommendTaskModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LastRunAt, lastRunAt_);
      DARABONBA_PTR_FROM_JSON(MinRewriteQueryCount, minRewriteQueryCount_);
      DARABONBA_PTR_FROM_JSON(MinRewriteQueryPattern, minRewriteQueryPattern_);
      DARABONBA_PTR_FROM_JSON(ScanQueriesRange, scanQueriesRange_);
      DARABONBA_PTR_FROM_JSON(SchedulingSettings, schedulingSettings_);
      DARABONBA_PTR_FROM_JSON(SlowQueryThreshold, slowQueryThreshold_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    OpenStructMvRecommendTaskModel() = default ;
    OpenStructMvRecommendTaskModel(const OpenStructMvRecommendTaskModel &) = default ;
    OpenStructMvRecommendTaskModel(OpenStructMvRecommendTaskModel &&) = default ;
    OpenStructMvRecommendTaskModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructMvRecommendTaskModel() = default ;
    OpenStructMvRecommendTaskModel& operator=(const OpenStructMvRecommendTaskModel &) = default ;
    OpenStructMvRecommendTaskModel& operator=(OpenStructMvRecommendTaskModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->description_ != nullptr && this->lastRunAt_ != nullptr && this->minRewriteQueryCount_ != nullptr && this->minRewriteQueryPattern_ != nullptr && this->scanQueriesRange_ != nullptr
        && this->schedulingSettings_ != nullptr && this->slowQueryThreshold_ != nullptr && this->taskName_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline OpenStructMvRecommendTaskModel& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline OpenStructMvRecommendTaskModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastRunAt Field Functions 
    bool hasLastRunAt() const { return this->lastRunAt_ != nullptr;};
    void deleteLastRunAt() { this->lastRunAt_ = nullptr;};
    inline string lastRunAt() const { DARABONBA_PTR_GET_DEFAULT(lastRunAt_, "") };
    inline OpenStructMvRecommendTaskModel& setLastRunAt(string lastRunAt) { DARABONBA_PTR_SET_VALUE(lastRunAt_, lastRunAt) };


    // minRewriteQueryCount Field Functions 
    bool hasMinRewriteQueryCount() const { return this->minRewriteQueryCount_ != nullptr;};
    void deleteMinRewriteQueryCount() { this->minRewriteQueryCount_ = nullptr;};
    inline int32_t minRewriteQueryCount() const { DARABONBA_PTR_GET_DEFAULT(minRewriteQueryCount_, 0) };
    inline OpenStructMvRecommendTaskModel& setMinRewriteQueryCount(int32_t minRewriteQueryCount) { DARABONBA_PTR_SET_VALUE(minRewriteQueryCount_, minRewriteQueryCount) };


    // minRewriteQueryPattern Field Functions 
    bool hasMinRewriteQueryPattern() const { return this->minRewriteQueryPattern_ != nullptr;};
    void deleteMinRewriteQueryPattern() { this->minRewriteQueryPattern_ = nullptr;};
    inline int32_t minRewriteQueryPattern() const { DARABONBA_PTR_GET_DEFAULT(minRewriteQueryPattern_, 0) };
    inline OpenStructMvRecommendTaskModel& setMinRewriteQueryPattern(int32_t minRewriteQueryPattern) { DARABONBA_PTR_SET_VALUE(minRewriteQueryPattern_, minRewriteQueryPattern) };


    // scanQueriesRange Field Functions 
    bool hasScanQueriesRange() const { return this->scanQueriesRange_ != nullptr;};
    void deleteScanQueriesRange() { this->scanQueriesRange_ = nullptr;};
    inline int32_t scanQueriesRange() const { DARABONBA_PTR_GET_DEFAULT(scanQueriesRange_, 0) };
    inline OpenStructMvRecommendTaskModel& setScanQueriesRange(int32_t scanQueriesRange) { DARABONBA_PTR_SET_VALUE(scanQueriesRange_, scanQueriesRange) };


    // schedulingSettings Field Functions 
    bool hasSchedulingSettings() const { return this->schedulingSettings_ != nullptr;};
    void deleteSchedulingSettings() { this->schedulingSettings_ = nullptr;};
    inline string schedulingSettings() const { DARABONBA_PTR_GET_DEFAULT(schedulingSettings_, "") };
    inline OpenStructMvRecommendTaskModel& setSchedulingSettings(string schedulingSettings) { DARABONBA_PTR_SET_VALUE(schedulingSettings_, schedulingSettings) };


    // slowQueryThreshold Field Functions 
    bool hasSlowQueryThreshold() const { return this->slowQueryThreshold_ != nullptr;};
    void deleteSlowQueryThreshold() { this->slowQueryThreshold_ = nullptr;};
    inline int32_t slowQueryThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowQueryThreshold_, 0) };
    inline OpenStructMvRecommendTaskModel& setSlowQueryThreshold(int32_t slowQueryThreshold) { DARABONBA_PTR_SET_VALUE(slowQueryThreshold_, slowQueryThreshold) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline OpenStructMvRecommendTaskModel& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lastRunAt_ = nullptr;
    std::shared_ptr<int32_t> minRewriteQueryCount_ = nullptr;
    std::shared_ptr<int32_t> minRewriteQueryPattern_ = nullptr;
    std::shared_ptr<int32_t> scanQueriesRange_ = nullptr;
    std::shared_ptr<string> schedulingSettings_ = nullptr;
    std::shared_ptr<int32_t> slowQueryThreshold_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
