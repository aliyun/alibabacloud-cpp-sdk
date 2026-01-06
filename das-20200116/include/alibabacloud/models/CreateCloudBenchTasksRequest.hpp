// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDBENCHTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDBENCHTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateCloudBenchTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudBenchTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupTime, backupTime_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DstConnectionString, dstConnectionString_);
      DARABONBA_PTR_TO_JSON(DstInstanceId, dstInstanceId_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(DstSuperAccount, dstSuperAccount_);
      DARABONBA_PTR_TO_JSON(DstSuperPassword, dstSuperPassword_);
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(EndState, endState_);
      DARABONBA_PTR_TO_JSON(GatewayVpcId, gatewayVpcId_);
      DARABONBA_PTR_TO_JSON(GatewayVpcIp, gatewayVpcIp_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(RequestDuration, requestDuration_);
      DARABONBA_PTR_TO_JSON(RequestEndTime, requestEndTime_);
      DARABONBA_PTR_TO_JSON(RequestStartTime, requestStartTime_);
      DARABONBA_PTR_TO_JSON(SmartPressureTime, smartPressureTime_);
      DARABONBA_PTR_TO_JSON(SrcInstanceId, srcInstanceId_);
      DARABONBA_PTR_TO_JSON(SrcPublicIp, srcPublicIp_);
      DARABONBA_PTR_TO_JSON(SrcSuperAccount, srcSuperAccount_);
      DARABONBA_PTR_TO_JSON(SrcSuperPassword, srcSuperPassword_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudBenchTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupTime, backupTime_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DstConnectionString, dstConnectionString_);
      DARABONBA_PTR_FROM_JSON(DstInstanceId, dstInstanceId_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(DstSuperAccount, dstSuperAccount_);
      DARABONBA_PTR_FROM_JSON(DstSuperPassword, dstSuperPassword_);
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(EndState, endState_);
      DARABONBA_PTR_FROM_JSON(GatewayVpcId, gatewayVpcId_);
      DARABONBA_PTR_FROM_JSON(GatewayVpcIp, gatewayVpcIp_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(RequestDuration, requestDuration_);
      DARABONBA_PTR_FROM_JSON(RequestEndTime, requestEndTime_);
      DARABONBA_PTR_FROM_JSON(RequestStartTime, requestStartTime_);
      DARABONBA_PTR_FROM_JSON(SmartPressureTime, smartPressureTime_);
      DARABONBA_PTR_FROM_JSON(SrcInstanceId, srcInstanceId_);
      DARABONBA_PTR_FROM_JSON(SrcPublicIp, srcPublicIp_);
      DARABONBA_PTR_FROM_JSON(SrcSuperAccount, srcSuperAccount_);
      DARABONBA_PTR_FROM_JSON(SrcSuperPassword, srcSuperPassword_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
    };
    CreateCloudBenchTasksRequest() = default ;
    CreateCloudBenchTasksRequest(const CreateCloudBenchTasksRequest &) = default ;
    CreateCloudBenchTasksRequest(CreateCloudBenchTasksRequest &&) = default ;
    CreateCloudBenchTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudBenchTasksRequest() = default ;
    CreateCloudBenchTasksRequest& operator=(const CreateCloudBenchTasksRequest &) = default ;
    CreateCloudBenchTasksRequest& operator=(CreateCloudBenchTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->backupId_ == nullptr && this->backupTime_ == nullptr && this->clientType_ == nullptr && this->description_ == nullptr && this->dstConnectionString_ == nullptr
        && this->dstInstanceId_ == nullptr && this->dstPort_ == nullptr && this->dstSuperAccount_ == nullptr && this->dstSuperPassword_ == nullptr && this->dstType_ == nullptr
        && this->dtsJobClass_ == nullptr && this->dtsJobId_ == nullptr && this->endState_ == nullptr && this->gatewayVpcId_ == nullptr && this->gatewayVpcIp_ == nullptr
        && this->rate_ == nullptr && this->requestDuration_ == nullptr && this->requestEndTime_ == nullptr && this->requestStartTime_ == nullptr && this->smartPressureTime_ == nullptr
        && this->srcInstanceId_ == nullptr && this->srcPublicIp_ == nullptr && this->srcSuperAccount_ == nullptr && this->srcSuperPassword_ == nullptr && this->taskType_ == nullptr
        && this->workDir_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateCloudBenchTasksRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateCloudBenchTasksRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupTime Field Functions 
    bool hasBackupTime() const { return this->backupTime_ != nullptr;};
    void deleteBackupTime() { this->backupTime_ = nullptr;};
    inline string getBackupTime() const { DARABONBA_PTR_GET_DEFAULT(backupTime_, "") };
    inline CreateCloudBenchTasksRequest& setBackupTime(string backupTime) { DARABONBA_PTR_SET_VALUE(backupTime_, backupTime) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline CreateCloudBenchTasksRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCloudBenchTasksRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstConnectionString Field Functions 
    bool hasDstConnectionString() const { return this->dstConnectionString_ != nullptr;};
    void deleteDstConnectionString() { this->dstConnectionString_ = nullptr;};
    inline string getDstConnectionString() const { DARABONBA_PTR_GET_DEFAULT(dstConnectionString_, "") };
    inline CreateCloudBenchTasksRequest& setDstConnectionString(string dstConnectionString) { DARABONBA_PTR_SET_VALUE(dstConnectionString_, dstConnectionString) };


    // dstInstanceId Field Functions 
    bool hasDstInstanceId() const { return this->dstInstanceId_ != nullptr;};
    void deleteDstInstanceId() { this->dstInstanceId_ = nullptr;};
    inline string getDstInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dstInstanceId_, "") };
    inline CreateCloudBenchTasksRequest& setDstInstanceId(string dstInstanceId) { DARABONBA_PTR_SET_VALUE(dstInstanceId_, dstInstanceId) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline CreateCloudBenchTasksRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstSuperAccount Field Functions 
    bool hasDstSuperAccount() const { return this->dstSuperAccount_ != nullptr;};
    void deleteDstSuperAccount() { this->dstSuperAccount_ = nullptr;};
    inline string getDstSuperAccount() const { DARABONBA_PTR_GET_DEFAULT(dstSuperAccount_, "") };
    inline CreateCloudBenchTasksRequest& setDstSuperAccount(string dstSuperAccount) { DARABONBA_PTR_SET_VALUE(dstSuperAccount_, dstSuperAccount) };


    // dstSuperPassword Field Functions 
    bool hasDstSuperPassword() const { return this->dstSuperPassword_ != nullptr;};
    void deleteDstSuperPassword() { this->dstSuperPassword_ = nullptr;};
    inline string getDstSuperPassword() const { DARABONBA_PTR_GET_DEFAULT(dstSuperPassword_, "") };
    inline CreateCloudBenchTasksRequest& setDstSuperPassword(string dstSuperPassword) { DARABONBA_PTR_SET_VALUE(dstSuperPassword_, dstSuperPassword) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline string getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
    inline CreateCloudBenchTasksRequest& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline CreateCloudBenchTasksRequest& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline CreateCloudBenchTasksRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // endState Field Functions 
    bool hasEndState() const { return this->endState_ != nullptr;};
    void deleteEndState() { this->endState_ = nullptr;};
    inline string getEndState() const { DARABONBA_PTR_GET_DEFAULT(endState_, "") };
    inline CreateCloudBenchTasksRequest& setEndState(string endState) { DARABONBA_PTR_SET_VALUE(endState_, endState) };


    // gatewayVpcId Field Functions 
    bool hasGatewayVpcId() const { return this->gatewayVpcId_ != nullptr;};
    void deleteGatewayVpcId() { this->gatewayVpcId_ = nullptr;};
    inline string getGatewayVpcId() const { DARABONBA_PTR_GET_DEFAULT(gatewayVpcId_, "") };
    inline CreateCloudBenchTasksRequest& setGatewayVpcId(string gatewayVpcId) { DARABONBA_PTR_SET_VALUE(gatewayVpcId_, gatewayVpcId) };


    // gatewayVpcIp Field Functions 
    bool hasGatewayVpcIp() const { return this->gatewayVpcIp_ != nullptr;};
    void deleteGatewayVpcIp() { this->gatewayVpcIp_ = nullptr;};
    inline string getGatewayVpcIp() const { DARABONBA_PTR_GET_DEFAULT(gatewayVpcIp_, "") };
    inline CreateCloudBenchTasksRequest& setGatewayVpcIp(string gatewayVpcIp) { DARABONBA_PTR_SET_VALUE(gatewayVpcIp_, gatewayVpcIp) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline CreateCloudBenchTasksRequest& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // requestDuration Field Functions 
    bool hasRequestDuration() const { return this->requestDuration_ != nullptr;};
    void deleteRequestDuration() { this->requestDuration_ = nullptr;};
    inline string getRequestDuration() const { DARABONBA_PTR_GET_DEFAULT(requestDuration_, "") };
    inline CreateCloudBenchTasksRequest& setRequestDuration(string requestDuration) { DARABONBA_PTR_SET_VALUE(requestDuration_, requestDuration) };


    // requestEndTime Field Functions 
    bool hasRequestEndTime() const { return this->requestEndTime_ != nullptr;};
    void deleteRequestEndTime() { this->requestEndTime_ = nullptr;};
    inline string getRequestEndTime() const { DARABONBA_PTR_GET_DEFAULT(requestEndTime_, "") };
    inline CreateCloudBenchTasksRequest& setRequestEndTime(string requestEndTime) { DARABONBA_PTR_SET_VALUE(requestEndTime_, requestEndTime) };


    // requestStartTime Field Functions 
    bool hasRequestStartTime() const { return this->requestStartTime_ != nullptr;};
    void deleteRequestStartTime() { this->requestStartTime_ = nullptr;};
    inline string getRequestStartTime() const { DARABONBA_PTR_GET_DEFAULT(requestStartTime_, "") };
    inline CreateCloudBenchTasksRequest& setRequestStartTime(string requestStartTime) { DARABONBA_PTR_SET_VALUE(requestStartTime_, requestStartTime) };


    // smartPressureTime Field Functions 
    bool hasSmartPressureTime() const { return this->smartPressureTime_ != nullptr;};
    void deleteSmartPressureTime() { this->smartPressureTime_ = nullptr;};
    inline string getSmartPressureTime() const { DARABONBA_PTR_GET_DEFAULT(smartPressureTime_, "") };
    inline CreateCloudBenchTasksRequest& setSmartPressureTime(string smartPressureTime) { DARABONBA_PTR_SET_VALUE(smartPressureTime_, smartPressureTime) };


    // srcInstanceId Field Functions 
    bool hasSrcInstanceId() const { return this->srcInstanceId_ != nullptr;};
    void deleteSrcInstanceId() { this->srcInstanceId_ = nullptr;};
    inline string getSrcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceId_, "") };
    inline CreateCloudBenchTasksRequest& setSrcInstanceId(string srcInstanceId) { DARABONBA_PTR_SET_VALUE(srcInstanceId_, srcInstanceId) };


    // srcPublicIp Field Functions 
    bool hasSrcPublicIp() const { return this->srcPublicIp_ != nullptr;};
    void deleteSrcPublicIp() { this->srcPublicIp_ = nullptr;};
    inline string getSrcPublicIp() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIp_, "") };
    inline CreateCloudBenchTasksRequest& setSrcPublicIp(string srcPublicIp) { DARABONBA_PTR_SET_VALUE(srcPublicIp_, srcPublicIp) };


    // srcSuperAccount Field Functions 
    bool hasSrcSuperAccount() const { return this->srcSuperAccount_ != nullptr;};
    void deleteSrcSuperAccount() { this->srcSuperAccount_ = nullptr;};
    inline string getSrcSuperAccount() const { DARABONBA_PTR_GET_DEFAULT(srcSuperAccount_, "") };
    inline CreateCloudBenchTasksRequest& setSrcSuperAccount(string srcSuperAccount) { DARABONBA_PTR_SET_VALUE(srcSuperAccount_, srcSuperAccount) };


    // srcSuperPassword Field Functions 
    bool hasSrcSuperPassword() const { return this->srcSuperPassword_ != nullptr;};
    void deleteSrcSuperPassword() { this->srcSuperPassword_ = nullptr;};
    inline string getSrcSuperPassword() const { DARABONBA_PTR_GET_DEFAULT(srcSuperPassword_, "") };
    inline CreateCloudBenchTasksRequest& setSrcSuperPassword(string srcSuperPassword) { DARABONBA_PTR_SET_VALUE(srcSuperPassword_, srcSuperPassword) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateCloudBenchTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline CreateCloudBenchTasksRequest& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


  protected:
    // The total number of stress testing tasks that you want to create. Valid values: **0** to **30**. Default value: **1**.
    shared_ptr<string> amount_ {};
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the ID of the backup set.
    shared_ptr<string> backupId_ {};
    // The time when the backup starts. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> backupTime_ {};
    // The type of the stress testing client. Valid values:
    // 
    // *   **ECS**: indicates that you must create the [DBGateway](https://help.aliyun.com/document_detail/64905.html).
    // *   **DAS_ECS**: indicates that DAS automatically purchases and deploys an Elastic Compute Service (ECS) instance for stress testing.
    // 
    // This parameter is required.
    shared_ptr<string> clientType_ {};
    // The description of the stress testing task.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The endpoint of the destination instance. The specified endpoint must be the endpoint of an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL instance.
    // 
    // >  This parameter takes effect only if you set **DstType** to **ConnectionString**.
    shared_ptr<string> dstConnectionString_ {};
    // The ID of the destination instance. The instance must be an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL instance. You can call the [GetInstanceInspections](https://help.aliyun.com/document_detail/202857.html) operation to query the ID.
    // 
    // >  This parameter must be specified if you set **DstType** to **Instance**.
    shared_ptr<string> dstInstanceId_ {};
    // The port number of the instance that you want to access.
    // 
    // >  This parameter takes effect only if you set **DstType** to **ConnectionString**.
    shared_ptr<string> dstPort_ {};
    // The name of the privileged account for the destination instance.
    shared_ptr<string> dstSuperAccount_ {};
    // The password of the privileged account for the destination instance.
    shared_ptr<string> dstSuperPassword_ {};
    // The type of the identifier that is used to indicate the destination instance. Valid values:
    // 
    // *   **Instance**: the instance ID. This is the default value.
    // *   **ConnectionString**: the endpoint of the instance.
    shared_ptr<string> dstType_ {};
    // The specification of the Data Transmission Service (DTS) migration task. You can call the [DescribeCloudbenchTask](https://help.aliyun.com/document_detail/230669.html) operation to query the specification.
    // 
    // >  You must migrate the basic data in the source instance to the destination instance before you start a stress testing task. When you create a DTS migration task, you must specify this parameter.
    shared_ptr<string> dtsJobClass_ {};
    // The ID of the DTS migration task. You can call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to query the ID.
    // 
    // >  After a DTS migration task is created in the DTS console, you must specify this parameter.
    shared_ptr<string> dtsJobId_ {};
    // The state that specifies the last operation that is performed for the stress testing task. Valid values:
    // 
    // *   **WAIT_TARGET**: prepares the destination instance
    // *   **WAIT_DBGATEWAY**: prepares the DBGateway
    // *   **WAIT_SQL**: prepares the full SQL statistics
    // *   **WAIT_LOGIC**: prepares to replay the traffic
    // 
    // >  When the state of a stress testing task changes to the state that is specified by the EndState parameter, the stress testing task becomes completed.
    shared_ptr<string> endState_ {};
    // The ID of the virtual private cloud (VPC) in which the database gateway (DBGateway) is deployed.
    // 
    // >  This parameter must be specified if you set **ClientType** to **ECS**.
    shared_ptr<string> gatewayVpcId_ {};
    // The IP address or domain name of the DBGateway.
    // 
    // >  This parameter must be specified if you set **ClientType** to **ECS**.
    shared_ptr<string> gatewayVpcIp_ {};
    // The rate at which the traffic captured from the source instance is replayed on the destination instance. The value must be a positive integer. Valid values: **1** to **30**. Default value: **1**.
    shared_ptr<string> rate_ {};
    // The duration of the stress testing task for which the traffic is captured from the source instance. Unit: milliseconds.
    shared_ptr<string> requestDuration_ {};
    // The time when the stress testing task ends. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<string> requestEndTime_ {};
    // The time when the stress testing task starts. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<string> requestStartTime_ {};
    // The duration within which the traffic generation stressing test takes effect. Unit: milliseconds.
    // 
    // >  This parameter must be specified if you set **TaskType** to **smart pressure test**.
    shared_ptr<string> smartPressureTime_ {};
    // The ID of the source instance. The instance must be an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL instance. You can call the [GetInstanceInspections](https://help.aliyun.com/document_detail/202857.html) operation to query the ID.
    // 
    // >  This parameter must be specified if you set **DstType** to **Instance**.
    // 
    // This parameter is required.
    shared_ptr<string> srcInstanceId_ {};
    // The reserved parameter.
    shared_ptr<string> srcPublicIp_ {};
    // The name of the privileged account for the source instance. Set the value to **admin**.
    // 
    // >  This parameter must be specified if you set **DstType** to **Instance**.
    shared_ptr<string> srcSuperAccount_ {};
    // The password of the privileged account for the source instance.
    // 
    // >  This parameter must be specified if you set **DstType** to **Instance**.
    shared_ptr<string> srcSuperPassword_ {};
    // The type of the stress testing task. Valid values:
    // 
    // *   **pressure test** (default): A task of this type replays the traffic that is captured from the source instance on the destination instance at the maximum playback rate that is supported by the destination instance.
    // *   **smart pressure test**: A task of this type analyzes the traffic that is captured from the source instance over a short period of time and generates traffic on the destination instance for continuous stress testing. The business model based on which the traffic is generated on the destination instance and the traffic distribution are consistent with those on the source instance. Stress testing tasks of this type can help you reduce the amount of time that is consumed to collect data from the source instance and reduce storage costs and performance overheads.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
    // The temporary directory generated for stress testing.
    shared_ptr<string> workDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
