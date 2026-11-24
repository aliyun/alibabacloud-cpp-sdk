// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSREQUEST_HPP_
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
  class DescribeFlowLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeFlowLogsRequest() = default ;
    DescribeFlowLogsRequest(const DescribeFlowLogsRequest &) = default ;
    DescribeFlowLogsRequest(DescribeFlowLogsRequest &&) = default ;
    DescribeFlowLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsRequest() = default ;
    DescribeFlowLogsRequest& operator=(const DescribeFlowLogsRequest &) = default ;
    DescribeFlowLogsRequest& operator=(DescribeFlowLogsRequest &&) = default ;
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
      // The tag key of the resource. If you specify this parameter, it cannot be an empty string. The tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. Valid values of N: 1 to 20. If you specify this parameter, it can be an empty string. The tag value can be up to 128 characters in length. It cannot start with `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->flowLogId_ == nullptr && this->flowLogName_ == nullptr && this->instanceId_ == nullptr
        && this->logStoreName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->projectName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tag_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeFlowLogsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeFlowLogsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeFlowLogsRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string getFlowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline DescribeFlowLogsRequest& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string getFlowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline DescribeFlowLogsRequest& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeFlowLogsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeFlowLogsRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFlowLogsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFlowLogsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeFlowLogsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeFlowLogsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeFlowLogsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeFlowLogsRequest::Tag>) };
    inline vector<DescribeFlowLogsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeFlowLogsRequest::Tag>) };
    inline DescribeFlowLogsRequest& setTag(const vector<DescribeFlowLogsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeFlowLogsRequest& setTag(vector<DescribeFlowLogsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeFlowLogsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value on your client to ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only perform a dry run for this request. Valid values:
    // 
    // - **true**: send a check request and do not modify service resources.
    // 
    // - **false** (default): send a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The instance ID of the flow log instance.
    shared_ptr<string> flowLogId_ {};
    // The name of the flow log. The name must be 0 to 128 characters in length.
    shared_ptr<string> flowLogName_ {};
    // The instance ID of the VBR instance loaded on the Express Connect Router (ECR).
    shared_ptr<string> instanceId_ {};
    // The Simple Log Service Logstore used to capture traffic.
    // - If you have created a Logstore in the current region, you can enter the name of the existing Logstore.
    // - If you have not created a Logstore in the current region, you can specify a custom name for the Logstore, and the system automatically creates the Logstore. The naming rules are as follows:
    // 
    // - The Logstore name must be unique within the same project.
    // - It can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    // - It must start and end with a lowercase letter or a digit.
    // - It must be 3 to 63 characters in length.
    shared_ptr<string> logStoreName_ {};
    // The maximum number of entries to return. Valid values: 1 to 2147483647. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If NextToken is empty, no next query is available.
    // - If NextToken has a return value, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The Simple Log Service project used to capture traffic.
    // - If you have created a project in the current region, you can enter the name of the existing project.
    // - If you have not created a project in the current region, you can specify a custom name for the project, and the system automatically creates the project.
    // 
    // 
    // The project name must be globally unique within an Alibaba Cloud region and cannot be modified after creation. The naming rules are as follows:
    //    
    // - The project name must be globally unique.
    // - It can contain only lowercase
    // - letters, digits, and hyphens (-).
    // - It must start and end with a lowercase letter or a digit.
    // - It must be 3 to 63 characters in length.
    shared_ptr<string> projectName_ {};
    // The ID of the resource group to which the flow log instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    // 
    // You can add up to 20 tags.
    shared_ptr<vector<DescribeFlowLogsRequest::Tag>> tag_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
