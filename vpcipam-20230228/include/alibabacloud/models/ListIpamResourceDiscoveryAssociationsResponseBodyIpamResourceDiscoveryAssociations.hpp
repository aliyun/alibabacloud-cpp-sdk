// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERYASSOCIATIONSRESPONSEBODYIPAMRESOURCEDISCOVERYASSOCIATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERYASSOCIATIONSRESPONSEBODYIPAMRESOURCEDISCOVERYASSOCIATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& obj) { 
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryOwnerId, ipamResourceDiscoveryOwnerId_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryType, ipamResourceDiscoveryType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryOwnerId, ipamResourceDiscoveryOwnerId_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryType, ipamResourceDiscoveryType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations() = default ;
    ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations(const ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations &) = default ;
    ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations(ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations &&) = default ;
    ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations() = default ;
    ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& operator=(const ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations &) = default ;
    ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& operator=(ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamId_ == nullptr
        && return this->ipamResourceDiscoveryId_ == nullptr && return this->ipamResourceDiscoveryOwnerId_ == nullptr && return this->ipamResourceDiscoveryStatus_ == nullptr && return this->ipamResourceDiscoveryType_ == nullptr && return this->status_ == nullptr; };
    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string ipamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string ipamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // ipamResourceDiscoveryOwnerId Field Functions 
    bool hasIpamResourceDiscoveryOwnerId() const { return this->ipamResourceDiscoveryOwnerId_ != nullptr;};
    void deleteIpamResourceDiscoveryOwnerId() { this->ipamResourceDiscoveryOwnerId_ = nullptr;};
    inline string ipamResourceDiscoveryOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryOwnerId_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& setIpamResourceDiscoveryOwnerId(string ipamResourceDiscoveryOwnerId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryOwnerId_, ipamResourceDiscoveryOwnerId) };


    // ipamResourceDiscoveryStatus Field Functions 
    bool hasIpamResourceDiscoveryStatus() const { return this->ipamResourceDiscoveryStatus_ != nullptr;};
    void deleteIpamResourceDiscoveryStatus() { this->ipamResourceDiscoveryStatus_ = nullptr;};
    inline string ipamResourceDiscoveryStatus() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryStatus_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& setIpamResourceDiscoveryStatus(string ipamResourceDiscoveryStatus) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryStatus_, ipamResourceDiscoveryStatus) };


    // ipamResourceDiscoveryType Field Functions 
    bool hasIpamResourceDiscoveryType() const { return this->ipamResourceDiscoveryType_ != nullptr;};
    void deleteIpamResourceDiscoveryType() { this->ipamResourceDiscoveryType_ = nullptr;};
    inline string ipamResourceDiscoveryType() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryType_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& setIpamResourceDiscoveryType(string ipamResourceDiscoveryType) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryType_, ipamResourceDiscoveryType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBodyIpamResourceDiscoveryAssociations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the IPAM.
    std::shared_ptr<string> ipamId_ = nullptr;
    // The ID of resource discovery instance.
    std::shared_ptr<string> ipamResourceDiscoveryId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource discovery belongs.
    std::shared_ptr<string> ipamResourceDiscoveryOwnerId_ = nullptr;
    // The status of the resource discovery instance. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> ipamResourceDiscoveryStatus_ = nullptr;
    // The type of resource discovery. Valid values:
    // 
    // *   **system**: default resource discovery created by the system.
    // *   **custom**: custom resource discovery created by users.
    std::shared_ptr<string> ipamResourceDiscoveryType_ = nullptr;
    // The status of the associations. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
