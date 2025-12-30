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
    // The domain names.
    // 
    // Separate multiple domain names with commas (,). Up to 100 domain names can be entered.
    // 
    // This parameter is required.
    shared_ptr<string> domainNames_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
