// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionNames, functionNames_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionNames, functionNames_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeCdnDomainConfigsRequest() = default ;
    DescribeCdnDomainConfigsRequest(const DescribeCdnDomainConfigsRequest &) = default ;
    DescribeCdnDomainConfigsRequest(DescribeCdnDomainConfigsRequest &&) = default ;
    DescribeCdnDomainConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainConfigsRequest() = default ;
    DescribeCdnDomainConfigsRequest& operator=(const DescribeCdnDomainConfigsRequest &) = default ;
    DescribeCdnDomainConfigsRequest& operator=(DescribeCdnDomainConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->domainName_ != nullptr && this->functionNames_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCdnDomainConfigsRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDomainConfigsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline string functionNames() const { DARABONBA_PTR_GET_DEFAULT(functionNames_, "") };
    inline DescribeCdnDomainConfigsRequest& setFunctionNames(string functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCdnDomainConfigsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeCdnDomainConfigsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the configuration. For more information about ConfigId, see [Usage notes on ConfigId](https://help.aliyun.com/document_detail/388994.html).
    std::shared_ptr<string> configId_ = nullptr;
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The names of the features. Separate multiple feature names with commas (,). For more information, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/388460.html).
    std::shared_ptr<string> functionNames_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
