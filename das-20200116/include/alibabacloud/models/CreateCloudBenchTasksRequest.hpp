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
    // The total number of stress testing tasks to create. Valid values: **0** to **30**. Default value: **1**.
    shared_ptr<string> amount_ {};
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the backup list and obtain the ID.
    shared_ptr<string> backupId_ {};
    // The time of the backup. Format: yyyy-MM-ddTHH:mm:ssZ (UTC time).
    shared_ptr<string> backupTime_ {};
    // The type of stress testing machine. Valid values:
    // 
    // - **ECS**: You need to prepare a [Database Gateway](https://help.aliyun.com/document_detail/64905.html) yourself.
    // 
    // - **DAS_ECS**: An ECS instance that is automatically purchased and deployed by DAS.
    // 
    // This parameter is required.
    shared_ptr<string> clientType_ {};
    // The description of the stress testing task.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The connection address of the target instance. Only RDS MySQL and PolarDB MySQL instances are supported.
    // 
    // > This parameter takes effect when **DstType** is set to **ConnectionString**.
    shared_ptr<string> dstConnectionString_ {};
    // The ID of the target instance. Only RDS MySQL and PolarDB MySQL instances are supported. You can call the [GetInstanceInspections](https://help.aliyun.com/document_detail/202857.html) operation to obtain the ID.
    // 
    // > This parameter is required when **DstType** is set to **Instance**.
    shared_ptr<string> dstInstanceId_ {};
    // The port of the target instance.
    // 
    // > This parameter takes effect when **DstType** is set to **ConnectionString**.
    shared_ptr<string> dstPort_ {};
    // The privileged account of the target instance.
    shared_ptr<string> dstSuperAccount_ {};
    // The password of the privileged account of the target instance.
    shared_ptr<string> dstSuperPassword_ {};
    // The type of the target instance. Valid values:
    // 
    // - **Instance** (default): instance ID.
    // 
    // - **ConnectionString**: connection address of the instance.
    shared_ptr<string> dstType_ {};
    // The specification of the DTS migration task. You can call the [DescribeCloudbenchTask](https://help.aliyun.com/document_detail/230669.html) operation to obtain the specification.
    // 
    // > The stress testing task needs to migrate the baseline data from the source instance to the target instance. This parameter is required when you create a new DTS task.
    shared_ptr<string> dtsJobClass_ {};
    // The ID of the DTS migration task. You can call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to obtain the ID.
    // 
    // > This parameter is required when a DTS task has been created in the DTS console.
    shared_ptr<string> dtsJobId_ {};
    // The status after the stress testing task ends. Valid values:
    // 
    // - **WAIT_TARGET**: Prepare the target instance for stress testing.
    // 
    // - **WAIT_DBGATEWAY**: Prepare the stress testing deployment.
    // 
    // - **WAIT_SQL**: Prepare the full SQL statements.
    // 
    // - **WAIT_LOGIC**: Prepare to start replaying the traffic.
    // 
    // > When the stress testing task completes the status set by EndState, the task directly reaches the completed status.
    shared_ptr<string> endState_ {};
    // The virtual private cloud (VPC) ID of the Database Gateway.
    // 
    // > This parameter is required when **ClientType** is set to **ECS**.
    shared_ptr<string> gatewayVpcId_ {};
    // The IP address or domain name of the Database Gateway.
    // 
    // > This parameter is required when **ClientType** is set to **ECS**.
    shared_ptr<string> gatewayVpcIp_ {};
    // The replay speed of the source instance traffic on the target instance. The replay speed must be a positive integer. Valid values: **1** to **30**. Default value: **1**.
    shared_ptr<string> rate_ {};
    // The duration of the stress testing task. Unit: milliseconds.
    shared_ptr<string> requestDuration_ {};
    // The end time of the stress testing task. The time is in the UNIX timestamp format. Unit: milliseconds.
    shared_ptr<string> requestEndTime_ {};
    // The start time of the stress testing task. The time is in the UNIX timestamp format. Unit: milliseconds.
    shared_ptr<string> requestStartTime_ {};
    // The duration of the generated stress testing. Unit: milliseconds.
    // 
    // > This parameter is required when **TaskType** is set to **smart pressure test**.
    shared_ptr<string> smartPressureTime_ {};
    // The ID of the source instance. Only RDS MySQL and PolarDB MySQL instances are supported. You can call the [GetInstanceInspections](https://help.aliyun.com/document_detail/202857.html) operation to obtain the ID.
    // 
    // > This parameter is required when **DstType** is set to **Instance**.
    // 
    // This parameter is required.
    shared_ptr<string> srcInstanceId_ {};
    // Reserved parameter.
    shared_ptr<string> srcPublicIp_ {};
    // The privileged account of the source instance. Value: **admin**.
    // 
    // > This parameter is required when **DstType** is set to **Instance**.
    shared_ptr<string> srcSuperAccount_ {};
    // The password of the privileged account of the source instance.
    // 
    // > This parameter is required when **DstType** is set to **Instance**.
    shared_ptr<string> srcSuperPassword_ {};
    // The type of stress testing task. Valid values:
    // 
    // - **pressure test** (default): Intelligent stress testing, which replays the traffic captured from the source instance on the target instance at the maximum speed supported by the target instance type.
    // 
    // - **smart pressure test**: Generated stress testing, which analyzes and learns from the traffic captured from the source instance in a short period of time, generates traffic that is consistent with the business model and traffic distribution of the original traffic for continuous stress testing, reduces the time for collecting data from the source instance, and reduces storage costs and performance overhead.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
    // The temporary directory generated by the stress testing.
    shared_ptr<string> workDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
