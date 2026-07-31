// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINVOCATIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINVOCATIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInvocationAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInvocationAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInvocationAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyInvocationAttributeRequest() = default ;
    ModifyInvocationAttributeRequest(const ModifyInvocationAttributeRequest &) = default ;
    ModifyInvocationAttributeRequest(ModifyInvocationAttributeRequest &&) = default ;
    ModifyInvocationAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInvocationAttributeRequest() = default ;
    ModifyInvocationAttributeRequest& operator=(const ModifyInvocationAttributeRequest &) = default ;
    ModifyInvocationAttributeRequest& operator=(ModifyInvocationAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandContent_ == nullptr && this->contentEncoding_ == nullptr && this->enableParameter_ == nullptr && this->frequency_ == nullptr && this->instanceId_ == nullptr
        && this->invokeId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInvocationAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline ModifyInvocationAttributeRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline ModifyInvocationAttributeRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline ModifyInvocationAttributeRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline ModifyInvocationAttributeRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline ModifyInvocationAttributeRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ModifyInvocationAttributeRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline ModifyInvocationAttributeRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInvocationAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInvocationAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline ModifyInvocationAttributeRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline ModifyInvocationAttributeRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInvocationAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInvocationAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInvocationAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The modified command content. The command content can be plaintext or Base64-encoded. Note the following items:
    // 
    // - If the command was saved when the task was created, the command content after Base64 encoding cannot exceed 18 KB. If the command was not saved, the command content after Base64 encoding cannot exceed 24 KB.
    // - If your command content is Base64-encoded, you must set `ContentEncoding=Base64`.
    // - Set `EnableParameter=true` to enable the custom parameter feature in the command content:
    //     - Define custom parameters by enclosing them in `{{}}`. Spaces and line breaks before and after the parameter name within `{{}}` are ignored.
    //     - The number of custom parameters cannot exceed 20.
    //     - Custom parameter names can contain a-zA-Z0-9-_. The acs:: prefix for specifying non-built-in environment parameters is not supported. Other characters are not supported. Parameter names are case-insensitive.
    //     - Each custom parameter name cannot exceed 64 bytes.
    // 
    // - You can specify built-in environment parameters as custom parameters. When the command is executed, you do not need to manually assign values to these parameters. Cloud Assistant automatically replaces them with the corresponding values in the environment. The following built-in environment parameters are supported:
    //     - `{{ACS::RegionId}}`: The region ID.
    //     - `{{ACS::AccountId}}`: The UID of the Alibaba Cloud account.
    //     - `{{ACS::InstanceId}}`: The instance ID. When the command is sent to multiple instances, to specify `{{ACS::InstanceId}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent is not earlier than the following versions:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::InstanceName}}`: The instance name. When the command is sent to multiple instances, to specify `{{ACS::InstanceName}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent is not earlier than the following versions:
    //         - Linux: 2.2.3.344
    //         - Windows: 2.1.3.344
    //     - `{{ACS::InvokeId}}`: The command execution ID. To specify `{{ACS::InvokeId}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent is not earlier than the following versions:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::CommandId}}`: The command ID. When you call this operation to execute a command, to specify `{{ACS::CommandId}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent is not earlier than the following versions: 
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    shared_ptr<string> commandContent_ {};
    // The encoding type of the command content (`CommandContent`). Valid values (case-insensitive):
    // 
    // - PlainText: not encoded. The content is transmitted in plaintext.
    // - Base64: Base64-encoded.
    // 
    // Default value: PlainText. If an invalid value is specified, it is treated as PlainText.
    shared_ptr<string> contentEncoding_ {};
    // Specifies whether the modified command contains custom parameters.
    // - When you enable custom parameters or modify the custom parameters `Parameters`, set this parameter to `true`.
    // - When you do not modify the custom parameters `Parameters`, do not set this parameter or set it to `false`.
    shared_ptr<bool> enableParameter_ {};
    // The modified scheduled execution frequency. This parameter takes effect only when `RepeatMode` is set to `Period`. Three types of scheduled execution are supported: fixed interval execution (based on Rate expressions), one-time execution at a specified time, and clock-based scheduled execution (based on Cron expressions).
    // 
    // - Fixed interval execution: Based on Rate expressions, the command is executed at the specified time interval. The time interval can be specified in seconds (s), minutes (m), hours (h), or days (d). This is applicable to scenarios where tasks are executed at fixed intervals. Format: `rate(<interval value><interval unit>)`. For example, to execute every 5 minutes, use `rate(5m)`. Fixed interval execution has the following limits:
    //     - The interval cannot exceed 7 days or be less than 60 seconds, and must be greater than the timeout period specified when the scheduled task was created.
    //     - The execution interval is based only on the fixed frequency and is not related to the actual execution time of the task. For example, if the command is set to execute every 5 minutes and the task takes 2 minutes to complete, the next round starts 3 minutes after the task completes.
    //     - The next execution time is calculated based on the task creation time (see [CreationTime](https://help.aliyun.com/document_detail/64840.html) returned by `DescribeInvocations`, note that this is not the modification time) and the modified execution interval.
    // 
    // - One-time execution at a specified time: The command is executed once at the specified time zone and time point. Format: `at(yyyy-MM-dd HH:mm:ss <time zone>)`, that is, `at(year-month-day hour:minute:second <time zone>)`. If no time zone is specified, the default is UTC. The time zone supports the following three formats:
    //     - Full time zone name: such as `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - GMT offset from Greenwich Mean Time: such as `GMT+8:00` (East 8th time zone) or `GMT-7:00` (West 7th time zone). When using GMT format, leading zeros are not supported in the hour position.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    // 
    //   For example, to execute once at 13:15:30 on June 6, 2022 in China/Shanghai time, use: `at(2022-06-06 13:15:30 Asia/Shanghai)`. To execute once at 13:15:30 on June 6, 2022 in the West 7th time zone, use: `at(2022-06-06 13:15:30 GMT-7:00)`.
    // 
    // - Clock-based scheduled execution (based on Cron expressions): Based on Cron expressions, the command is executed according to the scheduled task settings. Format: `<seconds> <minutes> <hours> <day of month> <month> <day of week> <year (optional)> <time zone>`, that is, `<Cron expression> <time zone>`. The scheduled task execution time is calculated based on the Cron expression in the specified time zone. If no time zone is specified, the default is the internal system time zone of the instance running the scheduled task. For more information about Cron expressions, see [Cron expressions](https://help.aliyun.com/document_detail/64769.html). The time zone supports the following three formats:
    //     - Full time zone name: such as `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - GMT offset from Greenwich Mean Time: such as `GMT+8:00` (East 8th time zone) or `GMT-7:00` (West 7th time zone). When using GMT format, leading zeros are not supported in the hour position.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    //   For example, to execute once every day at 10:15 AM in 2022 in China/Shanghai time, use `0 15 10 ? * * 2022 Asia/Shanghai`. To execute every half hour from 10:00 AM to 11:30 AM every day in 2022 in the East 8th time zone, use `0 0/30 10-11 * * ? 2022 GMT+8:00`. To execute every 5 minutes from 2:00 PM to 2:55 PM every day in October every two years starting from 2022 in UTC, use `0 0/5 14 * 10 ? 2022/2 UTC`.
    // 
    //     >The minimum time interval must be greater than or equal to the timeout period specified when the scheduled task was created, and must not be less than 10 seconds.
    shared_ptr<string> frequency_ {};
    // The instance ID of the ECS instance or managed instance to add to the task.
    shared_ptr<vector<string>> instanceId_ {};
    // The execution ID of the task to modify.
    // 
    // This parameter is required.
    shared_ptr<string> invokeId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key-value pairs of custom parameters to modify when the command contains custom parameters.
    // 
    // The number of custom parameters ranges from 0 to 10. Note the following items:
    // 
    // - Keys cannot be empty strings and can contain up to 64 characters.
    // - Values can be empty strings.
    // - If the command was saved when the task was created, the combined size of custom parameters and original command content after Base64 encoding cannot exceed 18 KB. If the command was not saved, the combined size cannot exceed 24 KB.
    // - The set of custom parameter names must be a subset of the parameter set defined when the command was created. For parameters that are not passed in, you can use empty strings as substitutes.
    // 
    // Default value: empty, which indicates that no custom parameter key-value pairs are modified.
    Darabonba::Json parameters_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
