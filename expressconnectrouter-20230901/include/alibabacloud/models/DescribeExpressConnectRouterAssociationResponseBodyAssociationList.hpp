// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERASSOCIATIONRESPONSEBODYASSOCIATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERASSOCIATIONRESPONSEBODYASSOCIATIONLIST_HPP_
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
  class DescribeExpressConnectRouterAssociationResponseBodyAssociationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterAssociationResponseBodyAssociationList& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedPrefixes, allowedPrefixes_);
      DARABONBA_PTR_TO_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(AssociationNodeType, associationNodeType_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterAssociationResponseBodyAssociationList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedPrefixes, allowedPrefixes_);
      DARABONBA_PTR_FROM_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(AssociationNodeType, associationNodeType_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
    };
    DescribeExpressConnectRouterAssociationResponseBodyAssociationList() = default ;
    DescribeExpressConnectRouterAssociationResponseBodyAssociationList(const DescribeExpressConnectRouterAssociationResponseBodyAssociationList &) = default ;
    DescribeExpressConnectRouterAssociationResponseBodyAssociationList(DescribeExpressConnectRouterAssociationResponseBodyAssociationList &&) = default ;
    DescribeExpressConnectRouterAssociationResponseBodyAssociationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterAssociationResponseBodyAssociationList() = default ;
    DescribeExpressConnectRouterAssociationResponseBodyAssociationList& operator=(const DescribeExpressConnectRouterAssociationResponseBodyAssociationList &) = default ;
    DescribeExpressConnectRouterAssociationResponseBodyAssociationList& operator=(DescribeExpressConnectRouterAssociationResponseBodyAssociationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedPrefixes_ != nullptr
        && this->allowedPrefixesMode_ != nullptr && this->associationId_ != nullptr && this->associationNodeType_ != nullptr && this->cenId_ != nullptr && this->description_ != nullptr
        && this->ecrId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->status_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterOwnerId_ != nullptr && this->vpcId_ != nullptr && this->vpcOwnerId_ != nullptr; };
    // allowedPrefixes Field Functions 
    bool hasAllowedPrefixes() const { return this->allowedPrefixes_ != nullptr;};
    void deleteAllowedPrefixes() { this->allowedPrefixes_ = nullptr;};
    inline const vector<string> & allowedPrefixes() const { DARABONBA_PTR_GET_CONST(allowedPrefixes_, vector<string>) };
    inline vector<string> allowedPrefixes() { DARABONBA_PTR_GET(allowedPrefixes_, vector<string>) };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setAllowedPrefixes(const vector<string> & allowedPrefixes) { DARABONBA_PTR_SET_VALUE(allowedPrefixes_, allowedPrefixes) };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setAllowedPrefixes(vector<string> && allowedPrefixes) { DARABONBA_PTR_SET_RVALUE(allowedPrefixes_, allowedPrefixes) };


    // allowedPrefixesMode Field Functions 
    bool hasAllowedPrefixesMode() const { return this->allowedPrefixesMode_ != nullptr;};
    void deleteAllowedPrefixesMode() { this->allowedPrefixesMode_ = nullptr;};
    inline string allowedPrefixesMode() const { DARABONBA_PTR_GET_DEFAULT(allowedPrefixesMode_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setAllowedPrefixesMode(string allowedPrefixesMode) { DARABONBA_PTR_SET_VALUE(allowedPrefixesMode_, allowedPrefixesMode) };


    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string associationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // associationNodeType Field Functions 
    bool hasAssociationNodeType() const { return this->associationNodeType_ != nullptr;};
    void deleteAssociationNodeType() { this->associationNodeType_ = nullptr;};
    inline string associationNodeType() const { DARABONBA_PTR_GET_DEFAULT(associationNodeType_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setAssociationNodeType(string associationNodeType) { DARABONBA_PTR_SET_VALUE(associationNodeType_, associationNodeType) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterOwnerId Field Functions 
    bool hasTransitRouterOwnerId() const { return this->transitRouterOwnerId_ != nullptr;};
    void deleteTransitRouterOwnerId() { this->transitRouterOwnerId_ = nullptr;};
    inline int64_t transitRouterOwnerId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterOwnerId_, 0L) };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setTransitRouterOwnerId(int64_t transitRouterOwnerId) { DARABONBA_PTR_SET_VALUE(transitRouterOwnerId_, transitRouterOwnerId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline DescribeExpressConnectRouterAssociationResponseBodyAssociationList& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


  protected:
    // The allowed route prefixes.
    std::shared_ptr<vector<string>> allowedPrefixes_ = nullptr;
    // The prefix route mode. Valid values:
    // 
    // *   MatchMode
    // *   IncrementalMode
    std::shared_ptr<string> allowedPrefixesMode_ = nullptr;
    // The ID of the association between the ECR and the VPC or TR.
    std::shared_ptr<string> associationId_ = nullptr;
    // The type of the associated resource. Valid values:
    // 
    // *   **VPC**
    // *   **TR**
    std::shared_ptr<string> associationNodeType_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The description of the associated resource.
    std::shared_ptr<string> description_ = nullptr;
    // The ECR ID.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The time when the association was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the association was modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the resource.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> regionId_ = nullptr;
    // The deployment state of the associated resource. Valid values:
    // 
    // *   **CREATING**: The resource is being created.
    // *   **ACTIVE**: The resource is created.
    // *   **INACTIVE**: The TR is pending to be associated with the ECR.
    // *   **ASSOCIATING**: The resource is being associated.
    // *   **DISSOCIATING**: The resource is being disassociated.
    // *   **UPDATING**: The resource is being modified.
    // *   **DELETING**: The resource is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The TR ID.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the TR.
    std::shared_ptr<int64_t> transitRouterOwnerId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> vpcOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
