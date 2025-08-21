// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECDNDOMAINTODCDNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECDNDOMAINTODCDNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ChangeCdnDomainToDcdnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCdnDomainToDcdnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCdnDomainToDcdnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ChangeCdnDomainToDcdnRequest() = default ;
    ChangeCdnDomainToDcdnRequest(const ChangeCdnDomainToDcdnRequest &) = default ;
    ChangeCdnDomainToDcdnRequest(ChangeCdnDomainToDcdnRequest &&) = default ;
    ChangeCdnDomainToDcdnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCdnDomainToDcdnRequest() = default ;
    ChangeCdnDomainToDcdnRequest& operator=(const ChangeCdnDomainToDcdnRequest &) = default ;
    ChangeCdnDomainToDcdnRequest& operator=(ChangeCdnDomainToDcdnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->operation_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ChangeCdnDomainToDcdnRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ChangeCdnDomainToDcdnRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ChangeCdnDomainToDcdnRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChangeCdnDomainToDcdnRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ChangeCdnDomainToDcdnRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The operation to perform. Set the value to preCheck. Precheck is performed, and the result is returned. If the precheck passes, set the value to enforce to perform the transfer.
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
