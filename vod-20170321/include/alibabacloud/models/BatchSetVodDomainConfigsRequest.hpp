// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETVODDOMAINCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETVODDOMAINCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BatchSetVodDomainConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetVodDomainConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetVodDomainConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    BatchSetVodDomainConfigsRequest() = default ;
    BatchSetVodDomainConfigsRequest(const BatchSetVodDomainConfigsRequest &) = default ;
    BatchSetVodDomainConfigsRequest(BatchSetVodDomainConfigsRequest &&) = default ;
    BatchSetVodDomainConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetVodDomainConfigsRequest() = default ;
    BatchSetVodDomainConfigsRequest& operator=(const BatchSetVodDomainConfigsRequest &) = default ;
    BatchSetVodDomainConfigsRequest& operator=(BatchSetVodDomainConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && this->functions_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->securityToken_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string getDomainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchSetVodDomainConfigsRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline string getFunctions() const { DARABONBA_PTR_GET_DEFAULT(functions_, "") };
    inline BatchSetVodDomainConfigsRequest& setFunctions(string functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline BatchSetVodDomainConfigsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchSetVodDomainConfigsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchSetVodDomainConfigsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The accelerated domain names for ApsaraVideo VOD. Separate multiple domain names with commas (,). You can configure up to 50 domain names at a time.
    // 
    // This parameter is required.
    shared_ptr<string> domainNames_ {};
    // The list of features.
    // - functionName (feature name, required): For the features that can be configured and their feature name parameters, see [Domain name configuration features](https://help.aliyun.com/document_detail/2411639.html).
    // - argName (parameter name, required): The configuration items of functionName. You can configure multiple configuration items.
    // - argValue (parameter value, required): The values of the configuration items of functionName.
    // 
    // For detailed information about the features that can be configured for accelerated domain names, including feature names and parameter names, see [Domain name configuration features](https://help.aliyun.com/document_detail/2411639.html).
    // 
    // > Some features, such as filetype_based_ttl_set (file expiration time), support multiple configuration rules. To update a specific configuration rule, specify the configId of that rule. Example:
    // `[{"functionArgs":[{"argName":"file_type","argValue":"jpg"},{"argName":"ttl","argValue":"18"},{"argName":"weight","argValue":"30"}],"functionName":"filetype_based_ttl_set","configId":5068995}]`
    // 
    // This parameter is required.
    shared_ptr<string> functions_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
