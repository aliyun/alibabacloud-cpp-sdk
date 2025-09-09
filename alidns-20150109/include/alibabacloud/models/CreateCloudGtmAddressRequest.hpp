// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudGtmAddressRequestHealthTasks.hpp>
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
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->address_ != nullptr && this->attributeInfo_ != nullptr && this->availableMode_ != nullptr && this->clientToken_ != nullptr && this->enableStatus_ != nullptr
        && this->healthJudgement_ != nullptr && this->healthTasks_ != nullptr && this->manualAvailableStatus_ != nullptr && this->name_ != nullptr && this->remark_ != nullptr
        && this->type_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateCloudGtmAddressRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateCloudGtmAddressRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string attributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline CreateCloudGtmAddressRequest& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string availableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline CreateCloudGtmAddressRequest& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCloudGtmAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline CreateCloudGtmAddressRequest& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string healthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline CreateCloudGtmAddressRequest& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthTasks Field Functions 
    bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
    void deleteHealthTasks() { this->healthTasks_ = nullptr;};
    inline const vector<CreateCloudGtmAddressRequestHealthTasks> & healthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, vector<CreateCloudGtmAddressRequestHealthTasks>) };
    inline vector<CreateCloudGtmAddressRequestHealthTasks> healthTasks() { DARABONBA_PTR_GET(healthTasks_, vector<CreateCloudGtmAddressRequestHealthTasks>) };
    inline CreateCloudGtmAddressRequest& setHealthTasks(const vector<CreateCloudGtmAddressRequestHealthTasks> & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
    inline CreateCloudGtmAddressRequest& setHealthTasks(vector<CreateCloudGtmAddressRequestHealthTasks> && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string manualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline CreateCloudGtmAddressRequest& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCloudGtmAddressRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateCloudGtmAddressRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCloudGtmAddressRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // IP address or domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> address_ = nullptr;
    // Address ownership information.
    std::shared_ptr<string> attributeInfo_ = nullptr;
    // The failover mode that is used when address exceptions are identified. Valid values:
    // 
    // *   auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
    // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for DNS requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    // 
    // This parameter is required.
    std::shared_ptr<string> availableMode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Indicates the current enabled status of the address:
    // - enable: Enabled status 
    // - disable: Disabled status
    // 
    // This parameter is required.
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The condition for determining the health status of the address. This parameter is required when HealthTasks is specified. Valid values:
    // 
    // *   any_ok: The health check results of at least one health check template are normal.
    // *   p30_ok: The health check results of at least 30% of health check templates are normal.
    // *   p50_ok: The health check results of at least 50% of health check templates are normal.
    // *   p70_ok: The health check results of at least 70% of health check templates are normal.
    // *   all_ok: The health check results of all health check templates are normal.
    // 
    // This parameter is required.
    std::shared_ptr<string> healthJudgement_ = nullptr;
    // The health check tasks associated with the address.
    std::shared_ptr<vector<CreateCloudGtmAddressRequestHealthTasks>> healthTasks_ = nullptr;
    // The availability state of the address. This parameter is required when AvailableMode is set to **manual**. Valid values:
    // 
    // *   available: The address is normal. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    // *   unavailable: The address is abnormal. In this state, the address is not returned for DNS requests even if the address passes health checks.
    std::shared_ptr<string> manualAvailableStatus_ = nullptr;
    // Address name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // Address type:
    // - IPv4
    // - IPv6
    // - domain
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
