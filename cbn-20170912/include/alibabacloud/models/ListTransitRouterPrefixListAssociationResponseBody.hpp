// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONRESPONSEBODY_HPP_
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
  class ListTransitRouterPrefixListAssociationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPrefixListAssociationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPrefixListAssociationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTransitRouterPrefixListAssociationResponseBody() = default ;
    ListTransitRouterPrefixListAssociationResponseBody(const ListTransitRouterPrefixListAssociationResponseBody &) = default ;
    ListTransitRouterPrefixListAssociationResponseBody(ListTransitRouterPrefixListAssociationResponseBody &&) = default ;
    ListTransitRouterPrefixListAssociationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPrefixListAssociationResponseBody() = default ;
    ListTransitRouterPrefixListAssociationResponseBody& operator=(const ListTransitRouterPrefixListAssociationResponseBody &) = default ;
    ListTransitRouterPrefixListAssociationResponseBody& operator=(ListTransitRouterPrefixListAssociationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixLists& obj) { 
        DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
        DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterTableId, transitRouterTableId_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixLists& obj) { 
        DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
        DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterTableId, transitRouterTableId_);
      };
      PrefixLists() = default ;
      PrefixLists(const PrefixLists &) = default ;
      PrefixLists(PrefixLists &&) = default ;
      PrefixLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixLists() = default ;
      PrefixLists& operator=(const PrefixLists &) = default ;
      PrefixLists& operator=(PrefixLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nextHop_ == nullptr
        && this->nextHopInstanceId_ == nullptr && this->nextHopType_ == nullptr && this->ownerUid_ == nullptr && this->prefixListId_ == nullptr && this->status_ == nullptr
        && this->transitRouterId_ == nullptr && this->transitRouterTableId_ == nullptr; };
      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline PrefixLists& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // nextHopInstanceId Field Functions 
      bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
      void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
      inline string getNextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
      inline PrefixLists& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline PrefixLists& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline int64_t getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
      inline PrefixLists& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // prefixListId Field Functions 
      bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
      void deletePrefixListId() { this->prefixListId_ = nullptr;};
      inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
      inline PrefixLists& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrefixLists& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline PrefixLists& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterTableId Field Functions 
      bool hasTransitRouterTableId() const { return this->transitRouterTableId_ != nullptr;};
      void deleteTransitRouterTableId() { this->transitRouterTableId_ = nullptr;};
      inline string getTransitRouterTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterTableId_, "") };
      inline PrefixLists& setTransitRouterTableId(string transitRouterTableId) { DARABONBA_PTR_SET_VALUE(transitRouterTableId_, transitRouterTableId) };


    protected:
      // The ID of the next hop.
      // 
      // > A value of **BlackHole** indicates that all the CIDR blocks in the prefix list are blackhole routes. Packets destined for the CIDR blocks are dropped.
      shared_ptr<string> nextHop_ {};
      // The ID of the network instance associated with the next hop connection.
      shared_ptr<string> nextHopInstanceId_ {};
      // The type of the next hop. Valid values:
      // 
      // *   **BlackHole**: All the CIDR blocks in the prefix list are blackhole routes. Packets destined for the CIDR blocks are dropped.
      // *   **VPC**: The next hop of the CIDR blocks in the prefix list is a VPC connection.
      // *   **VBR**: The next hop of the CIDR blocks in the prefix list is a VBR connection.
      // *   **TR**: The next hop of the CIDR blocks in the prefix list is an inter-region connection.
      shared_ptr<string> nextHopType_ {};
      // The ID of the Alibaba Cloud account to which the prefix list belongs.
      shared_ptr<int64_t> ownerUid_ {};
      // The ID of the prefix list.
      shared_ptr<string> prefixListId_ {};
      // The status of the prefix list. Valid values:
      // 
      // *   **Active**: The prefix list is effective.
      // *   **Updating**: The prefix list is being updated.
      shared_ptr<string> status_ {};
      // The ID of the transit router.
      shared_ptr<string> transitRouterId_ {};
      // The ID of the route table of the transit router.
      shared_ptr<string> transitRouterTableId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->prefixLists_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prefixLists Field Functions 
    bool hasPrefixLists() const { return this->prefixLists_ != nullptr;};
    void deletePrefixLists() { this->prefixLists_ = nullptr;};
    inline const vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists> & getPrefixLists() const { DARABONBA_PTR_GET_CONST(prefixLists_, vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists>) };
    inline vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists> getPrefixLists() { DARABONBA_PTR_GET(prefixLists_, vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists>) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPrefixLists(const vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists> & prefixLists) { DARABONBA_PTR_SET_VALUE(prefixLists_, prefixLists) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPrefixLists(vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists> && prefixLists) { DARABONBA_PTR_SET_RVALUE(prefixLists_, prefixLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // A list of prefix lists.
    shared_ptr<vector<ListTransitRouterPrefixListAssociationResponseBody::PrefixLists>> prefixLists_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
