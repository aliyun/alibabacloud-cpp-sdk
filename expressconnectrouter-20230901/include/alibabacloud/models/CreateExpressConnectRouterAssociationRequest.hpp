// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTROUTERASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTROUTERASSOCIATIONREQUEST_HPP_
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
  class CreateExpressConnectRouterAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressConnectRouterAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedPrefixes, allowedPrefixes_);
      DARABONBA_PTR_TO_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
      DARABONBA_PTR_TO_JSON(AssociationRegionId, associationRegionId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateAttachment, createAttachment_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressConnectRouterAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedPrefixes, allowedPrefixes_);
      DARABONBA_PTR_FROM_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
      DARABONBA_PTR_FROM_JSON(AssociationRegionId, associationRegionId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateAttachment, createAttachment_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
    };
    CreateExpressConnectRouterAssociationRequest() = default ;
    CreateExpressConnectRouterAssociationRequest(const CreateExpressConnectRouterAssociationRequest &) = default ;
    CreateExpressConnectRouterAssociationRequest(CreateExpressConnectRouterAssociationRequest &&) = default ;
    CreateExpressConnectRouterAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressConnectRouterAssociationRequest() = default ;
    CreateExpressConnectRouterAssociationRequest& operator=(const CreateExpressConnectRouterAssociationRequest &) = default ;
    CreateExpressConnectRouterAssociationRequest& operator=(CreateExpressConnectRouterAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedPrefixes_ != nullptr
        && this->allowedPrefixesMode_ != nullptr && this->associationRegionId_ != nullptr && this->cenId_ != nullptr && this->clientToken_ != nullptr && this->createAttachment_ != nullptr
        && this->description_ != nullptr && this->dryRun_ != nullptr && this->ecrId_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterOwnerId_ != nullptr
        && this->vpcId_ != nullptr && this->vpcOwnerId_ != nullptr; };
    // allowedPrefixes Field Functions 
    bool hasAllowedPrefixes() const { return this->allowedPrefixes_ != nullptr;};
    void deleteAllowedPrefixes() { this->allowedPrefixes_ = nullptr;};
    inline const vector<string> & allowedPrefixes() const { DARABONBA_PTR_GET_CONST(allowedPrefixes_, vector<string>) };
    inline vector<string> allowedPrefixes() { DARABONBA_PTR_GET(allowedPrefixes_, vector<string>) };
    inline CreateExpressConnectRouterAssociationRequest& setAllowedPrefixes(const vector<string> & allowedPrefixes) { DARABONBA_PTR_SET_VALUE(allowedPrefixes_, allowedPrefixes) };
    inline CreateExpressConnectRouterAssociationRequest& setAllowedPrefixes(vector<string> && allowedPrefixes) { DARABONBA_PTR_SET_RVALUE(allowedPrefixes_, allowedPrefixes) };


    // allowedPrefixesMode Field Functions 
    bool hasAllowedPrefixesMode() const { return this->allowedPrefixesMode_ != nullptr;};
    void deleteAllowedPrefixesMode() { this->allowedPrefixesMode_ = nullptr;};
    inline string allowedPrefixesMode() const { DARABONBA_PTR_GET_DEFAULT(allowedPrefixesMode_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setAllowedPrefixesMode(string allowedPrefixesMode) { DARABONBA_PTR_SET_VALUE(allowedPrefixesMode_, allowedPrefixesMode) };


    // associationRegionId Field Functions 
    bool hasAssociationRegionId() const { return this->associationRegionId_ != nullptr;};
    void deleteAssociationRegionId() { this->associationRegionId_ = nullptr;};
    inline string associationRegionId() const { DARABONBA_PTR_GET_DEFAULT(associationRegionId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setAssociationRegionId(string associationRegionId) { DARABONBA_PTR_SET_VALUE(associationRegionId_, associationRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createAttachment Field Functions 
    bool hasCreateAttachment() const { return this->createAttachment_ != nullptr;};
    void deleteCreateAttachment() { this->createAttachment_ = nullptr;};
    inline bool createAttachment() const { DARABONBA_PTR_GET_DEFAULT(createAttachment_, false) };
    inline CreateExpressConnectRouterAssociationRequest& setCreateAttachment(bool createAttachment) { DARABONBA_PTR_SET_VALUE(createAttachment_, createAttachment) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateExpressConnectRouterAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterOwnerId Field Functions 
    bool hasTransitRouterOwnerId() const { return this->transitRouterOwnerId_ != nullptr;};
    void deleteTransitRouterOwnerId() { this->transitRouterOwnerId_ = nullptr;};
    inline int64_t transitRouterOwnerId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterOwnerId_, 0L) };
    inline CreateExpressConnectRouterAssociationRequest& setTransitRouterOwnerId(int64_t transitRouterOwnerId) { DARABONBA_PTR_SET_VALUE(transitRouterOwnerId_, transitRouterOwnerId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline CreateExpressConnectRouterAssociationRequest& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


  protected:
    // The allowed route prefixes.
    std::shared_ptr<vector<string>> allowedPrefixes_ = nullptr;
    // The route prefix mode. Valid values:
    // 
    // - **MatchMode**: After you distribute new route CIDR blocks to data centers, original specific routes that are distributed are withdrawn.
    // 
    // - **IncrementalMode**: After you distribute new route CIDR blocks to data centers, the original specific routes that fall in the CIDR blocks that you configure are withdrawn, and the original specific routes that do not fall in the CIDR blocks are still distributed.
    std::shared_ptr<string> allowedPrefixesMode_ = nullptr;
    // The region ID of the resource to be associated.
    // 
    // This parameter is required.
    std::shared_ptr<string> associationRegionId_ = nullptr;
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to initiate an association on the TR when the ECR is associated with the TR. Valid values:
    // 
    // *   **true**: You do not need to initiate an association on the TR.
    // *   **false**: You need to initiate an association on the TR.
    std::shared_ptr<bool> createAttachment_ = nullptr;
    // The information about the associated resource. It must be 0 to 128 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ECR ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The TR ID.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the TR. Default value: ID of the Alibaba Cloud account that logs in.
    // 
    // >  If you want to connect to a network instance that belongs to a different account, this parameter is required.
    std::shared_ptr<int64_t> transitRouterOwnerId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the VPC. Default value: ID of the Alibaba Cloud account that logs in.
    // 
    // >  If you want to connect to a network instance that belongs to a different account, this parameter is required.
    std::shared_ptr<int64_t> vpcOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
