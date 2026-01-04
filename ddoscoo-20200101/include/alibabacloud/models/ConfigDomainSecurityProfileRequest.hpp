// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGDOMAINSECURITYPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGDOMAINSECURITYPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigDomainSecurityProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigDomainSecurityProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigDomainSecurityProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    ConfigDomainSecurityProfileRequest() = default ;
    ConfigDomainSecurityProfileRequest(const ConfigDomainSecurityProfileRequest &) = default ;
    ConfigDomainSecurityProfileRequest(ConfigDomainSecurityProfileRequest &&) = default ;
    ConfigDomainSecurityProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigDomainSecurityProfileRequest() = default ;
    ConfigDomainSecurityProfileRequest& operator=(const ConfigDomainSecurityProfileRequest &) = default ;
    ConfigDomainSecurityProfileRequest& operator=(ConfigDomainSecurityProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && this->config_ == nullptr && this->domain_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline ConfigDomainSecurityProfileRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ConfigDomainSecurityProfileRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigDomainSecurityProfileRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // This parameter is unavailable.
    shared_ptr<string> cluster_ {};
    // The configurations for the global mitigation policy feature. The configurations include the following fields:
    // 
    // *   **global_rule_mode**: optional. The mode for the global mitigation policy feature. Data type: string. Valid values:
    // 
    //     *   **weak**: loose.
    //     *   **default**: normal.
    //     *   **hard**: strict.
    // 
    // *   **global_rule_enable**: optional. Specifies whether to enable the global mitigation policy feature. Data type: string. Valid values:
    // 
    //     *   **0**: disabled.
    //     *   **1**: enabled.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
