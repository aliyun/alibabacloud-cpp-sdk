// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEPROPAGATIONSRESPONSEBODYTRANSITROUTERPROPAGATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEPROPAGATIONSRESPONSEBODYTRANSITROUTERPROPAGATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations() = default ;
    ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations(const ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations &) = default ;
    ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations(ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations &&) = default ;
    ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations() = default ;
    ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& operator=(const ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations &) = default ;
    ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& operator=(ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->status_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterRouteTableId_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


  protected:
    // The ID of the network instance.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **TR**: transit router
    // *   **VPN**: VPN connection
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the route learning correlation. Valid values:
    // 
    // *   **Enabling**: being enabled
    // *   **Disabling**: being disabled
    // *   **Active**: available
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the route table of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
