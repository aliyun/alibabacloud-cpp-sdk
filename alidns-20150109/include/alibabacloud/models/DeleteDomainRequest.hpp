// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DeleteDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DeleteDomainRequest() = default ;
    DeleteDomainRequest(const DeleteDomainRequest &) = default ;
    DeleteDomainRequest(DeleteDomainRequest &&) = default ;
    DeleteDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDomainRequest() = default ;
    DeleteDomainRequest& operator=(const DeleteDomainRequest &) = default ;
    DeleteDomainRequest& operator=(DeleteDomainRequest &&) = default ;
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
    inline DeleteDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The domain name that already exists in Alibaba Cloud DNS. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
