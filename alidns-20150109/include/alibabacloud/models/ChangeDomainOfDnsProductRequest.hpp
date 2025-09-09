// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDOMAINOFDNSPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDOMAINOFDNSPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ChangeDomainOfDnsProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDomainOfDnsProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NewDomain, newDomain_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDomainOfDnsProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NewDomain, newDomain_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    ChangeDomainOfDnsProductRequest() = default ;
    ChangeDomainOfDnsProductRequest(const ChangeDomainOfDnsProductRequest &) = default ;
    ChangeDomainOfDnsProductRequest(ChangeDomainOfDnsProductRequest &&) = default ;
    ChangeDomainOfDnsProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDomainOfDnsProductRequest() = default ;
    ChangeDomainOfDnsProductRequest& operator=(const ChangeDomainOfDnsProductRequest &) = default ;
    ChangeDomainOfDnsProductRequest& operator=(ChangeDomainOfDnsProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->force_ != nullptr
        && this->instanceId_ != nullptr && this->lang_ != nullptr && this->newDomain_ != nullptr && this->userClientIp_ != nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline ChangeDomainOfDnsProductRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChangeDomainOfDnsProductRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ChangeDomainOfDnsProductRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newDomain Field Functions 
    bool hasNewDomain() const { return this->newDomain_ != nullptr;};
    void deleteNewDomain() { this->newDomain_ = nullptr;};
    inline string newDomain() const { DARABONBA_PTR_GET_DEFAULT(newDomain_, "") };
    inline ChangeDomainOfDnsProductRequest& setNewDomain(string newDomain) { DARABONBA_PTR_SET_VALUE(newDomain_, newDomain) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline ChangeDomainOfDnsProductRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // Specifies whether to forcibly bind a domain name to the instance. Valid values:
    // 
    // *   **false****: no**
    // *   **true**: **yes**
    // 
    // Default value: **false**.
    std::shared_ptr<bool> force_ = nullptr;
    // The ID of the Alibaba Cloud Domain Name System (DNS) instance.
    // 
    // You can call the [ListCloudGtmInstances ](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-listcloudgtminstances?spm=a2c63.p38356.help-menu-search-29697.d_0)operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    // 
    // Default value: **zh**.
    std::shared_ptr<string> lang_ = nullptr;
    // The domain name that you want to bind to the instance. If you leave this parameter empty, the domain name that is bound to the instance is unbound from the instance.
    std::shared_ptr<string> newDomain_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
