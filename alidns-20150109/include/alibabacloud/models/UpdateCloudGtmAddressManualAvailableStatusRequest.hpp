// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSMANUALAVAILABLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSMANUALAVAILABLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmAddressManualAvailableStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmAddressManualAvailableStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(AvailableMode, availableMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ManualAvailableStatus, manualAvailableStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmAddressManualAvailableStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(AvailableMode, availableMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ManualAvailableStatus, manualAvailableStatus_);
    };
    UpdateCloudGtmAddressManualAvailableStatusRequest() = default ;
    UpdateCloudGtmAddressManualAvailableStatusRequest(const UpdateCloudGtmAddressManualAvailableStatusRequest &) = default ;
    UpdateCloudGtmAddressManualAvailableStatusRequest(UpdateCloudGtmAddressManualAvailableStatusRequest &&) = default ;
    UpdateCloudGtmAddressManualAvailableStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmAddressManualAvailableStatusRequest() = default ;
    UpdateCloudGtmAddressManualAvailableStatusRequest& operator=(const UpdateCloudGtmAddressManualAvailableStatusRequest &) = default ;
    UpdateCloudGtmAddressManualAvailableStatusRequest& operator=(UpdateCloudGtmAddressManualAvailableStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->addressId_ != nullptr && this->availableMode_ != nullptr && this->clientToken_ != nullptr && this->manualAvailableStatus_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string addressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string availableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string manualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the address. This ID uniquely identifies the address.
    // 
    // This parameter is required.
    std::shared_ptr<string> addressId_ = nullptr;
    // The failover mode that is used when address exceptions are identified. Valid values:
    // 
    // *   auto: the automatic mode. The system determines whether to return an address based on health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
    // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for DNS requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    std::shared_ptr<string> availableMode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can specify a custom value for this parameter, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The availability state of the address when AvailableMode is set to manual. Valid values:
    // 
    // *   available: The address is normal. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    // *   unavailable: The address is abnormal. In this state, the address is not returned for DNS requests even if the address passes health checks.
    std::shared_ptr<string> manualAvailableStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
