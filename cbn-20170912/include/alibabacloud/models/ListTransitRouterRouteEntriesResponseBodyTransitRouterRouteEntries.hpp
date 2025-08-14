// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODYTRANSITROUTERROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODYTRANSITROUTERROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& obj) { 
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
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries() = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries(const ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries &) = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries(ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries &&) = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries() = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& operator=(const ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries &) = default ;
    ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& operator=(ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->operationalMode_ != nullptr && this->pathAttributes_ != nullptr && this->prefixListId_ != nullptr && this->tag_ != nullptr && this->transitRouterRouteEntryDescription_ != nullptr
        && this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr && this->transitRouterRouteEntryId_ != nullptr && this->transitRouterRouteEntryName_ != nullptr && this->transitRouterRouteEntryNextHopId_ != nullptr && this->transitRouterRouteEntryNextHopResourceId_ != nullptr
        && this->transitRouterRouteEntryNextHopResourceType_ != nullptr && this->transitRouterRouteEntryNextHopType_ != nullptr && this->transitRouterRouteEntryOriginResourceId_ != nullptr && this->transitRouterRouteEntryOriginResourceType_ != nullptr && this->transitRouterRouteEntryStatus_ != nullptr
        && this->transitRouterRouteEntryType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // operationalMode Field Functions 
    bool hasOperationalMode() const { return this->operationalMode_ != nullptr;};
    void deleteOperationalMode() { this->operationalMode_ = nullptr;};
    inline bool operationalMode() const { DARABONBA_PTR_GET_DEFAULT(operationalMode_, false) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setOperationalMode(bool operationalMode) { DARABONBA_PTR_SET_VALUE(operationalMode_, operationalMode) };


    // pathAttributes Field Functions 
    bool hasPathAttributes() const { return this->pathAttributes_ != nullptr;};
    void deletePathAttributes() { this->pathAttributes_ = nullptr;};
    inline const Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes & pathAttributes() const { DARABONBA_PTR_GET_CONST(pathAttributes_, Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes) };
    inline Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes pathAttributes() { DARABONBA_PTR_GET(pathAttributes_, Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setPathAttributes(const Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes & pathAttributes) { DARABONBA_PTR_SET_VALUE(pathAttributes_, pathAttributes) };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setPathAttributes(Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes && pathAttributes) { DARABONBA_PTR_SET_RVALUE(pathAttributes_, pathAttributes) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // transitRouterRouteEntryDescription Field Functions 
    bool hasTransitRouterRouteEntryDescription() const { return this->transitRouterRouteEntryDescription_ != nullptr;};
    void deleteTransitRouterRouteEntryDescription() { this->transitRouterRouteEntryDescription_ = nullptr;};
    inline string transitRouterRouteEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDescription_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryDescription(string transitRouterRouteEntryDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDescription_, transitRouterRouteEntryDescription) };


    // transitRouterRouteEntryDestinationCidrBlock Field Functions 
    bool hasTransitRouterRouteEntryDestinationCidrBlock() const { return this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr;};
    void deleteTransitRouterRouteEntryDestinationCidrBlock() { this->transitRouterRouteEntryDestinationCidrBlock_ = nullptr;};
    inline string transitRouterRouteEntryDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDestinationCidrBlock_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryDestinationCidrBlock(string transitRouterRouteEntryDestinationCidrBlock) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDestinationCidrBlock_, transitRouterRouteEntryDestinationCidrBlock) };


    // transitRouterRouteEntryId Field Functions 
    bool hasTransitRouterRouteEntryId() const { return this->transitRouterRouteEntryId_ != nullptr;};
    void deleteTransitRouterRouteEntryId() { this->transitRouterRouteEntryId_ = nullptr;};
    inline string transitRouterRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryId_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryId(string transitRouterRouteEntryId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryId_, transitRouterRouteEntryId) };


    // transitRouterRouteEntryName Field Functions 
    bool hasTransitRouterRouteEntryName() const { return this->transitRouterRouteEntryName_ != nullptr;};
    void deleteTransitRouterRouteEntryName() { this->transitRouterRouteEntryName_ = nullptr;};
    inline string transitRouterRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryName_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryName(string transitRouterRouteEntryName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryName_, transitRouterRouteEntryName) };


    // transitRouterRouteEntryNextHopId Field Functions 
    bool hasTransitRouterRouteEntryNextHopId() const { return this->transitRouterRouteEntryNextHopId_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopId() { this->transitRouterRouteEntryNextHopId_ = nullptr;};
    inline string transitRouterRouteEntryNextHopId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopId_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryNextHopId(string transitRouterRouteEntryNextHopId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopId_, transitRouterRouteEntryNextHopId) };


    // transitRouterRouteEntryNextHopResourceId Field Functions 
    bool hasTransitRouterRouteEntryNextHopResourceId() const { return this->transitRouterRouteEntryNextHopResourceId_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopResourceId() { this->transitRouterRouteEntryNextHopResourceId_ = nullptr;};
    inline string transitRouterRouteEntryNextHopResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopResourceId_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryNextHopResourceId(string transitRouterRouteEntryNextHopResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopResourceId_, transitRouterRouteEntryNextHopResourceId) };


    // transitRouterRouteEntryNextHopResourceType Field Functions 
    bool hasTransitRouterRouteEntryNextHopResourceType() const { return this->transitRouterRouteEntryNextHopResourceType_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopResourceType() { this->transitRouterRouteEntryNextHopResourceType_ = nullptr;};
    inline string transitRouterRouteEntryNextHopResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopResourceType_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryNextHopResourceType(string transitRouterRouteEntryNextHopResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopResourceType_, transitRouterRouteEntryNextHopResourceType) };


    // transitRouterRouteEntryNextHopType Field Functions 
    bool hasTransitRouterRouteEntryNextHopType() const { return this->transitRouterRouteEntryNextHopType_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopType() { this->transitRouterRouteEntryNextHopType_ = nullptr;};
    inline string transitRouterRouteEntryNextHopType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopType_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryNextHopType(string transitRouterRouteEntryNextHopType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopType_, transitRouterRouteEntryNextHopType) };


    // transitRouterRouteEntryOriginResourceId Field Functions 
    bool hasTransitRouterRouteEntryOriginResourceId() const { return this->transitRouterRouteEntryOriginResourceId_ != nullptr;};
    void deleteTransitRouterRouteEntryOriginResourceId() { this->transitRouterRouteEntryOriginResourceId_ = nullptr;};
    inline string transitRouterRouteEntryOriginResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryOriginResourceId_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryOriginResourceId(string transitRouterRouteEntryOriginResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryOriginResourceId_, transitRouterRouteEntryOriginResourceId) };


    // transitRouterRouteEntryOriginResourceType Field Functions 
    bool hasTransitRouterRouteEntryOriginResourceType() const { return this->transitRouterRouteEntryOriginResourceType_ != nullptr;};
    void deleteTransitRouterRouteEntryOriginResourceType() { this->transitRouterRouteEntryOriginResourceType_ = nullptr;};
    inline string transitRouterRouteEntryOriginResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryOriginResourceType_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryOriginResourceType(string transitRouterRouteEntryOriginResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryOriginResourceType_, transitRouterRouteEntryOriginResourceType) };


    // transitRouterRouteEntryStatus Field Functions 
    bool hasTransitRouterRouteEntryStatus() const { return this->transitRouterRouteEntryStatus_ != nullptr;};
    void deleteTransitRouterRouteEntryStatus() { this->transitRouterRouteEntryStatus_ = nullptr;};
    inline string transitRouterRouteEntryStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryStatus_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryStatus(string transitRouterRouteEntryStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryStatus_, transitRouterRouteEntryStatus) };


    // transitRouterRouteEntryType Field Functions 
    bool hasTransitRouterRouteEntryType() const { return this->transitRouterRouteEntryType_ != nullptr;};
    void deleteTransitRouterRouteEntryType() { this->transitRouterRouteEntryType_ = nullptr;};
    inline string transitRouterRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryType_, "") };
    inline ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries& setTransitRouterRouteEntryType(string transitRouterRouteEntryType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryType_, transitRouterRouteEntryType) };


  protected:
    // The time when the route entry was created.
    // 
    // The time follows the ISO8601 standard in the YYYY-MM-DDThh:mmZ format. The time is displayed in UTC.
    // 
    // >  This parameter is returned only for static routes.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the route can be managed. Valid values:
    // 
    // *   **true**: The route can be managed. You can delete the route.
    // *   **false**: The route cannot be managed because it is automatically generated by the system.
    std::shared_ptr<bool> operationalMode_ = nullptr;
    // The route attributes.
    std::shared_ptr<Models::ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntriesPathAttributes> pathAttributes_ = nullptr;
    // The prefix list ID.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The route tag.
    // 
    // Only **PermitVbr** may be returned, which indicates that the route is advertised only to the route tables of the virtual border routers (VBRs) that are connected to the transit router.
    // 
    // >  This parameter is returned only for routes whose CIDR blocks are automatically generated by the system.
    std::shared_ptr<string> tag_ = nullptr;
    // The route description.
    // 
    // >  This parameter is returned only for static routes.
    std::shared_ptr<string> transitRouterRouteEntryDescription_ = nullptr;
    // The destination CIDR block of the route entry. An IPv4 or IPv6 CIDR block is returned.
    std::shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock_ = nullptr;
    // The route ID.
    // 
    // >  This parameter is returned only for static routes.
    std::shared_ptr<string> transitRouterRouteEntryId_ = nullptr;
    // The route name.
    // 
    // >  This parameter is returned only for static routes.
    std::shared_ptr<string> transitRouterRouteEntryName_ = nullptr;
    // The next hop ID. This parameter is not returned if the route is a blackhole route.
    std::shared_ptr<string> transitRouterRouteEntryNextHopId_ = nullptr;
    // The next hop ID.
    std::shared_ptr<string> transitRouterRouteEntryNextHopResourceId_ = nullptr;
    // The next hop type. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **TR**
    // *   **VPN**
    std::shared_ptr<string> transitRouterRouteEntryNextHopResourceType_ = nullptr;
    // The next hop type. Valid values:
    // 
    // *   **BlackHole**: a blackhole route. Packets destined for the destination CIDR block of the route are dropped.
    // *   **Attachment**: a network instance connection. Packets destined for the destination CIDR block of the route are forwarded to the specified network instance connection.
    std::shared_ptr<string> transitRouterRouteEntryNextHopType_ = nullptr;
    // The source instance ID.
    std::shared_ptr<string> transitRouterRouteEntryOriginResourceId_ = nullptr;
    // The source instance type. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **TR**
    // *   **VPN**
    std::shared_ptr<string> transitRouterRouteEntryOriginResourceType_ = nullptr;
    // The route status. Valid values:
    // 
    // *   **Active**
    // *   **Rejected**
    // *   **Prohibited**
    // *   **Standby**
    // *   **Candidate**
    // *   **Creating**
    // *   **Deleting**
    std::shared_ptr<string> transitRouterRouteEntryStatus_ = nullptr;
    // The type of the route. Valid values:
    // 
    // *   **Static**: static routes.
    // *   **Propagated**: automatically learned by the route table.
    std::shared_ptr<string> transitRouterRouteEntryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
