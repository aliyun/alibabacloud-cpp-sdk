// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETCDNDOMAINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETCDNDOMAINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchSetCdnDomainConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetCdnDomainConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetCdnDomainConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    BatchSetCdnDomainConfigRequest() = default ;
    BatchSetCdnDomainConfigRequest(const BatchSetCdnDomainConfigRequest &) = default ;
    BatchSetCdnDomainConfigRequest(BatchSetCdnDomainConfigRequest &&) = default ;
    BatchSetCdnDomainConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetCdnDomainConfigRequest() = default ;
    BatchSetCdnDomainConfigRequest& operator=(const BatchSetCdnDomainConfigRequest &) = default ;
    BatchSetCdnDomainConfigRequest& operator=(BatchSetCdnDomainConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr
        && this->functions_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchSetCdnDomainConfigRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline string functions() const { DARABONBA_PTR_GET_DEFAULT(functions_, "") };
    inline BatchSetCdnDomainConfigRequest& setFunctions(string functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline BatchSetCdnDomainConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchSetCdnDomainConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchSetCdnDomainConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The accelerated domain names. You can specify multiple accelerated domain names and separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainNames_ = nullptr;
    // The features that you want to configure. Format:
    // 
    // *   **functionName**: the name of the feature. This parameter is required. Separate multiple values with commas (,). For more information, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/388460.html).
    // *   **argName**: the feature parameter for **functionName**. This parameter is required. You can specify multiple feature parameters.
    // *   **argValue**: the parameter value that is specified for **functionName**. This parameter is required.
    // *   **parentid**: the rule condition ID. This parameter is optional. You can use the **condition** rule engine to create a rule condition. For information, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/388460.html). A rule condition can identify parameters that are included in requests and filter requests based on the identified parameters. After you create a rule condition, a [configid](https://help.aliyun.com/document_detail/388994.html) is generated. A configid can be used as parentId that is referenced by other features. This way, you can combine rule conditions and features for flexible configurations.
    // 
    // If the **ParentId** parameter is \\*\\*-1\\*\\*, the existing rule conditions in the configurations are deleted.
    // 
    // ```[{
    //    "functionArgs": [{
    //      "argName": "Parameter A", 
    //      "argValue": "Value of parameter A"
    //     }, 
    //   {
    //     "argName": "Parameter B", 
    //     "argValue": "Value of parameter B"
    //      }], 
    //  "functionName": "Feature name"
    //  "parentId": Optional. parentId corresponds to configid of the referenced rule condition
    // }]
    // ```
    // 
    // The following code provides a sample configuration if **parentId** is not used. In this example, the **origin_request_header** feature is used to add back-to-origin HTTP headers, and the rule condition whose configuration ID is **configid=222728944812032** is referenced.
    // 
    // ```[{
    //         "functionArgs": [{
    //             "argName": "header_operation_type",
    //             "argValue": "add"
    //         }, {
    //             "argName": "header_name",
    //             "argValue": "Accept-Encoding"
    //         }, {
    //             "argName": "header_value",
    //             "argValue": "gzip"
    //         }, {
    //             "argName": "duplicate",
    //             "argValue": "off"
    //         }],
    //         "functionName": "origin_request_header"
    // }]
    // ```
    // 
    // The following code shows a sample configuration if **parentId** is used. In this example, the **origin_request_header** feature is used to add back-to-origin HTTP headers, and the rule condition whose configuration ID is **222728944812032** is referenced.
    // 
    // ```[{
    //         "functionArgs": [{
    //             "argName": "header_operation_type",
    //             "argValue": "add"
    //         }, {
    //             "argName": "header_name",
    //             "argValue": "Accept-Encoding"
    //         }, {
    //             "argName": "header_value",
    //             "argValue": "gzip"
    //         }, {
    //             "argName": "duplicate",
    //             "argValue": "off"
    //         }],
    //         "functionName": "origin_request_header",
    //         "parentId": 222728944812032
    // }]
    // ```
    // 
    // The following code provides a sample configuration that deletes the reference to **parentId** for a feature that uses **parentId**. This example shows how to delete the rule condition that has a configuration ID of **222728944812032** and is referenced when **origin_request_header** feature is used to add back-to-origin HTTP headers.
    // 
    // ```[{
    //         "functionArgs": [{
    //             "argName": "header_operation_type",
    //             "argValue": "add"
    //         }, {
    //             "argName": "header_name",
    //             "argValue": "Accept-Encoding"
    //         }, {
    //             "argName": "header_value",
    //             "argValue": "gzip"
    //         }, {
    //             "argName": "duplicate",
    //             "argValue": "off"
    //         }],
    //         "functionName": "origin_request_header",
    //         "parentId": -1
    // }]
    // ```
    // 
    // This parameter is required.
    std::shared_ptr<string> functions_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
