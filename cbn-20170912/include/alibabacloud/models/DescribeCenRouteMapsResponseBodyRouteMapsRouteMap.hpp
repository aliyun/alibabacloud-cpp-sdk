// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& obj) { 
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
      DARABONBA_PTR_TO_JSON(Preference, preference_);
      DARABONBA_PTR_TO_JSON(PrependAsPath, prependAsPath_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_TO_JSON(RouteTypes, routeTypes_);
      DARABONBA_PTR_TO_JSON(SourceChildInstanceTypes, sourceChildInstanceTypes_);
      DARABONBA_PTR_TO_JSON(SourceInstanceIds, sourceInstanceIds_);
      DARABONBA_PTR_TO_JSON(SourceInstanceIdsReverseMatch, sourceInstanceIdsReverseMatch_);
      DARABONBA_PTR_TO_JSON(SourceRegionIds, sourceRegionIds_);
      DARABONBA_PTR_TO_JSON(SourceRouteTableIds, sourceRouteTableIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_TO_JSON(TransmitDirection, transmitDirection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Preference, preference_);
      DARABONBA_PTR_FROM_JSON(PrependAsPath, prependAsPath_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_FROM_JSON(RouteTypes, routeTypes_);
      DARABONBA_PTR_FROM_JSON(SourceChildInstanceTypes, sourceChildInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceIds, sourceInstanceIds_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceIdsReverseMatch, sourceInstanceIdsReverseMatch_);
      DARABONBA_PTR_FROM_JSON(SourceRegionIds, sourceRegionIds_);
      DARABONBA_PTR_FROM_JSON(SourceRouteTableIds, sourceRouteTableIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_FROM_JSON(TransmitDirection, transmitDirection_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMap() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMap(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMap &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMap(DescribeCenRouteMapsResponseBodyRouteMapsRouteMap &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMap() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMap &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPathMatchMode_ != nullptr
        && this->cenId_ != nullptr && this->cenRegionId_ != nullptr && this->cidrMatchMode_ != nullptr && this->communityMatchMode_ != nullptr && this->communityOperateMode_ != nullptr
        && this->description_ != nullptr && this->destinationChildInstanceTypes_ != nullptr && this->destinationCidrBlocks_ != nullptr && this->destinationInstanceIds_ != nullptr && this->destinationInstanceIdsReverseMatch_ != nullptr
        && this->destinationRegionIds_ != nullptr && this->destinationRouteTableIds_ != nullptr && this->mapResult_ != nullptr && this->matchAddressType_ != nullptr && this->matchAsns_ != nullptr
        && this->matchCommunitySet_ != nullptr && this->nextPriority_ != nullptr && this->operateCommunitySet_ != nullptr && this->preference_ != nullptr && this->prependAsPath_ != nullptr
        && this->priority_ != nullptr && this->routeMapId_ != nullptr && this->routeTypes_ != nullptr && this->sourceChildInstanceTypes_ != nullptr && this->sourceInstanceIds_ != nullptr
        && this->sourceInstanceIdsReverseMatch_ != nullptr && this->sourceRegionIds_ != nullptr && this->sourceRouteTableIds_ != nullptr && this->status_ != nullptr && this->transitRouterRouteTableId_ != nullptr
        && this->transmitDirection_ != nullptr; };
    // asPathMatchMode Field Functions 
    bool hasAsPathMatchMode() const { return this->asPathMatchMode_ != nullptr;};
    void deleteAsPathMatchMode() { this->asPathMatchMode_ = nullptr;};
    inline string asPathMatchMode() const { DARABONBA_PTR_GET_DEFAULT(asPathMatchMode_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setAsPathMatchMode(string asPathMatchMode) { DARABONBA_PTR_SET_VALUE(asPathMatchMode_, asPathMatchMode) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenRegionId Field Functions 
    bool hasCenRegionId() const { return this->cenRegionId_ != nullptr;};
    void deleteCenRegionId() { this->cenRegionId_ = nullptr;};
    inline string cenRegionId() const { DARABONBA_PTR_GET_DEFAULT(cenRegionId_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setCenRegionId(string cenRegionId) { DARABONBA_PTR_SET_VALUE(cenRegionId_, cenRegionId) };


    // cidrMatchMode Field Functions 
    bool hasCidrMatchMode() const { return this->cidrMatchMode_ != nullptr;};
    void deleteCidrMatchMode() { this->cidrMatchMode_ = nullptr;};
    inline string cidrMatchMode() const { DARABONBA_PTR_GET_DEFAULT(cidrMatchMode_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setCidrMatchMode(string cidrMatchMode) { DARABONBA_PTR_SET_VALUE(cidrMatchMode_, cidrMatchMode) };


    // communityMatchMode Field Functions 
    bool hasCommunityMatchMode() const { return this->communityMatchMode_ != nullptr;};
    void deleteCommunityMatchMode() { this->communityMatchMode_ = nullptr;};
    inline string communityMatchMode() const { DARABONBA_PTR_GET_DEFAULT(communityMatchMode_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setCommunityMatchMode(string communityMatchMode) { DARABONBA_PTR_SET_VALUE(communityMatchMode_, communityMatchMode) };


    // communityOperateMode Field Functions 
    bool hasCommunityOperateMode() const { return this->communityOperateMode_ != nullptr;};
    void deleteCommunityOperateMode() { this->communityOperateMode_ = nullptr;};
    inline string communityOperateMode() const { DARABONBA_PTR_GET_DEFAULT(communityOperateMode_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setCommunityOperateMode(string communityOperateMode) { DARABONBA_PTR_SET_VALUE(communityOperateMode_, communityOperateMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationChildInstanceTypes Field Functions 
    bool hasDestinationChildInstanceTypes() const { return this->destinationChildInstanceTypes_ != nullptr;};
    void deleteDestinationChildInstanceTypes() { this->destinationChildInstanceTypes_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes & destinationChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(destinationChildInstanceTypes_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes destinationChildInstanceTypes() { DARABONBA_PTR_GET(destinationChildInstanceTypes_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationChildInstanceTypes(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes & destinationChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationChildInstanceTypes(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes && destinationChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };


    // destinationCidrBlocks Field Functions 
    bool hasDestinationCidrBlocks() const { return this->destinationCidrBlocks_ != nullptr;};
    void deleteDestinationCidrBlocks() { this->destinationCidrBlocks_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks & destinationCidrBlocks() const { DARABONBA_PTR_GET_CONST(destinationCidrBlocks_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks destinationCidrBlocks() { DARABONBA_PTR_GET(destinationCidrBlocks_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationCidrBlocks(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks & destinationCidrBlocks) { DARABONBA_PTR_SET_VALUE(destinationCidrBlocks_, destinationCidrBlocks) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationCidrBlocks(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks && destinationCidrBlocks) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlocks_, destinationCidrBlocks) };


    // destinationInstanceIds Field Functions 
    bool hasDestinationInstanceIds() const { return this->destinationInstanceIds_ != nullptr;};
    void deleteDestinationInstanceIds() { this->destinationInstanceIds_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds & destinationInstanceIds() const { DARABONBA_PTR_GET_CONST(destinationInstanceIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds destinationInstanceIds() { DARABONBA_PTR_GET(destinationInstanceIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationInstanceIds(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds & destinationInstanceIds) { DARABONBA_PTR_SET_VALUE(destinationInstanceIds_, destinationInstanceIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationInstanceIds(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds && destinationInstanceIds) { DARABONBA_PTR_SET_RVALUE(destinationInstanceIds_, destinationInstanceIds) };


    // destinationInstanceIdsReverseMatch Field Functions 
    bool hasDestinationInstanceIdsReverseMatch() const { return this->destinationInstanceIdsReverseMatch_ != nullptr;};
    void deleteDestinationInstanceIdsReverseMatch() { this->destinationInstanceIdsReverseMatch_ = nullptr;};
    inline bool destinationInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceIdsReverseMatch_, false) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(destinationInstanceIdsReverseMatch_, destinationInstanceIdsReverseMatch) };


    // destinationRegionIds Field Functions 
    bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
    void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds & destinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds destinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationRegionIds(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationRegionIds(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


    // destinationRouteTableIds Field Functions 
    bool hasDestinationRouteTableIds() const { return this->destinationRouteTableIds_ != nullptr;};
    void deleteDestinationRouteTableIds() { this->destinationRouteTableIds_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds & destinationRouteTableIds() const { DARABONBA_PTR_GET_CONST(destinationRouteTableIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds destinationRouteTableIds() { DARABONBA_PTR_GET(destinationRouteTableIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationRouteTableIds(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds & destinationRouteTableIds) { DARABONBA_PTR_SET_VALUE(destinationRouteTableIds_, destinationRouteTableIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setDestinationRouteTableIds(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds && destinationRouteTableIds) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableIds_, destinationRouteTableIds) };


    // mapResult Field Functions 
    bool hasMapResult() const { return this->mapResult_ != nullptr;};
    void deleteMapResult() { this->mapResult_ = nullptr;};
    inline string mapResult() const { DARABONBA_PTR_GET_DEFAULT(mapResult_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setMapResult(string mapResult) { DARABONBA_PTR_SET_VALUE(mapResult_, mapResult) };


    // matchAddressType Field Functions 
    bool hasMatchAddressType() const { return this->matchAddressType_ != nullptr;};
    void deleteMatchAddressType() { this->matchAddressType_ = nullptr;};
    inline string matchAddressType() const { DARABONBA_PTR_GET_DEFAULT(matchAddressType_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setMatchAddressType(string matchAddressType) { DARABONBA_PTR_SET_VALUE(matchAddressType_, matchAddressType) };


    // matchAsns Field Functions 
    bool hasMatchAsns() const { return this->matchAsns_ != nullptr;};
    void deleteMatchAsns() { this->matchAsns_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns & matchAsns() const { DARABONBA_PTR_GET_CONST(matchAsns_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns matchAsns() { DARABONBA_PTR_GET(matchAsns_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setMatchAsns(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns & matchAsns) { DARABONBA_PTR_SET_VALUE(matchAsns_, matchAsns) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setMatchAsns(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns && matchAsns) { DARABONBA_PTR_SET_RVALUE(matchAsns_, matchAsns) };


    // matchCommunitySet Field Functions 
    bool hasMatchCommunitySet() const { return this->matchCommunitySet_ != nullptr;};
    void deleteMatchCommunitySet() { this->matchCommunitySet_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet & matchCommunitySet() const { DARABONBA_PTR_GET_CONST(matchCommunitySet_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet matchCommunitySet() { DARABONBA_PTR_GET(matchCommunitySet_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setMatchCommunitySet(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet & matchCommunitySet) { DARABONBA_PTR_SET_VALUE(matchCommunitySet_, matchCommunitySet) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setMatchCommunitySet(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet && matchCommunitySet) { DARABONBA_PTR_SET_RVALUE(matchCommunitySet_, matchCommunitySet) };


    // nextPriority Field Functions 
    bool hasNextPriority() const { return this->nextPriority_ != nullptr;};
    void deleteNextPriority() { this->nextPriority_ = nullptr;};
    inline int32_t nextPriority() const { DARABONBA_PTR_GET_DEFAULT(nextPriority_, 0) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setNextPriority(int32_t nextPriority) { DARABONBA_PTR_SET_VALUE(nextPriority_, nextPriority) };


    // operateCommunitySet Field Functions 
    bool hasOperateCommunitySet() const { return this->operateCommunitySet_ != nullptr;};
    void deleteOperateCommunitySet() { this->operateCommunitySet_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet & operateCommunitySet() const { DARABONBA_PTR_GET_CONST(operateCommunitySet_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet operateCommunitySet() { DARABONBA_PTR_GET(operateCommunitySet_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setOperateCommunitySet(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet & operateCommunitySet) { DARABONBA_PTR_SET_VALUE(operateCommunitySet_, operateCommunitySet) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setOperateCommunitySet(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet && operateCommunitySet) { DARABONBA_PTR_SET_RVALUE(operateCommunitySet_, operateCommunitySet) };


    // preference Field Functions 
    bool hasPreference() const { return this->preference_ != nullptr;};
    void deletePreference() { this->preference_ = nullptr;};
    inline int32_t preference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


    // prependAsPath Field Functions 
    bool hasPrependAsPath() const { return this->prependAsPath_ != nullptr;};
    void deletePrependAsPath() { this->prependAsPath_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath & prependAsPath() const { DARABONBA_PTR_GET_CONST(prependAsPath_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath prependAsPath() { DARABONBA_PTR_GET(prependAsPath_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setPrependAsPath(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath & prependAsPath) { DARABONBA_PTR_SET_VALUE(prependAsPath_, prependAsPath) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setPrependAsPath(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath && prependAsPath) { DARABONBA_PTR_SET_RVALUE(prependAsPath_, prependAsPath) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string routeMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


    // routeTypes Field Functions 
    bool hasRouteTypes() const { return this->routeTypes_ != nullptr;};
    void deleteRouteTypes() { this->routeTypes_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes & routeTypes() const { DARABONBA_PTR_GET_CONST(routeTypes_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes routeTypes() { DARABONBA_PTR_GET(routeTypes_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setRouteTypes(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes & routeTypes) { DARABONBA_PTR_SET_VALUE(routeTypes_, routeTypes) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setRouteTypes(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes && routeTypes) { DARABONBA_PTR_SET_RVALUE(routeTypes_, routeTypes) };


    // sourceChildInstanceTypes Field Functions 
    bool hasSourceChildInstanceTypes() const { return this->sourceChildInstanceTypes_ != nullptr;};
    void deleteSourceChildInstanceTypes() { this->sourceChildInstanceTypes_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes & sourceChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(sourceChildInstanceTypes_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes sourceChildInstanceTypes() { DARABONBA_PTR_GET(sourceChildInstanceTypes_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceChildInstanceTypes(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes & sourceChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceChildInstanceTypes(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes && sourceChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };


    // sourceInstanceIds Field Functions 
    bool hasSourceInstanceIds() const { return this->sourceInstanceIds_ != nullptr;};
    void deleteSourceInstanceIds() { this->sourceInstanceIds_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds & sourceInstanceIds() const { DARABONBA_PTR_GET_CONST(sourceInstanceIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds sourceInstanceIds() { DARABONBA_PTR_GET(sourceInstanceIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceInstanceIds(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds & sourceInstanceIds) { DARABONBA_PTR_SET_VALUE(sourceInstanceIds_, sourceInstanceIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceInstanceIds(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds && sourceInstanceIds) { DARABONBA_PTR_SET_RVALUE(sourceInstanceIds_, sourceInstanceIds) };


    // sourceInstanceIdsReverseMatch Field Functions 
    bool hasSourceInstanceIdsReverseMatch() const { return this->sourceInstanceIdsReverseMatch_ != nullptr;};
    void deleteSourceInstanceIdsReverseMatch() { this->sourceInstanceIdsReverseMatch_ = nullptr;};
    inline bool sourceInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceIdsReverseMatch_, false) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(sourceInstanceIdsReverseMatch_, sourceInstanceIdsReverseMatch) };


    // sourceRegionIds Field Functions 
    bool hasSourceRegionIds() const { return this->sourceRegionIds_ != nullptr;};
    void deleteSourceRegionIds() { this->sourceRegionIds_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds & sourceRegionIds() const { DARABONBA_PTR_GET_CONST(sourceRegionIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds sourceRegionIds() { DARABONBA_PTR_GET(sourceRegionIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceRegionIds(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds & sourceRegionIds) { DARABONBA_PTR_SET_VALUE(sourceRegionIds_, sourceRegionIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceRegionIds(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds && sourceRegionIds) { DARABONBA_PTR_SET_RVALUE(sourceRegionIds_, sourceRegionIds) };


    // sourceRouteTableIds Field Functions 
    bool hasSourceRouteTableIds() const { return this->sourceRouteTableIds_ != nullptr;};
    void deleteSourceRouteTableIds() { this->sourceRouteTableIds_ = nullptr;};
    inline const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds & sourceRouteTableIds() const { DARABONBA_PTR_GET_CONST(sourceRouteTableIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds) };
    inline Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds sourceRouteTableIds() { DARABONBA_PTR_GET(sourceRouteTableIds_, Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceRouteTableIds(const Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds & sourceRouteTableIds) { DARABONBA_PTR_SET_VALUE(sourceRouteTableIds_, sourceRouteTableIds) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setSourceRouteTableIds(Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds && sourceRouteTableIds) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableIds_, sourceRouteTableIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    // transmitDirection Field Functions 
    bool hasTransmitDirection() const { return this->transmitDirection_ != nullptr;};
    void deleteTransmitDirection() { this->transmitDirection_ = nullptr;};
    inline string transmitDirection() const { DARABONBA_PTR_GET_DEFAULT(transmitDirection_, "") };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMap& setTransmitDirection(string transmitDirection) { DARABONBA_PTR_SET_VALUE(transmitDirection_, transmitDirection) };


  protected:
    // The match method that is used to match routes based on the AS path.
    // 
    // *   **Include**: fuzzy match. A route is a match if the AS path of the route overlaps with the AS path specified in the match condition.
    // *   **Complete**: exact match. A route is a match only if the AS path of the route is the same as an AS path specified in the match condition.
    std::shared_ptr<string> asPathMatchMode_ = nullptr;
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // The region ID of the routing policy.
    std::shared_ptr<string> cenRegionId_ = nullptr;
    // The match method that is used to evaluate routes based on the prefix. Valid values:
    // 
    // *   **Include**: fuzzy match. A route is a match if the route prefix is included in the match conditions.
    // 
    // For example, if you set the match condition to 10.10.0.0/16 and fuzzy match is applied, the route whose prefix is 10.10.1.0/24 meets the match condition.
    // 
    // *   **Complete**: exact match. A route is a match only if the route prefix is the same as the prefix specified in the match condition.
    // 
    // For example, if you set the match condition to 10.10.0.0/16 and exact match is enabled, a route is a match only if the prefix is 10.10.0.0/16.
    std::shared_ptr<string> cidrMatchMode_ = nullptr;
    // The match method that is used to match routes against the community.
    // 
    // *   **Include**: fuzzy match. A route is a match if the community of the route overlaps with the community specified in the match condition.
    // *   **Complete**: exact match. A route meets the match condition only if the community of the route is the same as the community specified in the match condition.
    std::shared_ptr<string> communityMatchMode_ = nullptr;
    // The action that is performed on the community of the route.
    // 
    // *   **Additive**: adds the community to the route.
    // *   **Replace**: replaces the original community of the route.
    // 
    // This parameter specifies the action to be performed when a route meets the match condition.
    std::shared_ptr<string> communityOperateMode_ = nullptr;
    // The description of the routing policy.
    std::shared_ptr<string> description_ = nullptr;
    // The types of destination network instances to which the routes belong.
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **CCN**
    // *   **VPN**
    // 
    // >  The destination route tables take effect only if the routing policy is applied to the egress gateway direction, and the type of the destination route tables is the same as that of the network instance in the current region.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes> destinationChildInstanceTypes_ = nullptr;
    // The prefix list against which routes are matched.
    // 
    // IPv4 and IPv6 addresses are supported.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks> destinationCidrBlocks_ = nullptr;
    // The IDs of the destination network instances to which the routes point.
    // 
    // >  The destination route tables take effect only if the routing policy is applied to the egress gateway direction, and the ID the destination instance is the same as that of the network instance in the current region.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds> destinationInstanceIds_ = nullptr;
    // Indicates whether the destination network instance IDs are excluded.
    // 
    // *   **false** (default): A route is a match if its destination network instance ID is in the list specified by **DestinationInstanceIds.N**.
    // *   **true**: A route is a match if its destination network instance ID is not in the list specified by **DestinationInstanceIds.N**.
    std::shared_ptr<bool> destinationInstanceIdsReverseMatch_ = nullptr;
    // The IDs of the destination regions for the routing policy.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds> destinationRegionIds_ = nullptr;
    // The IDs of the destination route tables to which the routes belong. You can enter at most 32 route table IDs.
    // 
    // >  The destination route tables take effect only if the routing policy is applied to the egress gateway direction, and the destination route table IDs are in the current region.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds> destinationRouteTableIds_ = nullptr;
    // The action performed on a route that meets the match conditions.
    // 
    // *   **Permit**: the route is permitted.
    // *   **Deny**: the route is denied.
    std::shared_ptr<string> mapResult_ = nullptr;
    // The type of IP address to be matched against the match condition. Valid values:
    // 
    // *   **IPv4**: IPv4 addresses
    // *   **IPv6**: IPv6 addresses
    // *   If no value is returned, both IPv4 and IPv6 addresses are matched against the match condition.
    std::shared_ptr<string> matchAddressType_ = nullptr;
    // The AS paths against which routes are matched.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns> matchAsns_ = nullptr;
    // The community set against which routes are matched.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet> matchCommunitySet_ = nullptr;
    // The priority of the routing policy that you want to associate with the current one.
    std::shared_ptr<int32_t> nextPriority_ = nullptr;
    // The community set on which actions are performed.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet> operateCommunitySet_ = nullptr;
    // The new priority of the route.
    // 
    // A smaller value indicates a higher priority.
    // 
    // This parameter indicates the action to be performed when a route meets the match condition.
    std::shared_ptr<int32_t> preference_ = nullptr;
    // The AS paths that are prepended by using an action statement when regional gateways receive or advertise routes.
    // 
    // This parameter indicates the action to be performed when a route meets the match condition.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath> prependAsPath_ = nullptr;
    // The priority of the routing policy. A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The routing policy ID.
    std::shared_ptr<string> routeMapId_ = nullptr;
    // The type of route that is compared. Valid values:
    // 
    // *   **System**: system routes that are automatically generated by the system.
    // *   **Custom**: custom routes that are manually added.
    // *   **BGP**: routes that are advertised over BGP.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes> routeTypes_ = nullptr;
    // The types of source network instances to which the routes belong.
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **CCN**
    // *   **VPN**
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes> sourceChildInstanceTypes_ = nullptr;
    // The IDs of the source network instances to which the routes belong.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds> sourceInstanceIds_ = nullptr;
    // Indicates whether the source network instance IDs are excluded.
    // 
    // *   **false** (default): A route is a match if its source network instance ID is in the list specified by **SourceInstanceIds.N**.
    // *   **true**: A route is match if its source network instance ID is not in the list specified by **SourceInstanceIds.N**.
    std::shared_ptr<bool> sourceInstanceIdsReverseMatch_ = nullptr;
    // The IDs of the source regions to which the routes belong.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds> sourceRegionIds_ = nullptr;
    // The IDs of the source route tables to which the routes belong.
    std::shared_ptr<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds> sourceRouteTableIds_ = nullptr;
    // The status of the routing policy. Valid values:
    // 
    // *   **Creating**
    // *   **Active**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The route table ID of the transit router with which the routing policy is associated.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
    // The direction in which the routing policy is applied.
    std::shared_ptr<string> transmitDirection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
