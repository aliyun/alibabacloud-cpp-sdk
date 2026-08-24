// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSFILESTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSFILESTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusFileStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusFileStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileStatuses, fileStatuses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusFileStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileStatuses, fileStatuses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListVirusFileStatusesResponseBody() = default ;
    ListVirusFileStatusesResponseBody(const ListVirusFileStatusesResponseBody &) = default ;
    ListVirusFileStatusesResponseBody(ListVirusFileStatusesResponseBody &&) = default ;
    ListVirusFileStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusFileStatusesResponseBody() = default ;
    ListVirusFileStatusesResponseBody& operator=(const ListVirusFileStatusesResponseBody &) = default ;
    ListVirusFileStatusesResponseBody& operator=(ListVirusFileStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(ConsoleOperationTime, consoleOperationTime_);
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(DevType, devType_);
        DARABONBA_PTR_TO_JSON(DiscoveryTime, discoveryTime_);
        DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FileProcessStatus, fileProcessStatus_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
        DARABONBA_PTR_TO_JSON(TaskExecutionInfo, taskExecutionInfo_);
        DARABONBA_PTR_TO_JSON(Username, username_);
        DARABONBA_PTR_TO_JSON(VirusFileSource, virusFileSource_);
        DARABONBA_PTR_TO_JSON(VirusType, virusType_);
      };
      friend void from_json(const Darabonba::Json& j, FileStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsoleOperationTime, consoleOperationTime_);
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(DevType, devType_);
        DARABONBA_PTR_FROM_JSON(DiscoveryTime, discoveryTime_);
        DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FileProcessStatus, fileProcessStatus_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
        DARABONBA_PTR_FROM_JSON(TaskExecutionInfo, taskExecutionInfo_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
        DARABONBA_PTR_FROM_JSON(VirusFileSource, virusFileSource_);
        DARABONBA_PTR_FROM_JSON(VirusType, virusType_);
      };
      FileStatuses() = default ;
      FileStatuses(const FileStatuses &) = default ;
      FileStatuses(FileStatuses &&) = default ;
      FileStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileStatuses() = default ;
      FileStatuses& operator=(const FileStatuses &) = default ;
      FileStatuses& operator=(FileStatuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consoleOperationTime_ == nullptr
        && this->department_ == nullptr && this->devTag_ == nullptr && this->devType_ == nullptr && this->discoveryTime_ == nullptr && this->fileMd5_ == nullptr
        && this->filePath_ == nullptr && this->fileProcessStatus_ == nullptr && this->fileSize_ == nullptr && this->hostname_ == nullptr && this->operation_ == nullptr
        && this->operationTime_ == nullptr && this->riskLevel_ == nullptr && this->saseUserId_ == nullptr && this->scanTaskId_ == nullptr && this->taskExecutionInfo_ == nullptr
        && this->username_ == nullptr && this->virusFileSource_ == nullptr && this->virusType_ == nullptr; };
      // consoleOperationTime Field Functions 
      bool hasConsoleOperationTime() const { return this->consoleOperationTime_ != nullptr;};
      void deleteConsoleOperationTime() { this->consoleOperationTime_ = nullptr;};
      inline string getConsoleOperationTime() const { DARABONBA_PTR_GET_DEFAULT(consoleOperationTime_, "") };
      inline FileStatuses& setConsoleOperationTime(string consoleOperationTime) { DARABONBA_PTR_SET_VALUE(consoleOperationTime_, consoleOperationTime) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline FileStatuses& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline FileStatuses& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // devType Field Functions 
      bool hasDevType() const { return this->devType_ != nullptr;};
      void deleteDevType() { this->devType_ = nullptr;};
      inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
      inline FileStatuses& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


      // discoveryTime Field Functions 
      bool hasDiscoveryTime() const { return this->discoveryTime_ != nullptr;};
      void deleteDiscoveryTime() { this->discoveryTime_ = nullptr;};
      inline string getDiscoveryTime() const { DARABONBA_PTR_GET_DEFAULT(discoveryTime_, "") };
      inline FileStatuses& setDiscoveryTime(string discoveryTime) { DARABONBA_PTR_SET_VALUE(discoveryTime_, discoveryTime) };


      // fileMd5 Field Functions 
      bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
      void deleteFileMd5() { this->fileMd5_ = nullptr;};
      inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
      inline FileStatuses& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline FileStatuses& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // fileProcessStatus Field Functions 
      bool hasFileProcessStatus() const { return this->fileProcessStatus_ != nullptr;};
      void deleteFileProcessStatus() { this->fileProcessStatus_ = nullptr;};
      inline string getFileProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(fileProcessStatus_, "") };
      inline FileStatuses& setFileProcessStatus(string fileProcessStatus) { DARABONBA_PTR_SET_VALUE(fileProcessStatus_, fileProcessStatus) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
      inline FileStatuses& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline FileStatuses& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline FileStatuses& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
      inline FileStatuses& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline FileStatuses& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline FileStatuses& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // scanTaskId Field Functions 
      bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
      void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
      inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
      inline FileStatuses& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


      // taskExecutionInfo Field Functions 
      bool hasTaskExecutionInfo() const { return this->taskExecutionInfo_ != nullptr;};
      void deleteTaskExecutionInfo() { this->taskExecutionInfo_ = nullptr;};
      inline string getTaskExecutionInfo() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionInfo_, "") };
      inline FileStatuses& setTaskExecutionInfo(string taskExecutionInfo) { DARABONBA_PTR_SET_VALUE(taskExecutionInfo_, taskExecutionInfo) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline FileStatuses& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // virusFileSource Field Functions 
      bool hasVirusFileSource() const { return this->virusFileSource_ != nullptr;};
      void deleteVirusFileSource() { this->virusFileSource_ = nullptr;};
      inline string getVirusFileSource() const { DARABONBA_PTR_GET_DEFAULT(virusFileSource_, "") };
      inline FileStatuses& setVirusFileSource(string virusFileSource) { DARABONBA_PTR_SET_VALUE(virusFileSource_, virusFileSource) };


      // virusType Field Functions 
      bool hasVirusType() const { return this->virusType_ != nullptr;};
      void deleteVirusType() { this->virusType_ = nullptr;};
      inline string getVirusType() const { DARABONBA_PTR_GET_DEFAULT(virusType_, "") };
      inline FileStatuses& setVirusType(string virusType) { DARABONBA_PTR_SET_VALUE(virusType_, virusType) };


    protected:
      // The time when the administrator initiated the disposition, in the format yyyy-MM-dd HH:mm:ss (UTC+8). An empty string is returned when the disposition was not initiated by an administrator.
      shared_ptr<string> consoleOperationTime_ {};
      // The name of the department to which the user belongs. Multiple departments are separated by commas (,). The nearest department name in the organizational structure is returned, not the full path.
      shared_ptr<string> department_ {};
      // The unique identifier of the user\\"s endpoint device that detected this virus file.
      shared_ptr<string> devTag_ {};
      // The operating system type of the user terminal device. Valid values:
      // - **windows**: Windows.
      // - **macOS**: macOS.
      shared_ptr<string> devType_ {};
      // The time when the virus file was discovered, in the format yyyy-MM-dd HH:mm:ss (UTC+8). A hyphen (-) is returned when no record exists.
      shared_ptr<string> discoveryTime_ {};
      // The MD5 hash of the virus file.
      shared_ptr<string> fileMd5_ {};
      // The absolute path of the virus file on the user\\"s endpoint device.
      shared_ptr<string> filePath_ {};
      // The disposition status. Valid values:
      // - **Pending**: Pending disposition.
      // - **Processed**: Disposed.
      shared_ptr<string> fileProcessStatus_ {};
      // The size of the virus file, in bytes.
      shared_ptr<int32_t> fileSize_ {};
      // The hostname of the user\\"s endpoint device.
      shared_ptr<string> hostname_ {};
      // The disposition action that has been performed. An empty string is returned when no disposition has been performed. Valid values:
      // - **AdminQuarantine**: Quarantined by administrator.
      // - **AdminTrust**: Trusted by administrator.
      // - **UserQuarantine**: Quarantined by endpoint user.
      // - **UserTrust**: Trusted by endpoint user.
      // - **AutoQuarantine**: Automatically quarantined based on policy.
      // - **Fail**: Disposition failed.
      shared_ptr<string> operation_ {};
      // The effective period of the disposition, in the format yyyy-MM-dd HH:mm:ss (UTC+8). The later of the actual disposition time on the user\\"s endpoint device and the time when the administrator initiated the disposition is used. A hyphen (-) is returned when no disposition has been performed.
      shared_ptr<string> operationTime_ {};
      // The risk level. Valid values:
      // - **High**: High risk.
      // - **Mid**: Medium risk.
      // - **Low**: Low risk.
      shared_ptr<string> riskLevel_ {};
      // The user ID.
      shared_ptr<string> saseUserId_ {};
      // The ID of the virus scan task that detected this virus file. An empty string is returned when the file is detected by real-time protection.
      shared_ptr<string> scanTaskId_ {};
      // The execution result description of the disposition or scan, reported by the user\\"s endpoint device. If a disposition record exists, the execution result of the disposition task is returned. Otherwise, the execution result of the scan task is returned.
      shared_ptr<string> taskExecutionInfo_ {};
      // The username.
      shared_ptr<string> username_ {};
      // The detection source of the virus file. Valid values:
      // - **Task**: Detected by a virus scan task.
      // - **Download**: Detected by real-time protection during file download.
      // - **Process**: Detected by real-time protection during process execution.
      shared_ptr<string> virusFileSource_ {};
      // The virus type. Valid values:
      // - **Backdoor**: Backdoor program.
      // - **DDoS**: DDoS Trojan.
      // - **Downloader**: Downloader Trojan.
      // - **Engtest**: DPI engine test program.
      // - **Hacktool**: Hacking tool.
      // - **Trojan**: Self-mutating Trojan.
      // - **Malbaseware**: Contaminated base software.
      // - **MalScript**: Malicious script.
      // - **Malware**: Malicious program.
      // - **Miner**: Mining programs.
      // - **Proxytool**: Proxy tool.
      // - **RansomWare**: Ransomware.
      // - **RiskWare**: Risky software.
      // - **Rootkit**: Kernel-hidden program.
      // - **Stealer**: Credential-stealing tool.
      // - **Scanner**: Scanner.
      // - **Suspicious**: Suspicious program.
      // - **Virus**: File-infecting virus.
      // - **WebShell**: Web shell.
      // - **Worm**: Worms.
      // - **BlackList**: File that hit the blacklist.
      // - **Exp**: Vulnerability exploits program.
      // - **Patcher**: Cracking program.
      // - **Gametool**: Private server tool.
      // - **AdWare**: Adware.
      // - **Maldoc**: Malicious document.
      shared_ptr<string> virusType_ {};
    };

    virtual bool empty() const override { return this->fileStatuses_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // fileStatuses Field Functions 
    bool hasFileStatuses() const { return this->fileStatuses_ != nullptr;};
    void deleteFileStatuses() { this->fileStatuses_ = nullptr;};
    inline const vector<ListVirusFileStatusesResponseBody::FileStatuses> & getFileStatuses() const { DARABONBA_PTR_GET_CONST(fileStatuses_, vector<ListVirusFileStatusesResponseBody::FileStatuses>) };
    inline vector<ListVirusFileStatusesResponseBody::FileStatuses> getFileStatuses() { DARABONBA_PTR_GET(fileStatuses_, vector<ListVirusFileStatusesResponseBody::FileStatuses>) };
    inline ListVirusFileStatusesResponseBody& setFileStatuses(const vector<ListVirusFileStatusesResponseBody::FileStatuses> & fileStatuses) { DARABONBA_PTR_SET_VALUE(fileStatuses_, fileStatuses) };
    inline ListVirusFileStatusesResponseBody& setFileStatuses(vector<ListVirusFileStatusesResponseBody::FileStatuses> && fileStatuses) { DARABONBA_PTR_SET_RVALUE(fileStatuses_, fileStatuses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusFileStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListVirusFileStatusesResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of virus files.
    shared_ptr<vector<ListVirusFileStatusesResponseBody::FileStatuses>> fileStatuses_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of virus files that match the query conditions.
    shared_ptr<string> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
