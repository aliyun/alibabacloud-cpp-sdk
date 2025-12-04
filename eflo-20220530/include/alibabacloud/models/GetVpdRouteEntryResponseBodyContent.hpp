// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDROUTEENTRYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETVPDROUTEENTRYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVpdRouteEntryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdRouteEntryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdRouteEntryId, vpdRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdRouteEntryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdRouteEntryId, vpdRouteEntryId_);
    };
    GetVpdRouteEntryResponseBodyContent() = default ;
    GetVpdRouteEntryResponseBodyContent(const GetVpdRouteEntryResponseBodyContent &) = default ;
    GetVpdRouteEntryResponseBodyContent(GetVpdRouteEntryResponseBodyContent &&) = default ;
    GetVpdRouteEntryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdRouteEntryResponseBodyContent() = default ;
    GetVpdRouteEntryResponseBodyContent& operator=(const GetVpdRouteEntryResponseBodyContent &) = default ;
    GetVpdRouteEntryResponseBodyContent& operator=(GetVpdRouteEntryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && return this->gmtModified_ == nullptr && return this->nextHopId_ == nullptr && return this->nextHopType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->routeType_ == nullptr && return this->status_ == nullptr && return this->tenantId_ == nullptr && return this->vpdId_ == nullptr && return this->vpdRouteEntryId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdRouteEntryId Field Functions 
    bool hasVpdRouteEntryId() const { return this->vpdRouteEntryId_ != nullptr;};
    void deleteVpdRouteEntryId() { this->vpdRouteEntryId_ = nullptr;};
    inline string vpdRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vpdRouteEntryId_, "") };
    inline GetVpdRouteEntryResponseBodyContent& setVpdRouteEntryId(string vpdRouteEntryId) { DARABONBA_PTR_SET_VALUE(vpdRouteEntryId_, vpdRouteEntryId) };


  protected:
    // Destination CIDR block
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Next Hop Instance
    std::shared_ptr<string> nextHopId_ = nullptr;
    // Next Hop Instance Type
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Route type
    std::shared_ptr<string> routeType_ = nullptr;
    // The status of the intervention entry. Valid value:
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Lingjun CIDR block instance ID
    std::shared_ptr<string> vpdId_ = nullptr;
    // Lingjun CIDR block route entry ID
    std::shared_ptr<string> vpdRouteEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
