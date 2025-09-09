// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGTMINSTANCEGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGTMINSTANCEGLOBALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateGtmInstanceGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGtmInstanceGlobalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(CnameCustomDomainName, cnameCustomDomainName_);
      DARABONBA_PTR_TO_JSON(CnameMode, cnameMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(UserDomainName, userDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGtmInstanceGlobalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(CnameCustomDomainName, cnameCustomDomainName_);
      DARABONBA_PTR_FROM_JSON(CnameMode, cnameMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(UserDomainName, userDomainName_);
    };
    UpdateGtmInstanceGlobalConfigRequest() = default ;
    UpdateGtmInstanceGlobalConfigRequest(const UpdateGtmInstanceGlobalConfigRequest &) = default ;
    UpdateGtmInstanceGlobalConfigRequest(UpdateGtmInstanceGlobalConfigRequest &&) = default ;
    UpdateGtmInstanceGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGtmInstanceGlobalConfigRequest() = default ;
    UpdateGtmInstanceGlobalConfigRequest& operator=(const UpdateGtmInstanceGlobalConfigRequest &) = default ;
    UpdateGtmInstanceGlobalConfigRequest& operator=(UpdateGtmInstanceGlobalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertGroup_ != nullptr
        && this->cnameCustomDomainName_ != nullptr && this->cnameMode_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->lang_ != nullptr
        && this->lbaStrategy_ != nullptr && this->ttl_ != nullptr && this->userDomainName_ != nullptr; };
    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // cnameCustomDomainName Field Functions 
    bool hasCnameCustomDomainName() const { return this->cnameCustomDomainName_ != nullptr;};
    void deleteCnameCustomDomainName() { this->cnameCustomDomainName_ = nullptr;};
    inline string cnameCustomDomainName() const { DARABONBA_PTR_GET_DEFAULT(cnameCustomDomainName_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setCnameCustomDomainName(string cnameCustomDomainName) { DARABONBA_PTR_SET_VALUE(cnameCustomDomainName_, cnameCustomDomainName) };


    // cnameMode Field Functions 
    bool hasCnameMode() const { return this->cnameMode_ != nullptr;};
    void deleteCnameMode() { this->cnameMode_ = nullptr;};
    inline string cnameMode() const { DARABONBA_PTR_GET_DEFAULT(cnameMode_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setCnameMode(string cnameMode) { DARABONBA_PTR_SET_VALUE(cnameMode_, cnameMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string lbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateGtmInstanceGlobalConfigRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // userDomainName Field Functions 
    bool hasUserDomainName() const { return this->userDomainName_ != nullptr;};
    void deleteUserDomainName() { this->userDomainName_ = nullptr;};
    inline string userDomainName() const { DARABONBA_PTR_GET_DEFAULT(userDomainName_, "") };
    inline UpdateGtmInstanceGlobalConfigRequest& setUserDomainName(string userDomainName) { DARABONBA_PTR_SET_VALUE(userDomainName_, userDomainName) };


  protected:
    // The alert group. Only one alert group is supported.
    // 
    // >  This parameter is required only for the first modification.
    std::shared_ptr<string> alertGroup_ = nullptr;
    // If you set **CnameMode** to **CUSTOM**, you must specify the CnameCustomDomainName parameter, which must be set to a primary domain name.
    std::shared_ptr<string> cnameCustomDomainName_ = nullptr;
    // Specifies whether to use a system-assigned canonical name (CNAME) or a custom CNAME to access GTM. Valid values:
    // 
    // *   **SYSTEM_ASSIGN**: system-assigned CNAME
    // *   **CUSTOM**: custom CNAME
    std::shared_ptr<string> cnameMode_ = nullptr;
    // The ID of the GTM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the GTM instance.
    // 
    // >  This parameter is required only for the first modification.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The balancing policy. Valid values:
    // 
    // *   **ALL_RR**: load balancing
    // *   **RATIO**: weighted round-robin
    // 
    // >  This parameter is required only for the first modification.
    std::shared_ptr<string> lbaStrategy_ = nullptr;
    // The global time-to-live (TTL).
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The primary domain name.
    // 
    // >  This parameter is required only for the first modification.
    std::shared_ptr<string> userDomainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
