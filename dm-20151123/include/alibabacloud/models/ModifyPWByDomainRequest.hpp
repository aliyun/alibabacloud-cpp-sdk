// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPWBYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPWBYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ModifyPWByDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPWByDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPWByDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyPWByDomainRequest() = default ;
    ModifyPWByDomainRequest(const ModifyPWByDomainRequest &) = default ;
    ModifyPWByDomainRequest(ModifyPWByDomainRequest &&) = default ;
    ModifyPWByDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPWByDomainRequest() = default ;
    ModifyPWByDomainRequest& operator=(const ModifyPWByDomainRequest &) = default ;
    ModifyPWByDomainRequest& operator=(ModifyPWByDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyPWByDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPWByDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyPWByDomainRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPWByDomainRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPWByDomainRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Domain name, length 1-50, can include numbers, uppercase letters, lowercase letters, ., and -.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // - Length should be between 10 to 20 characters, and must contain numbers, uppercase letters, and lowercase letters.
    // 
    // - At least 2 digits, 2 uppercase letters, and 2 lowercase letters are required, and neither digits nor letters can consist of a single character repeated.
    // 
    // - Cannot be the same as the last set password.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
