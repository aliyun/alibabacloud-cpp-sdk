// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileProtectEventResponseBody() = default ;
    GetFileProtectEventResponseBody(const GetFileProtectEventResponseBody &) = default ;
    GetFileProtectEventResponseBody(GetFileProtectEventResponseBody &&) = default ;
    GetFileProtectEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectEventResponseBody() = default ;
    GetFileProtectEventResponseBody& operator=(const GetFileProtectEventResponseBody &) = default ;
    GetFileProtectEventResponseBody& operator=(GetFileProtectEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_TO_JSON(CmdLine, cmdLine_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FilePermission, filePermission_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProcPath, procPath_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_FROM_JSON(CmdLine, cmdLine_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FilePermission, filePermission_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProcPath, procPath_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->cmdLine_ == nullptr && this->filePath_ == nullptr && this->filePermission_ == nullptr && this->firstTime_ == nullptr && this->handleTime_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->latestTime_ == nullptr
        && this->operation_ == nullptr && this->platform_ == nullptr && this->procPath_ == nullptr && this->processId_ == nullptr && this->remark_ == nullptr
        && this->ruleName_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->uuid_ == nullptr; };
      // alertLevel Field Functions 
      bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
      void deleteAlertLevel() { this->alertLevel_ = nullptr;};
      inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
      inline Data& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


      // cmdLine Field Functions 
      bool hasCmdLine() const { return this->cmdLine_ != nullptr;};
      void deleteCmdLine() { this->cmdLine_ = nullptr;};
      inline string getCmdLine() const { DARABONBA_PTR_GET_DEFAULT(cmdLine_, "") };
      inline Data& setCmdLine(string cmdLine) { DARABONBA_PTR_SET_VALUE(cmdLine_, cmdLine) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // filePermission Field Functions 
      bool hasFilePermission() const { return this->filePermission_ != nullptr;};
      void deleteFilePermission() { this->filePermission_ = nullptr;};
      inline string getFilePermission() const { DARABONBA_PTR_GET_DEFAULT(filePermission_, "") };
      inline Data& setFilePermission(string filePermission) { DARABONBA_PTR_SET_VALUE(filePermission_, filePermission) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline Data& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // handleTime Field Functions 
      bool hasHandleTime() const { return this->handleTime_ != nullptr;};
      void deleteHandleTime() { this->handleTime_ = nullptr;};
      inline int64_t getHandleTime() const { DARABONBA_PTR_GET_DEFAULT(handleTime_, 0L) };
      inline Data& setHandleTime(int64_t handleTime) { DARABONBA_PTR_SET_VALUE(handleTime_, handleTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // latestTime Field Functions 
      bool hasLatestTime() const { return this->latestTime_ != nullptr;};
      void deleteLatestTime() { this->latestTime_ = nullptr;};
      inline int64_t getLatestTime() const { DARABONBA_PTR_GET_DEFAULT(latestTime_, 0L) };
      inline Data& setLatestTime(int64_t latestTime) { DARABONBA_PTR_SET_VALUE(latestTime_, latestTime) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Data& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // procPath Field Functions 
      bool hasProcPath() const { return this->procPath_ != nullptr;};
      void deleteProcPath() { this->procPath_ = nullptr;};
      inline string getProcPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
      inline Data& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Data& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The severity of alerts. Valid values:
      // 
      // *   0: does not generate alerts
      // *   1: sends notifications
      // *   2: suspicious
      // *   3: high-risk
      shared_ptr<int32_t> alertLevel_ {};
      // The event command line.
      shared_ptr<string> cmdLine_ {};
      // The path to the file.
      shared_ptr<string> filePath_ {};
      // The permissions to run the process.
      shared_ptr<string> filePermission_ {};
      // The timestamp at which the event was first detected.
      shared_ptr<int64_t> firstTime_ {};
      // The time when the event was handled.
      shared_ptr<int64_t> handleTime_ {};
      // The ID of the event.
      shared_ptr<int64_t> id_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the associated instance.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the associated instance.
      shared_ptr<string> intranetIp_ {};
      // The time when the event last occurred.
      shared_ptr<int64_t> latestTime_ {};
      // The operation that the process performed on the file.
      shared_ptr<string> operation_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      shared_ptr<string> platform_ {};
      // The path to the process.
      shared_ptr<string> procPath_ {};
      // The process ID of the event.
      shared_ptr<string> processId_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the event. Valid values:
      // 
      // *   0: not handled
      // *   1: handled
      // *   2: added to the whitelist
      shared_ptr<int32_t> status_ {};
      // User ID of the user who started the current process.
      shared_ptr<string> userId_ {};
      // The username that started the current process.
      shared_ptr<string> userName_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileProtectEventResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileProtectEventResponseBody::Data) };
    inline GetFileProtectEventResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileProtectEventResponseBody::Data) };
    inline GetFileProtectEventResponseBody& setData(const GetFileProtectEventResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileProtectEventResponseBody& setData(GetFileProtectEventResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileProtectEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the returned data.
    shared_ptr<GetFileProtectEventResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
