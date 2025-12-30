// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DeleteRouteEntryRequest() = default ;
    DeleteRouteEntryRequest(const DeleteRouteEntryRequest &) = default ;
    DeleteRouteEntryRequest(DeleteRouteEntryRequest &&) = default ;
    DeleteRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteEntryRequest() = default ;
    DeleteRouteEntryRequest& operator=(const DeleteRouteEntryRequest &) = default ;
    DeleteRouteEntryRequest& operator=(DeleteRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->nextHopId_ == nullptr && this->regionId_ == nullptr && this->routeEntryId_ == nullptr && this->routeTableId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DeleteRouteEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DeleteRouteEntryRequest& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DeleteRouteEntryRequest& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DeleteRouteEntryRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    shared_ptr<string> destinationCidrBlock_ {};
    shared_ptr<string> nextHopId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> routeEntryId_ {};
    // This parameter is required.
    shared_ptr<string> routeTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
