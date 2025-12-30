// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainNsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainNsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainNsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDomainNsRequest() = default ;
    DescribeDomainNsRequest(const DescribeDomainNsRequest &) = default ;
    DescribeDomainNsRequest(DescribeDomainNsRequest &&) = default ;
    DescribeDomainNsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainNsRequest() = default ;
    DescribeDomainNsRequest& operator=(const DescribeDomainNsRequest &) = default ;
    DescribeDomainNsRequest& operator=(DescribeDomainNsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainNsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainNsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The language of the content in the request and response.
    // 
    // Valid values:
    // 
    // zh: Chinese\\
    // en: English
    // 
    // Default value: **zh**
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
