// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETECDNDOMAINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETECDNDOMAINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchDeleteCdnDomainConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteCdnDomainConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(FunctionNames, functionNames_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteCdnDomainConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(FunctionNames, functionNames_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    BatchDeleteCdnDomainConfigRequest() = default ;
    BatchDeleteCdnDomainConfigRequest(const BatchDeleteCdnDomainConfigRequest &) = default ;
    BatchDeleteCdnDomainConfigRequest(BatchDeleteCdnDomainConfigRequest &&) = default ;
    BatchDeleteCdnDomainConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteCdnDomainConfigRequest() = default ;
    BatchDeleteCdnDomainConfigRequest& operator=(const BatchDeleteCdnDomainConfigRequest &) = default ;
    BatchDeleteCdnDomainConfigRequest& operator=(BatchDeleteCdnDomainConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr
        && this->functionNames_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchDeleteCdnDomainConfigRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline string functionNames() const { DARABONBA_PTR_GET_DEFAULT(functionNames_, "") };
    inline BatchDeleteCdnDomainConfigRequest& setFunctionNames(string functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline BatchDeleteCdnDomainConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchDeleteCdnDomainConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchDeleteCdnDomainConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The accelerated domain names whose configurations you want to delete. Separate multiple accelerated domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainNames_ = nullptr;
    // The names of the features that you want to delete. Separate multiple feature names with commas (,). For more information about feature names, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/388460.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> functionNames_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
