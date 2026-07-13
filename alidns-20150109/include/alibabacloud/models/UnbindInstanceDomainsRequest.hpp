// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDINSTANCEDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDINSTANCEDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UnbindInstanceDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindInstanceDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindInstanceDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    UnbindInstanceDomainsRequest() = default ;
    UnbindInstanceDomainsRequest(const UnbindInstanceDomainsRequest &) = default ;
    UnbindInstanceDomainsRequest(UnbindInstanceDomainsRequest &&) = default ;
    UnbindInstanceDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindInstanceDomainsRequest() = default ;
    UnbindInstanceDomainsRequest& operator=(const UnbindInstanceDomainsRequest &) = default ;
    UnbindInstanceDomainsRequest& operator=(UnbindInstanceDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string getDomainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline UnbindInstanceDomainsRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UnbindInstanceDomainsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UnbindInstanceDomainsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The list of domain names.
    // 
    // Separate multiple domain names with commas (,). You can specify up to 100 domain names.<props="intl"> For more information, see [DescribeDomains](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describedomains).
    // 
    // This parameter is required.
    shared_ptr<string> domainNames_ {};
    // The ID of the authoritative domain name instance.<props="intl"> For more information, see [ListCloudGtmInstances](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-listcloudgtminstances).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
