// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECENVBRHEALTHCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLECENVBRHEALTHCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DisableCenVbrHealthCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableCenVbrHealthCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceOwnerId, vbrInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableCenVbrHealthCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceOwnerId, vbrInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
    };
    DisableCenVbrHealthCheckRequest() = default ;
    DisableCenVbrHealthCheckRequest(const DisableCenVbrHealthCheckRequest &) = default ;
    DisableCenVbrHealthCheckRequest(DisableCenVbrHealthCheckRequest &&) = default ;
    DisableCenVbrHealthCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableCenVbrHealthCheckRequest() = default ;
    DisableCenVbrHealthCheckRequest& operator=(const DisableCenVbrHealthCheckRequest &) = default ;
    DisableCenVbrHealthCheckRequest& operator=(DisableCenVbrHealthCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->vbrInstanceId_ != nullptr
        && this->vbrInstanceOwnerId_ != nullptr && this->vbrInstanceRegionId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DisableCenVbrHealthCheckRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DisableCenVbrHealthCheckRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DisableCenVbrHealthCheckRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DisableCenVbrHealthCheckRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DisableCenVbrHealthCheckRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vbrInstanceId Field Functions 
    bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
    void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
    inline string vbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
    inline DisableCenVbrHealthCheckRequest& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


    // vbrInstanceOwnerId Field Functions 
    bool hasVbrInstanceOwnerId() const { return this->vbrInstanceOwnerId_ != nullptr;};
    void deleteVbrInstanceOwnerId() { this->vbrInstanceOwnerId_ = nullptr;};
    inline int64_t vbrInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceOwnerId_, 0L) };
    inline DisableCenVbrHealthCheckRequest& setVbrInstanceOwnerId(int64_t vbrInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(vbrInstanceOwnerId_, vbrInstanceOwnerId) };


    // vbrInstanceRegionId Field Functions 
    bool hasVbrInstanceRegionId() const { return this->vbrInstanceRegionId_ != nullptr;};
    void deleteVbrInstanceRegionId() { this->vbrInstanceRegionId_ = nullptr;};
    inline string vbrInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceRegionId_, "") };
    inline DisableCenVbrHealthCheckRequest& setVbrInstanceRegionId(string vbrInstanceRegionId) { DARABONBA_PTR_SET_VALUE(vbrInstanceRegionId_, vbrInstanceRegionId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the VBR.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrInstanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    // 
    // > This parameter is required if the VBR and the CEN instance belong to different Alibaba Cloud accounts.
    std::shared_ptr<int64_t> vbrInstanceOwnerId_ = nullptr;
    // The ID of the region where the VBR is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
