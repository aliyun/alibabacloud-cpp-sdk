// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(IgnoreDetailedRouteEntry, ignoreDetailedRouteEntry_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VpdRouteEntryId, vpdRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(IgnoreDetailedRouteEntry, ignoreDetailedRouteEntry_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VpdRouteEntryId, vpdRouteEntryId_);
    };
    ListVccRouteEntriesRequest() = default ;
    ListVccRouteEntriesRequest(const ListVccRouteEntriesRequest &) = default ;
    ListVccRouteEntriesRequest(ListVccRouteEntriesRequest &&) = default ;
    ListVccRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccRouteEntriesRequest() = default ;
    ListVccRouteEntriesRequest& operator=(const ListVccRouteEntriesRequest &) = default ;
    ListVccRouteEntriesRequest& operator=(ListVccRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->enablePage_ == nullptr && this->ignoreDetailedRouteEntry_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeType_ == nullptr && this->status_ == nullptr
        && this->vccId_ == nullptr && this->vpdRouteEntryId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ListVccRouteEntriesRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListVccRouteEntriesRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // ignoreDetailedRouteEntry Field Functions 
    bool hasIgnoreDetailedRouteEntry() const { return this->ignoreDetailedRouteEntry_ != nullptr;};
    void deleteIgnoreDetailedRouteEntry() { this->ignoreDetailedRouteEntry_ = nullptr;};
    inline bool getIgnoreDetailedRouteEntry() const { DARABONBA_PTR_GET_DEFAULT(ignoreDetailedRouteEntry_, false) };
    inline ListVccRouteEntriesRequest& setIgnoreDetailedRouteEntry(bool ignoreDetailedRouteEntry) { DARABONBA_PTR_SET_VALUE(ignoreDetailedRouteEntry_, ignoreDetailedRouteEntry) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline ListVccRouteEntriesRequest& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline ListVccRouteEntriesRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVccRouteEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVccRouteEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVccRouteEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVccRouteEntriesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline ListVccRouteEntriesRequest& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVccRouteEntriesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline ListVccRouteEntriesRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vpdRouteEntryId Field Functions 
    bool hasVpdRouteEntryId() const { return this->vpdRouteEntryId_ != nullptr;};
    void deleteVpdRouteEntryId() { this->vpdRouteEntryId_ = nullptr;};
    inline string getVpdRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vpdRouteEntryId_, "") };
    inline ListVccRouteEntriesRequest& setVpdRouteEntryId(string vpdRouteEntryId) { DARABONBA_PTR_SET_VALUE(vpdRouteEntryId_, vpdRouteEntryId) };


  protected:
    // Destination CIDR block
    shared_ptr<string> destinationCidrBlock_ {};
    // Specifies whether to enable pagination query.
    shared_ptr<bool> enablePage_ {};
    // Filter 32 detailed CIDR blocks. Default value: true
    shared_ptr<bool> ignoreDetailedRouteEntry_ {};
    // Next Hop Instance
    shared_ptr<string> nextHopId_ {};
    // Next Hop Instance Type
    shared_ptr<string> nextHopType_ {};
    // The page number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group instance ID
    shared_ptr<string> resourceGroupId_ {};
    // Route type
    shared_ptr<string> routeType_ {};
    // The status of the enterprise-level snapshot policy.
    shared_ptr<string> status_ {};
    // The ID of the Lingjun connection instance.
    // 
    // This parameter is required.
    shared_ptr<string> vccId_ {};
    // Lingjun CIDR block route entry instance ID
    shared_ptr<string> vpdRouteEntryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
