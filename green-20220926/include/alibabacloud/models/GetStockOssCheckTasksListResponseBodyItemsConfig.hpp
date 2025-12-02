// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTRESPONSEBODYITEMSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTRESPONSEBODYITEMSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos.hpp>
#include <alibabacloud/models/GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetStockOssCheckTasksListResponseBodyItemsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStockOssCheckTasksListResponseBodyItemsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackId, callbackId_);
      DARABONBA_PTR_TO_JSON(DistinctHistoryTasks, distinctHistoryTasks_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecuteDate, executeDate_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Freeze, freeze_);
      DARABONBA_PTR_TO_JSON(FreezeHighRisk1, freezeHighRisk1_);
      DARABONBA_PTR_TO_JSON(FreezeHighRisk2, freezeHighRisk2_);
      DARABONBA_PTR_TO_JSON(FreezeMediumRisk1, freezeMediumRisk1_);
      DARABONBA_PTR_TO_JSON(FreezeMediumRisk2, freezeMediumRisk2_);
      DARABONBA_PTR_TO_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_TO_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_TO_JSON(PrefixFilters, prefixFilters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
      DARABONBA_PTR_TO_JSON(ScanLimit, scanLimit_);
      DARABONBA_PTR_TO_JSON(ScanNoFileType, scanNoFileType_);
      DARABONBA_PTR_TO_JSON(ScanResourceType, scanResourceType_);
      DARABONBA_PTR_TO_JSON(ScanService, scanService_);
      DARABONBA_PTR_TO_JSON(ScanServiceInfos, scanServiceInfos_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskCycle, taskCycle_);
      DARABONBA_PTR_TO_JSON(UserFreezeConfig, userFreezeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetStockOssCheckTasksListResponseBodyItemsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackId, callbackId_);
      DARABONBA_PTR_FROM_JSON(DistinctHistoryTasks, distinctHistoryTasks_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteDate, executeDate_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Freeze, freeze_);
      DARABONBA_PTR_FROM_JSON(FreezeHighRisk1, freezeHighRisk1_);
      DARABONBA_PTR_FROM_JSON(FreezeHighRisk2, freezeHighRisk2_);
      DARABONBA_PTR_FROM_JSON(FreezeMediumRisk1, freezeMediumRisk1_);
      DARABONBA_PTR_FROM_JSON(FreezeMediumRisk2, freezeMediumRisk2_);
      DARABONBA_PTR_FROM_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilters, prefixFilters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
      DARABONBA_PTR_FROM_JSON(ScanLimit, scanLimit_);
      DARABONBA_PTR_FROM_JSON(ScanNoFileType, scanNoFileType_);
      DARABONBA_PTR_FROM_JSON(ScanResourceType, scanResourceType_);
      DARABONBA_PTR_FROM_JSON(ScanService, scanService_);
      DARABONBA_PTR_FROM_JSON(ScanServiceInfos, scanServiceInfos_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskCycle, taskCycle_);
      DARABONBA_PTR_FROM_JSON(UserFreezeConfig, userFreezeConfig_);
    };
    GetStockOssCheckTasksListResponseBodyItemsConfig() = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfig(const GetStockOssCheckTasksListResponseBodyItemsConfig &) = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfig(GetStockOssCheckTasksListResponseBodyItemsConfig &&) = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStockOssCheckTasksListResponseBodyItemsConfig() = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfig& operator=(const GetStockOssCheckTasksListResponseBodyItemsConfig &) = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfig& operator=(GetStockOssCheckTasksListResponseBodyItemsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackId_ == nullptr
        && return this->distinctHistoryTasks_ == nullptr && return this->endTime_ == nullptr && return this->executeDate_ == nullptr && return this->executeTime_ == nullptr && return this->freeze_ == nullptr
        && return this->freezeHighRisk1_ == nullptr && return this->freezeHighRisk2_ == nullptr && return this->freezeMediumRisk1_ == nullptr && return this->freezeMediumRisk2_ == nullptr && return this->freezeRestorePath_ == nullptr
        && return this->freezeType_ == nullptr && return this->prefixFilterType_ == nullptr && return this->prefixFilters_ == nullptr && return this->priority_ == nullptr && return this->referer_ == nullptr
        && return this->scanLimit_ == nullptr && return this->scanNoFileType_ == nullptr && return this->scanResourceType_ == nullptr && return this->scanService_ == nullptr && return this->scanServiceInfos_ == nullptr
        && return this->startTime_ == nullptr && return this->taskCycle_ == nullptr && return this->userFreezeConfig_ == nullptr; };
    // callbackId Field Functions 
    bool hasCallbackId() const { return this->callbackId_ != nullptr;};
    void deleteCallbackId() { this->callbackId_ = nullptr;};
    inline int64_t callbackId() const { DARABONBA_PTR_GET_DEFAULT(callbackId_, 0L) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setCallbackId(int64_t callbackId) { DARABONBA_PTR_SET_VALUE(callbackId_, callbackId) };


    // distinctHistoryTasks Field Functions 
    bool hasDistinctHistoryTasks() const { return this->distinctHistoryTasks_ != nullptr;};
    void deleteDistinctHistoryTasks() { this->distinctHistoryTasks_ = nullptr;};
    inline bool distinctHistoryTasks() const { DARABONBA_PTR_GET_DEFAULT(distinctHistoryTasks_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setDistinctHistoryTasks(bool distinctHistoryTasks) { DARABONBA_PTR_SET_VALUE(distinctHistoryTasks_, distinctHistoryTasks) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeDate Field Functions 
    bool hasExecuteDate() const { return this->executeDate_ != nullptr;};
    void deleteExecuteDate() { this->executeDate_ = nullptr;};
    inline int32_t executeDate() const { DARABONBA_PTR_GET_DEFAULT(executeDate_, 0) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setExecuteDate(int32_t executeDate) { DARABONBA_PTR_SET_VALUE(executeDate_, executeDate) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // freeze Field Functions 
    bool hasFreeze() const { return this->freeze_ != nullptr;};
    void deleteFreeze() { this->freeze_ = nullptr;};
    inline bool freeze() const { DARABONBA_PTR_GET_DEFAULT(freeze_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreeze(bool freeze) { DARABONBA_PTR_SET_VALUE(freeze_, freeze) };


    // freezeHighRisk1 Field Functions 
    bool hasFreezeHighRisk1() const { return this->freezeHighRisk1_ != nullptr;};
    void deleteFreezeHighRisk1() { this->freezeHighRisk1_ = nullptr;};
    inline bool freezeHighRisk1() const { DARABONBA_PTR_GET_DEFAULT(freezeHighRisk1_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreezeHighRisk1(bool freezeHighRisk1) { DARABONBA_PTR_SET_VALUE(freezeHighRisk1_, freezeHighRisk1) };


    // freezeHighRisk2 Field Functions 
    bool hasFreezeHighRisk2() const { return this->freezeHighRisk2_ != nullptr;};
    void deleteFreezeHighRisk2() { this->freezeHighRisk2_ = nullptr;};
    inline bool freezeHighRisk2() const { DARABONBA_PTR_GET_DEFAULT(freezeHighRisk2_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreezeHighRisk2(bool freezeHighRisk2) { DARABONBA_PTR_SET_VALUE(freezeHighRisk2_, freezeHighRisk2) };


    // freezeMediumRisk1 Field Functions 
    bool hasFreezeMediumRisk1() const { return this->freezeMediumRisk1_ != nullptr;};
    void deleteFreezeMediumRisk1() { this->freezeMediumRisk1_ = nullptr;};
    inline bool freezeMediumRisk1() const { DARABONBA_PTR_GET_DEFAULT(freezeMediumRisk1_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreezeMediumRisk1(bool freezeMediumRisk1) { DARABONBA_PTR_SET_VALUE(freezeMediumRisk1_, freezeMediumRisk1) };


    // freezeMediumRisk2 Field Functions 
    bool hasFreezeMediumRisk2() const { return this->freezeMediumRisk2_ != nullptr;};
    void deleteFreezeMediumRisk2() { this->freezeMediumRisk2_ = nullptr;};
    inline bool freezeMediumRisk2() const { DARABONBA_PTR_GET_DEFAULT(freezeMediumRisk2_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreezeMediumRisk2(bool freezeMediumRisk2) { DARABONBA_PTR_SET_VALUE(freezeMediumRisk2_, freezeMediumRisk2) };


    // freezeRestorePath Field Functions 
    bool hasFreezeRestorePath() const { return this->freezeRestorePath_ != nullptr;};
    void deleteFreezeRestorePath() { this->freezeRestorePath_ = nullptr;};
    inline string freezeRestorePath() const { DARABONBA_PTR_GET_DEFAULT(freezeRestorePath_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreezeRestorePath(string freezeRestorePath) { DARABONBA_PTR_SET_VALUE(freezeRestorePath_, freezeRestorePath) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string freezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


    // prefixFilterType Field Functions 
    bool hasPrefixFilterType() const { return this->prefixFilterType_ != nullptr;};
    void deletePrefixFilterType() { this->prefixFilterType_ = nullptr;};
    inline string prefixFilterType() const { DARABONBA_PTR_GET_DEFAULT(prefixFilterType_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setPrefixFilterType(string prefixFilterType) { DARABONBA_PTR_SET_VALUE(prefixFilterType_, prefixFilterType) };


    // prefixFilters Field Functions 
    bool hasPrefixFilters() const { return this->prefixFilters_ != nullptr;};
    void deletePrefixFilters() { this->prefixFilters_ = nullptr;};
    inline const vector<string> & prefixFilters() const { DARABONBA_PTR_GET_CONST(prefixFilters_, vector<string>) };
    inline vector<string> prefixFilters() { DARABONBA_PTR_GET(prefixFilters_, vector<string>) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setPrefixFilters(const vector<string> & prefixFilters) { DARABONBA_PTR_SET_VALUE(prefixFilters_, prefixFilters) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setPrefixFilters(vector<string> && prefixFilters) { DARABONBA_PTR_SET_RVALUE(prefixFilters_, prefixFilters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string referer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    // scanLimit Field Functions 
    bool hasScanLimit() const { return this->scanLimit_ != nullptr;};
    void deleteScanLimit() { this->scanLimit_ = nullptr;};
    inline int64_t scanLimit() const { DARABONBA_PTR_GET_DEFAULT(scanLimit_, 0L) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanLimit(int64_t scanLimit) { DARABONBA_PTR_SET_VALUE(scanLimit_, scanLimit) };


    // scanNoFileType Field Functions 
    bool hasScanNoFileType() const { return this->scanNoFileType_ != nullptr;};
    void deleteScanNoFileType() { this->scanNoFileType_ = nullptr;};
    inline bool scanNoFileType() const { DARABONBA_PTR_GET_DEFAULT(scanNoFileType_, false) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanNoFileType(bool scanNoFileType) { DARABONBA_PTR_SET_VALUE(scanNoFileType_, scanNoFileType) };


    // scanResourceType Field Functions 
    bool hasScanResourceType() const { return this->scanResourceType_ != nullptr;};
    void deleteScanResourceType() { this->scanResourceType_ = nullptr;};
    inline int32_t scanResourceType() const { DARABONBA_PTR_GET_DEFAULT(scanResourceType_, 0) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanResourceType(int32_t scanResourceType) { DARABONBA_PTR_SET_VALUE(scanResourceType_, scanResourceType) };


    // scanService Field Functions 
    bool hasScanService() const { return this->scanService_ != nullptr;};
    void deleteScanService() { this->scanService_ = nullptr;};
    inline const vector<string> & scanService() const { DARABONBA_PTR_GET_CONST(scanService_, vector<string>) };
    inline vector<string> scanService() { DARABONBA_PTR_GET(scanService_, vector<string>) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanService(const vector<string> & scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanService(vector<string> && scanService) { DARABONBA_PTR_SET_RVALUE(scanService_, scanService) };


    // scanServiceInfos Field Functions 
    bool hasScanServiceInfos() const { return this->scanServiceInfos_ != nullptr;};
    void deleteScanServiceInfos() { this->scanServiceInfos_ = nullptr;};
    inline const vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos> & scanServiceInfos() const { DARABONBA_PTR_GET_CONST(scanServiceInfos_, vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos>) };
    inline vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos> scanServiceInfos() { DARABONBA_PTR_GET(scanServiceInfos_, vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos>) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanServiceInfos(const vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos> & scanServiceInfos) { DARABONBA_PTR_SET_VALUE(scanServiceInfos_, scanServiceInfos) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setScanServiceInfos(vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos> && scanServiceInfos) { DARABONBA_PTR_SET_RVALUE(scanServiceInfos_, scanServiceInfos) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskCycle Field Functions 
    bool hasTaskCycle() const { return this->taskCycle_ != nullptr;};
    void deleteTaskCycle() { this->taskCycle_ = nullptr;};
    inline int32_t taskCycle() const { DARABONBA_PTR_GET_DEFAULT(taskCycle_, 0) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setTaskCycle(int32_t taskCycle) { DARABONBA_PTR_SET_VALUE(taskCycle_, taskCycle) };


    // userFreezeConfig Field Functions 
    bool hasUserFreezeConfig() const { return this->userFreezeConfig_ != nullptr;};
    void deleteUserFreezeConfig() { this->userFreezeConfig_ = nullptr;};
    inline const Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig & userFreezeConfig() const { DARABONBA_PTR_GET_CONST(userFreezeConfig_, Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig) };
    inline Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig userFreezeConfig() { DARABONBA_PTR_GET(userFreezeConfig_, Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setUserFreezeConfig(const Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig & userFreezeConfig) { DARABONBA_PTR_SET_VALUE(userFreezeConfig_, userFreezeConfig) };
    inline GetStockOssCheckTasksListResponseBodyItemsConfig& setUserFreezeConfig(Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig && userFreezeConfig) { DARABONBA_PTR_SET_RVALUE(userFreezeConfig_, userFreezeConfig) };


  protected:
    // Callback notification ID
    std::shared_ptr<int64_t> callbackId_ = nullptr;
    // Whether to deduplicate historical detected tasks.
    std::shared_ptr<bool> distinctHistoryTasks_ = nullptr;
    // End time.
    std::shared_ptr<string> endTime_ = nullptr;
    // Scheduled task execution date.
    std::shared_ptr<int32_t> executeDate_ = nullptr;
    // Scheduled task expected execution time.
    std::shared_ptr<string> executeTime_ = nullptr;
    // Whether to freeze
    std::shared_ptr<bool> freeze_ = nullptr;
    // Freeze high-risk images
    std::shared_ptr<bool> freezeHighRisk1_ = nullptr;
    // Freeze high-risk audio and text
    std::shared_ptr<bool> freezeHighRisk2_ = nullptr;
    // Freeze medium-risk images
    std::shared_ptr<bool> freezeMediumRisk1_ = nullptr;
    // Freeze medium-risk audio and text
    std::shared_ptr<bool> freezeMediumRisk2_ = nullptr;
    // Storage path for transfer
    std::shared_ptr<string> freezeRestorePath_ = nullptr;
    // Freeze type
    std::shared_ptr<string> freezeType_ = nullptr;
    // Prefix filter type.
    std::shared_ptr<string> prefixFilterType_ = nullptr;
    // Prefixes.
    std::shared_ptr<vector<string>> prefixFilters_ = nullptr;
    // Priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Referer
    std::shared_ptr<string> referer_ = nullptr;
    // Scan limit quantity.
    std::shared_ptr<int64_t> scanLimit_ = nullptr;
    // Whether to scan images without file extensions.
    std::shared_ptr<bool> scanNoFileType_ = nullptr;
    // Scanned file type.
    std::shared_ptr<int32_t> scanResourceType_ = nullptr;
    // Scan service code
    std::shared_ptr<vector<string>> scanService_ = nullptr;
    // Scan service information
    std::shared_ptr<vector<Models::GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos>> scanServiceInfos_ = nullptr;
    // Start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // Scheduling date.
    std::shared_ptr<int32_t> taskCycle_ = nullptr;
    // Manual freeze configuration
    std::shared_ptr<Models::GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig> userFreezeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
