// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateFlowlogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowlogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LogFormatString, logFormatString_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowlogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LogFormatString, logFormatString_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateFlowlogRequest() = default ;
    CreateFlowlogRequest(const CreateFlowlogRequest &) = default ;
    CreateFlowlogRequest(CreateFlowlogRequest &&) = default ;
    CreateFlowlogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowlogRequest() = default ;
    CreateFlowlogRequest& operator=(const CreateFlowlogRequest &) = default ;
    CreateFlowlogRequest& operator=(CreateFlowlogRequest &&) = default ;
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
      // The tag key.
      // 
      // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https:// `.
      // 
      // You can specify up to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be an empty string or a string of up to 128 characters. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https:// `.
      // 
      // Each tag key must have a unique tag value. You can specify up to 20 tag values.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->flowLogName_ == nullptr && this->interval_ == nullptr && this->logFormatString_ == nullptr
        && this->logStoreName_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->projectName_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->transitRouterAttachmentId_ == nullptr && this->transitRouterId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateFlowlogRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFlowlogRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowlogRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string getFlowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline CreateFlowlogRequest& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline CreateFlowlogRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logFormatString Field Functions 
    bool hasLogFormatString() const { return this->logFormatString_ != nullptr;};
    void deleteLogFormatString() { this->logFormatString_ = nullptr;};
    inline string getLogFormatString() const { DARABONBA_PTR_GET_DEFAULT(logFormatString_, "") };
    inline CreateFlowlogRequest& setLogFormatString(string logFormatString) { DARABONBA_PTR_SET_VALUE(logFormatString_, logFormatString) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateFlowlogRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateFlowlogRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateFlowlogRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFlowlogRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFlowlogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateFlowlogRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateFlowlogRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFlowlogRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFlowlogRequest::Tag>) };
    inline vector<CreateFlowlogRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateFlowlogRequest::Tag>) };
    inline CreateFlowlogRequest& setTag(const vector<CreateFlowlogRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFlowlogRequest& setTag(vector<CreateFlowlogRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline CreateFlowlogRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateFlowlogRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    shared_ptr<string> cenId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a value for this parameter from your client. Make sure that the value is unique for each request. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the flow log.
    // 
    // The description can be empty or 1 to 256 characters in length. It cannot start with \\`http\\://\\` or \\`https\\://\\`.
    shared_ptr<string> description_ {};
    // The name of the flow log.
    // 
    // The name can be empty or 1 to 128 characters in length. It cannot start with \\`http\\://\\` or \\`https\\://\\`.
    shared_ptr<string> flowLogName_ {};
    // The aggregation interval for the flow log. Unit: seconds. Valid values: **60** and **600**. Default value: **600**.
    shared_ptr<int64_t> interval_ {};
    // A custom string of log fields for the flow log.
    // 
    // The format is defined as:
    // `${field 1}${field 2}${field 3}...${field n}`
    // 
    // - If you do not specify this parameter, all default fields are logged.
    // 
    // - If you specify this parameter, you must start the string with `${srcaddr}${dstaddr}${bytes}` because these are required parameters. For more information about all supported log fields, see [Configure a flow log](https://help.aliyun.com/document_detail/339822.html).
    shared_ptr<string> logFormatString_ {};
    // The Logstore that is used to store the captured traffic.
    // 
    // - If you have already created a Logstore in the current region, enter the name of the Logstore.
    // 
    // - If you have not created a Logstore in the current region, you can specify a custom name for the Logstore. The system automatically creates the Logstore.
    //   The name of the Logstore must meet the following requirements:
    // 
    //   - The name must be unique within the same project.
    // 
    //   - It can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    //   - It must start and end with a lowercase letter or a digit.
    // 
    //   - It must be 3 to 63 characters in length.
    shared_ptr<string> logStoreName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The project that is used to store the captured traffic.
    // 
    // - If you have already created a project in the current region, enter the name of the project.
    // 
    // - If you have not created a project in the current region, you can specify a custom name for the project. The system automatically creates the project.
    // 
    //   A project name must be globally unique within an Alibaba Cloud region and cannot be modified after the project is created. The name must meet the following requirements:
    // 
    //   - The name must be globally unique.
    // 
    //   - It can contain only lowercase letters, digits, and hyphens (-).
    // 
    //   - It must start and end with a lowercase letter or a digit.
    // 
    //   - It must be 3 to 63 characters in length.
    shared_ptr<string> projectName_ {};
    // The region ID of the flow log.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag.
    // 
    // You can add up to 20 tags in each call.
    shared_ptr<vector<CreateFlowlogRequest::Tag>> tag_ {};
    // The ID of the VPC connection, VPN connection, VBR connection, ECR connection, or inter-region connection.
    // 
    // If you want to configure a flow log for a transit router instance, do not specify this parameter.
    shared_ptr<string> transitRouterAttachmentId_ {};
    // The ID of the transit router instance.
    shared_ptr<string> transitRouterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
