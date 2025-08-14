// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTRESPONSEBODYROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTRESPONSEBODYROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry(const ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry(ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry &&) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& operator=(const ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& operator=(ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceRouteTableId_ != nullptr && this->destinationCidrBlock_ != nullptr && this->serviceType_ != nullptr && this->status_ != nullptr && this->transitRouterAttachmentId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceRouteTableId Field Functions 
    bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
    void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
    inline string childInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the route table configured on the network instance.
    std::shared_ptr<string> childInstanceRouteTableId_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // Indicates whether the route is hosted. If the parameter is empty, the route is not hosted. A value of TR indicates that the route is hosted on a transit router.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The status of the route. Valid values:
    // 
    // *   **Available**: The route is available.
    // *   **Pending**: The route is being configured.
    // *   **Modifying**: the route is being modified.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
