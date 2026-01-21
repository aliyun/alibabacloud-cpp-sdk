// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeStatusList, nodeStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeStatusList, nodeStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitoringAgentStatusesResponseBody() = default ;
    DescribeMonitoringAgentStatusesResponseBody(const DescribeMonitoringAgentStatusesResponseBody &) = default ;
    DescribeMonitoringAgentStatusesResponseBody(DescribeMonitoringAgentStatusesResponseBody &&) = default ;
    DescribeMonitoringAgentStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentStatusesResponseBody() = default ;
    DescribeMonitoringAgentStatusesResponseBody& operator=(const DescribeMonitoringAgentStatusesResponseBody &) = default ;
    DescribeMonitoringAgentStatusesResponseBody& operator=(DescribeMonitoringAgentStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      };
      friend void from_json(const Darabonba::Json& j, NodeStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      };
      NodeStatusList() = default ;
      NodeStatusList(const NodeStatusList &) = default ;
      NodeStatusList(NodeStatusList &&) = default ;
      NodeStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeStatusList() = default ;
      NodeStatusList& operator=(const NodeStatusList &) = default ;
      NodeStatusList& operator=(NodeStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeStatus& obj) { 
          DARABONBA_PTR_TO_JSON(AgentInstallErrorCode, agentInstallErrorCode_);
          DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LoongCollectorStatus, loongCollectorStatus_);
          DARABONBA_PTR_TO_JSON(LoongCollectorVersion, loongCollectorVersion_);
          DARABONBA_PTR_TO_JSON(OsMonitorConfig, osMonitorConfig_);
          DARABONBA_PTR_TO_JSON(OsMonitorErrorCode, osMonitorErrorCode_);
          DARABONBA_PTR_TO_JSON(OsMonitorErrorDetail, osMonitorErrorDetail_);
          DARABONBA_PTR_TO_JSON(OsMonitorStatus, osMonitorStatus_);
          DARABONBA_PTR_TO_JSON(OsMonitorVersion, osMonitorVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, NodeStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentInstallErrorCode, agentInstallErrorCode_);
          DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LoongCollectorStatus, loongCollectorStatus_);
          DARABONBA_PTR_FROM_JSON(LoongCollectorVersion, loongCollectorVersion_);
          DARABONBA_PTR_FROM_JSON(OsMonitorConfig, osMonitorConfig_);
          DARABONBA_PTR_FROM_JSON(OsMonitorErrorCode, osMonitorErrorCode_);
          DARABONBA_PTR_FROM_JSON(OsMonitorErrorDetail, osMonitorErrorDetail_);
          DARABONBA_PTR_FROM_JSON(OsMonitorStatus, osMonitorStatus_);
          DARABONBA_PTR_FROM_JSON(OsMonitorVersion, osMonitorVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        NodeStatus() = default ;
        NodeStatus(const NodeStatus &) = default ;
        NodeStatus(NodeStatus &&) = default ;
        NodeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeStatus() = default ;
        NodeStatus& operator=(const NodeStatus &) = default ;
        NodeStatus& operator=(NodeStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentInstallErrorCode_ == nullptr
        && this->autoInstall_ == nullptr && this->instanceId_ == nullptr && this->loongCollectorStatus_ == nullptr && this->loongCollectorVersion_ == nullptr && this->osMonitorConfig_ == nullptr
        && this->osMonitorErrorCode_ == nullptr && this->osMonitorErrorDetail_ == nullptr && this->osMonitorStatus_ == nullptr && this->osMonitorVersion_ == nullptr && this->status_ == nullptr; };
        // agentInstallErrorCode Field Functions 
        bool hasAgentInstallErrorCode() const { return this->agentInstallErrorCode_ != nullptr;};
        void deleteAgentInstallErrorCode() { this->agentInstallErrorCode_ = nullptr;};
        inline string getAgentInstallErrorCode() const { DARABONBA_PTR_GET_DEFAULT(agentInstallErrorCode_, "") };
        inline NodeStatus& setAgentInstallErrorCode(string agentInstallErrorCode) { DARABONBA_PTR_SET_VALUE(agentInstallErrorCode_, agentInstallErrorCode) };


        // autoInstall Field Functions 
        bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
        void deleteAutoInstall() { this->autoInstall_ = nullptr;};
        inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
        inline NodeStatus& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NodeStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // loongCollectorStatus Field Functions 
        bool hasLoongCollectorStatus() const { return this->loongCollectorStatus_ != nullptr;};
        void deleteLoongCollectorStatus() { this->loongCollectorStatus_ = nullptr;};
        inline string getLoongCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(loongCollectorStatus_, "") };
        inline NodeStatus& setLoongCollectorStatus(string loongCollectorStatus) { DARABONBA_PTR_SET_VALUE(loongCollectorStatus_, loongCollectorStatus) };


        // loongCollectorVersion Field Functions 
        bool hasLoongCollectorVersion() const { return this->loongCollectorVersion_ != nullptr;};
        void deleteLoongCollectorVersion() { this->loongCollectorVersion_ = nullptr;};
        inline string getLoongCollectorVersion() const { DARABONBA_PTR_GET_DEFAULT(loongCollectorVersion_, "") };
        inline NodeStatus& setLoongCollectorVersion(string loongCollectorVersion) { DARABONBA_PTR_SET_VALUE(loongCollectorVersion_, loongCollectorVersion) };


        // osMonitorConfig Field Functions 
        bool hasOsMonitorConfig() const { return this->osMonitorConfig_ != nullptr;};
        void deleteOsMonitorConfig() { this->osMonitorConfig_ = nullptr;};
        inline string getOsMonitorConfig() const { DARABONBA_PTR_GET_DEFAULT(osMonitorConfig_, "") };
        inline NodeStatus& setOsMonitorConfig(string osMonitorConfig) { DARABONBA_PTR_SET_VALUE(osMonitorConfig_, osMonitorConfig) };


        // osMonitorErrorCode Field Functions 
        bool hasOsMonitorErrorCode() const { return this->osMonitorErrorCode_ != nullptr;};
        void deleteOsMonitorErrorCode() { this->osMonitorErrorCode_ = nullptr;};
        inline string getOsMonitorErrorCode() const { DARABONBA_PTR_GET_DEFAULT(osMonitorErrorCode_, "") };
        inline NodeStatus& setOsMonitorErrorCode(string osMonitorErrorCode) { DARABONBA_PTR_SET_VALUE(osMonitorErrorCode_, osMonitorErrorCode) };


        // osMonitorErrorDetail Field Functions 
        bool hasOsMonitorErrorDetail() const { return this->osMonitorErrorDetail_ != nullptr;};
        void deleteOsMonitorErrorDetail() { this->osMonitorErrorDetail_ = nullptr;};
        inline string getOsMonitorErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(osMonitorErrorDetail_, "") };
        inline NodeStatus& setOsMonitorErrorDetail(string osMonitorErrorDetail) { DARABONBA_PTR_SET_VALUE(osMonitorErrorDetail_, osMonitorErrorDetail) };


        // osMonitorStatus Field Functions 
        bool hasOsMonitorStatus() const { return this->osMonitorStatus_ != nullptr;};
        void deleteOsMonitorStatus() { this->osMonitorStatus_ = nullptr;};
        inline string getOsMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(osMonitorStatus_, "") };
        inline NodeStatus& setOsMonitorStatus(string osMonitorStatus) { DARABONBA_PTR_SET_VALUE(osMonitorStatus_, osMonitorStatus) };


        // osMonitorVersion Field Functions 
        bool hasOsMonitorVersion() const { return this->osMonitorVersion_ != nullptr;};
        void deleteOsMonitorVersion() { this->osMonitorVersion_ = nullptr;};
        inline string getOsMonitorVersion() const { DARABONBA_PTR_GET_DEFAULT(osMonitorVersion_, "") };
        inline NodeStatus& setOsMonitorVersion(string osMonitorVersion) { DARABONBA_PTR_SET_VALUE(osMonitorVersion_, osMonitorVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NodeStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error code returned when the CloudMonitor agent is installed. Valid values:
        // 
        // *   Common.Timeout: The installation timed out.
        // *   Common.SLR: The service-linked role for CloudMonitor is unauthorized.
        // *   Common.OS: The operating system is not supported.
        // *   Assist.Invalid: Cloud Assistant is not running.
        // *   Assist.Invoke: An error occurred when the installation program is started.
        // *   Assist.Execute: An error occurred when the installation program is running.
        shared_ptr<string> agentInstallErrorCode_ {};
        // Indicates whether the CloudMonitor agent is automatically installed. Valid values:
        // 
        // *   true: The CloudMonitor agent is automatically installed.
        // *   false: The CloudMonitor agent is not automatically installed.
        shared_ptr<bool> autoInstall_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> loongCollectorStatus_ {};
        shared_ptr<string> loongCollectorVersion_ {};
        // Indicates whether the SysAK monitoring feature is enabled.`` Valid values:
        // 
        // *   `true`: The SysAK monitoring feature is enabled.
        // *   `false`: the SysAK monitoring feature is disabled.
        shared_ptr<string> osMonitorConfig_ {};
        // The error status of SysOM. Valid values:
        // 
        // *   `install_fail`: SysOM fails to be installed or an unknown error occurs.
        // *   `install_assist_invalid`: SysOM fails to be installed because the status of Cloud Assistant is invalid.
        // *   `install_assist_command_fail`: SysOM fails to be installed because the installation command fails to run.
        // *   `uninstall_fail`: SysOM fails to be uninstalled or an unknown error occurs.
        // *   `uninstall_assist_invalid`: SysOM fails to be uninstalled because the status of Cloud Assistant is invalid.
        // *   `uninstall_assist_command_fail`: SysOM fails to be uninstalled because the uninstallation command fails to run.
        shared_ptr<string> osMonitorErrorCode_ {};
        // The details of the execution error. Valid values:
        // 
        // *   `Command.ErrorCode.Fail.Downlaod.REGIN_ID`: Failed to obtain the region ID.
        // *   `Command.ErrorCode.Fail.Downlaod.SYSAK`: Failed to download the .rpm package of System Analyse Kit (SysAK).
        // *   `Command.ErrorCode.Fail.Downlaod.CMON_FILE`: Failed to download the CMON file.
        // *   `Command.ErrorCode.Fail.Downlaod.BTF`: Failed to start SysAK because the BTF file is not found.
        // *   `Command.ErrorCode.Fail.Start.SYSAK`: Failed to start SysAK due to an unknown error.
        shared_ptr<string> osMonitorErrorDetail_ {};
        // The status of SysOM. Valid values:
        // 
        // *   installing: SysOM is being installed.
        // *   running: SysOM is running.
        // *   stopped: SysOM is stopped.
        // *   uninstalling: SysOM is being uninstalled.
        shared_ptr<string> osMonitorStatus_ {};
        // The SysOM version.
        shared_ptr<string> osMonitorVersion_ {};
        // The status of the CloudMonitor agent. Valid values:
        // 
        // *   running: The CloudMonitor agent is running.
        // *   stopped: The CloudMonitor agent is stopped.
        // *   installing: The CloudMonitor agent is being installed.
        // *   install_faild: The CloudMonitor agent fails to be installed.
        // *   abnormal: The CloudMonitor agent is not properly installed.
        // *   not_installed: The CloudMonitor agent is not installed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->nodeStatus_ == nullptr; };
      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline const vector<NodeStatusList::NodeStatus> & getNodeStatus() const { DARABONBA_PTR_GET_CONST(nodeStatus_, vector<NodeStatusList::NodeStatus>) };
      inline vector<NodeStatusList::NodeStatus> getNodeStatus() { DARABONBA_PTR_GET(nodeStatus_, vector<NodeStatusList::NodeStatus>) };
      inline NodeStatusList& setNodeStatus(const vector<NodeStatusList::NodeStatus> & nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };
      inline NodeStatusList& setNodeStatus(vector<NodeStatusList::NodeStatus> && nodeStatus) { DARABONBA_PTR_SET_RVALUE(nodeStatus_, nodeStatus) };


    protected:
      shared_ptr<vector<NodeStatusList::NodeStatus>> nodeStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->nodeStatusList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentStatusesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentStatusesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeStatusList Field Functions 
    bool hasNodeStatusList() const { return this->nodeStatusList_ != nullptr;};
    void deleteNodeStatusList() { this->nodeStatusList_ = nullptr;};
    inline const DescribeMonitoringAgentStatusesResponseBody::NodeStatusList & getNodeStatusList() const { DARABONBA_PTR_GET_CONST(nodeStatusList_, DescribeMonitoringAgentStatusesResponseBody::NodeStatusList) };
    inline DescribeMonitoringAgentStatusesResponseBody::NodeStatusList getNodeStatusList() { DARABONBA_PTR_GET(nodeStatusList_, DescribeMonitoringAgentStatusesResponseBody::NodeStatusList) };
    inline DescribeMonitoringAgentStatusesResponseBody& setNodeStatusList(const DescribeMonitoringAgentStatusesResponseBody::NodeStatusList & nodeStatusList) { DARABONBA_PTR_SET_VALUE(nodeStatusList_, nodeStatusList) };
    inline DescribeMonitoringAgentStatusesResponseBody& setNodeStatusList(DescribeMonitoringAgentStatusesResponseBody::NodeStatusList && nodeStatusList) { DARABONBA_PTR_SET_RVALUE(nodeStatusList_, nodeStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentStatusesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The host status information.
    shared_ptr<DescribeMonitoringAgentStatusesResponseBody::NodeStatusList> nodeStatusList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
