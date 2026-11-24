// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class CreateFlowLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetSlsRegionId, targetSlsRegionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetSlsRegionId, targetSlsRegionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateFlowLogRequest() = default ;
    CreateFlowLogRequest(const CreateFlowLogRequest &) = default ;
    CreateFlowLogRequest(CreateFlowLogRequest &&) = default ;
    CreateFlowLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowLogRequest() = default ;
    CreateFlowLogRequest& operator=(const CreateFlowLogRequest &) = default ;
    CreateFlowLogRequest& operator=(CreateFlowLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource. If you specify this parameter, it cannot be an empty string. It can be up to 128 characters in length, and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value. Valid values of N: 1 to 20. If you specify this parameter, it can be an empty string. It can be up to 128 characters in length, and cannot start with acs:. It cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->flowLogName_ == nullptr && this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->interval_ == nullptr && this->logStoreName_ == nullptr && this->projectName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->samplingRate_ == nullptr && this->tag_ == nullptr && this->targetSlsRegionId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFlowLogRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowLogRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateFlowLogRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline CreateFlowLogRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string getFlowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline CreateFlowLogRequest& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFlowLogRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateFlowLogRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline CreateFlowLogRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateFlowLogRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFlowLogRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateFlowLogRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline string getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, "") };
    inline CreateFlowLogRequest& setSamplingRate(string samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFlowLogRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFlowLogRequest::Tag>) };
    inline vector<CreateFlowLogRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateFlowLogRequest::Tag>) };
    inline CreateFlowLogRequest& setTag(const vector<CreateFlowLogRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFlowLogRequest& setTag(vector<CreateFlowLogRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetSlsRegionId Field Functions 
    bool hasTargetSlsRegionId() const { return this->targetSlsRegionId_ != nullptr;};
    void deleteTargetSlsRegionId() { this->targetSlsRegionId_ = nullptr;};
    inline string getTargetSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetSlsRegionId_, "") };
    inline CreateFlowLogRequest& setTargetSlsRegionId(string targetSlsRegionId) { DARABONBA_PTR_SET_VALUE(targetSlsRegionId_, targetSlsRegionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateFlowLogRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value on your client to ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The description of the flow log.
    // > The description can be empty or 0 to 256 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether the request is only a dry run. Valid values:
    // 
    // - **true**: Performs a dry run without modifying EPS resources.
    // 
    // - **false** (default): Sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The name of the flow log.
    // > The name can be empty or 0 to 128 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> flowLogName_ {};
    // The instance ID of the VBR.
    // 
    // >The VBR instance must be created by calling the CreateVirtualBorderRouter operation of the Vpc/2016-04-28 API version. The prerequisite is that a physical connection exists.
    // >The VBR instance must be mounted as a child instance to the Express Connect Router (ECR) corresponding to EcrId by calling AttachExpressConnectRouterChildInstance, and the mount status must be ACTIVE before you can create a flow log. You can call DescribeExpressConnectRouterChildInstance to query the mount status of the child instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of the network instance. Valid values:
    // - **VBR**: virtual border router (VBR) instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The duration of the capture window for traffic captured by the flow log. Unit: seconds. Valid values:
    // 
    // - **60** 
    // - **600**
    // 
    // Default value: **600**.
    shared_ptr<int32_t> interval_ {};
    // The name of the Logstore used to store catch traffic.
    // - If you have already created a Logstore in the current region, you can enter the name of the existing Logstore.
    // - If you have not created a Logstore in the current region, you can specify a custom name for the Logstore, and the system will automatically create the Logstore. The naming rules for the Logstore name are as follows:
    // 
    // - The Logstore name must be unique within the same project.
    // - It can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    // - It must start and end with a lowercase letter or a digit.
    // - It must be 3 to 63 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> logStoreName_ {};
    // The name of the Simple Log Service project used to store catch traffic.
    // - If you have already created a project in the current region, you can enter the name of the existing project.
    // - If you have not created a project in the current region, you can specify a custom name for the project, and the system will automatically create the project.
    // 
    // 
    // The project name must be globally unique within an Alibaba Cloud region and cannot be modified after creation. The naming rules are as follows:
    //    
    // - The project name must be globally unique.
    // - It can contain only lowercase
    // - letters, digits, and hyphens (-).
    // - It must start and end with a lowercase letter or a digit.
    // - It must be 3 to 63 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The ID of the resource group to which the flow log instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The sampling ratio. Valid values:
    // 
    // - **1:4096**
    // - **1:2048**
    // - **1:1024**
    // 
    // Default value: **1:4096**.
    shared_ptr<string> samplingRate_ {};
    // The tags.
    // 
    // You can add up to 20 tags.
    shared_ptr<vector<CreateFlowLogRequest::Tag>> tag_ {};
    // The region where the project to which logs are delivered resides. You only need to specify this parameter for cross-region log delivery. You do not need to specify this parameter for same-region log delivery.
    shared_ptr<string> targetSlsRegionId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
