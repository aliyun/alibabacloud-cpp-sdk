// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINASSOCIATIONSRESPONSEBODYTRANSITROUTERMULTICASTASSOCIATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINASSOCIATIONSRESPONSEBODYTRANSITROUTERMULTICASTASSOCIATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations() = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations(const ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations &) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations(ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations &&) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations() = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& operator=(const ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations &) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& operator=(ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr
        && this->vSwitchId_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the resource associated with the multicast domain.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource associated with the multicast domain belongs.
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The type of resource associated with the multicast domain.
    // 
    // Valid value: **VPC**.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The association status. Valid values:
    // 
    // *   **Associated**: The resource is associated with the multicast domain.
    // *   **Associating**: The resource is being associated with the multicast domain.
    // *   **Dissociating**: The resource is being disassociated from the multicast domain.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the multicast domain.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
