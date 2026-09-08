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
    virtual bool empty() const override { return this->asPathMatchMode_ == nullptr
        && this->cenId_ == nullptr && this->cenRegionId_ == nullptr && this->cidrMatchMode_ == nullptr && this->communityMatchMode_ == nullptr && this->communityOperateMode_ == nullptr
        && this->description_ == nullptr && this->destinationChildInstanceTypes_ == nullptr && this->destinationCidrBlocks_ == nullptr && this->destinationInstanceIds_ == nullptr && this->destinationInstanceIdsReverseMatch_ == nullptr
        && this->destinationRegionIds_ == nullptr && this->destinationRouteTableIds_ == nullptr && this->mapResult_ == nullptr && this->matchAddressType_ == nullptr && this->matchAsns_ == nullptr
        && this->matchCommunitySet_ == nullptr && this->nextPriority_ == nullptr && this->operateCommunitySet_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->preference_ == nullptr && this->prependAsPath_ == nullptr && this->priority_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->routeTypes_ == nullptr && this->sourceChildInstanceTypes_ == nullptr && this->sourceInstanceIds_ == nullptr && this->sourceInstanceIdsReverseMatch_ == nullptr && this->sourceRegionIds_ == nullptr
        && this->sourceRouteTableIds_ == nullptr && this->transitRouterRouteTableId_ == nullptr && this->transmitDirection_ == nullptr; };
    // asPathMatchMode Field Functions 
    bool hasAsPathMatchMode() const { return this->asPathMatchMode_ != nullptr;};
    void deleteAsPathMatchMode() { this->asPathMatchMode_ = nullptr;};
    inline string getAsPathMatchMode() const { DARABONBA_PTR_GET_DEFAULT(asPathMatchMode_, "") };
    inline CreateCenRouteMapRequest& setAsPathMatchMode(string asPathMatchMode) { DARABONBA_PTR_SET_VALUE(asPathMatchMode_, asPathMatchMode) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateCenRouteMapRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenRegionId Field Functions 
    bool hasCenRegionId() const { return this->cenRegionId_ != nullptr;};
    void deleteCenRegionId() { this->cenRegionId_ = nullptr;};
    inline string getCenRegionId() const { DARABONBA_PTR_GET_DEFAULT(cenRegionId_, "") };
    inline CreateCenRouteMapRequest& setCenRegionId(string cenRegionId) { DARABONBA_PTR_SET_VALUE(cenRegionId_, cenRegionId) };


    // cidrMatchMode Field Functions 
    bool hasCidrMatchMode() const { return this->cidrMatchMode_ != nullptr;};
    void deleteCidrMatchMode() { this->cidrMatchMode_ = nullptr;};
    inline string getCidrMatchMode() const { DARABONBA_PTR_GET_DEFAULT(cidrMatchMode_, "") };
    inline CreateCenRouteMapRequest& setCidrMatchMode(string cidrMatchMode) { DARABONBA_PTR_SET_VALUE(cidrMatchMode_, cidrMatchMode) };


    // communityMatchMode Field Functions 
    bool hasCommunityMatchMode() const { return this->communityMatchMode_ != nullptr;};
    void deleteCommunityMatchMode() { this->communityMatchMode_ = nullptr;};
    inline string getCommunityMatchMode() const { DARABONBA_PTR_GET_DEFAULT(communityMatchMode_, "") };
    inline CreateCenRouteMapRequest& setCommunityMatchMode(string communityMatchMode) { DARABONBA_PTR_SET_VALUE(communityMatchMode_, communityMatchMode) };


    // communityOperateMode Field Functions 
    bool hasCommunityOperateMode() const { return this->communityOperateMode_ != nullptr;};
    void deleteCommunityOperateMode() { this->communityOperateMode_ = nullptr;};
    inline string getCommunityOperateMode() const { DARABONBA_PTR_GET_DEFAULT(communityOperateMode_, "") };
    inline CreateCenRouteMapRequest& setCommunityOperateMode(string communityOperateMode) { DARABONBA_PTR_SET_VALUE(communityOperateMode_, communityOperateMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCenRouteMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationChildInstanceTypes Field Functions 
    bool hasDestinationChildInstanceTypes() const { return this->destinationChildInstanceTypes_ != nullptr;};
    void deleteDestinationChildInstanceTypes() { this->destinationChildInstanceTypes_ = nullptr;};
    inline const vector<string> & getDestinationChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(destinationChildInstanceTypes_, vector<string>) };
    inline vector<string> getDestinationChildInstanceTypes() { DARABONBA_PTR_GET(destinationChildInstanceTypes_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationChildInstanceTypes(const vector<string> & destinationChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };
    inline CreateCenRouteMapRequest& setDestinationChildInstanceTypes(vector<string> && destinationChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };


    // destinationCidrBlocks Field Functions 
    bool hasDestinationCidrBlocks() const { return this->destinationCidrBlocks_ != nullptr;};
    void deleteDestinationCidrBlocks() { this->destinationCidrBlocks_ = nullptr;};
    inline const vector<string> & getDestinationCidrBlocks() const { DARABONBA_PTR_GET_CONST(destinationCidrBlocks_, vector<string>) };
    inline vector<string> getDestinationCidrBlocks() { DARABONBA_PTR_GET(destinationCidrBlocks_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationCidrBlocks(const vector<string> & destinationCidrBlocks) { DARABONBA_PTR_SET_VALUE(destinationCidrBlocks_, destinationCidrBlocks) };
    inline CreateCenRouteMapRequest& setDestinationCidrBlocks(vector<string> && destinationCidrBlocks) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlocks_, destinationCidrBlocks) };


    // destinationInstanceIds Field Functions 
    bool hasDestinationInstanceIds() const { return this->destinationInstanceIds_ != nullptr;};
    void deleteDestinationInstanceIds() { this->destinationInstanceIds_ = nullptr;};
    inline const vector<string> & getDestinationInstanceIds() const { DARABONBA_PTR_GET_CONST(destinationInstanceIds_, vector<string>) };
    inline vector<string> getDestinationInstanceIds() { DARABONBA_PTR_GET(destinationInstanceIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationInstanceIds(const vector<string> & destinationInstanceIds) { DARABONBA_PTR_SET_VALUE(destinationInstanceIds_, destinationInstanceIds) };
    inline CreateCenRouteMapRequest& setDestinationInstanceIds(vector<string> && destinationInstanceIds) { DARABONBA_PTR_SET_RVALUE(destinationInstanceIds_, destinationInstanceIds) };


    // destinationInstanceIdsReverseMatch Field Functions 
    bool hasDestinationInstanceIdsReverseMatch() const { return this->destinationInstanceIdsReverseMatch_ != nullptr;};
    void deleteDestinationInstanceIdsReverseMatch() { this->destinationInstanceIdsReverseMatch_ = nullptr;};
    inline bool getDestinationInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceIdsReverseMatch_, false) };
    inline CreateCenRouteMapRequest& setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(destinationInstanceIdsReverseMatch_, destinationInstanceIdsReverseMatch) };


    // destinationRegionIds Field Functions 
    bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
    void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
    inline const vector<string> & getDestinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, vector<string>) };
    inline vector<string> getDestinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationRegionIds(const vector<string> & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
    inline CreateCenRouteMapRequest& setDestinationRegionIds(vector<string> && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


    // destinationRouteTableIds Field Functions 
    bool hasDestinationRouteTableIds() const { return this->destinationRouteTableIds_ != nullptr;};
    void deleteDestinationRouteTableIds() { this->destinationRouteTableIds_ = nullptr;};
    inline const vector<string> & getDestinationRouteTableIds() const { DARABONBA_PTR_GET_CONST(destinationRouteTableIds_, vector<string>) };
    inline vector<string> getDestinationRouteTableIds() { DARABONBA_PTR_GET(destinationRouteTableIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setDestinationRouteTableIds(const vector<string> & destinationRouteTableIds) { DARABONBA_PTR_SET_VALUE(destinationRouteTableIds_, destinationRouteTableIds) };
    inline CreateCenRouteMapRequest& setDestinationRouteTableIds(vector<string> && destinationRouteTableIds) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableIds_, destinationRouteTableIds) };


    // mapResult Field Functions 
    bool hasMapResult() const { return this->mapResult_ != nullptr;};
    void deleteMapResult() { this->mapResult_ = nullptr;};
    inline string getMapResult() const { DARABONBA_PTR_GET_DEFAULT(mapResult_, "") };
    inline CreateCenRouteMapRequest& setMapResult(string mapResult) { DARABONBA_PTR_SET_VALUE(mapResult_, mapResult) };


    // matchAddressType Field Functions 
    bool hasMatchAddressType() const { return this->matchAddressType_ != nullptr;};
    void deleteMatchAddressType() { this->matchAddressType_ = nullptr;};
    inline string getMatchAddressType() const { DARABONBA_PTR_GET_DEFAULT(matchAddressType_, "") };
    inline CreateCenRouteMapRequest& setMatchAddressType(string matchAddressType) { DARABONBA_PTR_SET_VALUE(matchAddressType_, matchAddressType) };


    // matchAsns Field Functions 
    bool hasMatchAsns() const { return this->matchAsns_ != nullptr;};
    void deleteMatchAsns() { this->matchAsns_ = nullptr;};
    inline const vector<int64_t> & getMatchAsns() const { DARABONBA_PTR_GET_CONST(matchAsns_, vector<int64_t>) };
    inline vector<int64_t> getMatchAsns() { DARABONBA_PTR_GET(matchAsns_, vector<int64_t>) };
    inline CreateCenRouteMapRequest& setMatchAsns(const vector<int64_t> & matchAsns) { DARABONBA_PTR_SET_VALUE(matchAsns_, matchAsns) };
    inline CreateCenRouteMapRequest& setMatchAsns(vector<int64_t> && matchAsns) { DARABONBA_PTR_SET_RVALUE(matchAsns_, matchAsns) };


    // matchCommunitySet Field Functions 
    bool hasMatchCommunitySet() const { return this->matchCommunitySet_ != nullptr;};
    void deleteMatchCommunitySet() { this->matchCommunitySet_ = nullptr;};
    inline const vector<string> & getMatchCommunitySet() const { DARABONBA_PTR_GET_CONST(matchCommunitySet_, vector<string>) };
    inline vector<string> getMatchCommunitySet() { DARABONBA_PTR_GET(matchCommunitySet_, vector<string>) };
    inline CreateCenRouteMapRequest& setMatchCommunitySet(const vector<string> & matchCommunitySet) { DARABONBA_PTR_SET_VALUE(matchCommunitySet_, matchCommunitySet) };
    inline CreateCenRouteMapRequest& setMatchCommunitySet(vector<string> && matchCommunitySet) { DARABONBA_PTR_SET_RVALUE(matchCommunitySet_, matchCommunitySet) };


    // nextPriority Field Functions 
    bool hasNextPriority() const { return this->nextPriority_ != nullptr;};
    void deleteNextPriority() { this->nextPriority_ = nullptr;};
    inline int32_t getNextPriority() const { DARABONBA_PTR_GET_DEFAULT(nextPriority_, 0) };
    inline CreateCenRouteMapRequest& setNextPriority(int32_t nextPriority) { DARABONBA_PTR_SET_VALUE(nextPriority_, nextPriority) };


    // operateCommunitySet Field Functions 
    bool hasOperateCommunitySet() const { return this->operateCommunitySet_ != nullptr;};
    void deleteOperateCommunitySet() { this->operateCommunitySet_ = nullptr;};
    inline const vector<string> & getOperateCommunitySet() const { DARABONBA_PTR_GET_CONST(operateCommunitySet_, vector<string>) };
    inline vector<string> getOperateCommunitySet() { DARABONBA_PTR_GET(operateCommunitySet_, vector<string>) };
    inline CreateCenRouteMapRequest& setOperateCommunitySet(const vector<string> & operateCommunitySet) { DARABONBA_PTR_SET_VALUE(operateCommunitySet_, operateCommunitySet) };
    inline CreateCenRouteMapRequest& setOperateCommunitySet(vector<string> && operateCommunitySet) { DARABONBA_PTR_SET_RVALUE(operateCommunitySet_, operateCommunitySet) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenRouteMapRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenRouteMapRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preference Field Functions 
    bool hasPreference() const { return this->preference_ != nullptr;};
    void deletePreference() { this->preference_ = nullptr;};
    inline int32_t getPreference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
    inline CreateCenRouteMapRequest& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


    // prependAsPath Field Functions 
    bool hasPrependAsPath() const { return this->prependAsPath_ != nullptr;};
    void deletePrependAsPath() { this->prependAsPath_ = nullptr;};
    inline const vector<int64_t> & getPrependAsPath() const { DARABONBA_PTR_GET_CONST(prependAsPath_, vector<int64_t>) };
    inline vector<int64_t> getPrependAsPath() { DARABONBA_PTR_GET(prependAsPath_, vector<int64_t>) };
    inline CreateCenRouteMapRequest& setPrependAsPath(const vector<int64_t> & prependAsPath) { DARABONBA_PTR_SET_VALUE(prependAsPath_, prependAsPath) };
    inline CreateCenRouteMapRequest& setPrependAsPath(vector<int64_t> && prependAsPath) { DARABONBA_PTR_SET_RVALUE(prependAsPath_, prependAsPath) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateCenRouteMapRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenRouteMapRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenRouteMapRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTypes Field Functions 
    bool hasRouteTypes() const { return this->routeTypes_ != nullptr;};
    void deleteRouteTypes() { this->routeTypes_ = nullptr;};
    inline const vector<string> & getRouteTypes() const { DARABONBA_PTR_GET_CONST(routeTypes_, vector<string>) };
    inline vector<string> getRouteTypes() { DARABONBA_PTR_GET(routeTypes_, vector<string>) };
    inline CreateCenRouteMapRequest& setRouteTypes(const vector<string> & routeTypes) { DARABONBA_PTR_SET_VALUE(routeTypes_, routeTypes) };
    inline CreateCenRouteMapRequest& setRouteTypes(vector<string> && routeTypes) { DARABONBA_PTR_SET_RVALUE(routeTypes_, routeTypes) };


    // sourceChildInstanceTypes Field Functions 
    bool hasSourceChildInstanceTypes() const { return this->sourceChildInstanceTypes_ != nullptr;};
    void deleteSourceChildInstanceTypes() { this->sourceChildInstanceTypes_ = nullptr;};
    inline const vector<string> & getSourceChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(sourceChildInstanceTypes_, vector<string>) };
    inline vector<string> getSourceChildInstanceTypes() { DARABONBA_PTR_GET(sourceChildInstanceTypes_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceChildInstanceTypes(const vector<string> & sourceChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };
    inline CreateCenRouteMapRequest& setSourceChildInstanceTypes(vector<string> && sourceChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };


    // sourceInstanceIds Field Functions 
    bool hasSourceInstanceIds() const { return this->sourceInstanceIds_ != nullptr;};
    void deleteSourceInstanceIds() { this->sourceInstanceIds_ = nullptr;};
    inline const vector<string> & getSourceInstanceIds() const { DARABONBA_PTR_GET_CONST(sourceInstanceIds_, vector<string>) };
    inline vector<string> getSourceInstanceIds() { DARABONBA_PTR_GET(sourceInstanceIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceInstanceIds(const vector<string> & sourceInstanceIds) { DARABONBA_PTR_SET_VALUE(sourceInstanceIds_, sourceInstanceIds) };
    inline CreateCenRouteMapRequest& setSourceInstanceIds(vector<string> && sourceInstanceIds) { DARABONBA_PTR_SET_RVALUE(sourceInstanceIds_, sourceInstanceIds) };


    // sourceInstanceIdsReverseMatch Field Functions 
    bool hasSourceInstanceIdsReverseMatch() const { return this->sourceInstanceIdsReverseMatch_ != nullptr;};
    void deleteSourceInstanceIdsReverseMatch() { this->sourceInstanceIdsReverseMatch_ = nullptr;};
    inline bool getSourceInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceIdsReverseMatch_, false) };
    inline CreateCenRouteMapRequest& setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(sourceInstanceIdsReverseMatch_, sourceInstanceIdsReverseMatch) };


    // sourceRegionIds Field Functions 
    bool hasSourceRegionIds() const { return this->sourceRegionIds_ != nullptr;};
    void deleteSourceRegionIds() { this->sourceRegionIds_ = nullptr;};
    inline const vector<string> & getSourceRegionIds() const { DARABONBA_PTR_GET_CONST(sourceRegionIds_, vector<string>) };
    inline vector<string> getSourceRegionIds() { DARABONBA_PTR_GET(sourceRegionIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceRegionIds(const vector<string> & sourceRegionIds) { DARABONBA_PTR_SET_VALUE(sourceRegionIds_, sourceRegionIds) };
    inline CreateCenRouteMapRequest& setSourceRegionIds(vector<string> && sourceRegionIds) { DARABONBA_PTR_SET_RVALUE(sourceRegionIds_, sourceRegionIds) };


    // sourceRouteTableIds Field Functions 
    bool hasSourceRouteTableIds() const { return this->sourceRouteTableIds_ != nullptr;};
    void deleteSourceRouteTableIds() { this->sourceRouteTableIds_ = nullptr;};
    inline const vector<string> & getSourceRouteTableIds() const { DARABONBA_PTR_GET_CONST(sourceRouteTableIds_, vector<string>) };
    inline vector<string> getSourceRouteTableIds() { DARABONBA_PTR_GET(sourceRouteTableIds_, vector<string>) };
    inline CreateCenRouteMapRequest& setSourceRouteTableIds(const vector<string> & sourceRouteTableIds) { DARABONBA_PTR_SET_VALUE(sourceRouteTableIds_, sourceRouteTableIds) };
    inline CreateCenRouteMapRequest& setSourceRouteTableIds(vector<string> && sourceRouteTableIds) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableIds_, sourceRouteTableIds) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string getTransitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline CreateCenRouteMapRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    // transmitDirection Field Functions 
    bool hasTransmitDirection() const { return this->transmitDirection_ != nullptr;};
    void deleteTransmitDirection() { this->transmitDirection_ = nullptr;};
    inline string getTransmitDirection() const { DARABONBA_PTR_GET_DEFAULT(transmitDirection_, "") };
    inline CreateCenRouteMapRequest& setTransmitDirection(string transmitDirection) { DARABONBA_PTR_SET_VALUE(transmitDirection_, transmitDirection) };


  protected:
    // The match mode of the AS path list. Valid values:
    // 
    // - **Include**: fuzzy match. A match is successful if the AS path in the match condition overlaps with the AS path of the route being matched. 
    // 
    // - **Complete**: exact match. A match is successful only if the AS path in the match condition is the same as the AS path of the route being matched.
    shared_ptr<string> asPathMatchMode_ {};
    // The instance ID of the Cloud Enterprise Network (CEN).
    // 
    // This parameter is required.
    shared_ptr<string> cenId_ {};
    // The ID of the region to which the routing policy is applied.
    // 
    // You can call [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> cenRegionId_ {};
    // The match mode of the prefix list. Valid values:
    // 
    // - **Include**: fuzzy match. A match is successful if the route prefix in the match condition contains the route prefix of the route being matched.
    // 
    //  For example, a policy that defines 10.10.0.0/16 can fuzzy match the route 10.10.1.0/24.
    // 
    // - **Complete**: exact match. A match is successful only if the route prefix in the match condition is the same as the route prefix of the route being matched. 
    // 
    //  For example, a policy that defines 10.10.0.0/16 can only exact match the route 10.10.0.0/16.
    shared_ptr<string> cidrMatchMode_ {};
    // The match mode of the Community. Valid values:
    // 
    // - **Include**: fuzzy match. A match is successful if the Community in the match condition overlaps with the Community of the route being matched. 
    // 
    // - **Complete**: exact match. A match is successful only if the Community in the match condition is the same as the Community of the route being matched.
    // 
    // - **Contain**: inclusive match. A match is successful only if the Community of the route being matched contains all the Communities specified in the match condition.
    shared_ptr<string> communityMatchMode_ {};
    // The action to perform on the Community. Valid values:
    // 
    // - **Additive**: adds a Community to the route.
    // 
    // - **Replace**: replaces the existing Community of the route.
    // 
    // This parameter specifies the action to perform after a route matches the condition.
    shared_ptr<string> communityOperateMode_ {};
    // The description of the routing policy.
    // 
    // The description can be empty or 1 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // The list of destination instance types that the route must match. The following instance types are supported:
    // 
    // - **VPC**: VPC instance.
    // 
    // - **VBR**: VBR instance.
    // 
    // - **CCN**: CCN instance.
    // 
    // - **VPN**: IPsec connection.
    // 
    //     > If an IPsec connection or SSL server is bound to a VPN gateway instance and is connected to a transit router instance through the VPC associated with the VPN gateway instance, this parameter does not take effect. This parameter takes effect only when an IPsec connection is directly bound to a transit router instance.
    // 
    // You can specify multiple instance types.
    // 
    // >The destination instance type list takes effect only when the routing policy direction is outbound from the regional gateway and the destination instance types are instance types in the local region.
    shared_ptr<vector<string>> destinationChildInstanceTypes_ {};
    // The prefix list that the route must match.
    // 
    // IP address ranges in the prefix list are in CIDR format. You can specify up to 64 IP address ranges.
    // 
    // Both IPv4 and IPv6 formats are supported.
    shared_ptr<vector<string>> destinationCidrBlocks_ {};
    // The list of destination instance IDs that the route must match. The following types of instance IDs are supported:
    // 
    // - Virtual Private Cloud (VPC) instance ID
    // - Virtual Border Router (VBR) instance ID
    // - Cloud Connect Network (CCN) instance ID
    // - Smart Access Gateway instance ID
    // - IPsec connection ID
    // 
    // You can specify up to 64 instance IDs.
    // 
    // >The destination instance ID list takes effect only when the routing policy direction is outbound from the regional gateway and the destination instance IDs are instance IDs in the local region.
    shared_ptr<vector<string>> destinationInstanceIds_ {};
    // Specifies whether to use the exclude matching mode for the destination instance ID list. Valid values:
    // 
    // - **false** (default): no. A match is successful if the destination instance ID of the route is in the **DestinationInstanceIds.N** list.
    // 
    // - **true**: yes. A match is successful if the destination instance ID of the route is not in the **DestinationInstanceIds.N** list.
    shared_ptr<bool> destinationInstanceIdsReverseMatch_ {};
    // The list of destination region IDs that the route must match. You can specify up to 64 region IDs.
    shared_ptr<vector<string>> destinationRegionIds_ {};
    // The list of destination route table IDs that the route must match. You can specify up to 64 route table IDs.
    // 
    // >The destination route table ID list takes effect only when the routing policy direction is outbound from the regional gateway and the destination route table IDs are route table IDs of network instances in the local region.
    shared_ptr<vector<string>> destinationRouteTableIds_ {};
    // The action to perform after all conditions are matched. Valid values:
    // 
    // - **Permit**: permits the matched routes.
    // 
    // - **Deny**: denies the matched routes.
    // 
    // This parameter is required.
    shared_ptr<string> mapResult_ {};
    // The IP address type that the route must match. Valid values:
    // 
    // - **IPv4**: matches only IPv4 routes.
    // - **IPv6**: matches only IPv6 routes.
    // 
    // This parameter can be left empty, which indicates that all types of routes are matched.
    shared_ptr<string> matchAddressType_ {};
    // The AS path list that the route must match.
    // 
    // You can specify up to 64 AS numbers.
    // 
    // > Only AS SEQUENCE is supported. AS SET, AS CONFED SEQUENCE, and AS CONFED SET are not supported. This means that only AS number lists are supported, not sets or sublists.
    shared_ptr<vector<int64_t>> matchAsns_ {};
    // The Community set that the route must match.
    // 
    // Each Community is in the n:m format, where the value ranges of n and m are **1** to **65535**. Communities must comply with RFC 1997. Large Communities (RFC 8092) are not supported.
    // 
    // You can specify up to 64 Communities.
    // 
    // > Incorrect Community configurations may cause routes to fail to be advertised to on-premises data centers.
    shared_ptr<vector<string>> matchCommunitySet_ {};
    // Policy priority of the next associated routing policy.
    // 
    // - You can set policy priority of the next associated routing policy only when **MapResult** is set to **Permit**. Only routes that are permitted continue to match the next associated routing policy.
    // - The next associated routing policy must have the same region and direction as the current routing policy.
    // - Policy priority of the next associated routing policy must be lower than policy priority of the current routing policy.
    shared_ptr<int32_t> nextPriority_ {};
    // The Community set to be executed.
    // 
    // Each Community is in the n:m format, where the value ranges of n and m are **1** to **65535**. Communities must comply with RFC 1997. Large Communities (RFC 8092) are not supported.
    // 
    // You can specify up to 32 Communities.
    // 
    // > Incorrect Community configurations may cause routes to fail to be advertised to on-premises data centers.
    shared_ptr<vector<string>> operateCommunitySet_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The modified priority of the route.
    // 
    // Valid values: **1** to **100**. The default priority of a route is **50**. A smaller value indicates a higher priority.
    // 
    // This parameter specifies the action to perform after a route matches the condition.
    shared_ptr<int32_t> preference_ {};
    // The AS path that is prepended when the regional gateway receives or publishes route entries.
    // 
    // The requirements for configuring the prepended AS path vary based on the routing policy direction:
    // 
    // - When the direction is inbound to the regional gateway, the match condition must include the source instance ID list and source region, and the source region must be the same as the region to which the routing policy is applied.
    // 
    // - When the direction is outbound from the regional gateway, the match condition must include the destination instance ID list.
    // 
    // 
    // This parameter specifies the action to execute after a route matches the condition. You can specify up to 32 AS numbers.
    shared_ptr<vector<int64_t>> prependAsPath_ {};
    // Policy priority of the routing policy. Valid values: **1** to **100**. A smaller value indicates a higher priority.
    // 
    // > Policy priority of routing policies in the same region and with the same direction must be unique. When a routing policy is executed, the system starts matching conditional statements from the routing policy with the smallest priority value. Specify policy priority based on the expected matching order.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of routing types that the route must match. The following routing types are supported:
    // 
    // - **System**: system routes that are automatically generated by the system.
    // 
    // - **Custom**: custom routes that are manually added by users.
    // 
    // - **BGP**: BGP routes that are propagated through the BGP routing protocol.
    // 
    // You can specify multiple routing types.
    shared_ptr<vector<string>> routeTypes_ {};
    // The list of source instance types that the route must match. The following instance types are supported:
    // 
    // - **VPC**: VPC instance.
    // 
    // - **VBR**: virtual border router instance.
    // 
    // - **CCN**: CCN instance.
    // 
    // - **VPN**: VPN gateway instance or IPsec connection.
    // 
    //     - If an IPsec connection or SSL server is attached to a VPN gateway instance, the VPC associated with the VPN gateway instance must be connected to a transit router instance, and the VPN gateway instance must run the BGP dynamic routing protocol for this parameter to take effect.
    //     - If an IPsec connection is directly attached to a transit router instance, this parameter takes effect.
    // 
    // You can specify multiple instance types.
    shared_ptr<vector<string>> sourceChildInstanceTypes_ {};
    // The list of source instance IDs that the route must match. The following types of instance IDs are supported:
    // 
    // - Virtual Private Cloud (VPC) instance ID
    // - Virtual Border Router (VBR) instance ID
    // - Cloud Connect Network (CCN) instance ID
    // - Smart Access Gateway instance ID
    // - IPsec connection ID
    // 
    // You can specify up to 64 instance IDs.
    shared_ptr<vector<string>> sourceInstanceIds_ {};
    // Specifies whether to use the exclude matching mode for the source instance ID list. Valid values:
    // 
    // - **false** (default): no. A match is successful if the source instance ID of the route is in the **SourceInstanceIds.N** list.
    // 
    // - **true**: yes. A match is successful if the source instance ID of the route is not in the **SourceInstanceIds.N** list.
    shared_ptr<bool> sourceInstanceIdsReverseMatch_ {};
    // The list of source region IDs that the route must match. You can specify up to 64 region IDs.
    // 
    // You can call [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) to query region IDs.
    shared_ptr<vector<string>> sourceRegionIds_ {};
    // The list of source route table IDs that the route must match. You can specify up to 64 route table IDs.
    shared_ptr<vector<string>> sourceRouteTableIds_ {};
    // The route table ID of the transit router.
    // 
    // If you do not specify a route table ID, the routing policy is automatically associated with the default route table of the transit router.
    shared_ptr<string> transitRouterRouteTableId_ {};
    // The direction in which the routing policy is applied. Valid values:
    // 
    // - **RegionIn**: the inbound direction of the regional gateway. Routes are transmitted to the CEN regional gateway.
    // 
    //  For example, a route is advertised from a network instance in the local region to the local regional gateway, or a route is advertised from another region to the local regional gateway.
    // 
    // - **RegionOut**: the outbound direction of the regional gateway. Routes are transmitted from the CEN regional gateway.
    // 
    //  For example, a route is advertised from the local regional gateway to a network instance in the local region, or to a regional gateway in another region.
    // 
    // This parameter is required.
    shared_ptr<string> transmitDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
