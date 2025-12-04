// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCROUTEENTRYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETVCCROUTEENTRYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccRouteEntryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccRouteEntryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccRouteEntryId, vccRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccRouteEntryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccRouteEntryId, vccRouteEntryId_);
    };
    GetVccRouteEntryResponseBodyContent() = default ;
    GetVccRouteEntryResponseBodyContent(const GetVccRouteEntryResponseBodyContent &) = default ;
    GetVccRouteEntryResponseBodyContent(GetVccRouteEntryResponseBodyContent &&) = default ;
    GetVccRouteEntryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccRouteEntryResponseBodyContent() = default ;
    GetVccRouteEntryResponseBodyContent& operator=(const GetVccRouteEntryResponseBodyContent &) = default ;
    GetVccRouteEntryResponseBodyContent& operator=(GetVccRouteEntryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && return this->gmtModified_ == nullptr && return this->message_ == nullptr && return this->nextHopId_ == nullptr && return this->nextHopType_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->routeType_ == nullptr && return this->status_ == nullptr && return this->tenantId_ == nullptr && return this->vccId_ == nullptr
        && return this->vccRouteEntryId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline GetVccRouteEntryResponseBodyContent& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetVccRouteEntryResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVccRouteEntryResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline GetVccRouteEntryResponseBodyContent& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline GetVccRouteEntryResponseBodyContent& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVccRouteEntryResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVccRouteEntryResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline GetVccRouteEntryResponseBodyContent& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVccRouteEntryResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetVccRouteEntryResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline GetVccRouteEntryResponseBodyContent& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccRouteEntryId Field Functions 
    bool hasVccRouteEntryId() const { return this->vccRouteEntryId_ != nullptr;};
    void deleteVccRouteEntryId() { this->vccRouteEntryId_ = nullptr;};
    inline string vccRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vccRouteEntryId_, "") };
    inline GetVccRouteEntryResponseBodyContent& setVccRouteEntryId(string vccRouteEntryId) { DARABONBA_PTR_SET_VALUE(vccRouteEntryId_, vccRouteEntryId) };


  protected:
    // Destination CIDR Block
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // Next Hop Instance
    std::shared_ptr<string> nextHopId_ = nullptr;
    // Next Hop Type
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
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
    // The ID of the route entry.
    std::shared_ptr<string> vccRouteEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
