// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UAIDCONVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UAIDCONVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class UAIDConversionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UAIDConversionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UaidList, uaidList_);
    };
    friend void from_json(const Darabonba::Json& j, UAIDConversionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UaidList, uaidList_);
    };
    UAIDConversionRequest() = default ;
    UAIDConversionRequest(const UAIDConversionRequest &) = default ;
    UAIDConversionRequest(UAIDConversionRequest &&) = default ;
    UAIDConversionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UAIDConversionRequest() = default ;
    UAIDConversionRequest& operator=(const UAIDConversionRequest &) = default ;
    UAIDConversionRequest& operator=(UAIDConversionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->carrier_ == nullptr && this->outId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->uaidList_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline UAIDConversionRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline UAIDConversionRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline UAIDConversionRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UAIDConversionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UAIDConversionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UAIDConversionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uaidList Field Functions 
    bool hasUaidList() const { return this->uaidList_ != nullptr;};
    void deleteUaidList() { this->uaidList_ = nullptr;};
    inline string getUaidList() const { DARABONBA_PTR_GET_DEFAULT(uaidList_, "") };
    inline UAIDConversionRequest& setUaidList(string uaidList) { DARABONBA_PTR_SET_VALUE(uaidList_, uaidList) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> carrier_ {};
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> uaidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
