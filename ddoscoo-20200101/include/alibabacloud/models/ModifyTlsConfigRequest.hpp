// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTLSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTLSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyTlsConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTlsConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTlsConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyTlsConfigRequest() = default ;
    ModifyTlsConfigRequest(const ModifyTlsConfigRequest &) = default ;
    ModifyTlsConfigRequest(ModifyTlsConfigRequest &&) = default ;
    ModifyTlsConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTlsConfigRequest() = default ;
    ModifyTlsConfigRequest& operator=(const ModifyTlsConfigRequest &) = default ;
    ModifyTlsConfigRequest& operator=(ModifyTlsConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->domain_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyTlsConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyTlsConfigRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyTlsConfigRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The details of the TLS policy. The value is a JSON string that contains the following fields:
    // 
    // *   **ssl_protocols**: the version of TLS. This field is required. Data type: string. Valid values:
    // 
    //     *   **tls1.0**: TLS 1.0 and later
    //     *   **tls1.1**: TLS 1.1 and later
    //     *   **tls1.2**: TLS 1.2 and later
    // 
    // *   **ssl_ciphers**: the type of the cipher suite. This field is required. Data type: string. Valid values:
    // 
    //     *   **all**: all cipher suites, which include strong and weak cipher suites
    //     *   **improved**: enhanced cipher suites
    //     *   **strong**: strong cipher suites
    //     *   **default**: default cipher suites, which include only strong cipher suites
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
