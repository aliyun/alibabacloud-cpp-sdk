// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENROUTEMAPREQUEST_HPP_
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
  class CreateCenRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsPathMatchMode, asPathMatchMode_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenRegionId, cenRegionId_);
      DARABONBA_PTR_TO_JSON(CidrMatchMode, cidrMatchMode_);
      DARABONBA_PTR_TO_JSON(CommunityMatchMode, communityMatchMode_);
      DARABONBA_PTR_TO_JSON(CommunityOperateMode, communityOperateMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationChildInstanceTypes, destinationChildInstanceTypes_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlocks, destinationCidrBlocks_);
      DARABONBA_PTR_TO_JSON(DestinationInstanceIds, destinationInstanceIds_);
      DARABONBA_PTR_TO_JSON(DestinationInstanceIdsReverseMatch, destinationInstanceIdsReverseMatch_);
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_TO_JSON(DestinationRouteTableIds, destinationRouteTableIds_);
      DARABONBA_PTR_TO_JSON(MapResult, mapResult_);
      DARABONBA_PTR_TO_JSON(MatchAddressType, matchAddressType_);
      DARABONBA_PTR_TO_JSON(MatchAsns, matchAsns_);
      DARABONBA_PTR_TO_JSON(MatchCommunitySet, matchCommunitySet_);
      DARABONBA_PTR_TO_JSON(NextPriority, nextPriority_);
      DARABONBA_PTR_TO_JSON(OperateCommunitySet, operateCommunitySet_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Preference, preference_);
      DARABONBA_PTR_TO_JSON(PrependAsPath, prependAsPath_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTypes, routeTypes_);
      DARABONBA_PTR_TO_JSON(SourceChildInstanceTypes, sourceChildInstanceTypes_);
      DARABONBA_PTR_TO_JSON(SourceInstanceIds, sourceInstanceIds_);
      DARABONBA_PTR_TO_JSON(SourceInstanceIdsReverseMatch, sourceInstanceIdsReverseMatch_);
      DARABONBA_PTR_TO_JSON(SourceRegionIds, sourceRegionIds_);
      DARABONBA_PTR_TO_JSON(SourceRouteTableIds, sourceRouteTableIds_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_TO_JSON(TransmitDirection, transmitDirection_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPathMatchMode, asPathMatchMode_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenRegionId, cenRegionId_);
      DARABONBA_PTR_FROM_JSON(CidrMatchMode, cidrMatchMode_);
      DARABONBA_PTR_FROM_JSON(CommunityMatchMode, communityMatchMode_);
      DARABONBA_PTR_FROM_JSON(CommunityOperateMode, communityOperateMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationChildInstanceTypes, destinationChildInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlocks, destinationCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(DestinationInstanceIds, destinationInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DestinationInstanceIdsReverseMatch, destinationInstanceIdsReverseMatch_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_FROM_JSON(DestinationRouteTableIds, destinationRouteTableIds_);
      DARABONBA_PTR_FROM_JSON(MapResult, mapResult_);
      DARABONBA_PTR_FROM_JSON(MatchAddressType, matchAddressType_);
      DARABONBA_PTR_FROM_JSON(MatchAsns, matchAsns_);
      DARABONBA_PTR_FROM_JSON(MatchCommunitySet, matchCommunitySet_);
      DARABONBA_PTR_FROM_JSON(NextPriority, nextPriority_);
      DARABONBA_PTR_FROM_JSON(OperateCommunitySet, operateCommunitySet_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Preference, preference_);
      DARABONBA_PTR_FROM_JSON(PrependAsPath, prependAsPath_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTypes, routeTypes_);
      DARABONBA_PTR_FROM_JSON(SourceChildInstanceTypes, sourceChildInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceIds, sourceInstanceIds_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceIdsReverseMatch, sourceInstanceIdsReverseMatch_);
      DARABONBA_PTR_FROM_JSON(SourceRegionIds, sourceRegionIds_);
      DARABONBA_PTR_FROM_JSON(SourceRouteTableIds, sourceRouteTableIds_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_FROM_JSON(TransmitDirection, transmitDirection_);
    };
    CreateCenRouteMapRequest() = default ;
    CreateCenRouteMapRequest(const CreateCenRouteMapRequest &) = default ;
    CreateCenRouteMapRequest(CreateCenRouteMapRequest &&) = default ;
    CreateCenRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenRouteMapRequest() = default ;
    CreateCenRouteMapRequest& operator=(const CreateCenRouteMapRequest &) = default ;
    CreateCenRouteMapRequest& operator=(CreateCenRouteMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPathMatchMode_ != nullptr
        && this->cenId_ != nullptr && this->cenRegionId_ != nullptr && this->cidrMatchMode_ != nullptr && this->communityMatchMode_ != nullptr && this->communityOperateMode_ != nullptr
        && this->description_ != nullptr && this->destinationChildInstanceTypes_ != nullptr && this->destinationCidrBlocks_ != nullptr && this->destinationInstanceIds_ != nullptr && this->destinationInstanceIdsReverseMatch_ != nullptr
        && this->destinationRegionIds_ != nullptr && this->destinationRouteTableIds_ != nullptr && this->mapResult_ != nullptr && this->matchAddressType_ != nullptr && this->matchAsns_ != nullptr
        && this->matchCommunitySet_ != nullptr && this->nextPriority_ != nullptr && this->operateCommunitySet_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->preference_ != nullptr && this->prependAsPath_ != nullptr && this->priority_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->routeTypes_ != nullptr && this->sourceChildInstanceTypes_ != nullptr && this->sourceInstanceIds_ != nullptr && this->sourceInstanceIdsReverseMatch_ != nullptr && this->sourceRegionIds_ != nullptr
        && this->sourceRouteTableIds_ != nullptr && this->transitRouterRouteTableId_ != nullptr && this->transmitDirection_ != nullptr; };
    // asPathMatchMode Field Functions 
    bool hasAsPathMatchMode() const { return this->asPathMatchMode_ != nullptr;};
    void deleteAsPathMatchMode() { this->asPathMatchMode_ = nullptr;};
    inline string asPathMatchMode() const { DARABONBA_PTR_GET_DEFAULT(asPathMatchMode_, "") };
    inline CreateCenRouteMapRequest& setAsPathMatchMode(string asPathMatchMode) { DARABONBA_PTR_SET_VALUE(asPathMatchMode_, asPathMatchMode) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateCenRouteMapRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenRegionId Field Functions 
    bool hasCenRegionId() const { return this->cenRegionId_ != nullptr;};
    void deleteCenRegionId() { this->cenRegionId_ = nullptr;};
    inline string cenRegionId() const { DARABONBA_PTR_GET_DEFAULT(cenRegionId_, "") };
    inline CreateCenRouteMapRequest& setCenRegionId(string cenRegionId) { DARABONBA_PTR_SET_VALUE(cenRegionId_, cenRegionId) };


    // cidrMatchMode Field Functions 
    bool hasCidrMatchMode() const { return this->cidrMatchMode_ != nullptr;};
    void deleteCidrMatchMode() { this->cidrMatchMode_ = nullptr;};
    inline string cidrMatchMode() const { DARABONBA_PTR_GET_DEFAULT(cidrMatchMode_, "") };
    inline CreateCenRouteMapRequest& setCidrMatchMode(string cidrMatchMode) { DARABONBA_PTR_SET_VALUE(cidrMatchMode_, cidrMatchMode) };


    // communityMatchMode Field Functions 
    bool hasCommunityMatchMode() const { return this->communityMatchMode_ != nullptr;};
    void deleteCommunityMatchMode() { this->communityMatchMode_ = nullptr;};
    inline string communityMatchMode() const { DARABONBA_PTR_GET_DEFAULT(communityMatchMode_, "") };
    inline CreateCenRouteMapRequest& setCommunityMatchMode(string communityMatchMode) { DARABONBA_PTR_SET_VALUE(communityMatchMode_, communityMatchMode) };


    // communityOperateMode Field Functions 
    bool hasCommunityOperateMode() const { return this->communityOperateMode_ != nullptr;};
    void deleteCommunityOperateMode() { this->communityOperateMode_ = nullptr;};
    inline string communityOperateMode() const { DARABONBA_PTR_GET_DEFAULT(communityOperateMode_, "") };
    inline CreateCenRouteMapRequest& setCommunityOperateMode(string communityOperateMode) { DARABONBA_PTR_SET_VALUE(communityOperateMode_, communityOperateMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCenRouteMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationChildInstanceTypes Field Functions 
    bool hasDestinationChildInstanceTypes() const { return this->destinationChildInstanceTypes_ != nullptr;};
    void deleteDestinationChildInstanceTypes() { this->destinationChildInstanceTypes_ = nullptr;};
    inline const vector<string> & destinationChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(destinationChildInstanceTypes_, vector<string>) };
    inline vector<string> destinationChildInstanceTypes() { DARABONBA_PTR_GET(destinationChildInstanceTypes_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationChildInstanceTypes(const vector<string> & destinationChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };
    inline CreateCenRouteMapRequest& setDestinationChildInstanceTypes(vector<string> && destinationChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };


    // destinationCidrBlocks Field Functions 
    bool hasDestinationCidrBlocks() const { return this->destinationCidrBlocks_ != nullptr;};
    void deleteDestinationCidrBlocks() { this->destinationCidrBlocks_ = nullptr;};
    inline const vector<string> & destinationCidrBlocks() const { DARABONBA_PTR_GET_CONST(destinationCidrBlocks_, vector<string>) };
    inline vector<string> destinationCidrBlocks() { DARABONBA_PTR_GET(destinationCidrBlocks_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationCidrBlocks(const vector<string> & destinationCidrBlocks) { DARABONBA_PTR_SET_VALUE(destinationCidrBlocks_, destinationCidrBlocks) };
    inline CreateCenRouteMapRequest& setDestinationCidrBlocks(vector<string> && destinationCidrBlocks) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlocks_, destinationCidrBlocks) };


    // destinationInstanceIds Field Functions 
    bool hasDestinationInstanceIds() const { return this->destinationInstanceIds_ != nullptr;};
    void deleteDestinationInstanceIds() { this->destinationInstanceIds_ = nullptr;};
    inline const vector<string> & destinationInstanceIds() const { DARABONBA_PTR_GET_CONST(destinationInstanceIds_, vector<string>) };
    inline vector<string> destinationInstanceIds() { DARABONBA_PTR_GET(destinationInstanceIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationInstanceIds(const vector<string> & destinationInstanceIds) { DARABONBA_PTR_SET_VALUE(destinationInstanceIds_, destinationInstanceIds) };
    inline CreateCenRouteMapRequest& setDestinationInstanceIds(vector<string> && destinationInstanceIds) { DARABONBA_PTR_SET_RVALUE(destinationInstanceIds_, destinationInstanceIds) };


    // destinationInstanceIdsReverseMatch Field Functions 
    bool hasDestinationInstanceIdsReverseMatch() const { return this->destinationInstanceIdsReverseMatch_ != nullptr;};
    void deleteDestinationInstanceIdsReverseMatch() { this->destinationInstanceIdsReverseMatch_ = nullptr;};
    inline bool destinationInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceIdsReverseMatch_, false) };
    inline CreateCenRouteMapRequest& setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(destinationInstanceIdsReverseMatch_, destinationInstanceIdsReverseMatch) };


    // destinationRegionIds Field Functions 
    bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
    void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
    inline const vector<string> & destinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, vector<string>) };
    inline vector<string> destinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationRegionIds(const vector<string> & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
    inline CreateCenRouteMapRequest& setDestinationRegionIds(vector<string> && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


    // destinationRouteTableIds Field Functions 
    bool hasDestinationRouteTableIds() const { return this->destinationRouteTableIds_ != nullptr;};
    void deleteDestinationRouteTableIds() { this->destinationRouteTableIds_ = nullptr;};
    inline const vector<string> & destinationRouteTableIds() const { DARABONBA_PTR_GET_CONST(destinationRouteTableIds_, vector<string>) };
    inline vector<string> destinationRouteTableIds() { DARABONBA_PTR_GET(destinationRouteTableIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationRouteTableIds(const vector<string> & destinationRouteTableIds) { DARABONBA_PTR_SET_VALUE(destinationRouteTableIds_, destinationRouteTableIds) };
    inline CreateCenRouteMapRequest& setDestinationRouteTableIds(vector<string> && destinationRouteTableIds) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableIds_, destinationRouteTableIds) };


    // mapResult Field Functions 
    bool hasMapResult() const { return this->mapResult_ != nullptr;};
    void deleteMapResult() { this->mapResult_ = nullptr;};
    inline string mapResult() const { DARABONBA_PTR_GET_DEFAULT(mapResult_, "") };
    inline CreateCenRouteMapRequest& setMapResult(string mapResult) { DARABONBA_PTR_SET_VALUE(mapResult_, mapResult) };


    // matchAddressType Field Functions 
    bool hasMatchAddressType() const { return this->matchAddressType_ != nullptr;};
    void deleteMatchAddressType() { this->matchAddressType_ = nullptr;};
    inline string matchAddressType() const { DARABONBA_PTR_GET_DEFAULT(matchAddressType_, "") };
    inline CreateCenRouteMapRequest& setMatchAddressType(string matchAddressType) { DARABONBA_PTR_SET_VALUE(matchAddressType_, matchAddressType) };


    // matchAsns Field Functions 
    bool hasMatchAsns() const { return this->matchAsns_ != nullptr;};
    void deleteMatchAsns() { this->matchAsns_ = nullptr;};
    inline const vector<int64_t> & matchAsns() const { DARABONBA_PTR_GET_CONST(matchAsns_, vector<int64_t>) };
    inline vector<int64_t> matchAsns() { DARABONBA_PTR_GET(matchAsns_, vector<int64_t>) };
    inline CreateCenRouteMapRequest& setMatchAsns(const vector<int64_t> & matchAsns) { DARABONBA_PTR_SET_VALUE(matchAsns_, matchAsns) };
    inline CreateCenRouteMapRequest& setMatchAsns(vector<int64_t> && matchAsns) { DARABONBA_PTR_SET_RVALUE(matchAsns_, matchAsns) };


    // matchCommunitySet Field Functions 
    bool hasMatchCommunitySet() const { return this->matchCommunitySet_ != nullptr;};
    void deleteMatchCommunitySet() { this->matchCommunitySet_ = nullptr;};
    inline const vector<string> & matchCommunitySet() const { DARABONBA_PTR_GET_CONST(matchCommunitySet_, vector<string>) };
    inline vector<string> matchCommunitySet() { DARABONBA_PTR_GET(matchCommunitySet_, vector<string>) };
    inline CreateCenRouteMapRequest& setMatchCommunitySet(const vector<string> & matchCommunitySet) { DARABONBA_PTR_SET_VALUE(matchCommunitySet_, matchCommunitySet) };
    inline CreateCenRouteMapRequest& setMatchCommunitySet(vector<string> && matchCommunitySet) { DARABONBA_PTR_SET_RVALUE(matchCommunitySet_, matchCommunitySet) };


    // nextPriority Field Functions 
    bool hasNextPriority() const { return this->nextPriority_ != nullptr;};
    void deleteNextPriority() { this->nextPriority_ = nullptr;};
    inline int32_t nextPriority() const { DARABONBA_PTR_GET_DEFAULT(nextPriority_, 0) };
    inline CreateCenRouteMapRequest& setNextPriority(int32_t nextPriority) { DARABONBA_PTR_SET_VALUE(nextPriority_, nextPriority) };


    // operateCommunitySet Field Functions 
    bool hasOperateCommunitySet() const { return this->operateCommunitySet_ != nullptr;};
    void deleteOperateCommunitySet() { this->operateCommunitySet_ = nullptr;};
    inline const vector<string> & operateCommunitySet() const { DARABONBA_PTR_GET_CONST(operateCommunitySet_, vector<string>) };
    inline vector<string> operateCommunitySet() { DARABONBA_PTR_GET(operateCommunitySet_, vector<string>) };
    inline CreateCenRouteMapRequest& setOperateCommunitySet(const vector<string> & operateCommunitySet) { DARABONBA_PTR_SET_VALUE(operateCommunitySet_, operateCommunitySet) };
    inline CreateCenRouteMapRequest& setOperateCommunitySet(vector<string> && operateCommunitySet) { DARABONBA_PTR_SET_RVALUE(operateCommunitySet_, operateCommunitySet) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenRouteMapRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenRouteMapRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preference Field Functions 
    bool hasPreference() const { return this->preference_ != nullptr;};
    void deletePreference() { this->preference_ = nullptr;};
    inline int32_t preference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
    inline CreateCenRouteMapRequest& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


    // prependAsPath Field Functions 
    bool hasPrependAsPath() const { return this->prependAsPath_ != nullptr;};
    void deletePrependAsPath() { this->prependAsPath_ = nullptr;};
    inline const vector<int64_t> & prependAsPath() const { DARABONBA_PTR_GET_CONST(prependAsPath_, vector<int64_t>) };
    inline vector<int64_t> prependAsPath() { DARABONBA_PTR_GET(prependAsPath_, vector<int64_t>) };
    inline CreateCenRouteMapRequest& setPrependAsPath(const vector<int64_t> & prependAsPath) { DARABONBA_PTR_SET_VALUE(prependAsPath_, prependAsPath) };
    inline CreateCenRouteMapRequest& setPrependAsPath(vector<int64_t> && prependAsPath) { DARABONBA_PTR_SET_RVALUE(prependAsPath_, prependAsPath) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateCenRouteMapRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenRouteMapRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenRouteMapRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTypes Field Functions 
    bool hasRouteTypes() const { return this->routeTypes_ != nullptr;};
    void deleteRouteTypes() { this->routeTypes_ = nullptr;};
    inline const vector<string> & routeTypes() const { DARABONBA_PTR_GET_CONST(routeTypes_, vector<string>) };
    inline vector<string> routeTypes() { DARABONBA_PTR_GET(routeTypes_, vector<string>) };
    inline CreateCenRouteMapRequest& setRouteTypes(const vector<string> & routeTypes) { DARABONBA_PTR_SET_VALUE(routeTypes_, routeTypes) };
    inline CreateCenRouteMapRequest& setRouteTypes(vector<string> && routeTypes) { DARABONBA_PTR_SET_RVALUE(routeTypes_, routeTypes) };


    // sourceChildInstanceTypes Field Functions 
    bool hasSourceChildInstanceTypes() const { return this->sourceChildInstanceTypes_ != nullptr;};
    void deleteSourceChildInstanceTypes() { this->sourceChildInstanceTypes_ = nullptr;};
    inline const vector<string> & sourceChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(sourceChildInstanceTypes_, vector<string>) };
    inline vector<string> sourceChildInstanceTypes() { DARABONBA_PTR_GET(sourceChildInstanceTypes_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceChildInstanceTypes(const vector<string> & sourceChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };
    inline CreateCenRouteMapRequest& setSourceChildInstanceTypes(vector<string> && sourceChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };


    // sourceInstanceIds Field Functions 
    bool hasSourceInstanceIds() const { return this->sourceInstanceIds_ != nullptr;};
    void deleteSourceInstanceIds() { this->sourceInstanceIds_ = nullptr;};
    inline const vector<string> & sourceInstanceIds() const { DARABONBA_PTR_GET_CONST(sourceInstanceIds_, vector<string>) };
    inline vector<string> sourceInstanceIds() { DARABONBA_PTR_GET(sourceInstanceIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceInstanceIds(const vector<string> & sourceInstanceIds) { DARABONBA_PTR_SET_VALUE(sourceInstanceIds_, sourceInstanceIds) };
    inline CreateCenRouteMapRequest& setSourceInstanceIds(vector<string> && sourceInstanceIds) { DARABONBA_PTR_SET_RVALUE(sourceInstanceIds_, sourceInstanceIds) };


    // sourceInstanceIdsReverseMatch Field Functions 
    bool hasSourceInstanceIdsReverseMatch() const { return this->sourceInstanceIdsReverseMatch_ != nullptr;};
    void deleteSourceInstanceIdsReverseMatch() { this->sourceInstanceIdsReverseMatch_ = nullptr;};
    inline bool sourceInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceIdsReverseMatch_, false) };
    inline CreateCenRouteMapRequest& setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(sourceInstanceIdsReverseMatch_, sourceInstanceIdsReverseMatch) };


    // sourceRegionIds Field Functions 
    bool hasSourceRegionIds() const { return this->sourceRegionIds_ != nullptr;};
    void deleteSourceRegionIds() { this->sourceRegionIds_ = nullptr;};
    inline const vector<string> & sourceRegionIds() const { DARABONBA_PTR_GET_CONST(sourceRegionIds_, vector<string>) };
    inline vector<string> sourceRegionIds() { DARABONBA_PTR_GET(sourceRegionIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceRegionIds(const vector<string> & sourceRegionIds) { DARABONBA_PTR_SET_VALUE(sourceRegionIds_, sourceRegionIds) };
    inline CreateCenRouteMapRequest& setSourceRegionIds(vector<string> && sourceRegionIds) { DARABONBA_PTR_SET_RVALUE(sourceRegionIds_, sourceRegionIds) };


    // sourceRouteTableIds Field Functions 
    bool hasSourceRouteTableIds() const { return this->sourceRouteTableIds_ != nullptr;};
    void deleteSourceRouteTableIds() { this->sourceRouteTableIds_ = nullptr;};
    inline const vector<string> & sourceRouteTableIds() const { DARABONBA_PTR_GET_CONST(sourceRouteTableIds_, vector<string>) };
    inline vector<string> sourceRouteTableIds() { DARABONBA_PTR_GET(sourceRouteTableIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceRouteTableIds(const vector<string> & sourceRouteTableIds) { DARABONBA_PTR_SET_VALUE(sourceRouteTableIds_, sourceRouteTableIds) };
    inline CreateCenRouteMapRequest& setSourceRouteTableIds(vector<string> && sourceRouteTableIds) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableIds_, sourceRouteTableIds) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline CreateCenRouteMapRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    // transmitDirection Field Functions 
    bool hasTransmitDirection() const { return this->transmitDirection_ != nullptr;};
    void deleteTransmitDirection() { this->transmitDirection_ = nullptr;};
    inline string transmitDirection() const { DARABONBA_PTR_GET_DEFAULT(transmitDirection_, "") };
    inline CreateCenRouteMapRequest& setTransmitDirection(string transmitDirection) { DARABONBA_PTR_SET_VALUE(transmitDirection_, transmitDirection) };


  protected:
    // The match method that is used to match routes based on the AS path. Valid values:
    // 
    // *   **Include**: fuzzy match. A route is a match if the AS path of the route overlaps with the AS path in the match conditions.
    // *   **Complete**: exact match. A route is a match only if the AS path of the route matches the AS path in the match conditions.
    std::shared_ptr<string> asPathMatchMode_ = nullptr;
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the region in which the routing policy is applied.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenRegionId_ = nullptr;
    // The match method that is used to match routes against the prefix list. Valid values:
    // 
    // *   **Include**: fuzzy match. A route is a match if the route prefix is included in the match conditions.
    // 
    // For example, if you set the match condition to 1.1.0.0/16 and fuzzy match is applied, the route whose prefix is 1.1.1.0/24 meets the match condition.
    // 
    // *   **Complete**: exact match. A route is a match only if the route prefix is the same as the prefix specified in the match condition.
    // 
    // For example, if you set the match condition to 1.1.0.0/16 and exact match is applied, only the route whose prefix is 1.1.0.0/16 meets the match condition.
    std::shared_ptr<string> cidrMatchMode_ = nullptr;
    // The match method that is used to match routes based on the community. Valid values:
    // 
    // *   **Include**: fuzzy match. A route is a match if the community of the route overlaps with the community in the match conditions.
    // *   **Complete**: exact match. A route is a match only if the community of the route matches the community in the match conditions.
    std::shared_ptr<string> communityMatchMode_ = nullptr;
    // The action to be performed on the community. Valid values:
    // 
    // *   **Additive**: adds the community to the route.
    // *   **Replace**: replaces the original community of the route.
    // 
    // This parameter specifies the action to be performed when a route meets the match condition.
    std::shared_ptr<string> communityOperateMode_ = nullptr;
    // The description of the routing policy.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The types of destination network instance to which the routes belong. The following types of network instances are supported:
    // 
    // *   **VPC**: VPC
    // 
    // *   **VBR**: VBR
    // 
    // *   **CCN**: CCN instance
    // 
    // *   **VPN**: IPsec connection
    // 
    //     >This parameter does not take effect if the IPsec-VPN connection or SSL client is associated with a transit router through a VPN gateway and a VPC. This parameter takes effect only if the IPsec connection is directly connected to the transit router.
    // 
    // You can specify one or more network instance types.
    // 
    // > The destination network instance types are valid only if the routing policy is applied to scenarios where routes are advertised from the gateway in the current region to network instances in the current region.
    std::shared_ptr<vector<string>> destinationChildInstanceTypes_ = nullptr;
    // The prefix list against which routes are matched.
    // 
    // Specify IP addresses in CIDR notations. You can specify at most 32 CIDR blocks.
    // 
    // IPv4 and IPv4 addresses are supported.
    std::shared_ptr<vector<string>> destinationCidrBlocks_ = nullptr;
    // The IDs of the destination network instances to which the routes belong. The following network instance types are supported:
    // 
    // *   VPC
    // *   VBR
    // *   CCN instance
    // *   SAG instance
    // *   The ID of the IPsec-VPN connection.
    // 
    // You can enter at most 32 IDs.
    // 
    // > The destination instance IDs take effect only when Direction is set to Export from Regional Gateway and the destination instances are deployed in the current region.
    std::shared_ptr<vector<string>> destinationInstanceIds_ = nullptr;
    // Specifies whether to exclude destination instance IDs. Valid values:
    // 
    // *   **false** (default): A route is a match if the destination instance ID is included in the list specified by **SourceInstanceIds.N**.
    // *   **true**: A route is a match if the destination network instance ID is not in the list specified by **SourceInstanceIds.N**.
    std::shared_ptr<bool> destinationInstanceIdsReverseMatch_ = nullptr;
    // The destination region IDs of the route. You can specify at most 32 region IDs.
    std::shared_ptr<vector<string>> destinationRegionIds_ = nullptr;
    // The IDs of the destination route tables to which routes are evaluated. You can enter at most 32 route table IDs.
    // 
    // > The destination route table IDs take effect only when Direction is set to Export from Regional Gateway and the destination route tables belong to network instances deployed in the current region.
    std::shared_ptr<vector<string>> destinationRouteTableIds_ = nullptr;
    // The action to be performed on a route that meets all the match conditions. Valid values:
    // 
    // *   **Permit**: the route is permitted.
    // *   **Deny**: the route is denied.
    // 
    // This parameter is required.
    std::shared_ptr<string> mapResult_ = nullptr;
    // The type of IP address in the match condition. Valid values:
    // 
    // *   **IPv4**: IPv4 address
    // *   **IPv6**: IPv6 address
    // 
    // This parameter can be empty. If no value is specified, all types of IP address are a match.
    std::shared_ptr<string> matchAddressType_ = nullptr;
    // The AS paths based on which routes are compared.
    // 
    // You can specify at most 32 AS numbers.
    // 
    // > Only the AS-SEQUENCE parameter is supported. The AS-SET, AS-CONFED-SEQUENCE, and AS-CONFED-SET parameters are not supported. In other words, only the AS number list is supported. Sets and sub-lists are not supported.
    std::shared_ptr<vector<int64_t>> matchAsns_ = nullptr;
    // The community set based on which routes are compared.
    // 
    // Specify the community in the format of n:m. Valid values of n and m: **1** to **65535**. Each community must comply with the RFC 1997 standard. The RFC 8092 standard that defines Border Gateway Protocol (BGP) large communities is not supported.
    // 
    // You can specify at most 32 communities.
    // 
    // > If the configurations of the communities are incorrect, routes may fail to be advertised to your data center.
    std::shared_ptr<vector<string>> matchCommunitySet_ = nullptr;
    // The priority of the routing policy that you want to associate with the current one.
    // 
    // *   This parameter takes effect only when the **MapResult** parameter is set to **Permit**. This way, the permitted route is matched against the next routing policy.
    // *   The region and direction of the routing policy to be associated must be the same as those of the current routing policy.
    // *   The priority of the next routing policy must be lower than the priority of the current routing policy.
    std::shared_ptr<int32_t> nextPriority_ = nullptr;
    // The community set on which actions are performed.
    // 
    // Specify the community in the format of n:m. Valid values of n and m: **1** to **65535**. Each community must comply with RFC 1997. The RFC 8092 standard that defines BGP large communities is not supported.
    // 
    // You can specify at most 32 communities.
    // 
    // > If the configurations of the communities are incorrect, routes may fail to be advertised to your data center.
    std::shared_ptr<vector<string>> operateCommunitySet_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The new priority of the route.
    // 
    // Valid values: **1** to **100**. The default priority is **50**. A smaller value indicates a higher priority.
    // 
    // This parameter specifies the action to be performed when a route meets the match condition.
    std::shared_ptr<int32_t> preference_ = nullptr;
    // The AS paths that are prepended by using an action statement when regional gateways receive or advertise routes.
    // 
    // The AS paths vary based on the direction in which the routing policy is applied:
    // 
    // *   If AS paths are prepended to a routing policy that is applied in the inbound direction, you must specify source network instance IDs and the source region in the match condition. In addition, the source region must be the same as the region where the routing policy is applied.
    // *   If AS paths are prepended to a routing policy that is applied in the outbound direction, you must specify destination network instance IDs in the match condition.
    // 
    // This parameter specifies the action to be performed when a route meets the match condition. You can specify at most 32 AS numbers.
    std::shared_ptr<vector<int64_t>> prependAsPath_ = nullptr;
    // The priority of the routing policy. Valid values: **1** to **100**. A smaller value indicates a higher priority.
    // 
    // > You cannot specify the same priority for routing policies that apply in the same region and direction. The system matches routes against the match conditions of routing policies in descending order of priority. A smaller value indicates a higher priority. You must set the priorities to proper values.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The type of route to be compared. Valid values: The following route types are supported:
    // 
    // *   **System**: system routes that are automatically generated by the system.
    // *   **Custom**: custom routes that are manually added.
    // *   **BGP**: routes that are advertised over BGP.
    // 
    // You can specify multiple route types.
    std::shared_ptr<vector<string>> routeTypes_ = nullptr;
    // The types of source network instance to which the routes belong. The following types of network instances are supported:
    // 
    // *   **VPC**: VPC
    // 
    // *   **VBR**: VBR
    // 
    // *   **CCN**: CCN instance
    // 
    // *   **VPN**: VPN gateway or IPsec connection
    // 
    //     *   If the IPsec-VPN connection or SSL client is associated with a VPN gateway, the VPC associated with the VPN gateway must be connected to a transit router, and the VPN gateway must use BGP dynamic routing. Otherwise, this parameter cannot take effect.
    //     *   This parameter takes effect if the IPsec connection is directly connected to a transit router.
    // 
    // You can specify one or more network instance types.
    std::shared_ptr<vector<string>> sourceChildInstanceTypes_ = nullptr;
    // The IDs of the source network instances to which the routes belong. The following network instance types are supported:
    // 
    // *   Virtual private cloud (VPC)
    // *   Virtual border router (VBR)
    // *   Cloud Connect Network (CCN) instance
    // *   Smart Access Gateway (SAG) instance
    // *   The ID of the IPsec-VPN connection.
    // 
    // You can enter at most 32 IDs.
    std::shared_ptr<vector<string>> sourceInstanceIds_ = nullptr;
    // Specifies whether to exclude source instance IDs. Valid values:
    // 
    // *   **false** (default): A route is a match if the source instance ID is included in the list specified by **SourceInstanceIds.N**.
    // *   **true**: A route is a match if the source network instance ID is not in the list specified by **SourceInstanceIds.N**.
    std::shared_ptr<bool> sourceInstanceIdsReverseMatch_ = nullptr;
    // The IDs of the source regions from which routes are evaluated. You can enter at most 32 region IDs.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<vector<string>> sourceRegionIds_ = nullptr;
    // The IDs of the source route tables from which routes are evaluated. You can enter at most 32 route table IDs.
    std::shared_ptr<vector<string>> sourceRouteTableIds_ = nullptr;
    // The ID of the route table of the transit router.
    // 
    // If you do not specify a route table ID, the routing policy is automatically associated with the default route table of the transit router.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
    // The direction in which the routing policy is applied. Valid values:
    // 
    // *   **RegionIn**: Routes are advertised to the gateways in the regions that are connected by the CEN instance.
    // 
    // For example, routes are advertised from network instances deployed in the current region or other regions to the gateway deployed in the current region.
    // 
    // *   **RegionOut**: Routes are advertised from the gateways in the regions that are connected by the CEN instance.
    // 
    // For example, routes are advertised from the gateway deployed in the current region to network instances deployed in the same region, or to gateways deployed in other regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> transmitDirection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
