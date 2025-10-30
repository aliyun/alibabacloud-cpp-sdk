// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryPhoneNoAByTrackNoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPhoneNoAByTrackNoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CabinetNo, cabinetNo_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(trackNo, trackNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPhoneNoAByTrackNoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CabinetNo, cabinetNo_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(trackNo, trackNo_);
    };
    QueryPhoneNoAByTrackNoRequest() = default ;
    QueryPhoneNoAByTrackNoRequest(const QueryPhoneNoAByTrackNoRequest &) = default ;
    QueryPhoneNoAByTrackNoRequest(QueryPhoneNoAByTrackNoRequest &&) = default ;
    QueryPhoneNoAByTrackNoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPhoneNoAByTrackNoRequest() = default ;
    QueryPhoneNoAByTrackNoRequest& operator=(const QueryPhoneNoAByTrackNoRequest &) = default ;
    QueryPhoneNoAByTrackNoRequest& operator=(QueryPhoneNoAByTrackNoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cabinetNo_ == nullptr
        && return this->ownerId_ == nullptr && return this->phoneNoX_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->trackNo_ == nullptr; };
    // cabinetNo Field Functions 
    bool hasCabinetNo() const { return this->cabinetNo_ != nullptr;};
    void deleteCabinetNo() { this->cabinetNo_ = nullptr;};
    inline string cabinetNo() const { DARABONBA_PTR_GET_DEFAULT(cabinetNo_, "") };
    inline QueryPhoneNoAByTrackNoRequest& setCabinetNo(string cabinetNo) { DARABONBA_PTR_SET_VALUE(cabinetNo_, cabinetNo) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryPhoneNoAByTrackNoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string phoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline QueryPhoneNoAByTrackNoRequest& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryPhoneNoAByTrackNoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryPhoneNoAByTrackNoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trackNo Field Functions 
    bool hasTrackNo() const { return this->trackNo_ != nullptr;};
    void deleteTrackNo() { this->trackNo_ = nullptr;};
    inline string trackNo() const { DARABONBA_PTR_GET_DEFAULT(trackNo_, "") };
    inline QueryPhoneNoAByTrackNoRequest& setTrackNo(string trackNo) { DARABONBA_PTR_SET_VALUE(trackNo_, trackNo) };


  protected:
    // The cabinet number.
    std::shared_ptr<string> cabinetNo_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Phone number X returned by the API operation for creating a binding.
    std::shared_ptr<string> phoneNoX_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tracking number.
    // 
    // This parameter is required.
    std::shared_ptr<string> trackNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
