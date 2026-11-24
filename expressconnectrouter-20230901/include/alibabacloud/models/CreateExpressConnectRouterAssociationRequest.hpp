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
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
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
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
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
      // The tag value of the resource. The tag value can be an empty string and can be up to 128 characters in length. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->allowedPrefixes_ == nullptr
        && this->allowedPrefixesMode_ == nullptr && this->associationRegionId_ == nullptr && this->cenId_ == nullptr && this->clientToken_ == nullptr && this->createAttachment_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->tag_ == nullptr && this->transitRouterId_ == nullptr
        && this->transitRouterOwnerId_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr && this->vpcOwnerId_ == nullptr; };
    // allowedPrefixes Field Functions 
    bool hasAllowedPrefixes() const { return this->allowedPrefixes_ != nullptr;};
    void deleteAllowedPrefixes() { this->allowedPrefixes_ = nullptr;};
    inline const vector<string> & getAllowedPrefixes() const { DARABONBA_PTR_GET_CONST(allowedPrefixes_, vector<string>) };
    inline vector<string> getAllowedPrefixes() { DARABONBA_PTR_GET(allowedPrefixes_, vector<string>) };
    inline CreateExpressConnectRouterAssociationRequest& setAllowedPrefixes(const vector<string> & allowedPrefixes) { DARABONBA_PTR_SET_VALUE(allowedPrefixes_, allowedPrefixes) };
    inline CreateExpressConnectRouterAssociationRequest& setAllowedPrefixes(vector<string> && allowedPrefixes) { DARABONBA_PTR_SET_RVALUE(allowedPrefixes_, allowedPrefixes) };


    // allowedPrefixesMode Field Functions 
    bool hasAllowedPrefixesMode() const { return this->allowedPrefixesMode_ != nullptr;};
    void deleteAllowedPrefixesMode() { this->allowedPrefixesMode_ = nullptr;};
    inline string getAllowedPrefixesMode() const { DARABONBA_PTR_GET_DEFAULT(allowedPrefixesMode_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setAllowedPrefixesMode(string allowedPrefixesMode) { DARABONBA_PTR_SET_VALUE(allowedPrefixesMode_, allowedPrefixesMode) };


    // associationRegionId Field Functions 
    bool hasAssociationRegionId() const { return this->associationRegionId_ != nullptr;};
    void deleteAssociationRegionId() { this->associationRegionId_ = nullptr;};
    inline string getAssociationRegionId() const { DARABONBA_PTR_GET_DEFAULT(associationRegionId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setAssociationRegionId(string associationRegionId) { DARABONBA_PTR_SET_VALUE(associationRegionId_, associationRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createAttachment Field Functions 
    bool hasCreateAttachment() const { return this->createAttachment_ != nullptr;};
    void deleteCreateAttachment() { this->createAttachment_ = nullptr;};
    inline bool getCreateAttachment() const { DARABONBA_PTR_GET_DEFAULT(createAttachment_, false) };
    inline CreateExpressConnectRouterAssociationRequest& setCreateAttachment(bool createAttachment) { DARABONBA_PTR_SET_VALUE(createAttachment_, createAttachment) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateExpressConnectRouterAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateExpressConnectRouterAssociationRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateExpressConnectRouterAssociationRequest::Tag>) };
    inline vector<CreateExpressConnectRouterAssociationRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateExpressConnectRouterAssociationRequest::Tag>) };
    inline CreateExpressConnectRouterAssociationRequest& setTag(const vector<CreateExpressConnectRouterAssociationRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateExpressConnectRouterAssociationRequest& setTag(vector<CreateExpressConnectRouterAssociationRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterOwnerId Field Functions 
    bool hasTransitRouterOwnerId() const { return this->transitRouterOwnerId_ != nullptr;};
    void deleteTransitRouterOwnerId() { this->transitRouterOwnerId_ = nullptr;};
    inline int64_t getTransitRouterOwnerId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterOwnerId_, 0L) };
    inline CreateExpressConnectRouterAssociationRequest& setTransitRouterOwnerId(int64_t transitRouterOwnerId) { DARABONBA_PTR_SET_VALUE(transitRouterOwnerId_, transitRouterOwnerId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateExpressConnectRouterAssociationRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline CreateExpressConnectRouterAssociationRequest& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


  protected:
    // The list of allowed route prefixes.
    shared_ptr<vector<string>> allowedPrefixes_ {};
    // The route prefix mode. Valid values:
    // - MatchMode: match mode. Only the configured route CIDR blocks are advertised to the data center, and the previously advertised specific routes are withdrawn.
    // - IncrementalMode: incremental mode. The configured route CIDR blocks are advertised to the data center. The previously advertised specific routes that fall within the configured route CIDR blocks are withdrawn, and the specific routes that do not fall within the configured CIDR blocks remain advertised.
    shared_ptr<string> allowedPrefixesMode_ {};
    // The region where the associated resource resides.
    // 
    // This parameter is required.
    shared_ptr<string> associationRegionId_ {};
    // The ID of the Cloud Enterprise Network (CEN) instance.
    // > If you specify TransitRouterId, CenId is required. You must first call the CreateCen operation of the Cbn (2017-09-12) service to create a CEN instance and obtain the CEN instance ID.
    shared_ptr<string> cenId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value from your client to ensure that the value is unique among different requests. The client token only supports ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to initiate an association when the Express Connect Router is associated with the transit router. Valid values:
    // 
    // - **true**: No association is initiated on the transit router side.
    // - **false**: An association is initiated on the transit router side.
    shared_ptr<bool> createAttachment_ {};
    // The description of the associated resource. The description must be 0 to 128 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether to only perform a dry run for this request. Valid values:
    // 
    // - **true**: The system sends a check request without modifying service resources.
    // 
    // - **false** (default): The system sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The list of tags.
    // 
    // You can add up to 20 tags.
    shared_ptr<vector<CreateExpressConnectRouterAssociationRequest::Tag>> tag_ {};
    // The ID of the transit router.
    // > The TransitRouterId and VpcId parameters are mutually exclusive. You must specify one of them. You must first call the CreateTransitRouter operation of the Cbn (2017-09-12) service to create a transit router and obtain the transit router ID.
    shared_ptr<string> transitRouterId_ {};
    // The ID of the Alibaba Cloud account to which the transit router instance belongs. The transit router is used to forward routing traffic. Default value: the current logon Alibaba Cloud account ID.
    // 
    // > If you want to load a network instance across accounts, this parameter is required.
    shared_ptr<int64_t> transitRouterOwnerId_ {};
    shared_ptr<string> version_ {};
    // The instance ID of the VPC-connected instance.
    // > The VpcId and TransitRouterId parameters are mutually exclusive. You must specify one of them.
    // > You must first call the CreateVpc operation of the Vpc (2016-04-28) service to create a VPC and obtain the VPC ID.
    shared_ptr<string> vpcId_ {};
    // The Alibaba Cloud account ID to which the VPC-connected instance belongs. Default value: the current logon Alibaba Cloud account ID.
    // 
    // > If you want to load a network instance across accounts, this parameter is required.
    shared_ptr<int64_t> vpcOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
