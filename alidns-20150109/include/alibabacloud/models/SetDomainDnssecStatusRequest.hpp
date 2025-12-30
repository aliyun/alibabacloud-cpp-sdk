// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINDNSSECSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINDNSSECSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetDomainDnssecStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainDnssecStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainDnssecStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetDomainDnssecStatusRequest() = default ;
    SetDomainDnssecStatusRequest(const SetDomainDnssecStatusRequest &) = default ;
    SetDomainDnssecStatusRequest(SetDomainDnssecStatusRequest &&) = default ;
    SetDomainDnssecStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainDnssecStatusRequest() = default ;
    SetDomainDnssecStatusRequest& operator=(const SetDomainDnssecStatusRequest &) = default ;
    SetDomainDnssecStatusRequest& operator=(SetDomainDnssecStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr && this->status_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDomainDnssecStatusRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetDomainDnssecStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetDomainDnssecStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The domain name for which you want to enable the DNSSEC. Only the users of the paid editions of Alibaba Cloud DNS can enable this feature.
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
    // The DNSSEC status. Valid values:
    // 
    // *   ON: enables DNSSEC for the domain name.
    // *   OFF: disables DNSSEC for the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
