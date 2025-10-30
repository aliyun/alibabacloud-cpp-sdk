// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPICKUPWAYBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELPICKUPWAYBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CancelPickUpWaybillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPickUpWaybillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CancelDesc, cancelDesc_);
      DARABONBA_PTR_TO_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPickUpWaybillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelDesc, cancelDesc_);
      DARABONBA_PTR_FROM_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CancelPickUpWaybillRequest() = default ;
    CancelPickUpWaybillRequest(const CancelPickUpWaybillRequest &) = default ;
    CancelPickUpWaybillRequest(CancelPickUpWaybillRequest &&) = default ;
    CancelPickUpWaybillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPickUpWaybillRequest() = default ;
    CancelPickUpWaybillRequest& operator=(const CancelPickUpWaybillRequest &) = default ;
    CancelPickUpWaybillRequest& operator=(CancelPickUpWaybillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelDesc_ == nullptr
        && return this->outerOrderCode_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // cancelDesc Field Functions 
    bool hasCancelDesc() const { return this->cancelDesc_ != nullptr;};
    void deleteCancelDesc() { this->cancelDesc_ = nullptr;};
    inline string cancelDesc() const { DARABONBA_PTR_GET_DEFAULT(cancelDesc_, "") };
    inline CancelPickUpWaybillRequest& setCancelDesc(string cancelDesc) { DARABONBA_PTR_SET_VALUE(cancelDesc_, cancelDesc) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string outerOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CancelPickUpWaybillRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CancelPickUpWaybillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CancelPickUpWaybillRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CancelPickUpWaybillRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The cancellation reason.
    // 
    // This parameter is required.
    std::shared_ptr<string> cancelDesc_ = nullptr;
    // The ID of the external order.
    // 
    // This parameter is required.
    std::shared_ptr<string> outerOrderCode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
