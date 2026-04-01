// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeUpgradeMajorVersionTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeMajorVersionTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeMajorVersionTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeUpgradeMajorVersionTasksResponseBody() = default ;
    DescribeUpgradeMajorVersionTasksResponseBody(const DescribeUpgradeMajorVersionTasksResponseBody &) = default ;
    DescribeUpgradeMajorVersionTasksResponseBody(DescribeUpgradeMajorVersionTasksResponseBody &&) = default ;
    DescribeUpgradeMajorVersionTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeMajorVersionTasksResponseBody() = default ;
    DescribeUpgradeMajorVersionTasksResponseBody& operator=(const DescribeUpgradeMajorVersionTasksResponseBody &) = default ;
    DescribeUpgradeMajorVersionTasksResponseBody& operator=(DescribeUpgradeMajorVersionTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CollectStatMode, collectStatMode_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(SourceInsName, sourceInsName_);
        DARABONBA_PTR_TO_JSON(SourceMajorVersion, sourceMajorVersion_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(SwitchEndTime, switchEndTime_);
        DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
        DARABONBA_PTR_TO_JSON(TargetInsName, targetInsName_);
        DARABONBA_PTR_TO_JSON(TargetMajorVersion, targetMajorVersion_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
        DARABONBA_PTR_TO_JSON(cutOver, cutOver_);
        DARABONBA_PTR_TO_JSON(totalLogicRepDelayTime, totalLogicRepDelayTime_);
        DARABONBA_PTR_TO_JSON(totalLogicRepLatencyMB, totalLogicRepLatencyMB_);
        DARABONBA_PTR_TO_JSON(zeroDownTimeConnectionString, zeroDownTimeConnectionString_);
        DARABONBA_PTR_TO_JSON(zeroDownTimePort, zeroDownTimePort_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CollectStatMode, collectStatMode_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(SourceInsName, sourceInsName_);
        DARABONBA_PTR_FROM_JSON(SourceMajorVersion, sourceMajorVersion_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(SwitchEndTime, switchEndTime_);
        DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
        DARABONBA_PTR_FROM_JSON(TargetInsName, targetInsName_);
        DARABONBA_PTR_FROM_JSON(TargetMajorVersion, targetMajorVersion_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
        DARABONBA_PTR_FROM_JSON(cutOver, cutOver_);
        DARABONBA_PTR_FROM_JSON(totalLogicRepDelayTime, totalLogicRepDelayTime_);
        DARABONBA_PTR_FROM_JSON(totalLogicRepLatencyMB, totalLogicRepLatencyMB_);
        DARABONBA_PTR_FROM_JSON(zeroDownTimeConnectionString, zeroDownTimeConnectionString_);
        DARABONBA_PTR_FROM_JSON(zeroDownTimePort, zeroDownTimePort_);
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
      virtual bool empty() const override { return this->collectStatMode_ == nullptr
        && this->detail_ == nullptr && this->endTime_ == nullptr && this->result_ == nullptr && this->sourceInsName_ == nullptr && this->sourceMajorVersion_ == nullptr
        && this->startTime_ == nullptr && this->switchEndTime_ == nullptr && this->switchTime_ == nullptr && this->targetInsName_ == nullptr && this->targetMajorVersion_ == nullptr
        && this->taskId_ == nullptr && this->upgradeMode_ == nullptr && this->cutOver_ == nullptr && this->totalLogicRepDelayTime_ == nullptr && this->totalLogicRepLatencyMB_ == nullptr
        && this->zeroDownTimeConnectionString_ == nullptr && this->zeroDownTimePort_ == nullptr; };
      // collectStatMode Field Functions 
      bool hasCollectStatMode() const { return this->collectStatMode_ != nullptr;};
      void deleteCollectStatMode() { this->collectStatMode_ = nullptr;};
      inline string getCollectStatMode() const { DARABONBA_PTR_GET_DEFAULT(collectStatMode_, "") };
      inline Items& setCollectStatMode(string collectStatMode) { DARABONBA_PTR_SET_VALUE(collectStatMode_, collectStatMode) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Items& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Items& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // sourceInsName Field Functions 
      bool hasSourceInsName() const { return this->sourceInsName_ != nullptr;};
      void deleteSourceInsName() { this->sourceInsName_ = nullptr;};
      inline string getSourceInsName() const { DARABONBA_PTR_GET_DEFAULT(sourceInsName_, "") };
      inline Items& setSourceInsName(string sourceInsName) { DARABONBA_PTR_SET_VALUE(sourceInsName_, sourceInsName) };


      // sourceMajorVersion Field Functions 
      bool hasSourceMajorVersion() const { return this->sourceMajorVersion_ != nullptr;};
      void deleteSourceMajorVersion() { this->sourceMajorVersion_ = nullptr;};
      inline string getSourceMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceMajorVersion_, "") };
      inline Items& setSourceMajorVersion(string sourceMajorVersion) { DARABONBA_PTR_SET_VALUE(sourceMajorVersion_, sourceMajorVersion) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // switchEndTime Field Functions 
      bool hasSwitchEndTime() const { return this->switchEndTime_ != nullptr;};
      void deleteSwitchEndTime() { this->switchEndTime_ = nullptr;};
      inline string getSwitchEndTime() const { DARABONBA_PTR_GET_DEFAULT(switchEndTime_, "") };
      inline Items& setSwitchEndTime(string switchEndTime) { DARABONBA_PTR_SET_VALUE(switchEndTime_, switchEndTime) };


      // switchTime Field Functions 
      bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
      void deleteSwitchTime() { this->switchTime_ = nullptr;};
      inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
      inline Items& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


      // targetInsName Field Functions 
      bool hasTargetInsName() const { return this->targetInsName_ != nullptr;};
      void deleteTargetInsName() { this->targetInsName_ = nullptr;};
      inline string getTargetInsName() const { DARABONBA_PTR_GET_DEFAULT(targetInsName_, "") };
      inline Items& setTargetInsName(string targetInsName) { DARABONBA_PTR_SET_VALUE(targetInsName_, targetInsName) };


      // targetMajorVersion Field Functions 
      bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
      void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
      inline string getTargetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
      inline Items& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Items& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // upgradeMode Field Functions 
      bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
      void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
      inline string getUpgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
      inline Items& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


      // cutOver Field Functions 
      bool hasCutOver() const { return this->cutOver_ != nullptr;};
      void deleteCutOver() { this->cutOver_ = nullptr;};
      inline bool getCutOver() const { DARABONBA_PTR_GET_DEFAULT(cutOver_, false) };
      inline Items& setCutOver(bool cutOver) { DARABONBA_PTR_SET_VALUE(cutOver_, cutOver) };


      // totalLogicRepDelayTime Field Functions 
      bool hasTotalLogicRepDelayTime() const { return this->totalLogicRepDelayTime_ != nullptr;};
      void deleteTotalLogicRepDelayTime() { this->totalLogicRepDelayTime_ = nullptr;};
      inline int32_t getTotalLogicRepDelayTime() const { DARABONBA_PTR_GET_DEFAULT(totalLogicRepDelayTime_, 0) };
      inline Items& setTotalLogicRepDelayTime(int32_t totalLogicRepDelayTime) { DARABONBA_PTR_SET_VALUE(totalLogicRepDelayTime_, totalLogicRepDelayTime) };


      // totalLogicRepLatencyMB Field Functions 
      bool hasTotalLogicRepLatencyMB() const { return this->totalLogicRepLatencyMB_ != nullptr;};
      void deleteTotalLogicRepLatencyMB() { this->totalLogicRepLatencyMB_ = nullptr;};
      inline int32_t getTotalLogicRepLatencyMB() const { DARABONBA_PTR_GET_DEFAULT(totalLogicRepLatencyMB_, 0) };
      inline Items& setTotalLogicRepLatencyMB(int32_t totalLogicRepLatencyMB) { DARABONBA_PTR_SET_VALUE(totalLogicRepLatencyMB_, totalLogicRepLatencyMB) };


      // zeroDownTimeConnectionString Field Functions 
      bool hasZeroDownTimeConnectionString() const { return this->zeroDownTimeConnectionString_ != nullptr;};
      void deleteZeroDownTimeConnectionString() { this->zeroDownTimeConnectionString_ = nullptr;};
      inline string getZeroDownTimeConnectionString() const { DARABONBA_PTR_GET_DEFAULT(zeroDownTimeConnectionString_, "") };
      inline Items& setZeroDownTimeConnectionString(string zeroDownTimeConnectionString) { DARABONBA_PTR_SET_VALUE(zeroDownTimeConnectionString_, zeroDownTimeConnectionString) };


      // zeroDownTimePort Field Functions 
      bool hasZeroDownTimePort() const { return this->zeroDownTimePort_ != nullptr;};
      void deleteZeroDownTimePort() { this->zeroDownTimePort_ = nullptr;};
      inline int32_t getZeroDownTimePort() const { DARABONBA_PTR_GET_DEFAULT(zeroDownTimePort_, 0) };
      inline Items& setZeroDownTimePort(int32_t zeroDownTimePort) { DARABONBA_PTR_SET_VALUE(zeroDownTimePort_, zeroDownTimePort) };


    protected:
      // The time when the system collects the statistics.
      // 
      // Valid values:
      // 
      // *   **After**: The system collects the statistics after a switchover.
      // *   **Before**: The system collects the statistics before a switchover.
      shared_ptr<string> collectStatMode_ {};
      // The details of the task.
      shared_ptr<string> detail_ {};
      // The end time of the task.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<string> endTime_ {};
      // The status of the task.
      // 
      // *   **Success**: The task is successful.
      // *   **Failed**: The task failed.
      // *   **Running**: The task is in the phase in which data is being migrated to a new instance.
      shared_ptr<string> result_ {};
      // The ID of the original instance.
      shared_ptr<string> sourceInsName_ {};
      // The major engine version of the original instance.
      shared_ptr<string> sourceMajorVersion_ {};
      // The start time of the task.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<string> startTime_ {};
      // The end time of the switching from the original instance to the new instance.
      // 
      // Expressed in Unix timestamp. Unit: milliseconds.
      shared_ptr<string> switchEndTime_ {};
      // The time at which your workloads are switched over from the original instance to the new instance.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<string> switchTime_ {};
      // The ID of the new instance.
      shared_ptr<string> targetInsName_ {};
      // The major engine version of the new instance. Valid values:
      // 
      // *   **10.0**
      // *   **11.0**
      // *   **12.0**
      // *   **13.0**
      // *   **14.0**
      // *   **15.0**
      shared_ptr<string> targetMajorVersion_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
      // The upgrade mode.
      // 
      // Valid values:
      // 
      // *   **clone**: The system does not migrate data to the new instance and does not switch your workloads over to the new instance.
      // *   **switch**: The system migrates data to the new instance and switches your workloads over to the new instance.
      shared_ptr<string> upgradeMode_ {};
      shared_ptr<bool> cutOver_ {};
      shared_ptr<int32_t> totalLogicRepDelayTime_ {};
      shared_ptr<int32_t> totalLogicRepLatencyMB_ {};
      shared_ptr<string> zeroDownTimeConnectionString_ {};
      shared_ptr<int32_t> zeroDownTimePort_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeUpgradeMajorVersionTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeUpgradeMajorVersionTasksResponseBody::Items>) };
    inline vector<DescribeUpgradeMajorVersionTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeUpgradeMajorVersionTasksResponseBody::Items>) };
    inline DescribeUpgradeMajorVersionTasksResponseBody& setItems(const vector<DescribeUpgradeMajorVersionTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeUpgradeMajorVersionTasksResponseBody& setItems(vector<DescribeUpgradeMajorVersionTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The tasks for major engine version upgrades.
    shared_ptr<vector<DescribeUpgradeMajorVersionTasksResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
