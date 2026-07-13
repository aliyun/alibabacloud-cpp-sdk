// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateCloudGtmAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudGtmAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_TO_JSON(AvailableMode, availableMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_TO_JSON(HealthTasks, healthTasks_);
      DARABONBA_PTR_TO_JSON(ManualAvailableStatus, manualAvailableStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudGtmAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_FROM_JSON(AvailableMode, availableMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_FROM_JSON(HealthTasks, healthTasks_);
      DARABONBA_PTR_FROM_JSON(ManualAvailableStatus, manualAvailableStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCloudGtmAddressRequest() = default ;
    CreateCloudGtmAddressRequest(const CreateCloudGtmAddressRequest &) = default ;
    CreateCloudGtmAddressRequest(CreateCloudGtmAddressRequest &&) = default ;
    CreateCloudGtmAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudGtmAddressRequest() = default ;
    CreateCloudGtmAddressRequest& operator=(const CreateCloudGtmAddressRequest &) = default ;
    CreateCloudGtmAddressRequest& operator=(CreateCloudGtmAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthTasks& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, HealthTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      HealthTasks() = default ;
      HealthTasks(const HealthTasks &) = default ;
      HealthTasks(HealthTasks &&) = default ;
      HealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthTasks() = default ;
      HealthTasks& operator=(const HealthTasks &) = default ;
      HealthTasks& operator=(HealthTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->templateId_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline HealthTasks& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline HealthTasks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The service port of the destination address for the health check. This parameter is not supported for health checks that use the ping protocol.
      shared_ptr<int32_t> port_ {};
      // The ID of the health check template.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->address_ == nullptr && this->attributeInfo_ == nullptr && this->availableMode_ == nullptr && this->clientToken_ == nullptr && this->enableStatus_ == nullptr
        && this->healthJudgement_ == nullptr && this->healthTasks_ == nullptr && this->manualAvailableStatus_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr
        && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateCloudGtmAddressRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateCloudGtmAddressRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline CreateCloudGtmAddressRequest& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string getAvailableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline CreateCloudGtmAddressRequest& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCloudGtmAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline CreateCloudGtmAddressRequest& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string getHealthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline CreateCloudGtmAddressRequest& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthTasks Field Functions 
    bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
    void deleteHealthTasks() { this->healthTasks_ = nullptr;};
    inline const vector<CreateCloudGtmAddressRequest::HealthTasks> & getHealthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, vector<CreateCloudGtmAddressRequest::HealthTasks>) };
    inline vector<CreateCloudGtmAddressRequest::HealthTasks> getHealthTasks() { DARABONBA_PTR_GET(healthTasks_, vector<CreateCloudGtmAddressRequest::HealthTasks>) };
    inline CreateCloudGtmAddressRequest& setHealthTasks(const vector<CreateCloudGtmAddressRequest::HealthTasks> & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
    inline CreateCloudGtmAddressRequest& setHealthTasks(vector<CreateCloudGtmAddressRequest::HealthTasks> && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string getManualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline CreateCloudGtmAddressRequest& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCloudGtmAddressRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateCloudGtmAddressRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCloudGtmAddressRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // - zh-CN: Chinese.
    // 
    // - en-US (default): English.
    shared_ptr<string> acceptLanguage_ {};
    // The IP address or domain name.
    // 
    // This parameter is required.
    shared_ptr<string> address_ {};
    // The attribution information of the address.
    shared_ptr<string> attributeInfo_ {};
    // The switchover mode for the address when a health check is abnormal. Valid values:
    // 
    // - auto: The system automatically manages the address status based on health check results. If an address is unhealthy, DNS resolution for it stops. If the address becomes healthy, DNS resolution resumes.
    // 
    // - manual: You manually manage the address status. If you set an address to abnormal, DNS resolution for it stops. It does not resume even if the address becomes healthy. If you set an address to normal, DNS resolution for it resumes. If a healthy address becomes unhealthy, the system sends an alert but does not stop DNS resolution.
    // 
    // This parameter is required.
    shared_ptr<string> availableMode_ {};
    // The client token that is used to ensure the idempotence of the request. Make sure that the token is unique for each request. The token can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The status of the address. Valid values:
    // 
    // - enable: The address is enabled.
    // 
    // - disable: The address is disabled.
    // 
    // This parameter is required.
    shared_ptr<string> enableStatus_ {};
    // The condition for determining the health of the address. This parameter is required if you specify HealthTasks. Valid values:
    // 
    // - any_ok: At least one health check is successful.
    // 
    // - p30_ok: At least 30% of health checks are successful.
    // 
    // - p50_ok: At least 50% of health checks are successful.
    // 
    // - p70_ok: At least 70% of health checks are successful.
    // 
    // - all_ok: All health checks are successful.
    // 
    // This parameter is required.
    shared_ptr<string> healthJudgement_ {};
    // The health check tasks for the address.
    shared_ptr<vector<CreateCloudGtmAddressRequest::HealthTasks>> healthTasks_ {};
    // The availability status of the address when the health check-based switchover mode is set to **manual**. Valid values:
    // 
    // - available: The address is available. In this state, DNS resolution for the address is normal. If a health check is abnormal, the system only sends an alert and does not stop DNS resolution.
    // 
    // - unavailable: The address is unavailable. In this state, DNS resolution for the address is stopped. DNS resolution is not resumed even if a health check is normal.
    shared_ptr<string> manualAvailableStatus_ {};
    // The name of the address.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The remarks about the address.
    shared_ptr<string> remark_ {};
    // The type of the address. Valid values:
    // 
    // - IPv4
    // 
    // - IPv6
    // 
    // - domain
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
