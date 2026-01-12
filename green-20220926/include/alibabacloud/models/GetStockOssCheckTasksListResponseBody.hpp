// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetStockOssCheckTasksListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStockOssCheckTasksListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStockOssCheckTasksListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetStockOssCheckTasksListResponseBody() = default ;
    GetStockOssCheckTasksListResponseBody(const GetStockOssCheckTasksListResponseBody &) = default ;
    GetStockOssCheckTasksListResponseBody(GetStockOssCheckTasksListResponseBody &&) = default ;
    GetStockOssCheckTasksListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStockOssCheckTasksListResponseBody() = default ;
    GetStockOssCheckTasksListResponseBody& operator=(const GetStockOssCheckTasksListResponseBody &) = default ;
    GetStockOssCheckTasksListResponseBody& operator=(GetStockOssCheckTasksListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Buckets, buckets_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FinishNum, finishNum_);
        DARABONBA_PTR_TO_JSON(IsInc, isInc_);
        DARABONBA_PTR_TO_JSON(LastExecuteDate, lastExecuteDate_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        DARABONBA_PTR_TO_JSON(NextExecuteDate, nextExecuteDate_);
        DARABONBA_PTR_TO_JSON(ObjectNum, objectNum_);
        DARABONBA_PTR_TO_JSON(SearchNum, searchNum_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FinishNum, finishNum_);
        DARABONBA_PTR_FROM_JSON(IsInc, isInc_);
        DARABONBA_PTR_FROM_JSON(LastExecuteDate, lastExecuteDate_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        DARABONBA_PTR_FROM_JSON(NextExecuteDate, nextExecuteDate_);
        DARABONBA_PTR_FROM_JSON(ObjectNum, objectNum_);
        DARABONBA_PTR_FROM_JSON(SearchNum, searchNum_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
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
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserFreezeConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserFreezeConfig& obj) { 
            DARABONBA_PTR_TO_JSON(FreezeRestorePath, freezeRestorePath_);
            DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
          };
          friend void from_json(const Darabonba::Json& j, UserFreezeConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(FreezeRestorePath, freezeRestorePath_);
            DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
          };
          UserFreezeConfig() = default ;
          UserFreezeConfig(const UserFreezeConfig &) = default ;
          UserFreezeConfig(UserFreezeConfig &&) = default ;
          UserFreezeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserFreezeConfig() = default ;
          UserFreezeConfig& operator=(const UserFreezeConfig &) = default ;
          UserFreezeConfig& operator=(UserFreezeConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->freezeRestorePath_ == nullptr
        && this->freezeType_ == nullptr; };
          // freezeRestorePath Field Functions 
          bool hasFreezeRestorePath() const { return this->freezeRestorePath_ != nullptr;};
          void deleteFreezeRestorePath() { this->freezeRestorePath_ = nullptr;};
          inline string getFreezeRestorePath() const { DARABONBA_PTR_GET_DEFAULT(freezeRestorePath_, "") };
          inline UserFreezeConfig& setFreezeRestorePath(string freezeRestorePath) { DARABONBA_PTR_SET_VALUE(freezeRestorePath_, freezeRestorePath) };


          // freezeType Field Functions 
          bool hasFreezeType() const { return this->freezeType_ != nullptr;};
          void deleteFreezeType() { this->freezeType_ = nullptr;};
          inline string getFreezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
          inline UserFreezeConfig& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


        protected:
          // Storage path for transfer
          shared_ptr<string> freezeRestorePath_ {};
          // Freeze type
          shared_ptr<string> freezeType_ {};
        };

        class ScanServiceInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScanServiceInfos& obj) { 
            DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
            DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
            DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          };
          friend void from_json(const Darabonba::Json& j, ScanServiceInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
            DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
            DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          };
          ScanServiceInfos() = default ;
          ScanServiceInfos(const ScanServiceInfos &) = default ;
          ScanServiceInfos(ScanServiceInfos &&) = default ;
          ScanServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScanServiceInfos() = default ;
          ScanServiceInfos& operator=(const ScanServiceInfos &) = default ;
          ScanServiceInfos& operator=(ScanServiceInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->copyFrom_ == nullptr
        && this->isCopy_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr; };
          // copyFrom Field Functions 
          bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
          void deleteCopyFrom() { this->copyFrom_ = nullptr;};
          inline string getCopyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
          inline ScanServiceInfos& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


          // isCopy Field Functions 
          bool hasIsCopy() const { return this->isCopy_ != nullptr;};
          void deleteIsCopy() { this->isCopy_ = nullptr;};
          inline bool getIsCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
          inline ScanServiceInfos& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


          // serviceCode Field Functions 
          bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
          void deleteServiceCode() { this->serviceCode_ = nullptr;};
          inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
          inline ScanServiceInfos& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline ScanServiceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        protected:
          // Primary service.
          shared_ptr<string> copyFrom_ {};
          // Whether to copy.
          shared_ptr<bool> isCopy_ {};
          // Service code.
          shared_ptr<string> serviceCode_ {};
          // Service name.
          shared_ptr<string> serviceName_ {};
        };

        virtual bool empty() const override { return this->callbackId_ == nullptr
        && this->distinctHistoryTasks_ == nullptr && this->endTime_ == nullptr && this->executeDate_ == nullptr && this->executeTime_ == nullptr && this->freeze_ == nullptr
        && this->freezeHighRisk1_ == nullptr && this->freezeHighRisk2_ == nullptr && this->freezeMediumRisk1_ == nullptr && this->freezeMediumRisk2_ == nullptr && this->freezeRestorePath_ == nullptr
        && this->freezeType_ == nullptr && this->prefixFilterType_ == nullptr && this->prefixFilters_ == nullptr && this->priority_ == nullptr && this->referer_ == nullptr
        && this->scanLimit_ == nullptr && this->scanNoFileType_ == nullptr && this->scanResourceType_ == nullptr && this->scanService_ == nullptr && this->scanServiceInfos_ == nullptr
        && this->startTime_ == nullptr && this->taskCycle_ == nullptr && this->userFreezeConfig_ == nullptr; };
        // callbackId Field Functions 
        bool hasCallbackId() const { return this->callbackId_ != nullptr;};
        void deleteCallbackId() { this->callbackId_ = nullptr;};
        inline int64_t getCallbackId() const { DARABONBA_PTR_GET_DEFAULT(callbackId_, 0L) };
        inline Config& setCallbackId(int64_t callbackId) { DARABONBA_PTR_SET_VALUE(callbackId_, callbackId) };


        // distinctHistoryTasks Field Functions 
        bool hasDistinctHistoryTasks() const { return this->distinctHistoryTasks_ != nullptr;};
        void deleteDistinctHistoryTasks() { this->distinctHistoryTasks_ = nullptr;};
        inline bool getDistinctHistoryTasks() const { DARABONBA_PTR_GET_DEFAULT(distinctHistoryTasks_, false) };
        inline Config& setDistinctHistoryTasks(bool distinctHistoryTasks) { DARABONBA_PTR_SET_VALUE(distinctHistoryTasks_, distinctHistoryTasks) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Config& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // executeDate Field Functions 
        bool hasExecuteDate() const { return this->executeDate_ != nullptr;};
        void deleteExecuteDate() { this->executeDate_ = nullptr;};
        inline int32_t getExecuteDate() const { DARABONBA_PTR_GET_DEFAULT(executeDate_, 0) };
        inline Config& setExecuteDate(int32_t executeDate) { DARABONBA_PTR_SET_VALUE(executeDate_, executeDate) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
        inline Config& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // freeze Field Functions 
        bool hasFreeze() const { return this->freeze_ != nullptr;};
        void deleteFreeze() { this->freeze_ = nullptr;};
        inline bool getFreeze() const { DARABONBA_PTR_GET_DEFAULT(freeze_, false) };
        inline Config& setFreeze(bool freeze) { DARABONBA_PTR_SET_VALUE(freeze_, freeze) };


        // freezeHighRisk1 Field Functions 
        bool hasFreezeHighRisk1() const { return this->freezeHighRisk1_ != nullptr;};
        void deleteFreezeHighRisk1() { this->freezeHighRisk1_ = nullptr;};
        inline bool getFreezeHighRisk1() const { DARABONBA_PTR_GET_DEFAULT(freezeHighRisk1_, false) };
        inline Config& setFreezeHighRisk1(bool freezeHighRisk1) { DARABONBA_PTR_SET_VALUE(freezeHighRisk1_, freezeHighRisk1) };


        // freezeHighRisk2 Field Functions 
        bool hasFreezeHighRisk2() const { return this->freezeHighRisk2_ != nullptr;};
        void deleteFreezeHighRisk2() { this->freezeHighRisk2_ = nullptr;};
        inline bool getFreezeHighRisk2() const { DARABONBA_PTR_GET_DEFAULT(freezeHighRisk2_, false) };
        inline Config& setFreezeHighRisk2(bool freezeHighRisk2) { DARABONBA_PTR_SET_VALUE(freezeHighRisk2_, freezeHighRisk2) };


        // freezeMediumRisk1 Field Functions 
        bool hasFreezeMediumRisk1() const { return this->freezeMediumRisk1_ != nullptr;};
        void deleteFreezeMediumRisk1() { this->freezeMediumRisk1_ = nullptr;};
        inline bool getFreezeMediumRisk1() const { DARABONBA_PTR_GET_DEFAULT(freezeMediumRisk1_, false) };
        inline Config& setFreezeMediumRisk1(bool freezeMediumRisk1) { DARABONBA_PTR_SET_VALUE(freezeMediumRisk1_, freezeMediumRisk1) };


        // freezeMediumRisk2 Field Functions 
        bool hasFreezeMediumRisk2() const { return this->freezeMediumRisk2_ != nullptr;};
        void deleteFreezeMediumRisk2() { this->freezeMediumRisk2_ = nullptr;};
        inline bool getFreezeMediumRisk2() const { DARABONBA_PTR_GET_DEFAULT(freezeMediumRisk2_, false) };
        inline Config& setFreezeMediumRisk2(bool freezeMediumRisk2) { DARABONBA_PTR_SET_VALUE(freezeMediumRisk2_, freezeMediumRisk2) };


        // freezeRestorePath Field Functions 
        bool hasFreezeRestorePath() const { return this->freezeRestorePath_ != nullptr;};
        void deleteFreezeRestorePath() { this->freezeRestorePath_ = nullptr;};
        inline string getFreezeRestorePath() const { DARABONBA_PTR_GET_DEFAULT(freezeRestorePath_, "") };
        inline Config& setFreezeRestorePath(string freezeRestorePath) { DARABONBA_PTR_SET_VALUE(freezeRestorePath_, freezeRestorePath) };


        // freezeType Field Functions 
        bool hasFreezeType() const { return this->freezeType_ != nullptr;};
        void deleteFreezeType() { this->freezeType_ = nullptr;};
        inline string getFreezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
        inline Config& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


        // prefixFilterType Field Functions 
        bool hasPrefixFilterType() const { return this->prefixFilterType_ != nullptr;};
        void deletePrefixFilterType() { this->prefixFilterType_ = nullptr;};
        inline string getPrefixFilterType() const { DARABONBA_PTR_GET_DEFAULT(prefixFilterType_, "") };
        inline Config& setPrefixFilterType(string prefixFilterType) { DARABONBA_PTR_SET_VALUE(prefixFilterType_, prefixFilterType) };


        // prefixFilters Field Functions 
        bool hasPrefixFilters() const { return this->prefixFilters_ != nullptr;};
        void deletePrefixFilters() { this->prefixFilters_ = nullptr;};
        inline const vector<string> & getPrefixFilters() const { DARABONBA_PTR_GET_CONST(prefixFilters_, vector<string>) };
        inline vector<string> getPrefixFilters() { DARABONBA_PTR_GET(prefixFilters_, vector<string>) };
        inline Config& setPrefixFilters(const vector<string> & prefixFilters) { DARABONBA_PTR_SET_VALUE(prefixFilters_, prefixFilters) };
        inline Config& setPrefixFilters(vector<string> && prefixFilters) { DARABONBA_PTR_SET_RVALUE(prefixFilters_, prefixFilters) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Config& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // referer Field Functions 
        bool hasReferer() const { return this->referer_ != nullptr;};
        void deleteReferer() { this->referer_ = nullptr;};
        inline string getReferer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
        inline Config& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


        // scanLimit Field Functions 
        bool hasScanLimit() const { return this->scanLimit_ != nullptr;};
        void deleteScanLimit() { this->scanLimit_ = nullptr;};
        inline int64_t getScanLimit() const { DARABONBA_PTR_GET_DEFAULT(scanLimit_, 0L) };
        inline Config& setScanLimit(int64_t scanLimit) { DARABONBA_PTR_SET_VALUE(scanLimit_, scanLimit) };


        // scanNoFileType Field Functions 
        bool hasScanNoFileType() const { return this->scanNoFileType_ != nullptr;};
        void deleteScanNoFileType() { this->scanNoFileType_ = nullptr;};
        inline bool getScanNoFileType() const { DARABONBA_PTR_GET_DEFAULT(scanNoFileType_, false) };
        inline Config& setScanNoFileType(bool scanNoFileType) { DARABONBA_PTR_SET_VALUE(scanNoFileType_, scanNoFileType) };


        // scanResourceType Field Functions 
        bool hasScanResourceType() const { return this->scanResourceType_ != nullptr;};
        void deleteScanResourceType() { this->scanResourceType_ = nullptr;};
        inline int32_t getScanResourceType() const { DARABONBA_PTR_GET_DEFAULT(scanResourceType_, 0) };
        inline Config& setScanResourceType(int32_t scanResourceType) { DARABONBA_PTR_SET_VALUE(scanResourceType_, scanResourceType) };


        // scanService Field Functions 
        bool hasScanService() const { return this->scanService_ != nullptr;};
        void deleteScanService() { this->scanService_ = nullptr;};
        inline const vector<string> & getScanService() const { DARABONBA_PTR_GET_CONST(scanService_, vector<string>) };
        inline vector<string> getScanService() { DARABONBA_PTR_GET(scanService_, vector<string>) };
        inline Config& setScanService(const vector<string> & scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };
        inline Config& setScanService(vector<string> && scanService) { DARABONBA_PTR_SET_RVALUE(scanService_, scanService) };


        // scanServiceInfos Field Functions 
        bool hasScanServiceInfos() const { return this->scanServiceInfos_ != nullptr;};
        void deleteScanServiceInfos() { this->scanServiceInfos_ = nullptr;};
        inline const vector<Config::ScanServiceInfos> & getScanServiceInfos() const { DARABONBA_PTR_GET_CONST(scanServiceInfos_, vector<Config::ScanServiceInfos>) };
        inline vector<Config::ScanServiceInfos> getScanServiceInfos() { DARABONBA_PTR_GET(scanServiceInfos_, vector<Config::ScanServiceInfos>) };
        inline Config& setScanServiceInfos(const vector<Config::ScanServiceInfos> & scanServiceInfos) { DARABONBA_PTR_SET_VALUE(scanServiceInfos_, scanServiceInfos) };
        inline Config& setScanServiceInfos(vector<Config::ScanServiceInfos> && scanServiceInfos) { DARABONBA_PTR_SET_RVALUE(scanServiceInfos_, scanServiceInfos) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Config& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // taskCycle Field Functions 
        bool hasTaskCycle() const { return this->taskCycle_ != nullptr;};
        void deleteTaskCycle() { this->taskCycle_ = nullptr;};
        inline int32_t getTaskCycle() const { DARABONBA_PTR_GET_DEFAULT(taskCycle_, 0) };
        inline Config& setTaskCycle(int32_t taskCycle) { DARABONBA_PTR_SET_VALUE(taskCycle_, taskCycle) };


        // userFreezeConfig Field Functions 
        bool hasUserFreezeConfig() const { return this->userFreezeConfig_ != nullptr;};
        void deleteUserFreezeConfig() { this->userFreezeConfig_ = nullptr;};
        inline const Config::UserFreezeConfig & getUserFreezeConfig() const { DARABONBA_PTR_GET_CONST(userFreezeConfig_, Config::UserFreezeConfig) };
        inline Config::UserFreezeConfig getUserFreezeConfig() { DARABONBA_PTR_GET(userFreezeConfig_, Config::UserFreezeConfig) };
        inline Config& setUserFreezeConfig(const Config::UserFreezeConfig & userFreezeConfig) { DARABONBA_PTR_SET_VALUE(userFreezeConfig_, userFreezeConfig) };
        inline Config& setUserFreezeConfig(Config::UserFreezeConfig && userFreezeConfig) { DARABONBA_PTR_SET_RVALUE(userFreezeConfig_, userFreezeConfig) };


      protected:
        // Callback notification ID
        shared_ptr<int64_t> callbackId_ {};
        // Whether to deduplicate historical detected tasks.
        shared_ptr<bool> distinctHistoryTasks_ {};
        // End time.
        shared_ptr<string> endTime_ {};
        // Scheduled task execution date.
        shared_ptr<int32_t> executeDate_ {};
        // Scheduled task expected execution time.
        shared_ptr<string> executeTime_ {};
        // Whether to freeze
        shared_ptr<bool> freeze_ {};
        // Freeze high-risk images
        shared_ptr<bool> freezeHighRisk1_ {};
        // Freeze high-risk audio and text
        shared_ptr<bool> freezeHighRisk2_ {};
        // Freeze medium-risk images
        shared_ptr<bool> freezeMediumRisk1_ {};
        // Freeze medium-risk audio and text
        shared_ptr<bool> freezeMediumRisk2_ {};
        // Storage path for transfer
        shared_ptr<string> freezeRestorePath_ {};
        // Freeze type
        shared_ptr<string> freezeType_ {};
        // Prefix filter type.
        shared_ptr<string> prefixFilterType_ {};
        // Prefixes.
        shared_ptr<vector<string>> prefixFilters_ {};
        // Priority.
        shared_ptr<int32_t> priority_ {};
        // Referer
        shared_ptr<string> referer_ {};
        // Scan limit quantity.
        shared_ptr<int64_t> scanLimit_ {};
        // Whether to scan images without file extensions.
        shared_ptr<bool> scanNoFileType_ {};
        // Scanned file type.
        shared_ptr<int32_t> scanResourceType_ {};
        // Scan service code
        shared_ptr<vector<string>> scanService_ {};
        // Scan service information
        shared_ptr<vector<Config::ScanServiceInfos>> scanServiceInfos_ {};
        // Start time.
        shared_ptr<string> startTime_ {};
        // Scheduling date.
        shared_ptr<int32_t> taskCycle_ {};
        // Manual freeze configuration
        shared_ptr<Config::UserFreezeConfig> userFreezeConfig_ {};
      };

      virtual bool empty() const override { return this->buckets_ == nullptr
        && this->config_ == nullptr && this->endTime_ == nullptr && this->finishNum_ == nullptr && this->isInc_ == nullptr && this->lastExecuteDate_ == nullptr
        && this->mediaType_ == nullptr && this->nextExecuteDate_ == nullptr && this->objectNum_ == nullptr && this->searchNum_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
      // buckets Field Functions 
      bool hasBuckets() const { return this->buckets_ != nullptr;};
      void deleteBuckets() { this->buckets_ = nullptr;};
      inline string getBuckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
      inline Items& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Items::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Items::Config) };
      inline Items::Config getConfig() { DARABONBA_PTR_GET(config_, Items::Config) };
      inline Items& setConfig(const Items::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Items& setConfig(Items::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finishNum Field Functions 
      bool hasFinishNum() const { return this->finishNum_ != nullptr;};
      void deleteFinishNum() { this->finishNum_ = nullptr;};
      inline int64_t getFinishNum() const { DARABONBA_PTR_GET_DEFAULT(finishNum_, 0L) };
      inline Items& setFinishNum(int64_t finishNum) { DARABONBA_PTR_SET_VALUE(finishNum_, finishNum) };


      // isInc Field Functions 
      bool hasIsInc() const { return this->isInc_ != nullptr;};
      void deleteIsInc() { this->isInc_ = nullptr;};
      inline bool getIsInc() const { DARABONBA_PTR_GET_DEFAULT(isInc_, false) };
      inline Items& setIsInc(bool isInc) { DARABONBA_PTR_SET_VALUE(isInc_, isInc) };


      // lastExecuteDate Field Functions 
      bool hasLastExecuteDate() const { return this->lastExecuteDate_ != nullptr;};
      void deleteLastExecuteDate() { this->lastExecuteDate_ = nullptr;};
      inline string getLastExecuteDate() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteDate_, "") };
      inline Items& setLastExecuteDate(string lastExecuteDate) { DARABONBA_PTR_SET_VALUE(lastExecuteDate_, lastExecuteDate) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline int32_t getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
      inline Items& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      // nextExecuteDate Field Functions 
      bool hasNextExecuteDate() const { return this->nextExecuteDate_ != nullptr;};
      void deleteNextExecuteDate() { this->nextExecuteDate_ = nullptr;};
      inline string getNextExecuteDate() const { DARABONBA_PTR_GET_DEFAULT(nextExecuteDate_, "") };
      inline Items& setNextExecuteDate(string nextExecuteDate) { DARABONBA_PTR_SET_VALUE(nextExecuteDate_, nextExecuteDate) };


      // objectNum Field Functions 
      bool hasObjectNum() const { return this->objectNum_ != nullptr;};
      void deleteObjectNum() { this->objectNum_ = nullptr;};
      inline int64_t getObjectNum() const { DARABONBA_PTR_GET_DEFAULT(objectNum_, 0L) };
      inline Items& setObjectNum(int64_t objectNum) { DARABONBA_PTR_SET_VALUE(objectNum_, objectNum) };


      // searchNum Field Functions 
      bool hasSearchNum() const { return this->searchNum_ != nullptr;};
      void deleteSearchNum() { this->searchNum_ = nullptr;};
      inline int64_t getSearchNum() const { DARABONBA_PTR_GET_DEFAULT(searchNum_, 0L) };
      inline Items& setSearchNum(int64_t searchNum) { DARABONBA_PTR_SET_VALUE(searchNum_, searchNum) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Items& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Items& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // Storage space.
      shared_ptr<string> buckets_ {};
      // Configuration items.
      shared_ptr<Items::Config> config_ {};
      // End time.
      shared_ptr<string> endTime_ {};
      // Number of completed tasks.
      shared_ptr<int64_t> finishNum_ {};
      // Whether it is a scheduled scan task
      shared_ptr<bool> isInc_ {};
      // Next execution time of the scheduled task
      shared_ptr<string> lastExecuteDate_ {};
      // Media type.
      shared_ptr<int32_t> mediaType_ {};
      // Last execution time of the scheduled task
      shared_ptr<string> nextExecuteDate_ {};
      // Total number of files in the bucket
      shared_ptr<int64_t> objectNum_ {};
      // Number of scan tasks.
      shared_ptr<int64_t> searchNum_ {};
      // Start time.
      shared_ptr<string> startTime_ {};
      // Task status.
      shared_ptr<int32_t> status_ {};
      // Task ID.
      shared_ptr<string> taskId_ {};
      // Task name.
      shared_ptr<string> taskName_ {};
      // Task type
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetStockOssCheckTasksListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetStockOssCheckTasksListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetStockOssCheckTasksListResponseBody::Items>) };
    inline vector<GetStockOssCheckTasksListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetStockOssCheckTasksListResponseBody::Items>) };
    inline GetStockOssCheckTasksListResponseBody& setItems(const vector<GetStockOssCheckTasksListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetStockOssCheckTasksListResponseBody& setItems(vector<GetStockOssCheckTasksListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetStockOssCheckTasksListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStockOssCheckTasksListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetStockOssCheckTasksListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Data of the current page.
    shared_ptr<vector<GetStockOssCheckTasksListResponseBody::Items>> items_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Backend-assigned ID used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
