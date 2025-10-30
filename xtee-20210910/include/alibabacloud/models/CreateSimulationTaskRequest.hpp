// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMULATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMULATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSimulationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimulationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(filtersStr, filtersStr_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(rulesStr, rulesStr_);
      DARABONBA_PTR_TO_JSON(runTask, runTask_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimulationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(filtersStr, filtersStr_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(rulesStr, rulesStr_);
      DARABONBA_PTR_FROM_JSON(runTask, runTask_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    CreateSimulationTaskRequest() = default ;
    CreateSimulationTaskRequest(const CreateSimulationTaskRequest &) = default ;
    CreateSimulationTaskRequest(CreateSimulationTaskRequest &&) = default ;
    CreateSimulationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimulationTaskRequest() = default ;
    CreateSimulationTaskRequest& operator=(const CreateSimulationTaskRequest &) = default ;
    CreateSimulationTaskRequest& operator=(CreateSimulationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->dataSourceConfig_ == nullptr && return this->dataSourceType_ == nullptr && return this->endTime_ == nullptr && return this->eventCode_ == nullptr && return this->filtersStr_ == nullptr
        && return this->regId_ == nullptr && return this->rulesStr_ == nullptr && return this->runTask_ == nullptr && return this->startTime_ == nullptr && return this->taskName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSimulationTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataSourceConfig Field Functions 
    bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
    void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
    inline string dataSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(dataSourceConfig_, "") };
    inline CreateSimulationTaskRequest& setDataSourceConfig(string dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateSimulationTaskRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateSimulationTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline CreateSimulationTaskRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // filtersStr Field Functions 
    bool hasFiltersStr() const { return this->filtersStr_ != nullptr;};
    void deleteFiltersStr() { this->filtersStr_ = nullptr;};
    inline string filtersStr() const { DARABONBA_PTR_GET_DEFAULT(filtersStr_, "") };
    inline CreateSimulationTaskRequest& setFiltersStr(string filtersStr) { DARABONBA_PTR_SET_VALUE(filtersStr_, filtersStr) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateSimulationTaskRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // rulesStr Field Functions 
    bool hasRulesStr() const { return this->rulesStr_ != nullptr;};
    void deleteRulesStr() { this->rulesStr_ = nullptr;};
    inline string rulesStr() const { DARABONBA_PTR_GET_DEFAULT(rulesStr_, "") };
    inline CreateSimulationTaskRequest& setRulesStr(string rulesStr) { DARABONBA_PTR_SET_VALUE(rulesStr_, rulesStr) };


    // runTask Field Functions 
    bool hasRunTask() const { return this->runTask_ != nullptr;};
    void deleteRunTask() { this->runTask_ = nullptr;};
    inline bool runTask() const { DARABONBA_PTR_GET_DEFAULT(runTask_, false) };
    inline CreateSimulationTaskRequest& setRunTask(bool runTask) { DARABONBA_PTR_SET_VALUE(runTask_, runTask) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateSimulationTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSimulationTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Data source configuration
    std::shared_ptr<string> dataSourceConfig_ = nullptr;
    // Data source type
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // End time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Event code
    // 
    // This parameter is required.
    std::shared_ptr<string> eventCode_ = nullptr;
    // Filters
    std::shared_ptr<string> filtersStr_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Rules list
    // 
    // This parameter is required.
    std::shared_ptr<string> rulesStr_ = nullptr;
    // Whether to run the task directly
    // 
    // This parameter is required.
    std::shared_ptr<bool> runTask_ = nullptr;
    // Start time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Task name
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
