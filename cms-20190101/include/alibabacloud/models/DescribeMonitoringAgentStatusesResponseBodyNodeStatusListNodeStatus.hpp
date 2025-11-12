// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODYNODESTATUSLISTNODESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODYNODESTATUSLISTNODESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& obj) { 
      DARABONBA_PTR_TO_JSON(AgentInstallErrorCode, agentInstallErrorCode_);
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoongCollectorStatus, loongCollectorStatus_);
      DARABONBA_PTR_TO_JSON(OsMonitorConfig, osMonitorConfig_);
      DARABONBA_PTR_TO_JSON(OsMonitorErrorCode, osMonitorErrorCode_);
      DARABONBA_PTR_TO_JSON(OsMonitorErrorDetail, osMonitorErrorDetail_);
      DARABONBA_PTR_TO_JSON(OsMonitorStatus, osMonitorStatus_);
      DARABONBA_PTR_TO_JSON(OsMonitorVersion, osMonitorVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentInstallErrorCode, agentInstallErrorCode_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoongCollectorStatus, loongCollectorStatus_);
      DARABONBA_PTR_FROM_JSON(OsMonitorConfig, osMonitorConfig_);
      DARABONBA_PTR_FROM_JSON(OsMonitorErrorCode, osMonitorErrorCode_);
      DARABONBA_PTR_FROM_JSON(OsMonitorErrorDetail, osMonitorErrorDetail_);
      DARABONBA_PTR_FROM_JSON(OsMonitorStatus, osMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(OsMonitorVersion, osMonitorVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus() = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus(const DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus &) = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus(DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus &&) = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus() = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& operator=(const DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus &) = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& operator=(DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentInstallErrorCode_ == nullptr
        && return this->autoInstall_ == nullptr && return this->instanceId_ == nullptr && return this->loongCollectorStatus_ == nullptr && return this->osMonitorConfig_ == nullptr && return this->osMonitorErrorCode_ == nullptr
        && return this->osMonitorErrorDetail_ == nullptr && return this->osMonitorStatus_ == nullptr && return this->osMonitorVersion_ == nullptr && return this->status_ == nullptr; };
    // agentInstallErrorCode Field Functions 
    bool hasAgentInstallErrorCode() const { return this->agentInstallErrorCode_ != nullptr;};
    void deleteAgentInstallErrorCode() { this->agentInstallErrorCode_ = nullptr;};
    inline string agentInstallErrorCode() const { DARABONBA_PTR_GET_DEFAULT(agentInstallErrorCode_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setAgentInstallErrorCode(string agentInstallErrorCode) { DARABONBA_PTR_SET_VALUE(agentInstallErrorCode_, agentInstallErrorCode) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool autoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loongCollectorStatus Field Functions 
    bool hasLoongCollectorStatus() const { return this->loongCollectorStatus_ != nullptr;};
    void deleteLoongCollectorStatus() { this->loongCollectorStatus_ = nullptr;};
    inline string loongCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(loongCollectorStatus_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setLoongCollectorStatus(string loongCollectorStatus) { DARABONBA_PTR_SET_VALUE(loongCollectorStatus_, loongCollectorStatus) };


    // osMonitorConfig Field Functions 
    bool hasOsMonitorConfig() const { return this->osMonitorConfig_ != nullptr;};
    void deleteOsMonitorConfig() { this->osMonitorConfig_ = nullptr;};
    inline string osMonitorConfig() const { DARABONBA_PTR_GET_DEFAULT(osMonitorConfig_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setOsMonitorConfig(string osMonitorConfig) { DARABONBA_PTR_SET_VALUE(osMonitorConfig_, osMonitorConfig) };


    // osMonitorErrorCode Field Functions 
    bool hasOsMonitorErrorCode() const { return this->osMonitorErrorCode_ != nullptr;};
    void deleteOsMonitorErrorCode() { this->osMonitorErrorCode_ = nullptr;};
    inline string osMonitorErrorCode() const { DARABONBA_PTR_GET_DEFAULT(osMonitorErrorCode_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setOsMonitorErrorCode(string osMonitorErrorCode) { DARABONBA_PTR_SET_VALUE(osMonitorErrorCode_, osMonitorErrorCode) };


    // osMonitorErrorDetail Field Functions 
    bool hasOsMonitorErrorDetail() const { return this->osMonitorErrorDetail_ != nullptr;};
    void deleteOsMonitorErrorDetail() { this->osMonitorErrorDetail_ = nullptr;};
    inline string osMonitorErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(osMonitorErrorDetail_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setOsMonitorErrorDetail(string osMonitorErrorDetail) { DARABONBA_PTR_SET_VALUE(osMonitorErrorDetail_, osMonitorErrorDetail) };


    // osMonitorStatus Field Functions 
    bool hasOsMonitorStatus() const { return this->osMonitorStatus_ != nullptr;};
    void deleteOsMonitorStatus() { this->osMonitorStatus_ = nullptr;};
    inline string osMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(osMonitorStatus_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setOsMonitorStatus(string osMonitorStatus) { DARABONBA_PTR_SET_VALUE(osMonitorStatus_, osMonitorStatus) };


    // osMonitorVersion Field Functions 
    bool hasOsMonitorVersion() const { return this->osMonitorVersion_ != nullptr;};
    void deleteOsMonitorVersion() { this->osMonitorVersion_ = nullptr;};
    inline string osMonitorVersion() const { DARABONBA_PTR_GET_DEFAULT(osMonitorVersion_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setOsMonitorVersion(string osMonitorVersion) { DARABONBA_PTR_SET_VALUE(osMonitorVersion_, osMonitorVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code returned when the CloudMonitor agent is installed. Valid values:
    // 
    // *   Common.Timeout: The installation timed out.
    // *   Common.SLR: The service-linked role for CloudMonitor is unauthorized.
    // *   Common.OS: The operating system is not supported.
    // *   Assist.Invalid: Cloud Assistant is not running.
    // *   Assist.Invoke: An error occurred when the installation program is started.
    // *   Assist.Execute: An error occurred when the installation program is running.
    std::shared_ptr<string> agentInstallErrorCode_ = nullptr;
    // Indicates whether the CloudMonitor agent is automatically installed. Valid values:
    // 
    // *   true: The CloudMonitor agent is automatically installed.
    // *   false: The CloudMonitor agent is not automatically installed.
    std::shared_ptr<bool> autoInstall_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> loongCollectorStatus_ = nullptr;
    // Indicates whether the SysAK monitoring feature is enabled.`` Valid values:
    // 
    // *   `true`: The SysAK monitoring feature is enabled.
    // *   `false`: the SysAK monitoring feature is disabled.
    std::shared_ptr<string> osMonitorConfig_ = nullptr;
    // The error status of SysOM. Valid values:
    // 
    // *   `install_fail`: SysOM fails to be installed or an unknown error occurs.
    // *   `install_assist_invalid`: SysOM fails to be installed because the status of Cloud Assistant is invalid.
    // *   `install_assist_command_fail`: SysOM fails to be installed because the installation command fails to run.
    // *   `uninstall_fail`: SysOM fails to be uninstalled or an unknown error occurs.
    // *   `uninstall_assist_invalid`: SysOM fails to be uninstalled because the status of Cloud Assistant is invalid.
    // *   `uninstall_assist_command_fail`: SysOM fails to be uninstalled because the uninstallation command fails to run.
    std::shared_ptr<string> osMonitorErrorCode_ = nullptr;
    // The details of the execution error. Valid values:
    // 
    // *   `Command.ErrorCode.Fail.Downlaod.REGIN_ID`: Failed to obtain the region ID.
    // *   `Command.ErrorCode.Fail.Downlaod.SYSAK`: Failed to download the .rpm package of System Analyse Kit (SysAK).
    // *   `Command.ErrorCode.Fail.Downlaod.CMON_FILE`: Failed to download the CMON file.
    // *   `Command.ErrorCode.Fail.Downlaod.BTF`: Failed to start SysAK because the BTF file is not found.
    // *   `Command.ErrorCode.Fail.Start.SYSAK`: Failed to start SysAK due to an unknown error.
    std::shared_ptr<string> osMonitorErrorDetail_ = nullptr;
    // The status of SysOM. Valid values:
    // 
    // *   installing: SysOM is being installed.
    // *   running: SysOM is running.
    // *   stopped: SysOM is stopped.
    // *   uninstalling: SysOM is being uninstalled.
    std::shared_ptr<string> osMonitorStatus_ = nullptr;
    // The SysOM version.
    std::shared_ptr<string> osMonitorVersion_ = nullptr;
    // The status of the CloudMonitor agent. Valid values:
    // 
    // *   running: The CloudMonitor agent is running.
    // *   stopped: The CloudMonitor agent is stopped.
    // *   installing: The CloudMonitor agent is being installed.
    // *   install_faild: The CloudMonitor agent fails to be installed.
    // *   abnormal: The CloudMonitor agent is not properly installed.
    // *   not_installed: The CloudMonitor agent is not installed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
