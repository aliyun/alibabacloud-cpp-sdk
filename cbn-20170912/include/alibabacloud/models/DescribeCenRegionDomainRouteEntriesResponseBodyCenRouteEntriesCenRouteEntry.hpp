// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths.hpp>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords.hpp>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords.hpp>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AsPaths, asPaths_);
      DARABONBA_PTR_TO_JSON(CenOutRouteMapRecords, cenOutRouteMapRecords_);
      DARABONBA_PTR_TO_JSON(CenRouteMapRecords, cenRouteMapRecords_);
      DARABONBA_PTR_TO_JSON(Communities, communities_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_TO_JSON(NextHopRegionId, nextHopRegionId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(Preference, preference_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ToOtherRegionStatus, toOtherRegionStatus_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPaths, asPaths_);
      DARABONBA_PTR_FROM_JSON(CenOutRouteMapRecords, cenOutRouteMapRecords_);
      DARABONBA_PTR_FROM_JSON(CenRouteMapRecords, cenRouteMapRecords_);
      DARABONBA_PTR_FROM_JSON(Communities, communities_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_FROM_JSON(NextHopRegionId, nextHopRegionId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(Preference, preference_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ToOtherRegionStatus, toOtherRegionStatus_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& operator=(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& operator=(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPaths_ != nullptr
        && this->cenOutRouteMapRecords_ != nullptr && this->cenRouteMapRecords_ != nullptr && this->communities_ != nullptr && this->destinationCidrBlock_ != nullptr && this->nextHopInstanceId_ != nullptr
        && this->nextHopRegionId_ != nullptr && this->nextHopType_ != nullptr && this->preference_ != nullptr && this->status_ != nullptr && this->toOtherRegionStatus_ != nullptr
        && this->type_ != nullptr; };
    // asPaths Field Functions 
    bool hasAsPaths() const { return this->asPaths_ != nullptr;};
    void deleteAsPaths() { this->asPaths_ = nullptr;};
    inline const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths & asPaths() const { DARABONBA_PTR_GET_CONST(asPaths_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths) };
    inline Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths asPaths() { DARABONBA_PTR_GET(asPaths_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setAsPaths(const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths & asPaths) { DARABONBA_PTR_SET_VALUE(asPaths_, asPaths) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setAsPaths(Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths && asPaths) { DARABONBA_PTR_SET_RVALUE(asPaths_, asPaths) };


    // cenOutRouteMapRecords Field Functions 
    bool hasCenOutRouteMapRecords() const { return this->cenOutRouteMapRecords_ != nullptr;};
    void deleteCenOutRouteMapRecords() { this->cenOutRouteMapRecords_ = nullptr;};
    inline const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords & cenOutRouteMapRecords() const { DARABONBA_PTR_GET_CONST(cenOutRouteMapRecords_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords) };
    inline Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords cenOutRouteMapRecords() { DARABONBA_PTR_GET(cenOutRouteMapRecords_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCenOutRouteMapRecords(const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords & cenOutRouteMapRecords) { DARABONBA_PTR_SET_VALUE(cenOutRouteMapRecords_, cenOutRouteMapRecords) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCenOutRouteMapRecords(Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords && cenOutRouteMapRecords) { DARABONBA_PTR_SET_RVALUE(cenOutRouteMapRecords_, cenOutRouteMapRecords) };


    // cenRouteMapRecords Field Functions 
    bool hasCenRouteMapRecords() const { return this->cenRouteMapRecords_ != nullptr;};
    void deleteCenRouteMapRecords() { this->cenRouteMapRecords_ = nullptr;};
    inline const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords & cenRouteMapRecords() const { DARABONBA_PTR_GET_CONST(cenRouteMapRecords_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords) };
    inline Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords cenRouteMapRecords() { DARABONBA_PTR_GET(cenRouteMapRecords_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCenRouteMapRecords(const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords & cenRouteMapRecords) { DARABONBA_PTR_SET_VALUE(cenRouteMapRecords_, cenRouteMapRecords) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCenRouteMapRecords(Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords && cenRouteMapRecords) { DARABONBA_PTR_SET_RVALUE(cenRouteMapRecords_, cenRouteMapRecords) };


    // communities Field Functions 
    bool hasCommunities() const { return this->communities_ != nullptr;};
    void deleteCommunities() { this->communities_ = nullptr;};
    inline const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities & communities() const { DARABONBA_PTR_GET_CONST(communities_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities) };
    inline Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities communities() { DARABONBA_PTR_GET(communities_, Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCommunities(const Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities & communities) { DARABONBA_PTR_SET_VALUE(communities_, communities) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCommunities(Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities && communities) { DARABONBA_PTR_SET_RVALUE(communities_, communities) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHopInstanceId Field Functions 
    bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
    void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
    inline string nextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


    // nextHopRegionId Field Functions 
    bool hasNextHopRegionId() const { return this->nextHopRegionId_ != nullptr;};
    void deleteNextHopRegionId() { this->nextHopRegionId_ = nullptr;};
    inline string nextHopRegionId() const { DARABONBA_PTR_GET_DEFAULT(nextHopRegionId_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setNextHopRegionId(string nextHopRegionId) { DARABONBA_PTR_SET_VALUE(nextHopRegionId_, nextHopRegionId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // preference Field Functions 
    bool hasPreference() const { return this->preference_ != nullptr;};
    void deletePreference() { this->preference_ = nullptr;};
    inline int32_t preference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toOtherRegionStatus Field Functions 
    bool hasToOtherRegionStatus() const { return this->toOtherRegionStatus_ != nullptr;};
    void deleteToOtherRegionStatus() { this->toOtherRegionStatus_ = nullptr;};
    inline string toOtherRegionStatus() const { DARABONBA_PTR_GET_DEFAULT(toOtherRegionStatus_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setToOtherRegionStatus(string toOtherRegionStatus) { DARABONBA_PTR_SET_VALUE(toOtherRegionStatus_, toOtherRegionStatus) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The AS paths of the route.
    std::shared_ptr<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths> asPaths_ = nullptr;
    // The routing policy that the routes match in the outbound direction.
    std::shared_ptr<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords> cenOutRouteMapRecords_ = nullptr;
    // The routing policy that the routes match in the inbound direction.
    std::shared_ptr<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords> cenRouteMapRecords_ = nullptr;
    // The communities of the route.
    std::shared_ptr<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities> communities_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the instance specified as the next hop in the route.
    std::shared_ptr<string> nextHopInstanceId_ = nullptr;
    // The ID of the region to which the network instance specified as the next hop in the route belongs.
    std::shared_ptr<string> nextHopRegionId_ = nullptr;
    // The type of the instance specified as the next hop in the route. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC)
    // *   **VBR**: virtual border router (VBR)
    // *   **CCN**: Cloud Connect Network (CCN) instance
    // *   **local_service**: system route. No next hop is specified.
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The route priority.
    // 
    // A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> preference_ = nullptr;
    // The route status. Valid values:
    // 
    // *   **Active**: available
    // *   **Candidate**: standby
    // *   **Rejected**: rejected
    // *   **Prohibited**: prohibited
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the route can be advertised to other regions. Valid values:
    // 
    // *   **Active**: The route can be advertised to other regions.
    // *   **Prohibited**: The route cannot be advertised to other regions.
    std::shared_ptr<string> toOtherRegionStatus_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **CEN**: route that is advertised through CEN
    // *   **Custom**: custom route
    // *   **System**: system route
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
