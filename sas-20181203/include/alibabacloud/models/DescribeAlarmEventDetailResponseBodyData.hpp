// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlarmEventDetailResponseBodyDataCauseDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventAliasName, alarmEventAliasName_);
      DARABONBA_PTR_TO_JSON(AlarmEventDesc, alarmEventDesc_);
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_TO_JSON(CanCancelFault, canCancelFault_);
      DARABONBA_PTR_TO_JSON(CauseDetails, causeDetails_);
      DARABONBA_PTR_TO_JSON(ContainHwMode, containHwMode_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerImageId, containerImageId_);
      DARABONBA_PTR_TO_JSON(ContainerImageName, containerImageName_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(K8sClusterName, k8sClusterName_);
      DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_TO_JSON(K8sNodeId, k8sNodeId_);
      DARABONBA_PTR_TO_JSON(K8sNodeName, k8sNodeName_);
      DARABONBA_PTR_TO_JSON(K8sPodName, k8sPodName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventAliasName, alarmEventAliasName_);
      DARABONBA_PTR_FROM_JSON(AlarmEventDesc, alarmEventDesc_);
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_FROM_JSON(CanCancelFault, canCancelFault_);
      DARABONBA_PTR_FROM_JSON(CauseDetails, causeDetails_);
      DARABONBA_PTR_FROM_JSON(ContainHwMode, containHwMode_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerImageId, containerImageId_);
      DARABONBA_PTR_FROM_JSON(ContainerImageName, containerImageName_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(K8sClusterName, k8sClusterName_);
      DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_FROM_JSON(K8sNodeId, k8sNodeId_);
      DARABONBA_PTR_FROM_JSON(K8sNodeName, k8sNodeName_);
      DARABONBA_PTR_FROM_JSON(K8sPodName, k8sPodName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAlarmEventDetailResponseBodyData() = default ;
    DescribeAlarmEventDetailResponseBodyData(const DescribeAlarmEventDetailResponseBodyData &) = default ;
    DescribeAlarmEventDetailResponseBodyData(DescribeAlarmEventDetailResponseBodyData &&) = default ;
    DescribeAlarmEventDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventDetailResponseBodyData() = default ;
    DescribeAlarmEventDetailResponseBodyData& operator=(const DescribeAlarmEventDetailResponseBodyData &) = default ;
    DescribeAlarmEventDetailResponseBodyData& operator=(DescribeAlarmEventDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmEventAliasName_ != nullptr
        && this->alarmEventDesc_ != nullptr && this->alarmUniqueInfo_ != nullptr && this->appName_ != nullptr && this->canBeDealOnLine_ != nullptr && this->canCancelFault_ != nullptr
        && this->causeDetails_ != nullptr && this->containHwMode_ != nullptr && this->containerId_ != nullptr && this->containerImageId_ != nullptr && this->containerImageName_ != nullptr
        && this->dataSource_ != nullptr && this->endTime_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->k8sClusterId_ != nullptr && this->k8sClusterName_ != nullptr && this->k8sNamespace_ != nullptr && this->k8sNodeId_ != nullptr && this->k8sNodeName_ != nullptr
        && this->k8sPodName_ != nullptr && this->level_ != nullptr && this->solution_ != nullptr && this->startTime_ != nullptr && this->type_ != nullptr
        && this->uuid_ != nullptr; };
    // alarmEventAliasName Field Functions 
    bool hasAlarmEventAliasName() const { return this->alarmEventAliasName_ != nullptr;};
    void deleteAlarmEventAliasName() { this->alarmEventAliasName_ = nullptr;};
    inline string alarmEventAliasName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventAliasName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setAlarmEventAliasName(string alarmEventAliasName) { DARABONBA_PTR_SET_VALUE(alarmEventAliasName_, alarmEventAliasName) };


    // alarmEventDesc Field Functions 
    bool hasAlarmEventDesc() const { return this->alarmEventDesc_ != nullptr;};
    void deleteAlarmEventDesc() { this->alarmEventDesc_ = nullptr;};
    inline string alarmEventDesc() const { DARABONBA_PTR_GET_DEFAULT(alarmEventDesc_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setAlarmEventDesc(string alarmEventDesc) { DARABONBA_PTR_SET_VALUE(alarmEventDesc_, alarmEventDesc) };


    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string alarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // canBeDealOnLine Field Functions 
    bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
    void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
    inline bool canBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
    inline DescribeAlarmEventDetailResponseBodyData& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


    // canCancelFault Field Functions 
    bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
    void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
    inline bool canCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
    inline DescribeAlarmEventDetailResponseBodyData& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


    // causeDetails Field Functions 
    bool hasCauseDetails() const { return this->causeDetails_ != nullptr;};
    void deleteCauseDetails() { this->causeDetails_ = nullptr;};
    inline const vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails> & causeDetails() const { DARABONBA_PTR_GET_CONST(causeDetails_, vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails>) };
    inline vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails> causeDetails() { DARABONBA_PTR_GET(causeDetails_, vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails>) };
    inline DescribeAlarmEventDetailResponseBodyData& setCauseDetails(const vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails> & causeDetails) { DARABONBA_PTR_SET_VALUE(causeDetails_, causeDetails) };
    inline DescribeAlarmEventDetailResponseBodyData& setCauseDetails(vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails> && causeDetails) { DARABONBA_PTR_SET_RVALUE(causeDetails_, causeDetails) };


    // containHwMode Field Functions 
    bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
    void deleteContainHwMode() { this->containHwMode_ = nullptr;};
    inline bool containHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
    inline DescribeAlarmEventDetailResponseBodyData& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerImageId Field Functions 
    bool hasContainerImageId() const { return this->containerImageId_ != nullptr;};
    void deleteContainerImageId() { this->containerImageId_ = nullptr;};
    inline string containerImageId() const { DARABONBA_PTR_GET_DEFAULT(containerImageId_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setContainerImageId(string containerImageId) { DARABONBA_PTR_SET_VALUE(containerImageId_, containerImageId) };


    // containerImageName Field Functions 
    bool hasContainerImageName() const { return this->containerImageName_ != nullptr;};
    void deleteContainerImageName() { this->containerImageName_ = nullptr;};
    inline string containerImageName() const { DARABONBA_PTR_GET_DEFAULT(containerImageName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setContainerImageName(string containerImageName) { DARABONBA_PTR_SET_VALUE(containerImageName_, containerImageName) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlarmEventDetailResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // k8sClusterName Field Functions 
    bool hasK8sClusterName() const { return this->k8sClusterName_ != nullptr;};
    void deleteK8sClusterName() { this->k8sClusterName_ = nullptr;};
    inline string k8sClusterName() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setK8sClusterName(string k8sClusterName) { DARABONBA_PTR_SET_VALUE(k8sClusterName_, k8sClusterName) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string k8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // k8sNodeId Field Functions 
    bool hasK8sNodeId() const { return this->k8sNodeId_ != nullptr;};
    void deleteK8sNodeId() { this->k8sNodeId_ = nullptr;};
    inline string k8sNodeId() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeId_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setK8sNodeId(string k8sNodeId) { DARABONBA_PTR_SET_VALUE(k8sNodeId_, k8sNodeId) };


    // k8sNodeName Field Functions 
    bool hasK8sNodeName() const { return this->k8sNodeName_ != nullptr;};
    void deleteK8sNodeName() { this->k8sNodeName_ = nullptr;};
    inline string k8sNodeName() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setK8sNodeName(string k8sNodeName) { DARABONBA_PTR_SET_VALUE(k8sNodeName_, k8sNodeName) };


    // k8sPodName Field Functions 
    bool hasK8sPodName() const { return this->k8sPodName_ != nullptr;};
    void deleteK8sPodName() { this->k8sPodName_ = nullptr;};
    inline string k8sPodName() const { DARABONBA_PTR_GET_DEFAULT(k8sPodName_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setK8sPodName(string k8sPodName) { DARABONBA_PTR_SET_VALUE(k8sPodName_, k8sPodName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlarmEventDetailResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAlarmEventDetailResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the alert event.
    std::shared_ptr<string> alarmEventAliasName_ = nullptr;
    // The description of the alert event.
    std::shared_ptr<string> alarmEventDesc_ = nullptr;
    // The unique identifier of the alert event.
    // 
    // > To query the details of an alert event, you must provide the unique identifier of the alert event. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to obtain the identifier.
    std::shared_ptr<string> alarmUniqueInfo_ = nullptr;
    // The name of the container application.
    std::shared_ptr<string> appName_ = nullptr;
    // Indicates whether the online handling of the alert event is supported. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> canBeDealOnLine_ = nullptr;
    // Indicates whether you can cancel marking the alert event as a false positive. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> canCancelFault_ = nullptr;
    // An array consisting of the cause of the alert event, which can be used to trace the alert event.
    std::shared_ptr<vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetails>> causeDetails_ = nullptr;
    // Indicates whether the Safeguard Mode For Major Activities mode is enabled.
    std::shared_ptr<bool> containHwMode_ = nullptr;
    // The ID of the container application.
    std::shared_ptr<string> containerId_ = nullptr;
    // The ID of the image to which the container belongs.
    std::shared_ptr<string> containerImageId_ = nullptr;
    // The name of the image to which the container belongs.
    std::shared_ptr<string> containerImageName_ = nullptr;
    // The data source of the alert event.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The timestamp when the alert event ends. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the associated instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the associated instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The ID of the Kubernetes cluster.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The name of the Kubernetes cluster.
    std::shared_ptr<string> k8sClusterName_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> k8sNamespace_ = nullptr;
    // The ID of the Kubernetes cluster node.
    std::shared_ptr<string> k8sNodeId_ = nullptr;
    // The name of the Kubernetes cluster node.
    std::shared_ptr<string> k8sNodeName_ = nullptr;
    // The name of the Kubernetes pod.
    std::shared_ptr<string> k8sPodName_ = nullptr;
    // The severity of the alert event. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
    // The solution to the alert event.
    std::shared_ptr<string> solution_ = nullptr;
    // The timestamp when the alert event starts. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The alert type of the alert event. Valid values:
    // 
    // *   Suspicious process
    // *   Webshell
    // *   Unusual logon
    // *   Exception
    // *   Sensitive file tampering
    // *   Malicious process (cloud threat detection)
    // *   Suspicious network connection
    // *   Other
    // *   Abnormal account
    // *   Application intrusion event
    // *   Cloud threat detection
    // *   Precise defense
    // *   Application whitelist
    // *   Persistent webshell
    // *   Web application threat detection
    // *   Malicious script
    // *   Threat intelligence
    // *   Malicious network activity
    // *   Cluster exception
    // *   Webshell (on-premises threat detection)
    // *   Vulnerability exploitation
    // *   Malicious process (on-premises threat detection)
    // *   Trusted exception
    std::shared_ptr<string> type_ = nullptr;
    // The instance UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
