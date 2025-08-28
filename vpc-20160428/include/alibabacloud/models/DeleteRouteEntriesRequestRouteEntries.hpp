// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEENTRIESREQUESTROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEENTRIESREQUESTROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteRouteEntriesRequestRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteEntriesRequestRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteEntriesRequestRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DeleteRouteEntriesRequestRouteEntries() = default ;
    DeleteRouteEntriesRequestRouteEntries(const DeleteRouteEntriesRequestRouteEntries &) = default ;
    DeleteRouteEntriesRequestRouteEntries(DeleteRouteEntriesRequestRouteEntries &&) = default ;
    DeleteRouteEntriesRequestRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteEntriesRequestRouteEntries() = default ;
    DeleteRouteEntriesRequestRouteEntries& operator=(const DeleteRouteEntriesRequestRouteEntries &) = default ;
    DeleteRouteEntriesRequestRouteEntries& operator=(DeleteRouteEntriesRequestRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstCidrBlock_ != nullptr
        && this->nextHop_ != nullptr && this->routeEntryId_ != nullptr && this->routeTableId_ != nullptr; };
    // dstCidrBlock Field Functions 
    bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
    void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
    inline string dstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
    inline DeleteRouteEntriesRequestRouteEntries& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline DeleteRouteEntriesRequestRouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DeleteRouteEntriesRequestRouteEntries& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DeleteRouteEntriesRequestRouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The destination CIDR block of the route that you want to delete. IPv4 and IPv6 CIDR blocks are supported. You can specify up to 50 destination CIDR blocks.
    // 
    // >  If **RouteEntryId** is not specified, **DstCidrBlock** and **NextHop** are required.
    std::shared_ptr<string> dstCidrBlock_ = nullptr;
    // The ID of the next hop that you want to delete. You can specify up to 50 next hop IDs.
    // 
    // >  If **RouteEntryId** is not specified, **DstCidrBlock** and **NextHop** are required.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The ID of the route that you want to delete. You can specify up to 50 route IDs.
    // 
    // >  If **RouteEntryId** is not specified, **DstCidrBlock** and **NextHop** are required.
    std::shared_ptr<string> routeEntryId_ = nullptr;
    // The ID of the route table to which the routes to be deleted belongs. You can specify up to 50 route table IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
