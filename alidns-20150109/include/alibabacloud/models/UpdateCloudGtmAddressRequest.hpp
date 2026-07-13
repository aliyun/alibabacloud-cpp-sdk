// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSREQUEST_HPP_
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
  class UpdateCloudGtmAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_TO_JSON(HealthTasks, healthTasks_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_FROM_JSON(HealthTasks, healthTasks_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateCloudGtmAddressRequest() = default ;
    UpdateCloudGtmAddressRequest(const UpdateCloudGtmAddressRequest &) = default ;
    UpdateCloudGtmAddressRequest(UpdateCloudGtmAddressRequest &&) = default ;
    UpdateCloudGtmAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmAddressRequest() = default ;
    UpdateCloudGtmAddressRequest& operator=(const UpdateCloudGtmAddressRequest &) = default ;
    UpdateCloudGtmAddressRequest& operator=(UpdateCloudGtmAddressRequest &&) = default ;
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
      // The service port of the target address for the health check. You cannot configure a service port if the health check uses the ping protocol.
      // 
      // - If you leave this parameter empty, the currently configured port is deleted.
      // 
      // - If you specify a value for this parameter, the port is updated to the specified value.
      shared_ptr<int32_t> port_ {};
      // The ID of the health check template associated with the address. This parameter is required if you configure a health check port.
      // 
      // - If you leave this parameter empty, the currently configured health check template is deleted.
      // 
      // - If you specify a value for this parameter, the health check template is updated to the specified value.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->address_ == nullptr && this->addressId_ == nullptr && this->attributeInfo_ == nullptr && this->clientToken_ == nullptr && this->healthJudgement_ == nullptr
        && this->healthTasks_ == nullptr && this->name_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmAddressRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateCloudGtmAddressRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline UpdateCloudGtmAddressRequest& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline UpdateCloudGtmAddressRequest& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string getHealthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline UpdateCloudGtmAddressRequest& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthTasks Field Functions 
    bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
    void deleteHealthTasks() { this->healthTasks_ = nullptr;};
    inline const vector<UpdateCloudGtmAddressRequest::HealthTasks> & getHealthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, vector<UpdateCloudGtmAddressRequest::HealthTasks>) };
    inline vector<UpdateCloudGtmAddressRequest::HealthTasks> getHealthTasks() { DARABONBA_PTR_GET(healthTasks_, vector<UpdateCloudGtmAddressRequest::HealthTasks>) };
    inline UpdateCloudGtmAddressRequest& setHealthTasks(const vector<UpdateCloudGtmAddressRequest::HealthTasks> & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
    inline UpdateCloudGtmAddressRequest& setHealthTasks(vector<UpdateCloudGtmAddressRequest::HealthTasks> && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCloudGtmAddressRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The language of the response. Valid values:
    // 
    // - zh-CN: Chinese
    // 
    // - en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // The updated IP address or domain name.
    shared_ptr<string> address_ {};
    // The unique ID of the address.
    // 
    // This parameter is required.
    shared_ptr<string> addressId_ {};
    // The attribution information of the address.
    shared_ptr<string> attributeInfo_ {};
    // A client token that is used to ensure the idempotence of the request. You can specify a custom value for this parameter, but you must make sure that the value is unique among different requests. The value can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The updated condition for determining the health status of the address:
    // 
    // - any_ok: At least one probe is normal for all health check templates.
    // 
    // - p30_ok: At least 30% of the probes are normal for all health check templates.
    // 
    // - p50_ok: At least 50% of the probes are normal for all health check templates.
    // 
    // - p70_ok: At least 70% of the probes are normal for all health check templates.
    // 
    // - all_ok: All probes are normal for all health check templates.
    shared_ptr<string> healthJudgement_ {};
    // The list of health check tasks.
    shared_ptr<vector<UpdateCloudGtmAddressRequest::HealthTasks>> healthTasks_ {};
    // The updated name of the address.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
