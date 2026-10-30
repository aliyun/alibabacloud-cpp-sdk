// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEMAPRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEMAPRULEREQUEST_HPP_
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
  class CreateRouteMapRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteMapRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MatchConditions, matchConditions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_TO_JSON(SetActions, setActions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteMapRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MatchConditions, matchConditions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_FROM_JSON(SetActions, setActions_);
    };
    CreateRouteMapRuleRequest() = default ;
    CreateRouteMapRuleRequest(const CreateRouteMapRuleRequest &) = default ;
    CreateRouteMapRuleRequest(CreateRouteMapRuleRequest &&) = default ;
    CreateRouteMapRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteMapRuleRequest() = default ;
    CreateRouteMapRuleRequest& operator=(const CreateRouteMapRuleRequest &) = default ;
    CreateRouteMapRuleRequest& operator=(CreateRouteMapRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SetActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SetActions& obj) { 
        DARABONBA_PTR_TO_JSON(AsPathPrepend, asPathPrepend_);
        DARABONBA_PTR_TO_JSON(AsPathReplace, asPathReplace_);
        DARABONBA_PTR_TO_JSON(CommunityAdd, communityAdd_);
        DARABONBA_PTR_TO_JSON(CommunityReplace, communityReplace_);
        DARABONBA_PTR_TO_JSON(NextPriority, nextPriority_);
        DARABONBA_PTR_TO_JSON(RouteAction, routeAction_);
      };
      friend void from_json(const Darabonba::Json& j, SetActions& obj) { 
        DARABONBA_PTR_FROM_JSON(AsPathPrepend, asPathPrepend_);
        DARABONBA_PTR_FROM_JSON(AsPathReplace, asPathReplace_);
        DARABONBA_PTR_FROM_JSON(CommunityAdd, communityAdd_);
        DARABONBA_PTR_FROM_JSON(CommunityReplace, communityReplace_);
        DARABONBA_PTR_FROM_JSON(NextPriority, nextPriority_);
        DARABONBA_PTR_FROM_JSON(RouteAction, routeAction_);
      };
      SetActions() = default ;
      SetActions(const SetActions &) = default ;
      SetActions(SetActions &&) = default ;
      SetActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SetActions() = default ;
      SetActions& operator=(const SetActions &) = default ;
      SetActions& operator=(SetActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asPathPrepend_ == nullptr
        && this->asPathReplace_ == nullptr && this->communityAdd_ == nullptr && this->communityReplace_ == nullptr && this->nextPriority_ == nullptr && this->routeAction_ == nullptr; };
      // asPathPrepend Field Functions 
      bool hasAsPathPrepend() const { return this->asPathPrepend_ != nullptr;};
      void deleteAsPathPrepend() { this->asPathPrepend_ = nullptr;};
      inline const vector<int64_t> & getAsPathPrepend() const { DARABONBA_PTR_GET_CONST(asPathPrepend_, vector<int64_t>) };
      inline vector<int64_t> getAsPathPrepend() { DARABONBA_PTR_GET(asPathPrepend_, vector<int64_t>) };
      inline SetActions& setAsPathPrepend(const vector<int64_t> & asPathPrepend) { DARABONBA_PTR_SET_VALUE(asPathPrepend_, asPathPrepend) };
      inline SetActions& setAsPathPrepend(vector<int64_t> && asPathPrepend) { DARABONBA_PTR_SET_RVALUE(asPathPrepend_, asPathPrepend) };


      // asPathReplace Field Functions 
      bool hasAsPathReplace() const { return this->asPathReplace_ != nullptr;};
      void deleteAsPathReplace() { this->asPathReplace_ = nullptr;};
      inline const vector<int64_t> & getAsPathReplace() const { DARABONBA_PTR_GET_CONST(asPathReplace_, vector<int64_t>) };
      inline vector<int64_t> getAsPathReplace() { DARABONBA_PTR_GET(asPathReplace_, vector<int64_t>) };
      inline SetActions& setAsPathReplace(const vector<int64_t> & asPathReplace) { DARABONBA_PTR_SET_VALUE(asPathReplace_, asPathReplace) };
      inline SetActions& setAsPathReplace(vector<int64_t> && asPathReplace) { DARABONBA_PTR_SET_RVALUE(asPathReplace_, asPathReplace) };


      // communityAdd Field Functions 
      bool hasCommunityAdd() const { return this->communityAdd_ != nullptr;};
      void deleteCommunityAdd() { this->communityAdd_ = nullptr;};
      inline const vector<string> & getCommunityAdd() const { DARABONBA_PTR_GET_CONST(communityAdd_, vector<string>) };
      inline vector<string> getCommunityAdd() { DARABONBA_PTR_GET(communityAdd_, vector<string>) };
      inline SetActions& setCommunityAdd(const vector<string> & communityAdd) { DARABONBA_PTR_SET_VALUE(communityAdd_, communityAdd) };
      inline SetActions& setCommunityAdd(vector<string> && communityAdd) { DARABONBA_PTR_SET_RVALUE(communityAdd_, communityAdd) };


      // communityReplace Field Functions 
      bool hasCommunityReplace() const { return this->communityReplace_ != nullptr;};
      void deleteCommunityReplace() { this->communityReplace_ = nullptr;};
      inline const vector<string> & getCommunityReplace() const { DARABONBA_PTR_GET_CONST(communityReplace_, vector<string>) };
      inline vector<string> getCommunityReplace() { DARABONBA_PTR_GET(communityReplace_, vector<string>) };
      inline SetActions& setCommunityReplace(const vector<string> & communityReplace) { DARABONBA_PTR_SET_VALUE(communityReplace_, communityReplace) };
      inline SetActions& setCommunityReplace(vector<string> && communityReplace) { DARABONBA_PTR_SET_RVALUE(communityReplace_, communityReplace) };


      // nextPriority Field Functions 
      bool hasNextPriority() const { return this->nextPriority_ != nullptr;};
      void deleteNextPriority() { this->nextPriority_ = nullptr;};
      inline int64_t getNextPriority() const { DARABONBA_PTR_GET_DEFAULT(nextPriority_, 0L) };
      inline SetActions& setNextPriority(int64_t nextPriority) { DARABONBA_PTR_SET_VALUE(nextPriority_, nextPriority) };


      // routeAction Field Functions 
      bool hasRouteAction() const { return this->routeAction_ != nullptr;};
      void deleteRouteAction() { this->routeAction_ = nullptr;};
      inline string getRouteAction() const { DARABONBA_PTR_GET_DEFAULT(routeAction_, "") };
      inline SetActions& setRouteAction(string routeAction) { DARABONBA_PTR_SET_VALUE(routeAction_, routeAction) };


    protected:
      // The AS path to prepend when the regional gateway receives a route or executes a publish route entry. You can specify up to 64 AS numbers.
      // 
      // This parameter is mutually exclusive with **AsPathReplace**. You cannot specify both parameters at the same time.
      // 
      // This parameter specifies the action to execute after a route meets the match conditions.
      shared_ptr<vector<int64_t>> asPathPrepend_ {};
      // The AS path to replace when the regional gateway receives a route or executes a publish route entry. The original AS path of the route is replaced with the list of AS numbers specified in this parameter. You can specify up to 64 AS numbers.
      // 
      // This parameter is mutually exclusive with **AsPathPrepend**. You cannot specify both parameters at the same time.
      // 
      // This parameter specifies the action to execute after a route meets the match conditions.
      shared_ptr<vector<int64_t>> asPathReplace_ {};
      // The community set to add to the route. You can specify up to 64 communities.
      // 
      // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
      // 
      // This parameter is mutually exclusive with **CommunityReplace**. You cannot specify both parameters at the same time.
      // 
      // This parameter specifies the action to execute after a route meets the match conditions.
      // 
      // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
      shared_ptr<vector<string>> communityAdd_ {};
      // The community set to replace the original community of the route. You can specify up to 64 communities.
      // 
      // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
      // 
      // This parameter is mutually exclusive with **CommunityAdd**. You cannot specify both parameters at the same time.
      // 
      // This parameter specifies the action to execute after a route meets the match conditions.
      // 
      // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
      shared_ptr<vector<string>> communityReplace_ {};
      // Policy priority of the associated next route map rule.
      // 
      // - You can set policy priority of the associated route map rule only when **RouteAction** is set to **Permit**. Only the routes that are permitted continue to match the associated next route map rule.
      // - Policy priority of the associated next route map rule must be lower than policy priority of the current route map rule.
      shared_ptr<int64_t> nextPriority_ {};
      // The policy action after all conditions are met. Valid values:
      // 
      // - **Permit**: Permits the matched routes.
      // 
      // - **Deny**: Denies the matched routes.
      shared_ptr<string> routeAction_ {};
    };

    class MatchConditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchConditions& obj) { 
        DARABONBA_PTR_TO_JSON(AddressPrefixesInclude, addressPrefixesInclude_);
        DARABONBA_PTR_TO_JSON(AddressPrefixesMatch, addressPrefixesMatch_);
        DARABONBA_PTR_TO_JSON(AsPathsInclude, asPathsInclude_);
        DARABONBA_PTR_TO_JSON(AsPathsMatch, asPathsMatch_);
        DARABONBA_PTR_TO_JSON(CommunitySetInclude, communitySetInclude_);
        DARABONBA_PTR_TO_JSON(CommunitySetMatch, communitySetMatch_);
        DARABONBA_PTR_TO_JSON(DestinationInstanceIds, destinationInstanceIds_);
        DARABONBA_PTR_TO_JSON(DestinationInstanceIdsReverseMatch, destinationInstanceIdsReverseMatch_);
        DARABONBA_PTR_TO_JSON(DestinationInstanceTypes, destinationInstanceTypes_);
        DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIds_);
        DARABONBA_PTR_TO_JSON(DestinationRouteTableIds, destinationRouteTableIds_);
        DARABONBA_PTR_TO_JSON(MatchAddressType, matchAddressType_);
        DARABONBA_PTR_TO_JSON(RouteTypes, routeTypes_);
        DARABONBA_PTR_TO_JSON(SourceInstanceIds, sourceInstanceIds_);
        DARABONBA_PTR_TO_JSON(SourceInstanceIdsReverseMatch, sourceInstanceIdsReverseMatch_);
        DARABONBA_PTR_TO_JSON(SourceInstanceTypes, sourceInstanceTypes_);
        DARABONBA_PTR_TO_JSON(SourceRegionIds, sourceRegionIds_);
        DARABONBA_PTR_TO_JSON(SourceRouteTableIds, sourceRouteTableIds_);
      };
      friend void from_json(const Darabonba::Json& j, MatchConditions& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressPrefixesInclude, addressPrefixesInclude_);
        DARABONBA_PTR_FROM_JSON(AddressPrefixesMatch, addressPrefixesMatch_);
        DARABONBA_PTR_FROM_JSON(AsPathsInclude, asPathsInclude_);
        DARABONBA_PTR_FROM_JSON(AsPathsMatch, asPathsMatch_);
        DARABONBA_PTR_FROM_JSON(CommunitySetInclude, communitySetInclude_);
        DARABONBA_PTR_FROM_JSON(CommunitySetMatch, communitySetMatch_);
        DARABONBA_PTR_FROM_JSON(DestinationInstanceIds, destinationInstanceIds_);
        DARABONBA_PTR_FROM_JSON(DestinationInstanceIdsReverseMatch, destinationInstanceIdsReverseMatch_);
        DARABONBA_PTR_FROM_JSON(DestinationInstanceTypes, destinationInstanceTypes_);
        DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIds_);
        DARABONBA_PTR_FROM_JSON(DestinationRouteTableIds, destinationRouteTableIds_);
        DARABONBA_PTR_FROM_JSON(MatchAddressType, matchAddressType_);
        DARABONBA_PTR_FROM_JSON(RouteTypes, routeTypes_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceIds, sourceInstanceIds_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceIdsReverseMatch, sourceInstanceIdsReverseMatch_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceTypes, sourceInstanceTypes_);
        DARABONBA_PTR_FROM_JSON(SourceRegionIds, sourceRegionIds_);
        DARABONBA_PTR_FROM_JSON(SourceRouteTableIds, sourceRouteTableIds_);
      };
      MatchConditions() = default ;
      MatchConditions(const MatchConditions &) = default ;
      MatchConditions(MatchConditions &&) = default ;
      MatchConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchConditions() = default ;
      MatchConditions& operator=(const MatchConditions &) = default ;
      MatchConditions& operator=(MatchConditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressPrefixesInclude_ == nullptr
        && this->addressPrefixesMatch_ == nullptr && this->asPathsInclude_ == nullptr && this->asPathsMatch_ == nullptr && this->communitySetInclude_ == nullptr && this->communitySetMatch_ == nullptr
        && this->destinationInstanceIds_ == nullptr && this->destinationInstanceIdsReverseMatch_ == nullptr && this->destinationInstanceTypes_ == nullptr && this->destinationRegionIds_ == nullptr && this->destinationRouteTableIds_ == nullptr
        && this->matchAddressType_ == nullptr && this->routeTypes_ == nullptr && this->sourceInstanceIds_ == nullptr && this->sourceInstanceIdsReverseMatch_ == nullptr && this->sourceInstanceTypes_ == nullptr
        && this->sourceRegionIds_ == nullptr && this->sourceRouteTableIds_ == nullptr; };
      // addressPrefixesInclude Field Functions 
      bool hasAddressPrefixesInclude() const { return this->addressPrefixesInclude_ != nullptr;};
      void deleteAddressPrefixesInclude() { this->addressPrefixesInclude_ = nullptr;};
      inline const vector<string> & getAddressPrefixesInclude() const { DARABONBA_PTR_GET_CONST(addressPrefixesInclude_, vector<string>) };
      inline vector<string> getAddressPrefixesInclude() { DARABONBA_PTR_GET(addressPrefixesInclude_, vector<string>) };
      inline MatchConditions& setAddressPrefixesInclude(const vector<string> & addressPrefixesInclude) { DARABONBA_PTR_SET_VALUE(addressPrefixesInclude_, addressPrefixesInclude) };
      inline MatchConditions& setAddressPrefixesInclude(vector<string> && addressPrefixesInclude) { DARABONBA_PTR_SET_RVALUE(addressPrefixesInclude_, addressPrefixesInclude) };


      // addressPrefixesMatch Field Functions 
      bool hasAddressPrefixesMatch() const { return this->addressPrefixesMatch_ != nullptr;};
      void deleteAddressPrefixesMatch() { this->addressPrefixesMatch_ = nullptr;};
      inline const vector<string> & getAddressPrefixesMatch() const { DARABONBA_PTR_GET_CONST(addressPrefixesMatch_, vector<string>) };
      inline vector<string> getAddressPrefixesMatch() { DARABONBA_PTR_GET(addressPrefixesMatch_, vector<string>) };
      inline MatchConditions& setAddressPrefixesMatch(const vector<string> & addressPrefixesMatch) { DARABONBA_PTR_SET_VALUE(addressPrefixesMatch_, addressPrefixesMatch) };
      inline MatchConditions& setAddressPrefixesMatch(vector<string> && addressPrefixesMatch) { DARABONBA_PTR_SET_RVALUE(addressPrefixesMatch_, addressPrefixesMatch) };


      // asPathsInclude Field Functions 
      bool hasAsPathsInclude() const { return this->asPathsInclude_ != nullptr;};
      void deleteAsPathsInclude() { this->asPathsInclude_ = nullptr;};
      inline const vector<int64_t> & getAsPathsInclude() const { DARABONBA_PTR_GET_CONST(asPathsInclude_, vector<int64_t>) };
      inline vector<int64_t> getAsPathsInclude() { DARABONBA_PTR_GET(asPathsInclude_, vector<int64_t>) };
      inline MatchConditions& setAsPathsInclude(const vector<int64_t> & asPathsInclude) { DARABONBA_PTR_SET_VALUE(asPathsInclude_, asPathsInclude) };
      inline MatchConditions& setAsPathsInclude(vector<int64_t> && asPathsInclude) { DARABONBA_PTR_SET_RVALUE(asPathsInclude_, asPathsInclude) };


      // asPathsMatch Field Functions 
      bool hasAsPathsMatch() const { return this->asPathsMatch_ != nullptr;};
      void deleteAsPathsMatch() { this->asPathsMatch_ = nullptr;};
      inline const vector<int64_t> & getAsPathsMatch() const { DARABONBA_PTR_GET_CONST(asPathsMatch_, vector<int64_t>) };
      inline vector<int64_t> getAsPathsMatch() { DARABONBA_PTR_GET(asPathsMatch_, vector<int64_t>) };
      inline MatchConditions& setAsPathsMatch(const vector<int64_t> & asPathsMatch) { DARABONBA_PTR_SET_VALUE(asPathsMatch_, asPathsMatch) };
      inline MatchConditions& setAsPathsMatch(vector<int64_t> && asPathsMatch) { DARABONBA_PTR_SET_RVALUE(asPathsMatch_, asPathsMatch) };


      // communitySetInclude Field Functions 
      bool hasCommunitySetInclude() const { return this->communitySetInclude_ != nullptr;};
      void deleteCommunitySetInclude() { this->communitySetInclude_ = nullptr;};
      inline const vector<string> & getCommunitySetInclude() const { DARABONBA_PTR_GET_CONST(communitySetInclude_, vector<string>) };
      inline vector<string> getCommunitySetInclude() { DARABONBA_PTR_GET(communitySetInclude_, vector<string>) };
      inline MatchConditions& setCommunitySetInclude(const vector<string> & communitySetInclude) { DARABONBA_PTR_SET_VALUE(communitySetInclude_, communitySetInclude) };
      inline MatchConditions& setCommunitySetInclude(vector<string> && communitySetInclude) { DARABONBA_PTR_SET_RVALUE(communitySetInclude_, communitySetInclude) };


      // communitySetMatch Field Functions 
      bool hasCommunitySetMatch() const { return this->communitySetMatch_ != nullptr;};
      void deleteCommunitySetMatch() { this->communitySetMatch_ = nullptr;};
      inline const vector<string> & getCommunitySetMatch() const { DARABONBA_PTR_GET_CONST(communitySetMatch_, vector<string>) };
      inline vector<string> getCommunitySetMatch() { DARABONBA_PTR_GET(communitySetMatch_, vector<string>) };
      inline MatchConditions& setCommunitySetMatch(const vector<string> & communitySetMatch) { DARABONBA_PTR_SET_VALUE(communitySetMatch_, communitySetMatch) };
      inline MatchConditions& setCommunitySetMatch(vector<string> && communitySetMatch) { DARABONBA_PTR_SET_RVALUE(communitySetMatch_, communitySetMatch) };


      // destinationInstanceIds Field Functions 
      bool hasDestinationInstanceIds() const { return this->destinationInstanceIds_ != nullptr;};
      void deleteDestinationInstanceIds() { this->destinationInstanceIds_ = nullptr;};
      inline const vector<string> & getDestinationInstanceIds() const { DARABONBA_PTR_GET_CONST(destinationInstanceIds_, vector<string>) };
      inline vector<string> getDestinationInstanceIds() { DARABONBA_PTR_GET(destinationInstanceIds_, vector<string>) };
      inline MatchConditions& setDestinationInstanceIds(const vector<string> & destinationInstanceIds) { DARABONBA_PTR_SET_VALUE(destinationInstanceIds_, destinationInstanceIds) };
      inline MatchConditions& setDestinationInstanceIds(vector<string> && destinationInstanceIds) { DARABONBA_PTR_SET_RVALUE(destinationInstanceIds_, destinationInstanceIds) };


      // destinationInstanceIdsReverseMatch Field Functions 
      bool hasDestinationInstanceIdsReverseMatch() const { return this->destinationInstanceIdsReverseMatch_ != nullptr;};
      void deleteDestinationInstanceIdsReverseMatch() { this->destinationInstanceIdsReverseMatch_ = nullptr;};
      inline bool getDestinationInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceIdsReverseMatch_, false) };
      inline MatchConditions& setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(destinationInstanceIdsReverseMatch_, destinationInstanceIdsReverseMatch) };


      // destinationInstanceTypes Field Functions 
      bool hasDestinationInstanceTypes() const { return this->destinationInstanceTypes_ != nullptr;};
      void deleteDestinationInstanceTypes() { this->destinationInstanceTypes_ = nullptr;};
      inline const vector<string> & getDestinationInstanceTypes() const { DARABONBA_PTR_GET_CONST(destinationInstanceTypes_, vector<string>) };
      inline vector<string> getDestinationInstanceTypes() { DARABONBA_PTR_GET(destinationInstanceTypes_, vector<string>) };
      inline MatchConditions& setDestinationInstanceTypes(const vector<string> & destinationInstanceTypes) { DARABONBA_PTR_SET_VALUE(destinationInstanceTypes_, destinationInstanceTypes) };
      inline MatchConditions& setDestinationInstanceTypes(vector<string> && destinationInstanceTypes) { DARABONBA_PTR_SET_RVALUE(destinationInstanceTypes_, destinationInstanceTypes) };


      // destinationRegionIds Field Functions 
      bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
      void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
      inline const vector<string> & getDestinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, vector<string>) };
      inline vector<string> getDestinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, vector<string>) };
      inline MatchConditions& setDestinationRegionIds(const vector<string> & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
      inline MatchConditions& setDestinationRegionIds(vector<string> && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


      // destinationRouteTableIds Field Functions 
      bool hasDestinationRouteTableIds() const { return this->destinationRouteTableIds_ != nullptr;};
      void deleteDestinationRouteTableIds() { this->destinationRouteTableIds_ = nullptr;};
      inline const vector<string> & getDestinationRouteTableIds() const { DARABONBA_PTR_GET_CONST(destinationRouteTableIds_, vector<string>) };
      inline vector<string> getDestinationRouteTableIds() { DARABONBA_PTR_GET(destinationRouteTableIds_, vector<string>) };
      inline MatchConditions& setDestinationRouteTableIds(const vector<string> & destinationRouteTableIds) { DARABONBA_PTR_SET_VALUE(destinationRouteTableIds_, destinationRouteTableIds) };
      inline MatchConditions& setDestinationRouteTableIds(vector<string> && destinationRouteTableIds) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableIds_, destinationRouteTableIds) };


      // matchAddressType Field Functions 
      bool hasMatchAddressType() const { return this->matchAddressType_ != nullptr;};
      void deleteMatchAddressType() { this->matchAddressType_ = nullptr;};
      inline string getMatchAddressType() const { DARABONBA_PTR_GET_DEFAULT(matchAddressType_, "") };
      inline MatchConditions& setMatchAddressType(string matchAddressType) { DARABONBA_PTR_SET_VALUE(matchAddressType_, matchAddressType) };


      // routeTypes Field Functions 
      bool hasRouteTypes() const { return this->routeTypes_ != nullptr;};
      void deleteRouteTypes() { this->routeTypes_ = nullptr;};
      inline const vector<string> & getRouteTypes() const { DARABONBA_PTR_GET_CONST(routeTypes_, vector<string>) };
      inline vector<string> getRouteTypes() { DARABONBA_PTR_GET(routeTypes_, vector<string>) };
      inline MatchConditions& setRouteTypes(const vector<string> & routeTypes) { DARABONBA_PTR_SET_VALUE(routeTypes_, routeTypes) };
      inline MatchConditions& setRouteTypes(vector<string> && routeTypes) { DARABONBA_PTR_SET_RVALUE(routeTypes_, routeTypes) };


      // sourceInstanceIds Field Functions 
      bool hasSourceInstanceIds() const { return this->sourceInstanceIds_ != nullptr;};
      void deleteSourceInstanceIds() { this->sourceInstanceIds_ = nullptr;};
      inline const vector<string> & getSourceInstanceIds() const { DARABONBA_PTR_GET_CONST(sourceInstanceIds_, vector<string>) };
      inline vector<string> getSourceInstanceIds() { DARABONBA_PTR_GET(sourceInstanceIds_, vector<string>) };
      inline MatchConditions& setSourceInstanceIds(const vector<string> & sourceInstanceIds) { DARABONBA_PTR_SET_VALUE(sourceInstanceIds_, sourceInstanceIds) };
      inline MatchConditions& setSourceInstanceIds(vector<string> && sourceInstanceIds) { DARABONBA_PTR_SET_RVALUE(sourceInstanceIds_, sourceInstanceIds) };


      // sourceInstanceIdsReverseMatch Field Functions 
      bool hasSourceInstanceIdsReverseMatch() const { return this->sourceInstanceIdsReverseMatch_ != nullptr;};
      void deleteSourceInstanceIdsReverseMatch() { this->sourceInstanceIdsReverseMatch_ = nullptr;};
      inline bool getSourceInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceIdsReverseMatch_, false) };
      inline MatchConditions& setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(sourceInstanceIdsReverseMatch_, sourceInstanceIdsReverseMatch) };


      // sourceInstanceTypes Field Functions 
      bool hasSourceInstanceTypes() const { return this->sourceInstanceTypes_ != nullptr;};
      void deleteSourceInstanceTypes() { this->sourceInstanceTypes_ = nullptr;};
      inline const vector<string> & getSourceInstanceTypes() const { DARABONBA_PTR_GET_CONST(sourceInstanceTypes_, vector<string>) };
      inline vector<string> getSourceInstanceTypes() { DARABONBA_PTR_GET(sourceInstanceTypes_, vector<string>) };
      inline MatchConditions& setSourceInstanceTypes(const vector<string> & sourceInstanceTypes) { DARABONBA_PTR_SET_VALUE(sourceInstanceTypes_, sourceInstanceTypes) };
      inline MatchConditions& setSourceInstanceTypes(vector<string> && sourceInstanceTypes) { DARABONBA_PTR_SET_RVALUE(sourceInstanceTypes_, sourceInstanceTypes) };


      // sourceRegionIds Field Functions 
      bool hasSourceRegionIds() const { return this->sourceRegionIds_ != nullptr;};
      void deleteSourceRegionIds() { this->sourceRegionIds_ = nullptr;};
      inline const vector<string> & getSourceRegionIds() const { DARABONBA_PTR_GET_CONST(sourceRegionIds_, vector<string>) };
      inline vector<string> getSourceRegionIds() { DARABONBA_PTR_GET(sourceRegionIds_, vector<string>) };
      inline MatchConditions& setSourceRegionIds(const vector<string> & sourceRegionIds) { DARABONBA_PTR_SET_VALUE(sourceRegionIds_, sourceRegionIds) };
      inline MatchConditions& setSourceRegionIds(vector<string> && sourceRegionIds) { DARABONBA_PTR_SET_RVALUE(sourceRegionIds_, sourceRegionIds) };


      // sourceRouteTableIds Field Functions 
      bool hasSourceRouteTableIds() const { return this->sourceRouteTableIds_ != nullptr;};
      void deleteSourceRouteTableIds() { this->sourceRouteTableIds_ = nullptr;};
      inline const vector<string> & getSourceRouteTableIds() const { DARABONBA_PTR_GET_CONST(sourceRouteTableIds_, vector<string>) };
      inline vector<string> getSourceRouteTableIds() { DARABONBA_PTR_GET(sourceRouteTableIds_, vector<string>) };
      inline MatchConditions& setSourceRouteTableIds(const vector<string> & sourceRouteTableIds) { DARABONBA_PTR_SET_VALUE(sourceRouteTableIds_, sourceRouteTableIds) };
      inline MatchConditions& setSourceRouteTableIds(vector<string> && sourceRouteTableIds) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableIds_, sourceRouteTableIds) };


    protected:
      // The route prefix list for fuzzy match. You can specify up to 64 IP address blocks.
      // 
      // A match is successful if the route prefix in the match condition contains the route prefix of the matched route.
      // 
      // For example, a policy defined with 10.0.0.0/8 can fuzzy match a route with 10.10.10.0/24.
      // 
      // IP address blocks use the CIDR format and support IPv4 and IPv6.
      // 
      // This parameter is mutually exclusive with **AddressPrefixesMatch**. You cannot specify both parameters at the same time.
      shared_ptr<vector<string>> addressPrefixesInclude_ {};
      // The route prefix list for exact match. You can specify up to 64 IP address blocks.
      // 
      // A match is successful only if the route prefix in the match condition is exactly the same as the route prefix of the matched route.
      // 
      // For example, a policy defined with 10.0.0.0/8 can only exactly match a route with 10.0.0.0/8.
      // 
      // IP address blocks use the CIDR format and support IPv4 and IPv6.
      // 
      // This parameter is mutually exclusive with **AddressPrefixesInclude**. You cannot specify both parameters at the same time.
      shared_ptr<vector<string>> addressPrefixesMatch_ {};
      // The list of AS paths for fuzzy match. You can specify up to 64 AS numbers.
      // 
      // A match is successful if the AS path in the match condition overlaps with the AS path of the matched route.
      // 
      // This parameter is mutually exclusive with **AsPathsMatch**. You cannot specify both parameters at the same time.
      // 
      // > Only AS SEQUENCE is supported. AS SET, AS CONFED SEQUENCE, and AS CONFED SET are not supported. This means only a list of AS numbers is supported, and sets and sublists are not supported.
      shared_ptr<vector<int64_t>> asPathsInclude_ {};
      // The list of AS paths for exact match. You can specify up to 64 AS numbers.
      // 
      // A match is successful only if the AS path in the match condition is exactly the same as the AS path of the matched route.
      // 
      // This parameter is mutually exclusive with **AsPathsInclude**. You cannot specify both parameters at the same time.
      // 
      // > Only AS SEQUENCE is supported. AS SET, AS CONFED SEQUENCE, and AS CONFED SET are not supported. This means only a list of AS numbers is supported, and sets and sublists are not supported.
      shared_ptr<vector<int64_t>> asPathsMatch_ {};
      // The community set for fuzzy match. You can specify up to 64 communities.
      // 
      // A match is successful if the community in the match condition overlaps with the community of the matched route.
      // 
      // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
      // 
      // This parameter is mutually exclusive with **CommunitySetMatch**. You cannot specify both parameters at the same time.
      // 
      // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
      shared_ptr<vector<string>> communitySetInclude_ {};
      // The community set for exact match. You can specify up to 64 communities.
      // 
      // A match is successful only if the community in the match condition is exactly the same as the community of the matched route.
      // 
      // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
      // 
      // This parameter is mutually exclusive with **CommunitySetInclude**. You cannot specify both parameters at the same time.
      // 
      // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
      shared_ptr<vector<string>> communitySetMatch_ {};
      // The list of destination instance IDs to match. You can specify the following types of instance IDs:
      // 
      // - Virtual Private Cloud (VPC) instance IDs
      // - Virtual Border Router (VBR) instance IDs
      // 
      // You can specify up to 64 instance IDs.
      // 
      // > The list of destination instance IDs takes effect only when the direction of the route map is outbound.
      shared_ptr<vector<string>> destinationInstanceIds_ {};
      // Specifies whether to use the exclusion match mode for the list of destination instance IDs. Valid values:
      // 
      // - **false** (default): No. A match is successful if the destination instance ID of the route is in **DestinationInstanceIds.N**.
      // 
      // - **true**: Yes. A match is successful if the destination instance ID of the route is not in **DestinationInstanceIds.N**.
      shared_ptr<bool> destinationInstanceIdsReverseMatch_ {};
      // The list of destination instance types to match. The following instance types are supported:
      // 
      // - **VPC**: VPC instance.
      // 
      // - **VBR**: VBR instance.
      // 
      // 
      // You can specify multiple instance types.
      // 
      // > The list of destination instance types takes effect only when the direction of the route map is outbound.
      shared_ptr<vector<string>> destinationInstanceTypes_ {};
      // The list of destination region IDs to match. You can specify up to 64 region IDs.
      shared_ptr<vector<string>> destinationRegionIds_ {};
      // The list of destination route table IDs to match. You can specify up to 64 route table IDs.
      // 
      // > The list of destination route table IDs takes effect only when the direction of the route map is outbound.
      shared_ptr<vector<string>> destinationRouteTableIds_ {};
      // The IP address type of the routes to match. Valid values:
      // 
      // - **IPv4**: Matches only IPv4 routes.
      // - **IPv6**: Matches only IPv6 routes.
      // 
      // You can leave this parameter empty to match routes of all types.
      shared_ptr<string> matchAddressType_ {};
      // The list of route types to match. The following route types are supported:
      // 
      // - **System**: system route, which is automatically generated by the system.
      // 
      // - **Custom**: custom route, which is manually added by the user.
      // 
      // - **BGP**: BGP route, which is propagated through the BGP routable protocol.
      // 
      // You can specify multiple route types.
      shared_ptr<vector<string>> routeTypes_ {};
      // The list of source instance IDs to match. You can specify the following types of instance IDs:
      // 
      // - Virtual Private Cloud (VPC) instance IDs
      // - Virtual Border Router (VBR) instance IDs
      // 
      // 
      // You can specify up to 64 instance IDs.
      shared_ptr<vector<string>> sourceInstanceIds_ {};
      // Specifies whether to use the exclusion match mode for the list of source instance IDs. Valid values:
      // 
      // - **false** (default): No. A match is successful if the source instance ID of the route is in **SourceInstanceIds.N**.
      // 
      // - **true**: Yes. A match is successful if the source instance ID of the route is not in **SourceInstanceIds.N**.
      shared_ptr<bool> sourceInstanceIdsReverseMatch_ {};
      // The list of source instance types to match. The following instance types are supported:
      // 
      // - **VPC**: VPC instance.
      // 
      // - **VBR**: VBR instance.
      // 
      // 
      // You can specify multiple instance types.
      shared_ptr<vector<string>> sourceInstanceTypes_ {};
      // The list of source region IDs to match. You can specify up to 64 region IDs.
      shared_ptr<vector<string>> sourceRegionIds_ {};
      // The list of source route table IDs to match. You can specify up to 64 route table IDs.
      shared_ptr<vector<string>> sourceRouteTableIds_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->matchConditions_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->routeMapId_ == nullptr && this->setActions_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteMapRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouteMapRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRouteMapRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // matchConditions Field Functions 
    bool hasMatchConditions() const { return this->matchConditions_ != nullptr;};
    void deleteMatchConditions() { this->matchConditions_ = nullptr;};
    inline const CreateRouteMapRuleRequest::MatchConditions & getMatchConditions() const { DARABONBA_PTR_GET_CONST(matchConditions_, CreateRouteMapRuleRequest::MatchConditions) };
    inline CreateRouteMapRuleRequest::MatchConditions getMatchConditions() { DARABONBA_PTR_GET(matchConditions_, CreateRouteMapRuleRequest::MatchConditions) };
    inline CreateRouteMapRuleRequest& setMatchConditions(const CreateRouteMapRuleRequest::MatchConditions & matchConditions) { DARABONBA_PTR_SET_VALUE(matchConditions_, matchConditions) };
    inline CreateRouteMapRuleRequest& setMatchConditions(CreateRouteMapRuleRequest::MatchConditions && matchConditions) { DARABONBA_PTR_SET_RVALUE(matchConditions_, matchConditions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRouteMapRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateRouteMapRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline CreateRouteMapRuleRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


    // setActions Field Functions 
    bool hasSetActions() const { return this->setActions_ != nullptr;};
    void deleteSetActions() { this->setActions_ = nullptr;};
    inline const CreateRouteMapRuleRequest::SetActions & getSetActions() const { DARABONBA_PTR_GET_CONST(setActions_, CreateRouteMapRuleRequest::SetActions) };
    inline CreateRouteMapRuleRequest::SetActions getSetActions() { DARABONBA_PTR_GET(setActions_, CreateRouteMapRuleRequest::SetActions) };
    inline CreateRouteMapRuleRequest& setSetActions(const CreateRouteMapRuleRequest::SetActions & setActions) { DARABONBA_PTR_SET_VALUE(setActions_, setActions) };
    inline CreateRouteMapRuleRequest& setSetActions(CreateRouteMapRuleRequest::SetActions && setActions) { DARABONBA_PTR_SET_RVALUE(setActions_, setActions) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value on your client. Make sure that the token is unique across different requests. The client token supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The detailed description of the rule. The description can be empty or 1 to 256 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: Prechecks the request without creating the route map rule. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): Sends the request. After the request passes the precheck, the route map rule is created.
    shared_ptr<bool> dryRun_ {};
    // The match conditions of the route map rule. The system executes the actions defined in **SetActions** only when a route meets all the match conditions defined in this parameter.
    shared_ptr<CreateRouteMapRuleRequest::MatchConditions> matchConditions_ {};
    // The name of the rule for easy identification. The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // The priority of the rule. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The ID of the route map.
    // 
    // This parameter is required.
    shared_ptr<string> routeMapId_ {};
    // The actions to execute for the route map rule. After a route meets all the match conditions defined in **MatchConditions**, the system processes the route based on the actions defined in this parameter.
    shared_ptr<CreateRouteMapRuleRequest::SetActions> setActions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
