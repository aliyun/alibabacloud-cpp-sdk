// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATEENTERPRISEPAUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATEENTERPRISEPAUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkCreateEnterprisePauseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateEnterprisePauseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsRest, isRest_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PauseStatus, pauseStatus_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateEnterprisePauseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsRest, isRest_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PauseStatus, pauseStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ClinkCreateEnterprisePauseRequest() = default ;
    ClinkCreateEnterprisePauseRequest(const ClinkCreateEnterprisePauseRequest &) = default ;
    ClinkCreateEnterprisePauseRequest(ClinkCreateEnterprisePauseRequest &&) = default ;
    ClinkCreateEnterprisePauseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateEnterprisePauseRequest() = default ;
    ClinkCreateEnterprisePauseRequest& operator=(const ClinkCreateEnterprisePauseRequest &) = default ;
    ClinkCreateEnterprisePauseRequest& operator=(ClinkCreateEnterprisePauseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->isDefault_ == nullptr && this->isRest_ == nullptr && this->ownerId_ == nullptr && this->pauseStatus_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkCreateEnterprisePauseRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline int64_t getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0L) };
    inline ClinkCreateEnterprisePauseRequest& setIsDefault(int64_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isRest Field Functions 
    bool hasIsRest() const { return this->isRest_ != nullptr;};
    void deleteIsRest() { this->isRest_ = nullptr;};
    inline string getIsRest() const { DARABONBA_PTR_GET_DEFAULT(isRest_, "") };
    inline ClinkCreateEnterprisePauseRequest& setIsRest(string isRest) { DARABONBA_PTR_SET_VALUE(isRest_, isRest) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkCreateEnterprisePauseRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pauseStatus Field Functions 
    bool hasPauseStatus() const { return this->pauseStatus_ != nullptr;};
    void deletePauseStatus() { this->pauseStatus_ = nullptr;};
    inline string getPauseStatus() const { DARABONBA_PTR_GET_DEFAULT(pauseStatus_, "") };
    inline ClinkCreateEnterprisePauseRequest& setPauseStatus(string pauseStatus) { DARABONBA_PTR_SET_VALUE(pauseStatus_, pauseStatus) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkCreateEnterprisePauseRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkCreateEnterprisePauseRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 默认状态，0：不是；1：是
    // 
    // This parameter is required.
    shared_ptr<int64_t> isDefault_ {};
    // 休息状态，0：不是；1：是
    // 
    // This parameter is required.
    shared_ptr<string> isRest_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 置忙状态描述（不超4个字符）
    // 
    // This parameter is required.
    shared_ptr<string> pauseStatus_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
