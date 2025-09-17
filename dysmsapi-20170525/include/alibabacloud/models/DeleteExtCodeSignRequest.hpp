// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXTCODESIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXTCODESIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class DeleteExtCodeSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExtCodeSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtCode, extCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExtCodeSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtCode, extCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
    };
    DeleteExtCodeSignRequest() = default ;
    DeleteExtCodeSignRequest(const DeleteExtCodeSignRequest &) = default ;
    DeleteExtCodeSignRequest(DeleteExtCodeSignRequest &&) = default ;
    DeleteExtCodeSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExtCodeSignRequest() = default ;
    DeleteExtCodeSignRequest& operator=(const DeleteExtCodeSignRequest &) = default ;
    DeleteExtCodeSignRequest& operator=(DeleteExtCodeSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extCode_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->signName_ != nullptr; };
    // extCode Field Functions 
    bool hasExtCode() const { return this->extCode_ != nullptr;};
    void deleteExtCode() { this->extCode_ = nullptr;};
    inline string extCode() const { DARABONBA_PTR_GET_DEFAULT(extCode_, "") };
    inline DeleteExtCodeSignRequest& setExtCode(string extCode) { DARABONBA_PTR_SET_VALUE(extCode_, extCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteExtCodeSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteExtCodeSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteExtCodeSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline DeleteExtCodeSignRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


  protected:
    // 扩展码A3
    // 
    // This parameter is required.
    std::shared_ptr<string> extCode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 签名
    // 
    // This parameter is required.
    std::shared_ptr<string> signName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
