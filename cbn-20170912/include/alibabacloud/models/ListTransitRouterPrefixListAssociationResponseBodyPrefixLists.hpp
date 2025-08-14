// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONRESPONSEBODYPREFIXLISTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONRESPONSEBODYPREFIXLISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPrefixListAssociationResponseBodyPrefixLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& obj) { 
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterTableId, transitRouterTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterTableId, transitRouterTableId_);
    };
    ListTransitRouterPrefixListAssociationResponseBodyPrefixLists() = default ;
    ListTransitRouterPrefixListAssociationResponseBodyPrefixLists(const ListTransitRouterPrefixListAssociationResponseBodyPrefixLists &) = default ;
    ListTransitRouterPrefixListAssociationResponseBodyPrefixLists(ListTransitRouterPrefixListAssociationResponseBodyPrefixLists &&) = default ;
    ListTransitRouterPrefixListAssociationResponseBodyPrefixLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPrefixListAssociationResponseBodyPrefixLists() = default ;
    ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& operator=(const ListTransitRouterPrefixListAssociationResponseBodyPrefixLists &) = default ;
    ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& operator=(ListTransitRouterPrefixListAssociationResponseBodyPrefixLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextHop_ != nullptr
        && this->nextHopInstanceId_ != nullptr && this->nextHopType_ != nullptr && this->ownerUid_ != nullptr && this->prefixListId_ != nullptr && this->status_ != nullptr
        && this->transitRouterId_ != nullptr && this->transitRouterTableId_ != nullptr; };
    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // nextHopInstanceId Field Functions 
    bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
    void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
    inline string nextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterTableId Field Functions 
    bool hasTransitRouterTableId() const { return this->transitRouterTableId_ != nullptr;};
    void deleteTransitRouterTableId() { this->transitRouterTableId_ = nullptr;};
    inline string transitRouterTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterTableId_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBodyPrefixLists& setTransitRouterTableId(string transitRouterTableId) { DARABONBA_PTR_SET_VALUE(transitRouterTableId_, transitRouterTableId) };


  protected:
    // The ID of the next hop.
    // 
    // > A value of **BlackHole** indicates that all the CIDR blocks in the prefix list are blackhole routes. Packets destined for the CIDR blocks are dropped.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The ID of the network instance associated with the next hop connection.
    std::shared_ptr<string> nextHopInstanceId_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **BlackHole**: All the CIDR blocks in the prefix list are blackhole routes. Packets destined for the CIDR blocks are dropped.
    // *   **VPC**: The next hop of the CIDR blocks in the prefix list is a VPC connection.
    // *   **VBR**: The next hop of the CIDR blocks in the prefix list is a VBR connection.
    // *   **TR**: The next hop of the CIDR blocks in the prefix list is an inter-region connection.
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The ID of the Alibaba Cloud account to which the prefix list belongs.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The ID of the prefix list.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The status of the prefix list. Valid values:
    // 
    // *   **Active**: The prefix list is effective.
    // *   **Updating**: The prefix list is being updated.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the route table of the transit router.
    std::shared_ptr<string> transitRouterTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
