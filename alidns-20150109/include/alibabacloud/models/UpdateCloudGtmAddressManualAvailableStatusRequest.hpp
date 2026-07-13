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
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->addressId_ == nullptr && this->availableMode_ == nullptr && this->clientToken_ == nullptr && this->manualAvailableStatus_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string getAvailableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string getManualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline UpdateCloudGtmAddressManualAvailableStatusRequest& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


  protected:
    // The language of the response. Valid values:
    // 
    // - zh-CN: Chinese
    // 
    // - en-US (Default): English
    shared_ptr<string> acceptLanguage_ {};
    // The unique ID of the address.
    // 
    // This parameter is required.
    shared_ptr<string> addressId_ {};
    // The failover method for the address. Valid values:
    // 
    // - auto: Automatic. The address status is determined by health check results. If a health check fails, DNS resolution stops. If it succeeds, DNS resolution resumes.
    // 
    // - manual: Manual. You control the address status. If set to abnormal, DNS resolution stops and does not resume even if health checks succeed. If set to normal, DNS resolution resumes. If a health check fails, an alert is triggered but resolution does not stop.
    shared_ptr<string> availableMode_ {};
    // A client-generated token that is used to ensure the idempotence of the request. Make sure that the token is unique among different requests. The token can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The availability status of the address. This parameter takes effect only when AvailableMode is set to manual. Valid values:
    // 
    // - available: Normal. The address is available. If a health check fails, an alert is triggered but DNS resolution continues.
    // 
    // - unavailable: Abnormal. DNS resolution for the address is stopped. It does not resume even if health checks succeed.
    shared_ptr<string> manualAvailableStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
