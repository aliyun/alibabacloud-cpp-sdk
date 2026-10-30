// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTEMAPRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTEMAPRULESRESPONSEBODY_HPP_
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
  class ListRouteMapRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteMapRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMapRules, routeMapRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteMapRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMapRules, routeMapRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRouteMapRulesResponseBody() = default ;
    ListRouteMapRulesResponseBody(const ListRouteMapRulesResponseBody &) = default ;
    ListRouteMapRulesResponseBody(ListRouteMapRulesResponseBody &&) = default ;
    ListRouteMapRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteMapRulesResponseBody() = default ;
    ListRouteMapRulesResponseBody& operator=(const ListRouteMapRulesResponseBody &) = default ;
    ListRouteMapRulesResponseBody& operator=(ListRouteMapRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteMapRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteMapRules& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MatchConditions, matchConditions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
        DARABONBA_PTR_TO_JSON(RouteMapRuleId, routeMapRuleId_);
        DARABONBA_PTR_TO_JSON(SetActions, setActions_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RouteMapRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MatchConditions, matchConditions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
        DARABONBA_PTR_FROM_JSON(RouteMapRuleId, routeMapRuleId_);
        DARABONBA_PTR_FROM_JSON(SetActions, setActions_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RouteMapRules() = default ;
      RouteMapRules(const RouteMapRules &) = default ;
      RouteMapRules(RouteMapRules &&) = default ;
      RouteMapRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteMapRules() = default ;
      RouteMapRules& operator=(const RouteMapRules &) = default ;
      RouteMapRules& operator=(RouteMapRules &&) = default ;
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
        // The AS path to prepend when the regional gateway receives or advertises routes.
        // 
        // This parameter and **AsPathReplace** are mutually exclusive and cannot be specified at the same time.
        // 
        // This parameter specifies the action to execute after a route meets the match conditions.
        shared_ptr<vector<int64_t>> asPathPrepend_ {};
        // The AS path to replace when the regional gateway receives or advertises routes. The original AS path of the route is replaced with the list of AS numbers specified in this parameter.
        // 
        // This parameter and **AsPathPrepend** are mutually exclusive and cannot be specified at the same time.
        // 
        // This parameter specifies the action to execute after a route meets the match conditions.
        shared_ptr<vector<int64_t>> asPathReplace_ {};
        // The community set to add to the route.
        // 
        // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
        // 
        // This parameter and **CommunityReplace** are mutually exclusive and cannot be specified at the same time.
        // 
        // This parameter specifies the action to execute after a route meets the match conditions.
        // 
        // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
        shared_ptr<vector<string>> communityAdd_ {};
        // The community set to replace the original community of the route.
        // 
        // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
        // 
        // This parameter and **CommunityAdd** are mutually exclusive and cannot be specified at the same time.
        // 
        // This parameter specifies the action to execute after a route meets the match conditions.
        // 
        // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
        shared_ptr<vector<string>> communityReplace_ {};
        // Policy priority of the associated next route map rule.
        // 
        // - You can set policy priority of the associated route map rule only when **RouteAction** is set to **Permit**. Only the permitted routes continue to match the associated next route map rule.
        // - Policy priority of the associated next route map rule must be lower than policy priority of the current route map rule.
        shared_ptr<int64_t> nextPriority_ {};
        // The policy action after all conditions are met. Valid values:
        // 
        // - **Permit**: permits the matched routes.
        // - **Deny**: denies the matched routes.
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
        // The route prefix list for fuzzy matching.
        // 
        // A match succeeds if the route prefix in the match condition contains the route prefix of the matched route.
        // 
        // For example, a policy defined with 10.0.0.0/8 can fuzzy match a route with 10.10.10.0/24.
        // 
        // IP address ranges use the CIDR format. Both IPv4 and IPv6 are supported.
        // 
        // This parameter and **AddressPrefixesMatch** are mutually exclusive and cannot be specified at the same time.
        shared_ptr<vector<string>> addressPrefixesInclude_ {};
        // The route prefix list for exact matching.
        // 
        // A match succeeds only when the route prefix in the match condition is exactly the same as the route prefix of the matched route.
        // 
        // For example, a policy defined with 10.0.0.0/8 can only exactly match a route with 10.0.0.0/8.
        // 
        // IP address ranges use the CIDR format. Both IPv4 and IPv6 are supported.
        // 
        // This parameter and **AddressPrefixesInclude** are mutually exclusive and cannot be specified at the same time.
        shared_ptr<vector<string>> addressPrefixesMatch_ {};
        // The list of AS paths for fuzzy matching.
        // 
        // A match succeeds if the AS path in the match condition overlaps with the AS path of the matched route.
        // 
        // This parameter and **AsPathsMatch** are mutually exclusive and cannot be specified at the same time.
        // 
        // > Only AS SEQUENCE is supported. AS SET, AS CONFED SEQUENCE, and AS CONFED SET are not supported. This means only a list of AS numbers is supported, and sets and sub-lists are not supported.
        shared_ptr<vector<int64_t>> asPathsInclude_ {};
        // The list of AS paths for exact matching.
        // 
        // A match succeeds only when the AS path in the match condition is exactly the same as the AS path of the matched route.
        // 
        // This parameter and **AsPathsInclude** are mutually exclusive and cannot be specified at the same time.
        // 
        // > Only AS SEQUENCE is supported. AS SET, AS CONFED SEQUENCE, and AS CONFED SET are not supported. This means only a list of AS numbers is supported, and sets and sub-lists are not supported.
        shared_ptr<vector<int64_t>> asPathsMatch_ {};
        // The community set for fuzzy matching.
        // 
        // A match succeeds if the community in the match condition overlaps with the community of the matched route.
        // 
        // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
        // 
        // This parameter and **CommunitySetMatch** are mutually exclusive and cannot be specified at the same time.
        // 
        // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
        shared_ptr<vector<string>> communitySetInclude_ {};
        // The community set for exact matching.
        // 
        // A match succeeds only when the community in the match condition is exactly the same as the community of the matched route.
        // 
        // Each community is in the format of n:m, where n and m range from **1** to **65535**. The community must comply with RFC 1997. Large communities (RFC 8092) are not supported.
        // 
        // This parameter and **CommunitySetInclude** are mutually exclusive and cannot be specified at the same time.
        // 
        // > Incorrect community configurations may prevent routes from being advertised to the on-premises data center.
        shared_ptr<vector<string>> communitySetMatch_ {};
        // The list of destination instance IDs to match. The following instance types are supported:
        // 
        // - Virtual private cloud (VPC) instance IDs
        // - Virtual border router (VBR) instance IDs
        // 
        // > The list of destination instance IDs takes effect only when the direction of the route map is outbound.
        shared_ptr<vector<string>> destinationInstanceIds_ {};
        // Specifies whether to use the exclude matching mode for the list of destination instance IDs. Valid values:
        // 
        // - **false** (default): no. A match succeeds when the destination instance ID of the route is in **DestinationInstanceIds.N**.
        // - **true**: yes. A match succeeds when the destination instance ID of the route is not in **DestinationInstanceIds.N**.
        shared_ptr<bool> destinationInstanceIdsReverseMatch_ {};
        // The list of destination instance types to match. The following instance types are supported:
        // 
        // - **VPC**: VPC instance.
        // - **VBR**: VBR instance.
        // 
        // > The list of destination instance types takes effect only when the direction of the route map is outbound.
        shared_ptr<vector<string>> destinationInstanceTypes_ {};
        // The list of destination region IDs to match.
        shared_ptr<vector<string>> destinationRegionIds_ {};
        // The list of destination route table IDs to match.
        // 
        // > The list of destination route table IDs takes effect only when the direction of the route map is outbound.
        shared_ptr<vector<string>> destinationRouteTableIds_ {};
        // The IP address type to match. Valid values:
        // 
        // - **IPv4**: matches only IPv4 routes.
        // - **IPv6**: matches only IPv6 routes.
        // 
        // You can leave this parameter empty to match routes of all types.
        shared_ptr<string> matchAddressType_ {};
        // The list of route types to match. The following route types are supported:
        // 
        // - **System**: system route, which is automatically generated by the system.
        // - **Custom**: custom route, which is manually added by a user.
        // - **BGP**: BGP route, which is propagated through the BGP routable protocol.
        // 
        // You can specify multiple route types.
        shared_ptr<vector<string>> routeTypes_ {};
        // The list of source instance IDs to match. The following instance types are supported:
        // 
        // - Virtual private cloud (VPC) instance IDs
        // - Virtual border router (VBR) instance IDs
        shared_ptr<vector<string>> sourceInstanceIds_ {};
        // Specifies whether to use the exclude matching mode for the list of source instance IDs. Valid values:
        // 
        // - **false** (default): no. A match succeeds when the source instance ID of the route is in **SourceInstanceIds.N**.
        // - **true**: yes. A match succeeds when the source instance ID of the route is not in **SourceInstanceIds.N**.
        shared_ptr<bool> sourceInstanceIdsReverseMatch_ {};
        // The list of source instance types to match. The following instance types are supported:
        // 
        // - **VPC**: VPC instance.
        // - **VBR**: VBR instance.
        shared_ptr<vector<string>> sourceInstanceTypes_ {};
        // The list of source region IDs to match.
        shared_ptr<vector<string>> sourceRegionIds_ {};
        // The list of source route table IDs to match.
        shared_ptr<vector<string>> sourceRouteTableIds_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->matchConditions_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->routeMapId_ == nullptr && this->routeMapRuleId_ == nullptr
        && this->setActions_ == nullptr && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RouteMapRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // matchConditions Field Functions 
      bool hasMatchConditions() const { return this->matchConditions_ != nullptr;};
      void deleteMatchConditions() { this->matchConditions_ = nullptr;};
      inline const RouteMapRules::MatchConditions & getMatchConditions() const { DARABONBA_PTR_GET_CONST(matchConditions_, RouteMapRules::MatchConditions) };
      inline RouteMapRules::MatchConditions getMatchConditions() { DARABONBA_PTR_GET(matchConditions_, RouteMapRules::MatchConditions) };
      inline RouteMapRules& setMatchConditions(const RouteMapRules::MatchConditions & matchConditions) { DARABONBA_PTR_SET_VALUE(matchConditions_, matchConditions) };
      inline RouteMapRules& setMatchConditions(RouteMapRules::MatchConditions && matchConditions) { DARABONBA_PTR_SET_RVALUE(matchConditions_, matchConditions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RouteMapRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline RouteMapRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // routeMapId Field Functions 
      bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
      void deleteRouteMapId() { this->routeMapId_ = nullptr;};
      inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
      inline RouteMapRules& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


      // routeMapRuleId Field Functions 
      bool hasRouteMapRuleId() const { return this->routeMapRuleId_ != nullptr;};
      void deleteRouteMapRuleId() { this->routeMapRuleId_ = nullptr;};
      inline string getRouteMapRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeMapRuleId_, "") };
      inline RouteMapRules& setRouteMapRuleId(string routeMapRuleId) { DARABONBA_PTR_SET_VALUE(routeMapRuleId_, routeMapRuleId) };


      // setActions Field Functions 
      bool hasSetActions() const { return this->setActions_ != nullptr;};
      void deleteSetActions() { this->setActions_ = nullptr;};
      inline const RouteMapRules::SetActions & getSetActions() const { DARABONBA_PTR_GET_CONST(setActions_, RouteMapRules::SetActions) };
      inline RouteMapRules::SetActions getSetActions() { DARABONBA_PTR_GET(setActions_, RouteMapRules::SetActions) };
      inline RouteMapRules& setSetActions(const RouteMapRules::SetActions & setActions) { DARABONBA_PTR_SET_VALUE(setActions_, setActions) };
      inline RouteMapRules& setSetActions(RouteMapRules::SetActions && setActions) { DARABONBA_PTR_SET_RVALUE(setActions_, setActions) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteMapRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The description of the rule.
      shared_ptr<string> description_ {};
      // The match conditions of the route map rule. The system executes the actions defined in **SetActions** only when a route meets all the match conditions defined in this parameter.
      shared_ptr<RouteMapRules::MatchConditions> matchConditions_ {};
      // The name of the rule.
      shared_ptr<string> name_ {};
      // The priority of the rule. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The ID of the route map.
      shared_ptr<string> routeMapId_ {};
      // The ID of the route map rule.
      shared_ptr<string> routeMapRuleId_ {};
      // The actions to execute for the route map rule. After a route meets all the match conditions defined in **MatchConditions**, the system processes the route based on the actions defined in this parameter.
      shared_ptr<RouteMapRules::SetActions> setActions_ {};
      // The status of the route map rule. Valid values:
      // 
      // - **Creating**: The rule is being created.
      // - **Updating**: The rule is being updated.
      // - **Active**: The rule is available.
      // - **Deleting**: The rule is being deleted.
      // - **Deleted**: The rule is deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeMapRules_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteMapRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteMapRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRouteMapRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMapRules Field Functions 
    bool hasRouteMapRules() const { return this->routeMapRules_ != nullptr;};
    void deleteRouteMapRules() { this->routeMapRules_ = nullptr;};
    inline const vector<ListRouteMapRulesResponseBody::RouteMapRules> & getRouteMapRules() const { DARABONBA_PTR_GET_CONST(routeMapRules_, vector<ListRouteMapRulesResponseBody::RouteMapRules>) };
    inline vector<ListRouteMapRulesResponseBody::RouteMapRules> getRouteMapRules() { DARABONBA_PTR_GET(routeMapRules_, vector<ListRouteMapRulesResponseBody::RouteMapRules>) };
    inline ListRouteMapRulesResponseBody& setRouteMapRules(const vector<ListRouteMapRulesResponseBody::RouteMapRules> & routeMapRules) { DARABONBA_PTR_SET_VALUE(routeMapRules_, routeMapRules) };
    inline ListRouteMapRulesResponseBody& setRouteMapRules(vector<ListRouteMapRulesResponseBody::RouteMapRules> && routeMapRules) { DARABONBA_PTR_SET_RVALUE(routeMapRules_, routeMapRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRouteMapRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page in a paginated query.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If **NextToken** is empty, no next query is available.
    // - If **NextToken** has a return value, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of route map rules.
    shared_ptr<vector<ListRouteMapRulesResponseBody::RouteMapRules>> routeMapRules_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
