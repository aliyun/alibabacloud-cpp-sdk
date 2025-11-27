// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDPHONECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDPHONECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class ValidPhoneCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidPhoneCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyCode, certifyCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNo, phoneNo_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidPhoneCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyCode, certifyCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNo, phoneNo_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ValidPhoneCodeRequest() = default ;
    ValidPhoneCodeRequest(const ValidPhoneCodeRequest &) = default ;
    ValidPhoneCodeRequest(ValidPhoneCodeRequest &&) = default ;
    ValidPhoneCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidPhoneCodeRequest() = default ;
    ValidPhoneCodeRequest& operator=(const ValidPhoneCodeRequest &) = default ;
    ValidPhoneCodeRequest& operator=(ValidPhoneCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyCode_ == nullptr
        && return this->ownerId_ == nullptr && return this->phoneNo_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // certifyCode Field Functions 
    bool hasCertifyCode() const { return this->certifyCode_ != nullptr;};
    void deleteCertifyCode() { this->certifyCode_ = nullptr;};
    inline string certifyCode() const { DARABONBA_PTR_GET_DEFAULT(certifyCode_, "") };
    inline ValidPhoneCodeRequest& setCertifyCode(string certifyCode) { DARABONBA_PTR_SET_VALUE(certifyCode_, certifyCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ValidPhoneCodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNo Field Functions 
    bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
    void deletePhoneNo() { this->phoneNo_ = nullptr;};
    inline string phoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
    inline ValidPhoneCodeRequest& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ValidPhoneCodeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ValidPhoneCodeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 验证码
    // 
    // This parameter is required.
    std::shared_ptr<string> certifyCode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 手机号
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNo_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
