// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCDNSTATISSUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCDNSTATISSUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCDNStatisSumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCDNStatisSumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndStatisTime, endStatisTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartStatisTime, startStatisTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCDNStatisSumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndStatisTime, endStatisTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartStatisTime, startStatisTime_);
    };
    GetCDNStatisSumRequest() = default ;
    GetCDNStatisSumRequest(const GetCDNStatisSumRequest &) = default ;
    GetCDNStatisSumRequest(GetCDNStatisSumRequest &&) = default ;
    GetCDNStatisSumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCDNStatisSumRequest() = default ;
    GetCDNStatisSumRequest& operator=(const GetCDNStatisSumRequest &) = default ;
    GetCDNStatisSumRequest& operator=(GetCDNStatisSumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endStatisTime_ != nullptr
        && this->level_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->startStatisTime_ != nullptr; };
    // endStatisTime Field Functions 
    bool hasEndStatisTime() const { return this->endStatisTime_ != nullptr;};
    void deleteEndStatisTime() { this->endStatisTime_ = nullptr;};
    inline string endStatisTime() const { DARABONBA_PTR_GET_DEFAULT(endStatisTime_, "") };
    inline GetCDNStatisSumRequest& setEndStatisTime(string endStatisTime) { DARABONBA_PTR_SET_VALUE(endStatisTime_, endStatisTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetCDNStatisSumRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetCDNStatisSumRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetCDNStatisSumRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetCDNStatisSumRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetCDNStatisSumRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startStatisTime Field Functions 
    bool hasStartStatisTime() const { return this->startStatisTime_ != nullptr;};
    void deleteStartStatisTime() { this->startStatisTime_ = nullptr;};
    inline string startStatisTime() const { DARABONBA_PTR_GET_DEFAULT(startStatisTime_, "") };
    inline GetCDNStatisSumRequest& setStartStatisTime(string startStatisTime) { DARABONBA_PTR_SET_VALUE(startStatisTime_, startStatisTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endStatisTime_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startStatisTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
