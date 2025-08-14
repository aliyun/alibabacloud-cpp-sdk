// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFlowlogRequestTag.hpp>
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
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->clientToken_ != nullptr && this->description_ != nullptr && this->flowLogName_ != nullptr && this->interval_ != nullptr && this->logFormatString_ != nullptr
        && this->logStoreName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->projectName_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateFlowlogRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFlowlogRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowlogRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string flowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline CreateFlowlogRequest& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline CreateFlowlogRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logFormatString Field Functions 
    bool hasLogFormatString() const { return this->logFormatString_ != nullptr;};
    void deleteLogFormatString() { this->logFormatString_ = nullptr;};
    inline string logFormatString() const { DARABONBA_PTR_GET_DEFAULT(logFormatString_, "") };
    inline CreateFlowlogRequest& setLogFormatString(string logFormatString) { DARABONBA_PTR_SET_VALUE(logFormatString_, logFormatString) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateFlowlogRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateFlowlogRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateFlowlogRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFlowlogRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFlowlogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateFlowlogRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateFlowlogRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFlowlogRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFlowlogRequestTag>) };
    inline vector<CreateFlowlogRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateFlowlogRequestTag>) };
    inline CreateFlowlogRequest& setTag(const vector<CreateFlowlogRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFlowlogRequest& setTag(vector<CreateFlowlogRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline CreateFlowlogRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateFlowlogRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, ClientToken is set to the value of RequestId. The value of RequestId for each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the flow log.
    // 
    // The description is optional. If you enter a description, it must be 1 to 256 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The flow log name.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> flowLogName_ = nullptr;
    // The time window for collecting log data. Unit: seconds. Valid values: **60** and **600**. Default value: **600**.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The strings that define the fields in the flow log.
    // 
    // Format: `${Field 1}${Field 2}${Field 3}...{Field n}`
    // 
    // *   If you do not configure this parameter, all fields are included in the flow log.
    // *   If you configure this parameter, start the string with `${srcaddr}${dstaddr}${bytes}` because `${srcaddr}${dstaddr}${bytes}` are required variables. For more information about the fields supported by flow logs, see [Configure a flow log](https://help.aliyun.com/document_detail/339822.html).
    std::shared_ptr<string> logFormatString_ = nullptr;
    // The Logstore that stores the captured traffic data.
    // 
    // *   If a Logstore is already created in the selected region, enter the name of the Logstore.
    // 
    // *   If no Logstores are created in the selected region, enter a name and the system automatically creates a Logstore. The name of the Logstore. The name must meet the following requirements:
    // 
    //     *   The name must be unique in a project.
    //     *   The name can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    //     *   The name must start and end with a lowercase letter or a digit.
    //     *   The name must be 3 to 63 characters in length,
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The project that stores the captured traffic data.
    // 
    // *   If a project is already created in the selected region, enter the name of the project.
    // 
    // *   If no projects are created in the selected region, enter a name and the system automatically creates a project.
    // 
    //     The project name must be unique in a region. You cannot change the name after the project is created. The name must meet the following requirements:
    // 
    //     *   The name must be globally unique.
    //     *   The name can contain only lowercase letters, digits, and hyphens (-).
    //     *   The name must start and end with a lowercase letter or a digit.
    //     *   The name must be 3 to 63 characters in length,
    std::shared_ptr<string> projectName_ = nullptr;
    // The ID of the region where the flow log is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    // 
    // You can specify at most 20 tags.
    std::shared_ptr<vector<CreateFlowlogRequestTag>> tag_ = nullptr;
    // The ID of the VPC connection, VPN connection, VBR connection, ECR connection, or inter-region connection.
    // 
    // If you create the flow log for a transfer router, skip this parameter.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
