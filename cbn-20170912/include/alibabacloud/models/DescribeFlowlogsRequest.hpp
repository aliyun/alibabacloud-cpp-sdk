// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowlogsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeFlowlogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowlogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(FlowLogVersion, flowLogVersion_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowlogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(FlowLogVersion, flowLogVersion_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    DescribeFlowlogsRequest() = default ;
    DescribeFlowlogsRequest(const DescribeFlowlogsRequest &) = default ;
    DescribeFlowlogsRequest(DescribeFlowlogsRequest &&) = default ;
    DescribeFlowlogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowlogsRequest() = default ;
    DescribeFlowlogsRequest& operator=(const DescribeFlowlogsRequest &) = default ;
    DescribeFlowlogsRequest& operator=(DescribeFlowlogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->clientToken_ != nullptr && this->description_ != nullptr && this->flowLogId_ != nullptr && this->flowLogName_ != nullptr && this->flowLogVersion_ != nullptr
        && this->interval_ != nullptr && this->logStoreName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->projectName_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->status_ != nullptr && this->tag_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeFlowlogsRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeFlowlogsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFlowlogsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string flowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline DescribeFlowlogsRequest& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string flowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline DescribeFlowlogsRequest& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // flowLogVersion Field Functions 
    bool hasFlowLogVersion() const { return this->flowLogVersion_ != nullptr;};
    void deleteFlowLogVersion() { this->flowLogVersion_ = nullptr;};
    inline string flowLogVersion() const { DARABONBA_PTR_GET_DEFAULT(flowLogVersion_, "") };
    inline DescribeFlowlogsRequest& setFlowLogVersion(string flowLogVersion) { DARABONBA_PTR_SET_VALUE(flowLogVersion_, flowLogVersion) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeFlowlogsRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeFlowlogsRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeFlowlogsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeFlowlogsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFlowlogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFlowlogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeFlowlogsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFlowlogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeFlowlogsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeFlowlogsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFlowlogsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeFlowlogsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeFlowlogsRequestTag>) };
    inline vector<DescribeFlowlogsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeFlowlogsRequestTag>) };
    inline DescribeFlowlogsRequest& setTag(const vector<DescribeFlowlogsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeFlowlogsRequest& setTag(vector<DescribeFlowlogsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline DescribeFlowlogsRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeFlowlogsRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
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
    // The ID of the flow log.
    std::shared_ptr<string> flowLogId_ = nullptr;
    // The name of the flow log.
    // 
    // The name is optional. If you enter a name, it must be 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> flowLogName_ = nullptr;
    // The flow log version.
    // 
    // Flow logs are automatically created in the latest version, which is **3**.
    std::shared_ptr<string> flowLogVersion_ = nullptr;
    // The time window for collecting log data. Unit: seconds Valid values: **60** or **600** Default value: **600**.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The name of the Logstore where the flow log is stored.
    // 
    // The name must be 3 to 63 characters in length, and can contain lowercase letters, digits, underscores (_), and hyphens (-). It must start or end with a lowercase letter or a digit.
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Minimum value: **1**. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the project where the flow log is stored.
    // 
    // The name must be 3 to 63 characters in length, and can contain lowercase letters, digits, and hyphens (-). It must start or end with a lowercase letter or a digit.
    std::shared_ptr<string> projectName_ = nullptr;
    // The ID of the region where the flow log is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The status of the flow log. Valid values:
    // 
    // *   **Active**: The flow log is enabled.
    // *   **Inactive**: The flow log is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<DescribeFlowlogsRequestTag>> tag_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
