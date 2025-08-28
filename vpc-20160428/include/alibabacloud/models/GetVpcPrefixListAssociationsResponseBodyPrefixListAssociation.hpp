// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSEBODYPREFIXLISTASSOCIATION_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSEBODYPREFIXLISTASSOCIATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& obj) { 
      DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation() = default ;
    GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation(const GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation &) = default ;
    GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation(GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation &&) = default ;
    GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation() = default ;
    GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& operator=(const GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation &) = default ;
    GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& operator=(GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrList_ != nullptr
        && this->ownerId_ != nullptr && this->prefixListId_ != nullptr && this->reason_ != nullptr && this->regionId_ != nullptr && this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->resourceUid_ != nullptr && this->status_ != nullptr; };
    // cidrList Field Functions 
    bool hasCidrList() const { return this->cidrList_ != nullptr;};
    void deleteCidrList() { this->cidrList_ = nullptr;};
    inline string cidrList() const { DARABONBA_PTR_GET_DEFAULT(cidrList_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setCidrList(string cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string resourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // List of CIDR addresses where the prefix list is effective in the currently associated resources.
    std::shared_ptr<string> cidrList_ = nullptr;
    // The ID of the Alibaba Cloud account to which the prefix list belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The prefix list ID.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The reason why the association failed.
    std::shared_ptr<string> reason_ = nullptr;
    // The region ID of the prefix list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the associated resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the associated resource. Valid values:
    // 
    // *   **vpcRouteTable**: virtual private cloud (VPC) route table.
    // *   **trRouteTable**: route table of a transit router.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource associated with the prefix list belongs.
    std::shared_ptr<string> resourceUid_ = nullptr;
    // The status of the prefix list. Valid values:
    // 
    // *   **Created**
    // *   **ModifyFailed**
    // *   **Creating**
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
