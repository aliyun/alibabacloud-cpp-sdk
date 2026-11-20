// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAXBBINDFIXEDLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAXBBINDFIXEDLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class DeleteAxbBindFixedLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAxbBindFixedLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAxbBindFixedLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    DeleteAxbBindFixedLineRequest() = default ;
    DeleteAxbBindFixedLineRequest(const DeleteAxbBindFixedLineRequest &) = default ;
    DeleteAxbBindFixedLineRequest(DeleteAxbBindFixedLineRequest &&) = default ;
    DeleteAxbBindFixedLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAxbBindFixedLineRequest() = default ;
    DeleteAxbBindFixedLineRequest& operator=(const DeleteAxbBindFixedLineRequest &) = default ;
    DeleteAxbBindFixedLineRequest& operator=(DeleteAxbBindFixedLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->orderId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->subId_ == nullptr
        && this->ts_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAxbBindFixedLineRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline DeleteAxbBindFixedLineRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteAxbBindFixedLineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteAxbBindFixedLineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteAxbBindFixedLineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline DeleteAxbBindFixedLineRequest& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline DeleteAxbBindFixedLineRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // Number pool ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Unique identifier of the message request.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Binding ID.
    // 
    // This parameter is required.
    shared_ptr<string> subId_ {};
    // Business timestamp. Format: yyyyMMddHHmmssSSS. The time uses Beijing time in 24-hour clock format, accurate to milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> ts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
