// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIRUSSCANLATESTTASKSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVIRUSSCANLATESTTASKSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVirusScanLatestTaskStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVirusScanLatestTaskStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteMachine, completeMachine_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SafeMachine, safeMachine_);
      DARABONBA_PTR_TO_JSON(ScanMachine, scanMachine_);
      DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousMachine, suspiciousMachine_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UnCompleteMachine, unCompleteMachine_);
    };
    friend void from_json(const Darabonba::Json& j, GetVirusScanLatestTaskStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteMachine, completeMachine_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SafeMachine, safeMachine_);
      DARABONBA_PTR_FROM_JSON(ScanMachine, scanMachine_);
      DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousMachine, suspiciousMachine_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UnCompleteMachine, unCompleteMachine_);
    };
    GetVirusScanLatestTaskStatisticResponseBodyData() = default ;
    GetVirusScanLatestTaskStatisticResponseBodyData(const GetVirusScanLatestTaskStatisticResponseBodyData &) = default ;
    GetVirusScanLatestTaskStatisticResponseBodyData(GetVirusScanLatestTaskStatisticResponseBodyData &&) = default ;
    GetVirusScanLatestTaskStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVirusScanLatestTaskStatisticResponseBodyData() = default ;
    GetVirusScanLatestTaskStatisticResponseBodyData& operator=(const GetVirusScanLatestTaskStatisticResponseBodyData &) = default ;
    GetVirusScanLatestTaskStatisticResponseBodyData& operator=(GetVirusScanLatestTaskStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeMachine_ != nullptr
        && this->machineName_ != nullptr && this->progress_ != nullptr && this->riskLevel_ != nullptr && this->safeMachine_ != nullptr && this->scanMachine_ != nullptr
        && this->scanPath_ != nullptr && this->scanTime_ != nullptr && this->scanType_ != nullptr && this->status_ != nullptr && this->suspiciousCount_ != nullptr
        && this->suspiciousMachine_ != nullptr && this->taskId_ != nullptr && this->unCompleteMachine_ != nullptr; };
    // completeMachine Field Functions 
    bool hasCompleteMachine() const { return this->completeMachine_ != nullptr;};
    void deleteCompleteMachine() { this->completeMachine_ = nullptr;};
    inline int32_t completeMachine() const { DARABONBA_PTR_GET_DEFAULT(completeMachine_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setCompleteMachine(int32_t completeMachine) { DARABONBA_PTR_SET_VALUE(completeMachine_, completeMachine) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // safeMachine Field Functions 
    bool hasSafeMachine() const { return this->safeMachine_ != nullptr;};
    void deleteSafeMachine() { this->safeMachine_ = nullptr;};
    inline int32_t safeMachine() const { DARABONBA_PTR_GET_DEFAULT(safeMachine_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setSafeMachine(int32_t safeMachine) { DARABONBA_PTR_SET_VALUE(safeMachine_, safeMachine) };


    // scanMachine Field Functions 
    bool hasScanMachine() const { return this->scanMachine_ != nullptr;};
    void deleteScanMachine() { this->scanMachine_ = nullptr;};
    inline int32_t scanMachine() const { DARABONBA_PTR_GET_DEFAULT(scanMachine_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setScanMachine(int32_t scanMachine) { DARABONBA_PTR_SET_VALUE(scanMachine_, scanMachine) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & scanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> scanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanTime Field Functions 
    bool hasScanTime() const { return this->scanTime_ != nullptr;};
    void deleteScanTime() { this->scanTime_ = nullptr;};
    inline int64_t scanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // suspiciousCount Field Functions 
    bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
    void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
    inline int32_t suspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


    // suspiciousMachine Field Functions 
    bool hasSuspiciousMachine() const { return this->suspiciousMachine_ != nullptr;};
    void deleteSuspiciousMachine() { this->suspiciousMachine_ = nullptr;};
    inline int32_t suspiciousMachine() const { DARABONBA_PTR_GET_DEFAULT(suspiciousMachine_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setSuspiciousMachine(int32_t suspiciousMachine) { DARABONBA_PTR_SET_VALUE(suspiciousMachine_, suspiciousMachine) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // unCompleteMachine Field Functions 
    bool hasUnCompleteMachine() const { return this->unCompleteMachine_ != nullptr;};
    void deleteUnCompleteMachine() { this->unCompleteMachine_ = nullptr;};
    inline int32_t unCompleteMachine() const { DARABONBA_PTR_GET_DEFAULT(unCompleteMachine_, 0) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData& setUnCompleteMachine(int32_t unCompleteMachine) { DARABONBA_PTR_SET_VALUE(unCompleteMachine_, unCompleteMachine) };


  protected:
    // The number of machines on which the virus scan task is complete.
    std::shared_ptr<int32_t> completeMachine_ = nullptr;
    // The name of the machine.
    std::shared_ptr<string> machineName_ = nullptr;
    // The progress of the virus scan task in percentage.
    std::shared_ptr<string> progress_ = nullptr;
    // The highest risk level of the detected alerts. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The number of safe machines that are detected.
    std::shared_ptr<int32_t> safeMachine_ = nullptr;
    // The number of machines that are scanned.
    std::shared_ptr<int32_t> scanMachine_ = nullptr;
    // The paths of files that were scanned. This value is returned only when ScanType is set to user.
    std::shared_ptr<vector<string>> scanPath_ = nullptr;
    // The timestamp generated when the virus scan task was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTime_ = nullptr;
    // The type of the virus scan. Valid values:
    // 
    // *   **system**: automatic scan.
    // *   **user**: custom scan.
    std::shared_ptr<string> scanType_ = nullptr;
    // The status of the virus scan task.
    // 
    // **Valid values for a main task**:
    // 
    // *   **0**: The main task is to be started.
    // *   **10**: The main task is running.
    // *   **100**: The main task is complete.
    // 
    // **Valid values for a subtask**:
    // 
    // *   **0**: The subtask is to be started.
    // *   **20**: The scan script is sent.
    // *   **50**: The subtask is running.
    // *   **100**: The subtask is complete.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The number of alerts that are detected.
    std::shared_ptr<int32_t> suspiciousCount_ = nullptr;
    // The number of suspicious machines that are detected.
    std::shared_ptr<int32_t> suspiciousMachine_ = nullptr;
    // The ID of the virus scan task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The number of machines on which the virus scan task was not complete or failed.
    std::shared_ptr<int32_t> unCompleteMachine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
