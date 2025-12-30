// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class RetrieveDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    RetrieveDomainRequest() = default ;
    RetrieveDomainRequest(const RetrieveDomainRequest &) = default ;
    RetrieveDomainRequest(RetrieveDomainRequest &&) = default ;
    RetrieveDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveDomainRequest() = default ;
    RetrieveDomainRequest& operator=(const RetrieveDomainRequest &) = default ;
    RetrieveDomainRequest& operator=(RetrieveDomainRequest &&) = default ;
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
    inline RetrieveDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RetrieveDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The language.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
