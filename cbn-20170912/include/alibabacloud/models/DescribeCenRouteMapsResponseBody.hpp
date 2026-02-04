// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODY_HPP_
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
  class DescribeCenRouteMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenRouteMapsResponseBody() = default ;
    DescribeCenRouteMapsResponseBody(const DescribeCenRouteMapsResponseBody &) = default ;
    DescribeCenRouteMapsResponseBody(DescribeCenRouteMapsResponseBody &&) = default ;
    DescribeCenRouteMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBody() = default ;
    DescribeCenRouteMapsResponseBody& operator=(const DescribeCenRouteMapsResponseBody &) = default ;
    DescribeCenRouteMapsResponseBody& operator=(DescribeCenRouteMapsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteMaps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteMaps& obj) { 
        DARABONBA_PTR_TO_JSON(RouteMap, routeMap_);
      };
      friend void from_json(const Darabonba::Json& j, RouteMaps& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteMap, routeMap_);
      };
      RouteMaps() = default ;
      RouteMaps(const RouteMaps &) = default ;
      RouteMaps(RouteMaps &&) = default ;
      RouteMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteMaps() = default ;
      RouteMaps& operator=(const RouteMaps &) = default ;
      RouteMaps& operator=(RouteMaps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouteMap : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteMap& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RouteMap& obj) { 
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
        RouteMap() = default ;
        RouteMap(const RouteMap &) = default ;
        RouteMap(RouteMap &&) = default ;
        RouteMap(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteMap() = default ;
        RouteMap& operator=(const RouteMap &) = default ;
        RouteMap& operator=(RouteMap &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SourceRouteTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceRouteTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(SourceRouteTableId, sourceRouteTableId_);
          };
          friend void from_json(const Darabonba::Json& j, SourceRouteTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SourceRouteTableId, sourceRouteTableId_);
          };
          SourceRouteTableIds() = default ;
          SourceRouteTableIds(const SourceRouteTableIds &) = default ;
          SourceRouteTableIds(SourceRouteTableIds &&) = default ;
          SourceRouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceRouteTableIds() = default ;
          SourceRouteTableIds& operator=(const SourceRouteTableIds &) = default ;
          SourceRouteTableIds& operator=(SourceRouteTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceRouteTableId_ == nullptr; };
          // sourceRouteTableId Field Functions 
          bool hasSourceRouteTableId() const { return this->sourceRouteTableId_ != nullptr;};
          void deleteSourceRouteTableId() { this->sourceRouteTableId_ = nullptr;};
          inline const vector<string> & getSourceRouteTableId() const { DARABONBA_PTR_GET_CONST(sourceRouteTableId_, vector<string>) };
          inline vector<string> getSourceRouteTableId() { DARABONBA_PTR_GET(sourceRouteTableId_, vector<string>) };
          inline SourceRouteTableIds& setSourceRouteTableId(const vector<string> & sourceRouteTableId) { DARABONBA_PTR_SET_VALUE(sourceRouteTableId_, sourceRouteTableId) };
          inline SourceRouteTableIds& setSourceRouteTableId(vector<string> && sourceRouteTableId) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableId_, sourceRouteTableId) };


        protected:
          shared_ptr<vector<string>> sourceRouteTableId_ {};
        };

        class SourceRegionIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceRegionIds& obj) { 
            DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
          };
          friend void from_json(const Darabonba::Json& j, SourceRegionIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
          };
          SourceRegionIds() = default ;
          SourceRegionIds(const SourceRegionIds &) = default ;
          SourceRegionIds(SourceRegionIds &&) = default ;
          SourceRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceRegionIds() = default ;
          SourceRegionIds& operator=(const SourceRegionIds &) = default ;
          SourceRegionIds& operator=(SourceRegionIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceRegionId_ == nullptr; };
          // sourceRegionId Field Functions 
          bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
          void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
          inline const vector<string> & getSourceRegionId() const { DARABONBA_PTR_GET_CONST(sourceRegionId_, vector<string>) };
          inline vector<string> getSourceRegionId() { DARABONBA_PTR_GET(sourceRegionId_, vector<string>) };
          inline SourceRegionIds& setSourceRegionId(const vector<string> & sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };
          inline SourceRegionIds& setSourceRegionId(vector<string> && sourceRegionId) { DARABONBA_PTR_SET_RVALUE(sourceRegionId_, sourceRegionId) };


        protected:
          shared_ptr<vector<string>> sourceRegionId_ {};
        };

        class SourceInstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceInstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, SourceInstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
          };
          SourceInstanceIds() = default ;
          SourceInstanceIds(const SourceInstanceIds &) = default ;
          SourceInstanceIds(SourceInstanceIds &&) = default ;
          SourceInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceInstanceIds() = default ;
          SourceInstanceIds& operator=(const SourceInstanceIds &) = default ;
          SourceInstanceIds& operator=(SourceInstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceInstanceId_ == nullptr; };
          // sourceInstanceId Field Functions 
          bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
          void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
          inline const vector<string> & getSourceInstanceId() const { DARABONBA_PTR_GET_CONST(sourceInstanceId_, vector<string>) };
          inline vector<string> getSourceInstanceId() { DARABONBA_PTR_GET(sourceInstanceId_, vector<string>) };
          inline SourceInstanceIds& setSourceInstanceId(const vector<string> & sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };
          inline SourceInstanceIds& setSourceInstanceId(vector<string> && sourceInstanceId) { DARABONBA_PTR_SET_RVALUE(sourceInstanceId_, sourceInstanceId) };


        protected:
          shared_ptr<vector<string>> sourceInstanceId_ {};
        };

        class SourceChildInstanceTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceChildInstanceTypes& obj) { 
            DARABONBA_PTR_TO_JSON(SourceChildInstanceType, sourceChildInstanceType_);
          };
          friend void from_json(const Darabonba::Json& j, SourceChildInstanceTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(SourceChildInstanceType, sourceChildInstanceType_);
          };
          SourceChildInstanceTypes() = default ;
          SourceChildInstanceTypes(const SourceChildInstanceTypes &) = default ;
          SourceChildInstanceTypes(SourceChildInstanceTypes &&) = default ;
          SourceChildInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceChildInstanceTypes() = default ;
          SourceChildInstanceTypes& operator=(const SourceChildInstanceTypes &) = default ;
          SourceChildInstanceTypes& operator=(SourceChildInstanceTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceChildInstanceType_ == nullptr; };
          // sourceChildInstanceType Field Functions 
          bool hasSourceChildInstanceType() const { return this->sourceChildInstanceType_ != nullptr;};
          void deleteSourceChildInstanceType() { this->sourceChildInstanceType_ = nullptr;};
          inline const vector<string> & getSourceChildInstanceType() const { DARABONBA_PTR_GET_CONST(sourceChildInstanceType_, vector<string>) };
          inline vector<string> getSourceChildInstanceType() { DARABONBA_PTR_GET(sourceChildInstanceType_, vector<string>) };
          inline SourceChildInstanceTypes& setSourceChildInstanceType(const vector<string> & sourceChildInstanceType) { DARABONBA_PTR_SET_VALUE(sourceChildInstanceType_, sourceChildInstanceType) };
          inline SourceChildInstanceTypes& setSourceChildInstanceType(vector<string> && sourceChildInstanceType) { DARABONBA_PTR_SET_RVALUE(sourceChildInstanceType_, sourceChildInstanceType) };


        protected:
          shared_ptr<vector<string>> sourceChildInstanceType_ {};
        };

        class RouteTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteTypes& obj) { 
            DARABONBA_PTR_TO_JSON(RouteType, routeType_);
          };
          friend void from_json(const Darabonba::Json& j, RouteTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
          };
          RouteTypes() = default ;
          RouteTypes(const RouteTypes &) = default ;
          RouteTypes(RouteTypes &&) = default ;
          RouteTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouteTypes() = default ;
          RouteTypes& operator=(const RouteTypes &) = default ;
          RouteTypes& operator=(RouteTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->routeType_ == nullptr; };
          // routeType Field Functions 
          bool hasRouteType() const { return this->routeType_ != nullptr;};
          void deleteRouteType() { this->routeType_ = nullptr;};
          inline const vector<string> & getRouteType() const { DARABONBA_PTR_GET_CONST(routeType_, vector<string>) };
          inline vector<string> getRouteType() { DARABONBA_PTR_GET(routeType_, vector<string>) };
          inline RouteTypes& setRouteType(const vector<string> & routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };
          inline RouteTypes& setRouteType(vector<string> && routeType) { DARABONBA_PTR_SET_RVALUE(routeType_, routeType) };


        protected:
          shared_ptr<vector<string>> routeType_ {};
        };

        class PrependAsPath : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrependAsPath& obj) { 
            DARABONBA_PTR_TO_JSON(AsPath, asPath_);
          };
          friend void from_json(const Darabonba::Json& j, PrependAsPath& obj) { 
            DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
          };
          PrependAsPath() = default ;
          PrependAsPath(const PrependAsPath &) = default ;
          PrependAsPath(PrependAsPath &&) = default ;
          PrependAsPath(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrependAsPath() = default ;
          PrependAsPath& operator=(const PrependAsPath &) = default ;
          PrependAsPath& operator=(PrependAsPath &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->asPath_ == nullptr; };
          // asPath Field Functions 
          bool hasAsPath() const { return this->asPath_ != nullptr;};
          void deleteAsPath() { this->asPath_ = nullptr;};
          inline const vector<string> & getAsPath() const { DARABONBA_PTR_GET_CONST(asPath_, vector<string>) };
          inline vector<string> getAsPath() { DARABONBA_PTR_GET(asPath_, vector<string>) };
          inline PrependAsPath& setAsPath(const vector<string> & asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };
          inline PrependAsPath& setAsPath(vector<string> && asPath) { DARABONBA_PTR_SET_RVALUE(asPath_, asPath) };


        protected:
          shared_ptr<vector<string>> asPath_ {};
        };

        class OperateCommunitySet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperateCommunitySet& obj) { 
            DARABONBA_PTR_TO_JSON(OperateCommunity, operateCommunity_);
          };
          friend void from_json(const Darabonba::Json& j, OperateCommunitySet& obj) { 
            DARABONBA_PTR_FROM_JSON(OperateCommunity, operateCommunity_);
          };
          OperateCommunitySet() = default ;
          OperateCommunitySet(const OperateCommunitySet &) = default ;
          OperateCommunitySet(OperateCommunitySet &&) = default ;
          OperateCommunitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperateCommunitySet() = default ;
          OperateCommunitySet& operator=(const OperateCommunitySet &) = default ;
          OperateCommunitySet& operator=(OperateCommunitySet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->operateCommunity_ == nullptr; };
          // operateCommunity Field Functions 
          bool hasOperateCommunity() const { return this->operateCommunity_ != nullptr;};
          void deleteOperateCommunity() { this->operateCommunity_ = nullptr;};
          inline const vector<string> & getOperateCommunity() const { DARABONBA_PTR_GET_CONST(operateCommunity_, vector<string>) };
          inline vector<string> getOperateCommunity() { DARABONBA_PTR_GET(operateCommunity_, vector<string>) };
          inline OperateCommunitySet& setOperateCommunity(const vector<string> & operateCommunity) { DARABONBA_PTR_SET_VALUE(operateCommunity_, operateCommunity) };
          inline OperateCommunitySet& setOperateCommunity(vector<string> && operateCommunity) { DARABONBA_PTR_SET_RVALUE(operateCommunity_, operateCommunity) };


        protected:
          shared_ptr<vector<string>> operateCommunity_ {};
        };

        class MatchCommunitySet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchCommunitySet& obj) { 
            DARABONBA_PTR_TO_JSON(MatchCommunity, matchCommunity_);
          };
          friend void from_json(const Darabonba::Json& j, MatchCommunitySet& obj) { 
            DARABONBA_PTR_FROM_JSON(MatchCommunity, matchCommunity_);
          };
          MatchCommunitySet() = default ;
          MatchCommunitySet(const MatchCommunitySet &) = default ;
          MatchCommunitySet(MatchCommunitySet &&) = default ;
          MatchCommunitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MatchCommunitySet() = default ;
          MatchCommunitySet& operator=(const MatchCommunitySet &) = default ;
          MatchCommunitySet& operator=(MatchCommunitySet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchCommunity_ == nullptr; };
          // matchCommunity Field Functions 
          bool hasMatchCommunity() const { return this->matchCommunity_ != nullptr;};
          void deleteMatchCommunity() { this->matchCommunity_ = nullptr;};
          inline const vector<string> & getMatchCommunity() const { DARABONBA_PTR_GET_CONST(matchCommunity_, vector<string>) };
          inline vector<string> getMatchCommunity() { DARABONBA_PTR_GET(matchCommunity_, vector<string>) };
          inline MatchCommunitySet& setMatchCommunity(const vector<string> & matchCommunity) { DARABONBA_PTR_SET_VALUE(matchCommunity_, matchCommunity) };
          inline MatchCommunitySet& setMatchCommunity(vector<string> && matchCommunity) { DARABONBA_PTR_SET_RVALUE(matchCommunity_, matchCommunity) };


        protected:
          shared_ptr<vector<string>> matchCommunity_ {};
        };

        class MatchAsns : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchAsns& obj) { 
            DARABONBA_PTR_TO_JSON(MatchAsn, matchAsn_);
          };
          friend void from_json(const Darabonba::Json& j, MatchAsns& obj) { 
            DARABONBA_PTR_FROM_JSON(MatchAsn, matchAsn_);
          };
          MatchAsns() = default ;
          MatchAsns(const MatchAsns &) = default ;
          MatchAsns(MatchAsns &&) = default ;
          MatchAsns(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MatchAsns() = default ;
          MatchAsns& operator=(const MatchAsns &) = default ;
          MatchAsns& operator=(MatchAsns &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchAsn_ == nullptr; };
          // matchAsn Field Functions 
          bool hasMatchAsn() const { return this->matchAsn_ != nullptr;};
          void deleteMatchAsn() { this->matchAsn_ = nullptr;};
          inline const vector<string> & getMatchAsn() const { DARABONBA_PTR_GET_CONST(matchAsn_, vector<string>) };
          inline vector<string> getMatchAsn() { DARABONBA_PTR_GET(matchAsn_, vector<string>) };
          inline MatchAsns& setMatchAsn(const vector<string> & matchAsn) { DARABONBA_PTR_SET_VALUE(matchAsn_, matchAsn) };
          inline MatchAsns& setMatchAsn(vector<string> && matchAsn) { DARABONBA_PTR_SET_RVALUE(matchAsn_, matchAsn) };


        protected:
          shared_ptr<vector<string>> matchAsn_ {};
        };

        class DestinationRouteTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationRouteTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationRouteTableId, destinationRouteTableId_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationRouteTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationRouteTableId, destinationRouteTableId_);
          };
          DestinationRouteTableIds() = default ;
          DestinationRouteTableIds(const DestinationRouteTableIds &) = default ;
          DestinationRouteTableIds(DestinationRouteTableIds &&) = default ;
          DestinationRouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationRouteTableIds() = default ;
          DestinationRouteTableIds& operator=(const DestinationRouteTableIds &) = default ;
          DestinationRouteTableIds& operator=(DestinationRouteTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationRouteTableId_ == nullptr; };
          // destinationRouteTableId Field Functions 
          bool hasDestinationRouteTableId() const { return this->destinationRouteTableId_ != nullptr;};
          void deleteDestinationRouteTableId() { this->destinationRouteTableId_ = nullptr;};
          inline const vector<string> & getDestinationRouteTableId() const { DARABONBA_PTR_GET_CONST(destinationRouteTableId_, vector<string>) };
          inline vector<string> getDestinationRouteTableId() { DARABONBA_PTR_GET(destinationRouteTableId_, vector<string>) };
          inline DestinationRouteTableIds& setDestinationRouteTableId(const vector<string> & destinationRouteTableId) { DARABONBA_PTR_SET_VALUE(destinationRouteTableId_, destinationRouteTableId) };
          inline DestinationRouteTableIds& setDestinationRouteTableId(vector<string> && destinationRouteTableId) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableId_, destinationRouteTableId) };


        protected:
          shared_ptr<vector<string>> destinationRouteTableId_ {};
        };

        class DestinationRegionIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationRegionIds& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationRegionIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
          };
          DestinationRegionIds() = default ;
          DestinationRegionIds(const DestinationRegionIds &) = default ;
          DestinationRegionIds(DestinationRegionIds &&) = default ;
          DestinationRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationRegionIds() = default ;
          DestinationRegionIds& operator=(const DestinationRegionIds &) = default ;
          DestinationRegionIds& operator=(DestinationRegionIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationRegionId_ == nullptr; };
          // destinationRegionId Field Functions 
          bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
          void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
          inline const vector<string> & getDestinationRegionId() const { DARABONBA_PTR_GET_CONST(destinationRegionId_, vector<string>) };
          inline vector<string> getDestinationRegionId() { DARABONBA_PTR_GET(destinationRegionId_, vector<string>) };
          inline DestinationRegionIds& setDestinationRegionId(const vector<string> & destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };
          inline DestinationRegionIds& setDestinationRegionId(vector<string> && destinationRegionId) { DARABONBA_PTR_SET_RVALUE(destinationRegionId_, destinationRegionId) };


        protected:
          shared_ptr<vector<string>> destinationRegionId_ {};
        };

        class DestinationInstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationInstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationInstanceId, destinationInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationInstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationInstanceId, destinationInstanceId_);
          };
          DestinationInstanceIds() = default ;
          DestinationInstanceIds(const DestinationInstanceIds &) = default ;
          DestinationInstanceIds(DestinationInstanceIds &&) = default ;
          DestinationInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationInstanceIds() = default ;
          DestinationInstanceIds& operator=(const DestinationInstanceIds &) = default ;
          DestinationInstanceIds& operator=(DestinationInstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationInstanceId_ == nullptr; };
          // destinationInstanceId Field Functions 
          bool hasDestinationInstanceId() const { return this->destinationInstanceId_ != nullptr;};
          void deleteDestinationInstanceId() { this->destinationInstanceId_ = nullptr;};
          inline const vector<string> & getDestinationInstanceId() const { DARABONBA_PTR_GET_CONST(destinationInstanceId_, vector<string>) };
          inline vector<string> getDestinationInstanceId() { DARABONBA_PTR_GET(destinationInstanceId_, vector<string>) };
          inline DestinationInstanceIds& setDestinationInstanceId(const vector<string> & destinationInstanceId) { DARABONBA_PTR_SET_VALUE(destinationInstanceId_, destinationInstanceId) };
          inline DestinationInstanceIds& setDestinationInstanceId(vector<string> && destinationInstanceId) { DARABONBA_PTR_SET_RVALUE(destinationInstanceId_, destinationInstanceId) };


        protected:
          shared_ptr<vector<string>> destinationInstanceId_ {};
        };

        class DestinationCidrBlocks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationCidrBlocks& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationCidrBlocks& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          };
          DestinationCidrBlocks() = default ;
          DestinationCidrBlocks(const DestinationCidrBlocks &) = default ;
          DestinationCidrBlocks(DestinationCidrBlocks &&) = default ;
          DestinationCidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationCidrBlocks() = default ;
          DestinationCidrBlocks& operator=(const DestinationCidrBlocks &) = default ;
          DestinationCidrBlocks& operator=(DestinationCidrBlocks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr; };
          // destinationCidrBlock Field Functions 
          bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
          void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
          inline const vector<string> & getDestinationCidrBlock() const { DARABONBA_PTR_GET_CONST(destinationCidrBlock_, vector<string>) };
          inline vector<string> getDestinationCidrBlock() { DARABONBA_PTR_GET(destinationCidrBlock_, vector<string>) };
          inline DestinationCidrBlocks& setDestinationCidrBlock(const vector<string> & destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };
          inline DestinationCidrBlocks& setDestinationCidrBlock(vector<string> && destinationCidrBlock) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlock_, destinationCidrBlock) };


        protected:
          shared_ptr<vector<string>> destinationCidrBlock_ {};
        };

        class DestinationChildInstanceTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationChildInstanceTypes& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationChildInstanceType, destinationChildInstanceType_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationChildInstanceTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationChildInstanceType, destinationChildInstanceType_);
          };
          DestinationChildInstanceTypes() = default ;
          DestinationChildInstanceTypes(const DestinationChildInstanceTypes &) = default ;
          DestinationChildInstanceTypes(DestinationChildInstanceTypes &&) = default ;
          DestinationChildInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationChildInstanceTypes() = default ;
          DestinationChildInstanceTypes& operator=(const DestinationChildInstanceTypes &) = default ;
          DestinationChildInstanceTypes& operator=(DestinationChildInstanceTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationChildInstanceType_ == nullptr; };
          // destinationChildInstanceType Field Functions 
          bool hasDestinationChildInstanceType() const { return this->destinationChildInstanceType_ != nullptr;};
          void deleteDestinationChildInstanceType() { this->destinationChildInstanceType_ = nullptr;};
          inline const vector<string> & getDestinationChildInstanceType() const { DARABONBA_PTR_GET_CONST(destinationChildInstanceType_, vector<string>) };
          inline vector<string> getDestinationChildInstanceType() { DARABONBA_PTR_GET(destinationChildInstanceType_, vector<string>) };
          inline DestinationChildInstanceTypes& setDestinationChildInstanceType(const vector<string> & destinationChildInstanceType) { DARABONBA_PTR_SET_VALUE(destinationChildInstanceType_, destinationChildInstanceType) };
          inline DestinationChildInstanceTypes& setDestinationChildInstanceType(vector<string> && destinationChildInstanceType) { DARABONBA_PTR_SET_RVALUE(destinationChildInstanceType_, destinationChildInstanceType) };


        protected:
          shared_ptr<vector<string>> destinationChildInstanceType_ {};
        };

        virtual bool empty() const override { return this->asPathMatchMode_ == nullptr
        && this->cenId_ == nullptr && this->cenRegionId_ == nullptr && this->cidrMatchMode_ == nullptr && this->communityMatchMode_ == nullptr && this->communityOperateMode_ == nullptr
        && this->description_ == nullptr && this->destinationChildInstanceTypes_ == nullptr && this->destinationCidrBlocks_ == nullptr && this->destinationInstanceIds_ == nullptr && this->destinationInstanceIdsReverseMatch_ == nullptr
        && this->destinationRegionIds_ == nullptr && this->destinationRouteTableIds_ == nullptr && this->mapResult_ == nullptr && this->matchAddressType_ == nullptr && this->matchAsns_ == nullptr
        && this->matchCommunitySet_ == nullptr && this->nextPriority_ == nullptr && this->operateCommunitySet_ == nullptr && this->preference_ == nullptr && this->prependAsPath_ == nullptr
        && this->priority_ == nullptr && this->routeMapId_ == nullptr && this->routeTypes_ == nullptr && this->sourceChildInstanceTypes_ == nullptr && this->sourceInstanceIds_ == nullptr
        && this->sourceInstanceIdsReverseMatch_ == nullptr && this->sourceRegionIds_ == nullptr && this->sourceRouteTableIds_ == nullptr && this->status_ == nullptr && this->transitRouterRouteTableId_ == nullptr
        && this->transmitDirection_ == nullptr; };
        // asPathMatchMode Field Functions 
        bool hasAsPathMatchMode() const { return this->asPathMatchMode_ != nullptr;};
        void deleteAsPathMatchMode() { this->asPathMatchMode_ = nullptr;};
        inline string getAsPathMatchMode() const { DARABONBA_PTR_GET_DEFAULT(asPathMatchMode_, "") };
        inline RouteMap& setAsPathMatchMode(string asPathMatchMode) { DARABONBA_PTR_SET_VALUE(asPathMatchMode_, asPathMatchMode) };


        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline RouteMap& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cenRegionId Field Functions 
        bool hasCenRegionId() const { return this->cenRegionId_ != nullptr;};
        void deleteCenRegionId() { this->cenRegionId_ = nullptr;};
        inline string getCenRegionId() const { DARABONBA_PTR_GET_DEFAULT(cenRegionId_, "") };
        inline RouteMap& setCenRegionId(string cenRegionId) { DARABONBA_PTR_SET_VALUE(cenRegionId_, cenRegionId) };


        // cidrMatchMode Field Functions 
        bool hasCidrMatchMode() const { return this->cidrMatchMode_ != nullptr;};
        void deleteCidrMatchMode() { this->cidrMatchMode_ = nullptr;};
        inline string getCidrMatchMode() const { DARABONBA_PTR_GET_DEFAULT(cidrMatchMode_, "") };
        inline RouteMap& setCidrMatchMode(string cidrMatchMode) { DARABONBA_PTR_SET_VALUE(cidrMatchMode_, cidrMatchMode) };


        // communityMatchMode Field Functions 
        bool hasCommunityMatchMode() const { return this->communityMatchMode_ != nullptr;};
        void deleteCommunityMatchMode() { this->communityMatchMode_ = nullptr;};
        inline string getCommunityMatchMode() const { DARABONBA_PTR_GET_DEFAULT(communityMatchMode_, "") };
        inline RouteMap& setCommunityMatchMode(string communityMatchMode) { DARABONBA_PTR_SET_VALUE(communityMatchMode_, communityMatchMode) };


        // communityOperateMode Field Functions 
        bool hasCommunityOperateMode() const { return this->communityOperateMode_ != nullptr;};
        void deleteCommunityOperateMode() { this->communityOperateMode_ = nullptr;};
        inline string getCommunityOperateMode() const { DARABONBA_PTR_GET_DEFAULT(communityOperateMode_, "") };
        inline RouteMap& setCommunityOperateMode(string communityOperateMode) { DARABONBA_PTR_SET_VALUE(communityOperateMode_, communityOperateMode) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RouteMap& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destinationChildInstanceTypes Field Functions 
        bool hasDestinationChildInstanceTypes() const { return this->destinationChildInstanceTypes_ != nullptr;};
        void deleteDestinationChildInstanceTypes() { this->destinationChildInstanceTypes_ = nullptr;};
        inline const RouteMap::DestinationChildInstanceTypes & getDestinationChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(destinationChildInstanceTypes_, RouteMap::DestinationChildInstanceTypes) };
        inline RouteMap::DestinationChildInstanceTypes getDestinationChildInstanceTypes() { DARABONBA_PTR_GET(destinationChildInstanceTypes_, RouteMap::DestinationChildInstanceTypes) };
        inline RouteMap& setDestinationChildInstanceTypes(const RouteMap::DestinationChildInstanceTypes & destinationChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };
        inline RouteMap& setDestinationChildInstanceTypes(RouteMap::DestinationChildInstanceTypes && destinationChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(destinationChildInstanceTypes_, destinationChildInstanceTypes) };


        // destinationCidrBlocks Field Functions 
        bool hasDestinationCidrBlocks() const { return this->destinationCidrBlocks_ != nullptr;};
        void deleteDestinationCidrBlocks() { this->destinationCidrBlocks_ = nullptr;};
        inline const RouteMap::DestinationCidrBlocks & getDestinationCidrBlocks() const { DARABONBA_PTR_GET_CONST(destinationCidrBlocks_, RouteMap::DestinationCidrBlocks) };
        inline RouteMap::DestinationCidrBlocks getDestinationCidrBlocks() { DARABONBA_PTR_GET(destinationCidrBlocks_, RouteMap::DestinationCidrBlocks) };
        inline RouteMap& setDestinationCidrBlocks(const RouteMap::DestinationCidrBlocks & destinationCidrBlocks) { DARABONBA_PTR_SET_VALUE(destinationCidrBlocks_, destinationCidrBlocks) };
        inline RouteMap& setDestinationCidrBlocks(RouteMap::DestinationCidrBlocks && destinationCidrBlocks) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlocks_, destinationCidrBlocks) };


        // destinationInstanceIds Field Functions 
        bool hasDestinationInstanceIds() const { return this->destinationInstanceIds_ != nullptr;};
        void deleteDestinationInstanceIds() { this->destinationInstanceIds_ = nullptr;};
        inline const RouteMap::DestinationInstanceIds & getDestinationInstanceIds() const { DARABONBA_PTR_GET_CONST(destinationInstanceIds_, RouteMap::DestinationInstanceIds) };
        inline RouteMap::DestinationInstanceIds getDestinationInstanceIds() { DARABONBA_PTR_GET(destinationInstanceIds_, RouteMap::DestinationInstanceIds) };
        inline RouteMap& setDestinationInstanceIds(const RouteMap::DestinationInstanceIds & destinationInstanceIds) { DARABONBA_PTR_SET_VALUE(destinationInstanceIds_, destinationInstanceIds) };
        inline RouteMap& setDestinationInstanceIds(RouteMap::DestinationInstanceIds && destinationInstanceIds) { DARABONBA_PTR_SET_RVALUE(destinationInstanceIds_, destinationInstanceIds) };


        // destinationInstanceIdsReverseMatch Field Functions 
        bool hasDestinationInstanceIdsReverseMatch() const { return this->destinationInstanceIdsReverseMatch_ != nullptr;};
        void deleteDestinationInstanceIdsReverseMatch() { this->destinationInstanceIdsReverseMatch_ = nullptr;};
        inline bool getDestinationInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceIdsReverseMatch_, false) };
        inline RouteMap& setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(destinationInstanceIdsReverseMatch_, destinationInstanceIdsReverseMatch) };


        // destinationRegionIds Field Functions 
        bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
        void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
        inline const RouteMap::DestinationRegionIds & getDestinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, RouteMap::DestinationRegionIds) };
        inline RouteMap::DestinationRegionIds getDestinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, RouteMap::DestinationRegionIds) };
        inline RouteMap& setDestinationRegionIds(const RouteMap::DestinationRegionIds & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
        inline RouteMap& setDestinationRegionIds(RouteMap::DestinationRegionIds && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


        // destinationRouteTableIds Field Functions 
        bool hasDestinationRouteTableIds() const { return this->destinationRouteTableIds_ != nullptr;};
        void deleteDestinationRouteTableIds() { this->destinationRouteTableIds_ = nullptr;};
        inline const RouteMap::DestinationRouteTableIds & getDestinationRouteTableIds() const { DARABONBA_PTR_GET_CONST(destinationRouteTableIds_, RouteMap::DestinationRouteTableIds) };
        inline RouteMap::DestinationRouteTableIds getDestinationRouteTableIds() { DARABONBA_PTR_GET(destinationRouteTableIds_, RouteMap::DestinationRouteTableIds) };
        inline RouteMap& setDestinationRouteTableIds(const RouteMap::DestinationRouteTableIds & destinationRouteTableIds) { DARABONBA_PTR_SET_VALUE(destinationRouteTableIds_, destinationRouteTableIds) };
        inline RouteMap& setDestinationRouteTableIds(RouteMap::DestinationRouteTableIds && destinationRouteTableIds) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableIds_, destinationRouteTableIds) };


        // mapResult Field Functions 
        bool hasMapResult() const { return this->mapResult_ != nullptr;};
        void deleteMapResult() { this->mapResult_ = nullptr;};
        inline string getMapResult() const { DARABONBA_PTR_GET_DEFAULT(mapResult_, "") };
        inline RouteMap& setMapResult(string mapResult) { DARABONBA_PTR_SET_VALUE(mapResult_, mapResult) };


        // matchAddressType Field Functions 
        bool hasMatchAddressType() const { return this->matchAddressType_ != nullptr;};
        void deleteMatchAddressType() { this->matchAddressType_ = nullptr;};
        inline string getMatchAddressType() const { DARABONBA_PTR_GET_DEFAULT(matchAddressType_, "") };
        inline RouteMap& setMatchAddressType(string matchAddressType) { DARABONBA_PTR_SET_VALUE(matchAddressType_, matchAddressType) };


        // matchAsns Field Functions 
        bool hasMatchAsns() const { return this->matchAsns_ != nullptr;};
        void deleteMatchAsns() { this->matchAsns_ = nullptr;};
        inline const RouteMap::MatchAsns & getMatchAsns() const { DARABONBA_PTR_GET_CONST(matchAsns_, RouteMap::MatchAsns) };
        inline RouteMap::MatchAsns getMatchAsns() { DARABONBA_PTR_GET(matchAsns_, RouteMap::MatchAsns) };
        inline RouteMap& setMatchAsns(const RouteMap::MatchAsns & matchAsns) { DARABONBA_PTR_SET_VALUE(matchAsns_, matchAsns) };
        inline RouteMap& setMatchAsns(RouteMap::MatchAsns && matchAsns) { DARABONBA_PTR_SET_RVALUE(matchAsns_, matchAsns) };


        // matchCommunitySet Field Functions 
        bool hasMatchCommunitySet() const { return this->matchCommunitySet_ != nullptr;};
        void deleteMatchCommunitySet() { this->matchCommunitySet_ = nullptr;};
        inline const RouteMap::MatchCommunitySet & getMatchCommunitySet() const { DARABONBA_PTR_GET_CONST(matchCommunitySet_, RouteMap::MatchCommunitySet) };
        inline RouteMap::MatchCommunitySet getMatchCommunitySet() { DARABONBA_PTR_GET(matchCommunitySet_, RouteMap::MatchCommunitySet) };
        inline RouteMap& setMatchCommunitySet(const RouteMap::MatchCommunitySet & matchCommunitySet) { DARABONBA_PTR_SET_VALUE(matchCommunitySet_, matchCommunitySet) };
        inline RouteMap& setMatchCommunitySet(RouteMap::MatchCommunitySet && matchCommunitySet) { DARABONBA_PTR_SET_RVALUE(matchCommunitySet_, matchCommunitySet) };


        // nextPriority Field Functions 
        bool hasNextPriority() const { return this->nextPriority_ != nullptr;};
        void deleteNextPriority() { this->nextPriority_ = nullptr;};
        inline int32_t getNextPriority() const { DARABONBA_PTR_GET_DEFAULT(nextPriority_, 0) };
        inline RouteMap& setNextPriority(int32_t nextPriority) { DARABONBA_PTR_SET_VALUE(nextPriority_, nextPriority) };


        // operateCommunitySet Field Functions 
        bool hasOperateCommunitySet() const { return this->operateCommunitySet_ != nullptr;};
        void deleteOperateCommunitySet() { this->operateCommunitySet_ = nullptr;};
        inline const RouteMap::OperateCommunitySet & getOperateCommunitySet() const { DARABONBA_PTR_GET_CONST(operateCommunitySet_, RouteMap::OperateCommunitySet) };
        inline RouteMap::OperateCommunitySet getOperateCommunitySet() { DARABONBA_PTR_GET(operateCommunitySet_, RouteMap::OperateCommunitySet) };
        inline RouteMap& setOperateCommunitySet(const RouteMap::OperateCommunitySet & operateCommunitySet) { DARABONBA_PTR_SET_VALUE(operateCommunitySet_, operateCommunitySet) };
        inline RouteMap& setOperateCommunitySet(RouteMap::OperateCommunitySet && operateCommunitySet) { DARABONBA_PTR_SET_RVALUE(operateCommunitySet_, operateCommunitySet) };


        // preference Field Functions 
        bool hasPreference() const { return this->preference_ != nullptr;};
        void deletePreference() { this->preference_ = nullptr;};
        inline int32_t getPreference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
        inline RouteMap& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


        // prependAsPath Field Functions 
        bool hasPrependAsPath() const { return this->prependAsPath_ != nullptr;};
        void deletePrependAsPath() { this->prependAsPath_ = nullptr;};
        inline const RouteMap::PrependAsPath & getPrependAsPath() const { DARABONBA_PTR_GET_CONST(prependAsPath_, RouteMap::PrependAsPath) };
        inline RouteMap::PrependAsPath getPrependAsPath() { DARABONBA_PTR_GET(prependAsPath_, RouteMap::PrependAsPath) };
        inline RouteMap& setPrependAsPath(const RouteMap::PrependAsPath & prependAsPath) { DARABONBA_PTR_SET_VALUE(prependAsPath_, prependAsPath) };
        inline RouteMap& setPrependAsPath(RouteMap::PrependAsPath && prependAsPath) { DARABONBA_PTR_SET_RVALUE(prependAsPath_, prependAsPath) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline RouteMap& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // routeMapId Field Functions 
        bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
        void deleteRouteMapId() { this->routeMapId_ = nullptr;};
        inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
        inline RouteMap& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


        // routeTypes Field Functions 
        bool hasRouteTypes() const { return this->routeTypes_ != nullptr;};
        void deleteRouteTypes() { this->routeTypes_ = nullptr;};
        inline const RouteMap::RouteTypes & getRouteTypes() const { DARABONBA_PTR_GET_CONST(routeTypes_, RouteMap::RouteTypes) };
        inline RouteMap::RouteTypes getRouteTypes() { DARABONBA_PTR_GET(routeTypes_, RouteMap::RouteTypes) };
        inline RouteMap& setRouteTypes(const RouteMap::RouteTypes & routeTypes) { DARABONBA_PTR_SET_VALUE(routeTypes_, routeTypes) };
        inline RouteMap& setRouteTypes(RouteMap::RouteTypes && routeTypes) { DARABONBA_PTR_SET_RVALUE(routeTypes_, routeTypes) };


        // sourceChildInstanceTypes Field Functions 
        bool hasSourceChildInstanceTypes() const { return this->sourceChildInstanceTypes_ != nullptr;};
        void deleteSourceChildInstanceTypes() { this->sourceChildInstanceTypes_ = nullptr;};
        inline const RouteMap::SourceChildInstanceTypes & getSourceChildInstanceTypes() const { DARABONBA_PTR_GET_CONST(sourceChildInstanceTypes_, RouteMap::SourceChildInstanceTypes) };
        inline RouteMap::SourceChildInstanceTypes getSourceChildInstanceTypes() { DARABONBA_PTR_GET(sourceChildInstanceTypes_, RouteMap::SourceChildInstanceTypes) };
        inline RouteMap& setSourceChildInstanceTypes(const RouteMap::SourceChildInstanceTypes & sourceChildInstanceTypes) { DARABONBA_PTR_SET_VALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };
        inline RouteMap& setSourceChildInstanceTypes(RouteMap::SourceChildInstanceTypes && sourceChildInstanceTypes) { DARABONBA_PTR_SET_RVALUE(sourceChildInstanceTypes_, sourceChildInstanceTypes) };


        // sourceInstanceIds Field Functions 
        bool hasSourceInstanceIds() const { return this->sourceInstanceIds_ != nullptr;};
        void deleteSourceInstanceIds() { this->sourceInstanceIds_ = nullptr;};
        inline const RouteMap::SourceInstanceIds & getSourceInstanceIds() const { DARABONBA_PTR_GET_CONST(sourceInstanceIds_, RouteMap::SourceInstanceIds) };
        inline RouteMap::SourceInstanceIds getSourceInstanceIds() { DARABONBA_PTR_GET(sourceInstanceIds_, RouteMap::SourceInstanceIds) };
        inline RouteMap& setSourceInstanceIds(const RouteMap::SourceInstanceIds & sourceInstanceIds) { DARABONBA_PTR_SET_VALUE(sourceInstanceIds_, sourceInstanceIds) };
        inline RouteMap& setSourceInstanceIds(RouteMap::SourceInstanceIds && sourceInstanceIds) { DARABONBA_PTR_SET_RVALUE(sourceInstanceIds_, sourceInstanceIds) };


        // sourceInstanceIdsReverseMatch Field Functions 
        bool hasSourceInstanceIdsReverseMatch() const { return this->sourceInstanceIdsReverseMatch_ != nullptr;};
        void deleteSourceInstanceIdsReverseMatch() { this->sourceInstanceIdsReverseMatch_ = nullptr;};
        inline bool getSourceInstanceIdsReverseMatch() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceIdsReverseMatch_, false) };
        inline RouteMap& setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) { DARABONBA_PTR_SET_VALUE(sourceInstanceIdsReverseMatch_, sourceInstanceIdsReverseMatch) };


        // sourceRegionIds Field Functions 
        bool hasSourceRegionIds() const { return this->sourceRegionIds_ != nullptr;};
        void deleteSourceRegionIds() { this->sourceRegionIds_ = nullptr;};
        inline const RouteMap::SourceRegionIds & getSourceRegionIds() const { DARABONBA_PTR_GET_CONST(sourceRegionIds_, RouteMap::SourceRegionIds) };
        inline RouteMap::SourceRegionIds getSourceRegionIds() { DARABONBA_PTR_GET(sourceRegionIds_, RouteMap::SourceRegionIds) };
        inline RouteMap& setSourceRegionIds(const RouteMap::SourceRegionIds & sourceRegionIds) { DARABONBA_PTR_SET_VALUE(sourceRegionIds_, sourceRegionIds) };
        inline RouteMap& setSourceRegionIds(RouteMap::SourceRegionIds && sourceRegionIds) { DARABONBA_PTR_SET_RVALUE(sourceRegionIds_, sourceRegionIds) };


        // sourceRouteTableIds Field Functions 
        bool hasSourceRouteTableIds() const { return this->sourceRouteTableIds_ != nullptr;};
        void deleteSourceRouteTableIds() { this->sourceRouteTableIds_ = nullptr;};
        inline const RouteMap::SourceRouteTableIds & getSourceRouteTableIds() const { DARABONBA_PTR_GET_CONST(sourceRouteTableIds_, RouteMap::SourceRouteTableIds) };
        inline RouteMap::SourceRouteTableIds getSourceRouteTableIds() { DARABONBA_PTR_GET(sourceRouteTableIds_, RouteMap::SourceRouteTableIds) };
        inline RouteMap& setSourceRouteTableIds(const RouteMap::SourceRouteTableIds & sourceRouteTableIds) { DARABONBA_PTR_SET_VALUE(sourceRouteTableIds_, sourceRouteTableIds) };
        inline RouteMap& setSourceRouteTableIds(RouteMap::SourceRouteTableIds && sourceRouteTableIds) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableIds_, sourceRouteTableIds) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouteMap& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // transitRouterRouteTableId Field Functions 
        bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
        void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
        inline string getTransitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
        inline RouteMap& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


        // transmitDirection Field Functions 
        bool hasTransmitDirection() const { return this->transmitDirection_ != nullptr;};
        void deleteTransmitDirection() { this->transmitDirection_ = nullptr;};
        inline string getTransmitDirection() const { DARABONBA_PTR_GET_DEFAULT(transmitDirection_, "") };
        inline RouteMap& setTransmitDirection(string transmitDirection) { DARABONBA_PTR_SET_VALUE(transmitDirection_, transmitDirection) };


      protected:
        // The match method that is used to match routes based on the AS path.
        // 
        // *   **Include**: fuzzy match. A route is a match if the AS path of the route overlaps with the AS path specified in the match condition.
        // *   **Complete**: exact match. A route is a match only if the AS path of the route is the same as an AS path specified in the match condition.
        shared_ptr<string> asPathMatchMode_ {};
        // The CEN instance ID.
        shared_ptr<string> cenId_ {};
        // The region ID of the routing policy.
        shared_ptr<string> cenRegionId_ {};
        // The match method that is used to evaluate routes based on the prefix. Valid values:
        // 
        // *   **Include**: fuzzy match. A route is a match if the route prefix is included in the match conditions.
        // 
        // For example, if you set the match condition to 10.10.0.0/16 and fuzzy match is applied, the route whose prefix is 10.10.1.0/24 meets the match condition.
        // 
        // *   **Complete**: exact match. A route is a match only if the route prefix is the same as the prefix specified in the match condition.
        // 
        // For example, if you set the match condition to 10.10.0.0/16 and exact match is enabled, a route is a match only if the prefix is 10.10.0.0/16.
        shared_ptr<string> cidrMatchMode_ {};
        // The match method that is used to match routes against the community.
        // 
        // *   **Include**: fuzzy match. A route is a match if the community of the route overlaps with the community specified in the match condition.
        // *   **Complete**: exact match. A route meets the match condition only if the community of the route is the same as the community specified in the match condition.
        shared_ptr<string> communityMatchMode_ {};
        // The action that is performed on the community of the route.
        // 
        // *   **Additive**: adds the community to the route.
        // *   **Replace**: replaces the original community of the route.
        // 
        // This parameter specifies the action to be performed when a route meets the match condition.
        shared_ptr<string> communityOperateMode_ {};
        // The description of the routing policy.
        shared_ptr<string> description_ {};
        // The types of destination network instances to which the routes belong.
        // 
        // *   **VPC**
        // *   **VBR**
        // *   **CCN**
        // *   **VPN**
        // 
        // >  The destination route tables take effect only if the routing policy is applied to the egress gateway direction, and the type of the destination route tables is the same as that of the network instance in the current region.
        shared_ptr<RouteMap::DestinationChildInstanceTypes> destinationChildInstanceTypes_ {};
        // The prefix list against which routes are matched.
        // 
        // IPv4 and IPv6 addresses are supported.
        shared_ptr<RouteMap::DestinationCidrBlocks> destinationCidrBlocks_ {};
        // The IDs of the destination network instances to which the routes point.
        // 
        // >  The destination route tables take effect only if the routing policy is applied to the egress gateway direction, and the ID the destination instance is the same as that of the network instance in the current region.
        shared_ptr<RouteMap::DestinationInstanceIds> destinationInstanceIds_ {};
        // Indicates whether the destination network instance IDs are excluded.
        // 
        // *   **false** (default): A route is a match if its destination network instance ID is in the list specified by **DestinationInstanceIds.N**.
        // *   **true**: A route is a match if its destination network instance ID is not in the list specified by **DestinationInstanceIds.N**.
        shared_ptr<bool> destinationInstanceIdsReverseMatch_ {};
        // The IDs of the destination regions for the routing policy.
        shared_ptr<RouteMap::DestinationRegionIds> destinationRegionIds_ {};
        // The IDs of the destination route tables to which the routes belong. You can enter at most 32 route table IDs.
        // 
        // >  The destination route tables take effect only if the routing policy is applied to the egress gateway direction, and the destination route table IDs are in the current region.
        shared_ptr<RouteMap::DestinationRouteTableIds> destinationRouteTableIds_ {};
        // The action performed on a route that meets the match conditions.
        // 
        // *   **Permit**: the route is permitted.
        // *   **Deny**: the route is denied.
        shared_ptr<string> mapResult_ {};
        // The type of IP address to be matched against the match condition. Valid values:
        // 
        // *   **IPv4**: IPv4 addresses
        // *   **IPv6**: IPv6 addresses
        // *   If no value is returned, both IPv4 and IPv6 addresses are matched against the match condition.
        shared_ptr<string> matchAddressType_ {};
        // The AS paths against which routes are matched.
        shared_ptr<RouteMap::MatchAsns> matchAsns_ {};
        // The community set against which routes are matched.
        shared_ptr<RouteMap::MatchCommunitySet> matchCommunitySet_ {};
        // The priority of the routing policy that you want to associate with the current one.
        shared_ptr<int32_t> nextPriority_ {};
        // The community set on which actions are performed.
        shared_ptr<RouteMap::OperateCommunitySet> operateCommunitySet_ {};
        // The new priority of the route.
        // 
        // A smaller value indicates a higher priority.
        // 
        // This parameter indicates the action to be performed when a route meets the match condition.
        shared_ptr<int32_t> preference_ {};
        // The AS paths that are prepended by using an action statement when regional gateways receive or advertise routes.
        // 
        // This parameter indicates the action to be performed when a route meets the match condition.
        shared_ptr<RouteMap::PrependAsPath> prependAsPath_ {};
        // The priority of the routing policy. A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
        // The routing policy ID.
        shared_ptr<string> routeMapId_ {};
        // The type of route that is compared. Valid values:
        // 
        // *   **System**: system routes that are automatically generated by the system.
        // *   **Custom**: custom routes that are manually added.
        // *   **BGP**: routes that are advertised over BGP.
        shared_ptr<RouteMap::RouteTypes> routeTypes_ {};
        // The types of source network instances to which the routes belong.
        // 
        // *   **VPC**
        // *   **VBR**
        // *   **CCN**
        // *   **VPN**
        shared_ptr<RouteMap::SourceChildInstanceTypes> sourceChildInstanceTypes_ {};
        // The IDs of the source network instances to which the routes belong.
        shared_ptr<RouteMap::SourceInstanceIds> sourceInstanceIds_ {};
        // Indicates whether the source network instance IDs are excluded.
        // 
        // *   **false** (default): A route is a match if its source network instance ID is in the list specified by **SourceInstanceIds.N**.
        // *   **true**: A route is match if its source network instance ID is not in the list specified by **SourceInstanceIds.N**.
        shared_ptr<bool> sourceInstanceIdsReverseMatch_ {};
        // The IDs of the source regions to which the routes belong.
        shared_ptr<RouteMap::SourceRegionIds> sourceRegionIds_ {};
        // The IDs of the source route tables to which the routes belong.
        shared_ptr<RouteMap::SourceRouteTableIds> sourceRouteTableIds_ {};
        // The status of the routing policy. Valid values:
        // 
        // *   **Creating**
        // *   **Active**
        // *   **Deleting**
        shared_ptr<string> status_ {};
        // The route table ID of the transit router with which the routing policy is associated.
        shared_ptr<string> transitRouterRouteTableId_ {};
        // The direction in which the routing policy is applied.
        shared_ptr<string> transmitDirection_ {};
      };

      virtual bool empty() const override { return this->routeMap_ == nullptr; };
      // routeMap Field Functions 
      bool hasRouteMap() const { return this->routeMap_ != nullptr;};
      void deleteRouteMap() { this->routeMap_ = nullptr;};
      inline const vector<RouteMaps::RouteMap> & getRouteMap() const { DARABONBA_PTR_GET_CONST(routeMap_, vector<RouteMaps::RouteMap>) };
      inline vector<RouteMaps::RouteMap> getRouteMap() { DARABONBA_PTR_GET(routeMap_, vector<RouteMaps::RouteMap>) };
      inline RouteMaps& setRouteMap(const vector<RouteMaps::RouteMap> & routeMap) { DARABONBA_PTR_SET_VALUE(routeMap_, routeMap) };
      inline RouteMaps& setRouteMap(vector<RouteMaps::RouteMap> && routeMap) { DARABONBA_PTR_SET_RVALUE(routeMap_, routeMap) };


    protected:
      shared_ptr<vector<RouteMaps::RouteMap>> routeMap_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routeMaps_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenRouteMapsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenRouteMapsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenRouteMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMaps Field Functions 
    bool hasRouteMaps() const { return this->routeMaps_ != nullptr;};
    void deleteRouteMaps() { this->routeMaps_ = nullptr;};
    inline const DescribeCenRouteMapsResponseBody::RouteMaps & getRouteMaps() const { DARABONBA_PTR_GET_CONST(routeMaps_, DescribeCenRouteMapsResponseBody::RouteMaps) };
    inline DescribeCenRouteMapsResponseBody::RouteMaps getRouteMaps() { DARABONBA_PTR_GET(routeMaps_, DescribeCenRouteMapsResponseBody::RouteMaps) };
    inline DescribeCenRouteMapsResponseBody& setRouteMaps(const DescribeCenRouteMapsResponseBody::RouteMaps & routeMaps) { DARABONBA_PTR_SET_VALUE(routeMaps_, routeMaps) };
    inline DescribeCenRouteMapsResponseBody& setRouteMaps(DescribeCenRouteMapsResponseBody::RouteMaps && routeMaps) { DARABONBA_PTR_SET_RVALUE(routeMaps_, routeMaps) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenRouteMapsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the routing policy.
    shared_ptr<DescribeCenRouteMapsResponseBody::RouteMaps> routeMaps_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
