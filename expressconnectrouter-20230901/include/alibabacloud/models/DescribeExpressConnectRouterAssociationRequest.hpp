// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERASSOCIATIONREQUEST_HPP_
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
  class DescribeExpressConnectRouterAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(AssociationNodeType, associationNodeType_);
      DARABONBA_PTR_TO_JSON(AssociationRegionId, associationRegionId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(AssociationNodeType, associationNodeType_);
      DARABONBA_PTR_FROM_JSON(AssociationRegionId, associationRegionId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeExpressConnectRouterAssociationRequest() = default ;
    DescribeExpressConnectRouterAssociationRequest(const DescribeExpressConnectRouterAssociationRequest &) = default ;
    DescribeExpressConnectRouterAssociationRequest(DescribeExpressConnectRouterAssociationRequest &&) = default ;
    DescribeExpressConnectRouterAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterAssociationRequest() = default ;
    DescribeExpressConnectRouterAssociationRequest& operator=(const DescribeExpressConnectRouterAssociationRequest &) = default ;
    DescribeExpressConnectRouterAssociationRequest& operator=(DescribeExpressConnectRouterAssociationRequest &&) = default ;
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
      // The tag key of the resource. The tag key cannot be an empty string. It can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. The tag value can be an empty string. It can be up to 128 characters in length, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->associationId_ == nullptr
        && this->associationNodeType_ == nullptr && this->associationRegionId_ == nullptr && this->cenId_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr
        && this->ecrId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->tag_ == nullptr && this->transitRouterId_ == nullptr
        && this->version_ == nullptr && this->vpcId_ == nullptr; };
    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // associationNodeType Field Functions 
    bool hasAssociationNodeType() const { return this->associationNodeType_ != nullptr;};
    void deleteAssociationNodeType() { this->associationNodeType_ = nullptr;};
    inline string getAssociationNodeType() const { DARABONBA_PTR_GET_DEFAULT(associationNodeType_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setAssociationNodeType(string associationNodeType) { DARABONBA_PTR_SET_VALUE(associationNodeType_, associationNodeType) };


    // associationRegionId Field Functions 
    bool hasAssociationRegionId() const { return this->associationRegionId_ != nullptr;};
    void deleteAssociationRegionId() { this->associationRegionId_ = nullptr;};
    inline string getAssociationRegionId() const { DARABONBA_PTR_GET_DEFAULT(associationRegionId_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setAssociationRegionId(string associationRegionId) { DARABONBA_PTR_SET_VALUE(associationRegionId_, associationRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeExpressConnectRouterAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectRouterAssociationRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeExpressConnectRouterAssociationRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeExpressConnectRouterAssociationRequest::Tag>) };
    inline vector<DescribeExpressConnectRouterAssociationRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeExpressConnectRouterAssociationRequest::Tag>) };
    inline DescribeExpressConnectRouterAssociationRequest& setTag(const vector<DescribeExpressConnectRouterAssociationRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeExpressConnectRouterAssociationRequest& setTag(vector<DescribeExpressConnectRouterAssociationRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeExpressConnectRouterAssociationRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID used to associate the Express Connect Router (ECR) with a VPC or TR.
    shared_ptr<string> associationId_ {};
    // The type of the associated resource. Valid values:
    // 
    // - **VPC**: VPC.
    // 
    // - **TR**: transit router.
    shared_ptr<string> associationNodeType_ {};
    // The region where the VPC or TR resides.
    shared_ptr<string> associationRegionId_ {};
    // The ID of the Cloud Enterprise Network (CEN) instance.
    shared_ptr<string> cenId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client. Make sure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether this is a dry run. Valid values:
    // - **true**: sends a check request and does not modify service resources.
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // > You can call the CreateExpressConnectRouter API operation to create an ECR instance and obtain the EcrId.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The maximum number of entries to return. Valid values: 1 to 2147483647. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // - If this is the first query or no next query is required, leave this parameter empty.
    // - If a next query is required, set the value to the NextToken value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // The list of tags.
    // 
    // You can add up to 20 tags.
    shared_ptr<vector<DescribeExpressConnectRouterAssociationRequest::Tag>> tag_ {};
    // The ID of the transit router.
    shared_ptr<string> transitRouterId_ {};
    shared_ptr<string> version_ {};
    // The ID of the VPC-connected instance.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
