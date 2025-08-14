// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERECRATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERECRATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTransitRouterEcrAttachmentRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterEcrAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterEcrAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterEcrAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateTransitRouterEcrAttachmentRequest() = default ;
    CreateTransitRouterEcrAttachmentRequest(const CreateTransitRouterEcrAttachmentRequest &) = default ;
    CreateTransitRouterEcrAttachmentRequest(CreateTransitRouterEcrAttachmentRequest &&) = default ;
    CreateTransitRouterEcrAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterEcrAttachmentRequest() = default ;
    CreateTransitRouterEcrAttachmentRequest& operator=(const CreateTransitRouterEcrAttachmentRequest &) = default ;
    CreateTransitRouterEcrAttachmentRequest& operator=(CreateTransitRouterEcrAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ecrId_ != nullptr && this->ecrOwnerId_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr
        && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterEcrAttachmentRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // ecrOwnerId Field Functions 
    bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
    void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
    inline int64_t ecrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, 0L) };
    inline CreateTransitRouterEcrAttachmentRequest& setEcrOwnerId(int64_t ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterEcrAttachmentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterEcrAttachmentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterEcrAttachmentRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterEcrAttachmentRequestTag>) };
    inline vector<CreateTransitRouterEcrAttachmentRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterEcrAttachmentRequestTag>) };
    inline CreateTransitRouterEcrAttachmentRequest& setTag(const vector<CreateTransitRouterEcrAttachmentRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterEcrAttachmentRequest& setTag(vector<CreateTransitRouterEcrAttachmentRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterEcrAttachmentRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the ECR.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the ECR belongs. By default, the ID of the current Alibaba Cloud account is specified.
    // 
    // >  If you want to connect to a network instance that belongs to a different account, this parameter is required.
    std::shared_ptr<int64_t> ecrOwnerId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the transit router.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<CreateTransitRouterEcrAttachmentRequestTag>> tag_ = nullptr;
    // The description of the ECR connection.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The name of the ECR connection.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
