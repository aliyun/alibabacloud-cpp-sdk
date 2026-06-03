// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSCODELIMITCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSCODELIMITCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class UpdateSmsCodeLimitConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmsCodeLimitConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LimitDay, limitDay_);
      DARABONBA_PTR_TO_JSON(LimitHour, limitHour_);
      DARABONBA_PTR_TO_JSON(LimitId, limitId_);
      DARABONBA_PTR_TO_JSON(LimitMinute, limitMinute_);
      DARABONBA_PTR_TO_JSON(LimitOther, limitOther_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmsCodeLimitConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LimitDay, limitDay_);
      DARABONBA_PTR_FROM_JSON(LimitHour, limitHour_);
      DARABONBA_PTR_FROM_JSON(LimitId, limitId_);
      DARABONBA_PTR_FROM_JSON(LimitMinute, limitMinute_);
      DARABONBA_PTR_FROM_JSON(LimitOther, limitOther_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateSmsCodeLimitConfigRequest() = default ;
    UpdateSmsCodeLimitConfigRequest(const UpdateSmsCodeLimitConfigRequest &) = default ;
    UpdateSmsCodeLimitConfigRequest(UpdateSmsCodeLimitConfigRequest &&) = default ;
    UpdateSmsCodeLimitConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmsCodeLimitConfigRequest() = default ;
    UpdateSmsCodeLimitConfigRequest& operator=(const UpdateSmsCodeLimitConfigRequest &) = default ;
    UpdateSmsCodeLimitConfigRequest& operator=(UpdateSmsCodeLimitConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limitDay_ == nullptr
        && this->limitHour_ == nullptr && this->limitId_ == nullptr && this->limitMinute_ == nullptr && this->limitOther_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // limitDay Field Functions 
    bool hasLimitDay() const { return this->limitDay_ != nullptr;};
    void deleteLimitDay() { this->limitDay_ = nullptr;};
    inline int32_t getLimitDay() const { DARABONBA_PTR_GET_DEFAULT(limitDay_, 0) };
    inline UpdateSmsCodeLimitConfigRequest& setLimitDay(int32_t limitDay) { DARABONBA_PTR_SET_VALUE(limitDay_, limitDay) };


    // limitHour Field Functions 
    bool hasLimitHour() const { return this->limitHour_ != nullptr;};
    void deleteLimitHour() { this->limitHour_ = nullptr;};
    inline int32_t getLimitHour() const { DARABONBA_PTR_GET_DEFAULT(limitHour_, 0) };
    inline UpdateSmsCodeLimitConfigRequest& setLimitHour(int32_t limitHour) { DARABONBA_PTR_SET_VALUE(limitHour_, limitHour) };


    // limitId Field Functions 
    bool hasLimitId() const { return this->limitId_ != nullptr;};
    void deleteLimitId() { this->limitId_ = nullptr;};
    inline int64_t getLimitId() const { DARABONBA_PTR_GET_DEFAULT(limitId_, 0L) };
    inline UpdateSmsCodeLimitConfigRequest& setLimitId(int64_t limitId) { DARABONBA_PTR_SET_VALUE(limitId_, limitId) };


    // limitMinute Field Functions 
    bool hasLimitMinute() const { return this->limitMinute_ != nullptr;};
    void deleteLimitMinute() { this->limitMinute_ = nullptr;};
    inline int32_t getLimitMinute() const { DARABONBA_PTR_GET_DEFAULT(limitMinute_, 0) };
    inline UpdateSmsCodeLimitConfigRequest& setLimitMinute(int32_t limitMinute) { DARABONBA_PTR_SET_VALUE(limitMinute_, limitMinute) };


    // limitOther Field Functions 
    bool hasLimitOther() const { return this->limitOther_ != nullptr;};
    void deleteLimitOther() { this->limitOther_ = nullptr;};
    inline string getLimitOther() const { DARABONBA_PTR_GET_DEFAULT(limitOther_, "") };
    inline UpdateSmsCodeLimitConfigRequest& setLimitOther(string limitOther) { DARABONBA_PTR_SET_VALUE(limitOther_, limitOther) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmsCodeLimitConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmsCodeLimitConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmsCodeLimitConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<int32_t> limitDay_ {};
    shared_ptr<int32_t> limitHour_ {};
    // This parameter is required.
    shared_ptr<int64_t> limitId_ {};
    shared_ptr<int32_t> limitMinute_ {};
    shared_ptr<string> limitOther_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
