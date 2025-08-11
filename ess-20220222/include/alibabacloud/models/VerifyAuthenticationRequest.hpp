// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYAUTHENTICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYAUTHENTICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class VerifyAuthenticationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyAuthenticationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OnlyCheck, onlyCheck_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyAuthenticationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlyCheck, onlyCheck_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    VerifyAuthenticationRequest() = default ;
    VerifyAuthenticationRequest(const VerifyAuthenticationRequest &) = default ;
    VerifyAuthenticationRequest(VerifyAuthenticationRequest &&) = default ;
    VerifyAuthenticationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyAuthenticationRequest() = default ;
    VerifyAuthenticationRequest& operator=(const VerifyAuthenticationRequest &) = default ;
    VerifyAuthenticationRequest& operator=(VerifyAuthenticationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onlyCheck_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->uid_ != nullptr; };
    // onlyCheck Field Functions 
    bool hasOnlyCheck() const { return this->onlyCheck_ != nullptr;};
    void deleteOnlyCheck() { this->onlyCheck_ = nullptr;};
    inline bool onlyCheck() const { DARABONBA_PTR_GET_DEFAULT(onlyCheck_, false) };
    inline VerifyAuthenticationRequest& setOnlyCheck(bool onlyCheck) { DARABONBA_PTR_SET_VALUE(onlyCheck_, onlyCheck) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline VerifyAuthenticationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline VerifyAuthenticationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline VerifyAuthenticationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline VerifyAuthenticationRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Specifies whether to check only the authorization status. Valid values:
    // 
    // *   true: checks only the authorization status. The service-linked role is not created.
    // *   false (default): checks the authorization status and resource usage.
    std::shared_ptr<bool> onlyCheck_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of your Alibaba Cloud account.
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
