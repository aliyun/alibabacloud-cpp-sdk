// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsGtmInstanceGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmInstanceGlobalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
      DARABONBA_PTR_TO_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_TO_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_TO_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_TO_JSON(PublicZoneName, publicZoneName_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmInstanceGlobalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
      DARABONBA_PTR_FROM_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_FROM_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_FROM_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_FROM_JSON(PublicZoneName, publicZoneName_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    UpdateDnsGtmInstanceGlobalConfigRequest() = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest(const UpdateDnsGtmInstanceGlobalConfigRequest &) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest(UpdateDnsGtmInstanceGlobalConfigRequest &&) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmInstanceGlobalConfigRequest() = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest& operator=(const UpdateDnsGtmInstanceGlobalConfigRequest &) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest& operator=(UpdateDnsGtmInstanceGlobalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->alertGroup_ == nullptr && return this->cnameType_ == nullptr && return this->forceUpdate_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->lang_ == nullptr && return this->publicCnameMode_ == nullptr && return this->publicRr_ == nullptr && return this->publicUserDomainName_ == nullptr && return this->publicZoneName_ == nullptr
        && return this->ttl_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig>) };
    inline vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig>) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setAlertConfig(const vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setAlertConfig(vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // cnameType Field Functions 
    bool hasCnameType() const { return this->cnameType_ != nullptr;};
    void deleteCnameType() { this->cnameType_ = nullptr;};
    inline string cnameType() const { DARABONBA_PTR_GET_DEFAULT(cnameType_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setCnameType(string cnameType) { DARABONBA_PTR_SET_VALUE(cnameType_, cnameType) };


    // forceUpdate Field Functions 
    bool hasForceUpdate() const { return this->forceUpdate_ != nullptr;};
    void deleteForceUpdate() { this->forceUpdate_ = nullptr;};
    inline bool forceUpdate() const { DARABONBA_PTR_GET_DEFAULT(forceUpdate_, false) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setForceUpdate(bool forceUpdate) { DARABONBA_PTR_SET_VALUE(forceUpdate_, forceUpdate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // publicCnameMode Field Functions 
    bool hasPublicCnameMode() const { return this->publicCnameMode_ != nullptr;};
    void deletePublicCnameMode() { this->publicCnameMode_ = nullptr;};
    inline string publicCnameMode() const { DARABONBA_PTR_GET_DEFAULT(publicCnameMode_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicCnameMode(string publicCnameMode) { DARABONBA_PTR_SET_VALUE(publicCnameMode_, publicCnameMode) };


    // publicRr Field Functions 
    bool hasPublicRr() const { return this->publicRr_ != nullptr;};
    void deletePublicRr() { this->publicRr_ = nullptr;};
    inline string publicRr() const { DARABONBA_PTR_GET_DEFAULT(publicRr_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicRr(string publicRr) { DARABONBA_PTR_SET_VALUE(publicRr_, publicRr) };


    // publicUserDomainName Field Functions 
    bool hasPublicUserDomainName() const { return this->publicUserDomainName_ != nullptr;};
    void deletePublicUserDomainName() { this->publicUserDomainName_ = nullptr;};
    inline string publicUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(publicUserDomainName_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicUserDomainName(string publicUserDomainName) { DARABONBA_PTR_SET_VALUE(publicUserDomainName_, publicUserDomainName) };


    // publicZoneName Field Functions 
    bool hasPublicZoneName() const { return this->publicZoneName_ != nullptr;};
    void deletePublicZoneName() { this->publicZoneName_ = nullptr;};
    inline string publicZoneName() const { DARABONBA_PTR_GET_DEFAULT(publicZoneName_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicZoneName(string publicZoneName) { DARABONBA_PTR_SET_VALUE(publicZoneName_, publicZoneName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    std::shared_ptr<vector<UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig>> alertConfig_ = nullptr;
    // The name of the alert group in the JSON format.
    std::shared_ptr<string> alertGroup_ = nullptr;
    // The type of the canonical name (CNAME).
    // 
    // *   Set the value to PUBLIC.
    std::shared_ptr<string> cnameType_ = nullptr;
    // Specifies whether to enable force updates. Valid values:
    // 
    // *   true: enables force update without a conflict alert.
    // *   false: disables force update. If a conflict occurs, the system displays an alert. null: This valid value of ForceUpdate provides the same information as the false value.
    std::shared_ptr<bool> forceUpdate_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance. This parameter is required only for the first update.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether to use a custom CNAME domain name or a CNAME domain name assigned by the system to access the instance over the Internet. Valid values:
    // 
    // *   SYSTEM_ASSIGN: a CNAME domain name assigned by the system
    // *   CUSTOM: a custom CNAME domain name
    std::shared_ptr<string> publicCnameMode_ = nullptr;
    // The hostname corresponding to the CNAME domain name that is used to access the instance over the Internet.
    std::shared_ptr<string> publicRr_ = nullptr;
    // The service domain name that is used over the Internet.
    std::shared_ptr<string> publicUserDomainName_ = nullptr;
    // The CNAME domain name that is used to access the instance over the Internet, which is the primary domain name. This parameter is required when the PublicCnameMode parameter is set to CUSTOM.
    // 
    // >  You must use the primary domain name. Do not include the hostname specified by the PublicRr parameter.
    std::shared_ptr<string> publicZoneName_ = nullptr;
    // The global time to live (TTL).
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
