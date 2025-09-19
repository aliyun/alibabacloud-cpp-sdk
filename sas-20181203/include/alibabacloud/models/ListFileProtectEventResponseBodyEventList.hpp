// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTRESPONSEBODYEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTRESPONSEBODYEVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectEventResponseBodyEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectEventResponseBodyEventList& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(CmdLine, cmdLine_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(HandleTime, handleTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LatestTime, latestTime_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProcPath, procPath_);
      DARABONBA_PTR_TO_JSON(ProcPermission, procPermission_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectEventResponseBodyEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(CmdLine, cmdLine_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(HandleTime, handleTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LatestTime, latestTime_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProcPath, procPath_);
      DARABONBA_PTR_FROM_JSON(ProcPermission, procPermission_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListFileProtectEventResponseBodyEventList() = default ;
    ListFileProtectEventResponseBodyEventList(const ListFileProtectEventResponseBodyEventList &) = default ;
    ListFileProtectEventResponseBodyEventList(ListFileProtectEventResponseBodyEventList &&) = default ;
    ListFileProtectEventResponseBodyEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectEventResponseBodyEventList() = default ;
    ListFileProtectEventResponseBodyEventList& operator=(const ListFileProtectEventResponseBodyEventList &) = default ;
    ListFileProtectEventResponseBodyEventList& operator=(ListFileProtectEventResponseBodyEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertLevel_ != nullptr
        && this->cmdLine_ != nullptr && this->filePath_ != nullptr && this->handleTime_ != nullptr && this->id_ != nullptr && this->instanceName_ != nullptr
        && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->latestTime_ != nullptr && this->operation_ != nullptr && this->platform_ != nullptr
        && this->procPath_ != nullptr && this->procPermission_ != nullptr && this->processId_ != nullptr && this->remark_ != nullptr && this->ruleName_ != nullptr
        && this->status_ != nullptr && this->uuid_ != nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline ListFileProtectEventResponseBodyEventList& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // cmdLine Field Functions 
    bool hasCmdLine() const { return this->cmdLine_ != nullptr;};
    void deleteCmdLine() { this->cmdLine_ = nullptr;};
    inline string cmdLine() const { DARABONBA_PTR_GET_DEFAULT(cmdLine_, "") };
    inline ListFileProtectEventResponseBodyEventList& setCmdLine(string cmdLine) { DARABONBA_PTR_SET_VALUE(cmdLine_, cmdLine) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListFileProtectEventResponseBodyEventList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // handleTime Field Functions 
    bool hasHandleTime() const { return this->handleTime_ != nullptr;};
    void deleteHandleTime() { this->handleTime_ = nullptr;};
    inline int64_t handleTime() const { DARABONBA_PTR_GET_DEFAULT(handleTime_, 0L) };
    inline ListFileProtectEventResponseBodyEventList& setHandleTime(int64_t handleTime) { DARABONBA_PTR_SET_VALUE(handleTime_, handleTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListFileProtectEventResponseBodyEventList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListFileProtectEventResponseBodyEventList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListFileProtectEventResponseBodyEventList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListFileProtectEventResponseBodyEventList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // latestTime Field Functions 
    bool hasLatestTime() const { return this->latestTime_ != nullptr;};
    void deleteLatestTime() { this->latestTime_ = nullptr;};
    inline int64_t latestTime() const { DARABONBA_PTR_GET_DEFAULT(latestTime_, 0L) };
    inline ListFileProtectEventResponseBodyEventList& setLatestTime(int64_t latestTime) { DARABONBA_PTR_SET_VALUE(latestTime_, latestTime) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListFileProtectEventResponseBodyEventList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListFileProtectEventResponseBodyEventList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // procPath Field Functions 
    bool hasProcPath() const { return this->procPath_ != nullptr;};
    void deleteProcPath() { this->procPath_ = nullptr;};
    inline string procPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
    inline ListFileProtectEventResponseBodyEventList& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


    // procPermission Field Functions 
    bool hasProcPermission() const { return this->procPermission_ != nullptr;};
    void deleteProcPermission() { this->procPermission_ = nullptr;};
    inline string procPermission() const { DARABONBA_PTR_GET_DEFAULT(procPermission_, "") };
    inline ListFileProtectEventResponseBodyEventList& setProcPermission(string procPermission) { DARABONBA_PTR_SET_VALUE(procPermission_, procPermission) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListFileProtectEventResponseBodyEventList& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListFileProtectEventResponseBodyEventList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListFileProtectEventResponseBodyEventList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListFileProtectEventResponseBodyEventList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListFileProtectEventResponseBodyEventList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The severity of the alert. Valid values:
    // 
    // *   0: no alerts
    // *   1: reminder
    // *   2: suspicious
    // *   3: high-risk
    std::shared_ptr<int32_t> alertLevel_ = nullptr;
    // The command line of the event.
    std::shared_ptr<string> cmdLine_ = nullptr;
    // The path to the file that is managed by the process.
    std::shared_ptr<string> filePath_ = nullptr;
    // The time when the event was handled.
    std::shared_ptr<int64_t> handleTime_ = nullptr;
    // The ID of the event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The time when the event last occurred.
    std::shared_ptr<int64_t> latestTime_ = nullptr;
    // The operation performed by the process on the file.
    std::shared_ptr<string> operation_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    std::shared_ptr<string> platform_ = nullptr;
    // The path to the process.
    std::shared_ptr<string> procPath_ = nullptr;
    // The permissions required to start the process.
    std::shared_ptr<string> procPermission_ = nullptr;
    // The ID of the process.
    std::shared_ptr<string> processId_ = nullptr;
    // The description.
    std::shared_ptr<string> remark_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   0: unhandled
    // *   1: handled
    // *   2: added to the whitelist
    // *   3: ignored
    std::shared_ptr<int32_t> status_ = nullptr;
    // The UUID of the server that is associated with the process.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
