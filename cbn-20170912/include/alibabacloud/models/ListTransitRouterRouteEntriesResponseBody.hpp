// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODY_HPP_
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
  class ListTransitRouterRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntries, transitRouterRouteEntries_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntries, transitRouterRouteEntries_);
    };
    ListTransitRouterRouteEntriesResponseBody() = default ;
    ListTransitRouterRouteEntriesResponseBody(const ListTransitRouterRouteEntriesResponseBody &) = default ;
    ListTransitRouterRouteEntriesResponseBody(ListTransitRouterRouteEntriesResponseBody &&) = default ;
    ListTransitRouterRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteEntriesResponseBody() = default ;
    ListTransitRouterRouteEntriesResponseBody& operator=(const ListTransitRouterRouteEntriesResponseBody &) = default ;
    ListTransitRouterRouteEntriesResponseBody& operator=(ListTransitRouterRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterRouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(OperationalMode, operationalMode_);
        DARABONBA_PTR_TO_JSON(PathAttributes, pathAttributes_);
        DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDescription, transitRouterRouteEntryDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryName, transitRouterRouteEntryName_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopResourceId, transitRouterRouteEntryNextHopResourceId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopResourceType, transitRouterRouteEntryNextHopResourceType_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryOriginResourceId, transitRouterRouteEntryOriginResourceId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryOriginResourceType, transitRouterRouteEntryOriginResourceType_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryStatus, transitRouterRouteEntryStatus_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryType, transitRouterRouteEntryType_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(OperationalMode, operationalMode_);
        DARABONBA_PTR_FROM_JSON(PathAttributes, pathAttributes_);
        DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDescription, transitRouterRouteEntryDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryName, transitRouterRouteEntryName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopResourceId, transitRouterRouteEntryNextHopResourceId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopResourceType, transitRouterRouteEntryNextHopResourceType_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryOriginResourceId, transitRouterRouteEntryOriginResourceId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryOriginResourceType, transitRouterRouteEntryOriginResourceType_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryStatus, transitRouterRouteEntryStatus_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryType, transitRouterRouteEntryType_);
      };
      TransitRouterRouteEntries() = default ;
      TransitRouterRouteEntries(const TransitRouterRouteEntries &) = default ;
      TransitRouterRouteEntries(TransitRouterRouteEntries &&) = default ;
      TransitRouterRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterRouteEntries() = default ;
      TransitRouterRouteEntries& operator=(const TransitRouterRouteEntries &) = default ;
      TransitRouterRouteEntries& operator=(TransitRouterRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PathAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PathAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(AsPaths, asPaths_);
          DARABONBA_PTR_TO_JSON(Communities, communities_);
          DARABONBA_PTR_TO_JSON(OriginInstanceId, originInstanceId_);
          DARABONBA_PTR_TO_JSON(OriginInstanceType, originInstanceType_);
          DARABONBA_PTR_TO_JSON(OriginRouteType, originRouteType_);
          DARABONBA_PTR_TO_JSON(Preference, preference_);
        };
        friend void from_json(const Darabonba::Json& j, PathAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(AsPaths, asPaths_);
          DARABONBA_PTR_FROM_JSON(Communities, communities_);
          DARABONBA_PTR_FROM_JSON(OriginInstanceId, originInstanceId_);
          DARABONBA_PTR_FROM_JSON(OriginInstanceType, originInstanceType_);
          DARABONBA_PTR_FROM_JSON(OriginRouteType, originRouteType_);
          DARABONBA_PTR_FROM_JSON(Preference, preference_);
        };
        PathAttributes() = default ;
        PathAttributes(const PathAttributes &) = default ;
        PathAttributes(PathAttributes &&) = default ;
        PathAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PathAttributes() = default ;
        PathAttributes& operator=(const PathAttributes &) = default ;
        PathAttributes& operator=(PathAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asPaths_ == nullptr
        && this->communities_ == nullptr && this->originInstanceId_ == nullptr && this->originInstanceType_ == nullptr && this->originRouteType_ == nullptr && this->preference_ == nullptr; };
        // asPaths Field Functions 
        bool hasAsPaths() const { return this->asPaths_ != nullptr;};
        void deleteAsPaths() { this->asPaths_ = nullptr;};
        inline const vector<string> & getAsPaths() const { DARABONBA_PTR_GET_CONST(asPaths_, vector<string>) };
        inline vector<string> getAsPaths() { DARABONBA_PTR_GET(asPaths_, vector<string>) };
        inline PathAttributes& setAsPaths(const vector<string> & asPaths) { DARABONBA_PTR_SET_VALUE(asPaths_, asPaths) };
        inline PathAttributes& setAsPaths(vector<string> && asPaths) { DARABONBA_PTR_SET_RVALUE(asPaths_, asPaths) };


        // communities Field Functions 
        bool hasCommunities() const { return this->communities_ != nullptr;};
        void deleteCommunities() { this->communities_ = nullptr;};
        inline const vector<string> & getCommunities() const { DARABONBA_PTR_GET_CONST(communities_, vector<string>) };
        inline vector<string> getCommunities() { DARABONBA_PTR_GET(communities_, vector<string>) };
        inline PathAttributes& setCommunities(const vector<string> & communities) { DARABONBA_PTR_SET_VALUE(communities_, communities) };
        inline PathAttributes& setCommunities(vector<string> && communities) { DARABONBA_PTR_SET_RVALUE(communities_, communities) };


        // originInstanceId Field Functions 
        bool hasOriginInstanceId() const { return this->originInstanceId_ != nullptr;};
        void deleteOriginInstanceId() { this->originInstanceId_ = nullptr;};
        inline string getOriginInstanceId() const { DARABONBA_PTR_GET_DEFAULT(originInstanceId_, "") };
        inline PathAttributes& setOriginInstanceId(string originInstanceId) { DARABONBA_PTR_SET_VALUE(originInstanceId_, originInstanceId) };


        // originInstanceType Field Functions 
        bool hasOriginInstanceType() const { return this->originInstanceType_ != nullptr;};
        void deleteOriginInstanceType() { this->originInstanceType_ = nullptr;};
        inline string getOriginInstanceType() const { DARABONBA_PTR_GET_DEFAULT(originInstanceType_, "") };
        inline PathAttributes& setOriginInstanceType(string originInstanceType) { DARABONBA_PTR_SET_VALUE(originInstanceType_, originInstanceType) };


        // originRouteType Field Functions 
        bool hasOriginRouteType() const { return this->originRouteType_ != nullptr;};
        void deleteOriginRouteType() { this->originRouteType_ = nullptr;};
        inline string getOriginRouteType() const { DARABONBA_PTR_GET_DEFAULT(originRouteType_, "") };
        inline PathAttributes& setOriginRouteType(string originRouteType) { DARABONBA_PTR_SET_VALUE(originRouteType_, originRouteType) };


        // preference Field Functions 
        bool hasPreference() const { return this->preference_ != nullptr;};
        void deletePreference() { this->preference_ = nullptr;};
        inline int32_t getPreference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
        inline PathAttributes& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


      protected:
        // The list of AS Path attributes of the route entry.
        shared_ptr<vector<string>> asPaths_ {};
        // The list of Community attributes of the route entry.
        shared_ptr<vector<string>> communities_ {};
        // The instance ID of the original instance from which the route entry originates.
        shared_ptr<string> originInstanceId_ {};
        // The type of the instance from which the route originates.
        // 
        // - **VPC**: Virtual Private Cloud (VPC) instance.
        // - **VBR**: Virtual Border Router (VBR) instance.
        // - **TR**: transit router instance.
        // - **VPN**: IPsec connection instance.
        // - **CCN**: Cloud Connect Network (CCN) instance.
        shared_ptr<string> originInstanceType_ {};
        // The original route type when the route was generated.
        // 
        // - **System**: system route.
        // - **Custom**: custom route.
        // - **Static**: static route.
        // - **BGP**: BGP route.
        // - **BlackHole**: blackhole route.
        shared_ptr<string> originRouteType_ {};
        // The priority of the route entry.
        // 
        // A smaller value indicates a higher priority.
        shared_ptr<int32_t> preference_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->operationalMode_ == nullptr && this->pathAttributes_ == nullptr && this->prefixListId_ == nullptr && this->tag_ == nullptr && this->transitRouterRouteEntryDescription_ == nullptr
        && this->transitRouterRouteEntryDestinationCidrBlock_ == nullptr && this->transitRouterRouteEntryId_ == nullptr && this->transitRouterRouteEntryName_ == nullptr && this->transitRouterRouteEntryNextHopId_ == nullptr && this->transitRouterRouteEntryNextHopResourceId_ == nullptr
        && this->transitRouterRouteEntryNextHopResourceType_ == nullptr && this->transitRouterRouteEntryNextHopType_ == nullptr && this->transitRouterRouteEntryOriginResourceId_ == nullptr && this->transitRouterRouteEntryOriginResourceType_ == nullptr && this->transitRouterRouteEntryStatus_ == nullptr
        && this->transitRouterRouteEntryType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TransitRouterRouteEntries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // operationalMode Field Functions 
      bool hasOperationalMode() const { return this->operationalMode_ != nullptr;};
      void deleteOperationalMode() { this->operationalMode_ = nullptr;};
      inline bool getOperationalMode() const { DARABONBA_PTR_GET_DEFAULT(operationalMode_, false) };
      inline TransitRouterRouteEntries& setOperationalMode(bool operationalMode) { DARABONBA_PTR_SET_VALUE(operationalMode_, operationalMode) };


      // pathAttributes Field Functions 
      bool hasPathAttributes() const { return this->pathAttributes_ != nullptr;};
      void deletePathAttributes() { this->pathAttributes_ = nullptr;};
      inline const TransitRouterRouteEntries::PathAttributes & getPathAttributes() const { DARABONBA_PTR_GET_CONST(pathAttributes_, TransitRouterRouteEntries::PathAttributes) };
      inline TransitRouterRouteEntries::PathAttributes getPathAttributes() { DARABONBA_PTR_GET(pathAttributes_, TransitRouterRouteEntries::PathAttributes) };
      inline TransitRouterRouteEntries& setPathAttributes(const TransitRouterRouteEntries::PathAttributes & pathAttributes) { DARABONBA_PTR_SET_VALUE(pathAttributes_, pathAttributes) };
      inline TransitRouterRouteEntries& setPathAttributes(TransitRouterRouteEntries::PathAttributes && pathAttributes) { DARABONBA_PTR_SET_RVALUE(pathAttributes_, pathAttributes) };


      // prefixListId Field Functions 
      bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
      void deletePrefixListId() { this->prefixListId_ = nullptr;};
      inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
      inline TransitRouterRouteEntries& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline TransitRouterRouteEntries& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // transitRouterRouteEntryDescription Field Functions 
      bool hasTransitRouterRouteEntryDescription() const { return this->transitRouterRouteEntryDescription_ != nullptr;};
      void deleteTransitRouterRouteEntryDescription() { this->transitRouterRouteEntryDescription_ = nullptr;};
      inline string getTransitRouterRouteEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDescription_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryDescription(string transitRouterRouteEntryDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDescription_, transitRouterRouteEntryDescription) };


      // transitRouterRouteEntryDestinationCidrBlock Field Functions 
      bool hasTransitRouterRouteEntryDestinationCidrBlock() const { return this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr;};
      void deleteTransitRouterRouteEntryDestinationCidrBlock() { this->transitRouterRouteEntryDestinationCidrBlock_ = nullptr;};
      inline string getTransitRouterRouteEntryDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDestinationCidrBlock_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryDestinationCidrBlock(string transitRouterRouteEntryDestinationCidrBlock) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDestinationCidrBlock_, transitRouterRouteEntryDestinationCidrBlock) };


      // transitRouterRouteEntryId Field Functions 
      bool hasTransitRouterRouteEntryId() const { return this->transitRouterRouteEntryId_ != nullptr;};
      void deleteTransitRouterRouteEntryId() { this->transitRouterRouteEntryId_ = nullptr;};
      inline string getTransitRouterRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryId_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryId(string transitRouterRouteEntryId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryId_, transitRouterRouteEntryId) };


      // transitRouterRouteEntryName Field Functions 
      bool hasTransitRouterRouteEntryName() const { return this->transitRouterRouteEntryName_ != nullptr;};
      void deleteTransitRouterRouteEntryName() { this->transitRouterRouteEntryName_ = nullptr;};
      inline string getTransitRouterRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryName_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryName(string transitRouterRouteEntryName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryName_, transitRouterRouteEntryName) };


      // transitRouterRouteEntryNextHopId Field Functions 
      bool hasTransitRouterRouteEntryNextHopId() const { return this->transitRouterRouteEntryNextHopId_ != nullptr;};
      void deleteTransitRouterRouteEntryNextHopId() { this->transitRouterRouteEntryNextHopId_ = nullptr;};
      inline string getTransitRouterRouteEntryNextHopId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopId_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryNextHopId(string transitRouterRouteEntryNextHopId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopId_, transitRouterRouteEntryNextHopId) };


      // transitRouterRouteEntryNextHopResourceId Field Functions 
      bool hasTransitRouterRouteEntryNextHopResourceId() const { return this->transitRouterRouteEntryNextHopResourceId_ != nullptr;};
      void deleteTransitRouterRouteEntryNextHopResourceId() { this->transitRouterRouteEntryNextHopResourceId_ = nullptr;};
      inline string getTransitRouterRouteEntryNextHopResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopResourceId_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryNextHopResourceId(string transitRouterRouteEntryNextHopResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopResourceId_, transitRouterRouteEntryNextHopResourceId) };


      // transitRouterRouteEntryNextHopResourceType Field Functions 
      bool hasTransitRouterRouteEntryNextHopResourceType() const { return this->transitRouterRouteEntryNextHopResourceType_ != nullptr;};
      void deleteTransitRouterRouteEntryNextHopResourceType() { this->transitRouterRouteEntryNextHopResourceType_ = nullptr;};
      inline string getTransitRouterRouteEntryNextHopResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopResourceType_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryNextHopResourceType(string transitRouterRouteEntryNextHopResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopResourceType_, transitRouterRouteEntryNextHopResourceType) };


      // transitRouterRouteEntryNextHopType Field Functions 
      bool hasTransitRouterRouteEntryNextHopType() const { return this->transitRouterRouteEntryNextHopType_ != nullptr;};
      void deleteTransitRouterRouteEntryNextHopType() { this->transitRouterRouteEntryNextHopType_ = nullptr;};
      inline string getTransitRouterRouteEntryNextHopType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopType_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryNextHopType(string transitRouterRouteEntryNextHopType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopType_, transitRouterRouteEntryNextHopType) };


      // transitRouterRouteEntryOriginResourceId Field Functions 
      bool hasTransitRouterRouteEntryOriginResourceId() const { return this->transitRouterRouteEntryOriginResourceId_ != nullptr;};
      void deleteTransitRouterRouteEntryOriginResourceId() { this->transitRouterRouteEntryOriginResourceId_ = nullptr;};
      inline string getTransitRouterRouteEntryOriginResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryOriginResourceId_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryOriginResourceId(string transitRouterRouteEntryOriginResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryOriginResourceId_, transitRouterRouteEntryOriginResourceId) };


      // transitRouterRouteEntryOriginResourceType Field Functions 
      bool hasTransitRouterRouteEntryOriginResourceType() const { return this->transitRouterRouteEntryOriginResourceType_ != nullptr;};
      void deleteTransitRouterRouteEntryOriginResourceType() { this->transitRouterRouteEntryOriginResourceType_ = nullptr;};
      inline string getTransitRouterRouteEntryOriginResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryOriginResourceType_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryOriginResourceType(string transitRouterRouteEntryOriginResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryOriginResourceType_, transitRouterRouteEntryOriginResourceType) };


      // transitRouterRouteEntryStatus Field Functions 
      bool hasTransitRouterRouteEntryStatus() const { return this->transitRouterRouteEntryStatus_ != nullptr;};
      void deleteTransitRouterRouteEntryStatus() { this->transitRouterRouteEntryStatus_ = nullptr;};
      inline string getTransitRouterRouteEntryStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryStatus_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryStatus(string transitRouterRouteEntryStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryStatus_, transitRouterRouteEntryStatus) };


      // transitRouterRouteEntryType Field Functions 
      bool hasTransitRouterRouteEntryType() const { return this->transitRouterRouteEntryType_ != nullptr;};
      void deleteTransitRouterRouteEntryType() { this->transitRouterRouteEntryType_ = nullptr;};
      inline string getTransitRouterRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryType_, "") };
      inline TransitRouterRouteEntries& setTransitRouterRouteEntryType(string transitRouterRouteEntryType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryType_, transitRouterRouteEntryType) };


    protected:
      // The time when the route entry was created.
      // 
      // The time is displayed in UTC in the YYYY-MM-DDThh:mmZ format.
      // 
      // > This parameter is returned only for statically configured routes.
      shared_ptr<string> createTime_ {};
      // Indicates whether the current route entry can be modified.
      // 
      // - **true**: the route entry can be modified. You can delete the route entry.
      // - **false**: the route entry cannot be modified. The route entry is automatically generated by the system and does not support editing.
      shared_ptr<bool> operationalMode_ {};
      // The path attributes of the route.
      shared_ptr<TransitRouterRouteEntries::PathAttributes> pathAttributes_ {};
      // The ID of the prefix list.
      shared_ptr<string> prefixListId_ {};
      // The tag of the route entry.
      // 
      // The only valid value is **PermitVbr**, which indicates that the current route entry is propagated only to the route tables of VBR instances under the transit router instance.
      // 
      // > This parameter is returned only for system-generated routes for transit router CIDR blocks.
      shared_ptr<string> tag_ {};
      // The description of the route entry.
      // 
      // > This parameter is returned only for statically configured routes.
      shared_ptr<string> transitRouterRouteEntryDescription_ {};
      // The destination CIDR block of the route entry. An IPv4 CIDR block or an IPv6 CIDR block is returned.
      shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock_ {};
      // The ID of the route entry.
      // 
      // > This parameter is returned only for statically configured routes.
      shared_ptr<string> transitRouterRouteEntryId_ {};
      // The name of the route entry.
      // 
      // > This parameter is returned only for statically configured routes.
      shared_ptr<string> transitRouterRouteEntryName_ {};
      // The next hop ID of the route entry. This parameter is not returned for blackhole routes.
      shared_ptr<string> transitRouterRouteEntryNextHopId_ {};
      // The instance ID of the next hop of the route entry.
      shared_ptr<string> transitRouterRouteEntryNextHopResourceId_ {};
      // The type of the next hop instance of the route entry.
      // 
      // - **VPC**: Virtual Private Cloud (VPC) instance.
      // - **VBR**: Virtual Border Router (VBR) instance.
      // - **TR**: transit router instance.
      // - **VPN**: IPsec connection instance.
      shared_ptr<string> transitRouterRouteEntryNextHopResourceType_ {};
      // The next hop type of the route entry.
      // 
      // - **BlackHole**: the route entry is a blackhole route. All traffic destined for the destination CIDR block is dropped.
      // - **Attachment**: the next hop of the route entry is a network instance connection. All traffic destined for the destination CIDR block is forwarded to the specified network instance connection.
      shared_ptr<string> transitRouterRouteEntryNextHopType_ {};
      // The instance ID of the origin of the route entry.
      shared_ptr<string> transitRouterRouteEntryOriginResourceId_ {};
      // The type of the origin instance of the route entry.
      // 
      // - **VPC**: Virtual Private Cloud (VPC) instance.
      // - **VBR**: Virtual Border Router (VBR) instance.
      // - **TR**: transit router instance.
      // - **VPN**: IPsec connection instance.
      shared_ptr<string> transitRouterRouteEntryOriginResourceType_ {};
      // The status of the route entry.
      // 
      // - **Active**: active.
      // - **Rejected**: rejected due to a route conflict.
      // - **Prohibited**: prohibited by a routing policy.
      // - **Standby**: standby.
      // - **Candidate**: candidate.
      // - **Creating**: being created.
      // - **Deleting**: being deleted.
      shared_ptr<string> transitRouterRouteEntryStatus_ {};
      // The type of the route entry.
      // 
      // - **Static**: a statically configured route entry.
      // - **Propagated**: a route entry generated by automatic learning.
      shared_ptr<string> transitRouterRouteEntryType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterRouteEntries_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterRouteEntries Field Functions 
    bool hasTransitRouterRouteEntries() const { return this->transitRouterRouteEntries_ != nullptr;};
    void deleteTransitRouterRouteEntries() { this->transitRouterRouteEntries_ = nullptr;};
    inline const vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries> & getTransitRouterRouteEntries() const { DARABONBA_PTR_GET_CONST(transitRouterRouteEntries_, vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries>) };
    inline vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries> getTransitRouterRouteEntries() { DARABONBA_PTR_GET(transitRouterRouteEntries_, vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries>) };
    inline ListTransitRouterRouteEntriesResponseBody& setTransitRouterRouteEntries(const vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries> & transitRouterRouteEntries) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntries_, transitRouterRouteEntries) };
    inline ListTransitRouterRouteEntriesResponseBody& setTransitRouterRouteEntries(vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries> && transitRouterRouteEntries) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteEntries_, transitRouterRouteEntries) };


  protected:
    // The number of entries per page when entries are returned in pages.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. Valid values:
    // 
    // - If **NextToken** is empty, no subsequent query is to be sent.
    // - If **NextToken** is returned, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The list of route entries.
    shared_ptr<vector<ListTransitRouterRouteEntriesResponseBody::TransitRouterRouteEntries>> transitRouterRouteEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
