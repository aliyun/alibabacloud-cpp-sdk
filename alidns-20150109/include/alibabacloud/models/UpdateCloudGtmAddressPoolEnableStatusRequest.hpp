// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSPOOLENABLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSPOOLENABLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmAddressPoolEnableStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmAddressPoolEnableStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmAddressPoolEnableStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
    };
    UpdateCloudGtmAddressPoolEnableStatusRequest() = default ;
    UpdateCloudGtmAddressPoolEnableStatusRequest(const UpdateCloudGtmAddressPoolEnableStatusRequest &) = default ;
    UpdateCloudGtmAddressPoolEnableStatusRequest(UpdateCloudGtmAddressPoolEnableStatusRequest &&) = default ;
    UpdateCloudGtmAddressPoolEnableStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmAddressPoolEnableStatusRequest() = default ;
    UpdateCloudGtmAddressPoolEnableStatusRequest& operator=(const UpdateCloudGtmAddressPoolEnableStatusRequest &) = default ;
    UpdateCloudGtmAddressPoolEnableStatusRequest& operator=(UpdateCloudGtmAddressPoolEnableStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->addressPoolId_ == nullptr && this->clientToken_ == nullptr && this->enableStatus_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmAddressPoolEnableStatusRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline UpdateCloudGtmAddressPoolEnableStatusRequest& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmAddressPoolEnableStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline UpdateCloudGtmAddressPoolEnableStatusRequest& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the address pool. This ID uniquely identifies the address pool.
    shared_ptr<string> addressPoolId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The enabling state of the address pool. Valid values:
    // 
    // *   enable: The address pool is enabled, and the addresses in the address pool are returned for DNS resolution when the health check results are normal.
    // *   disable: The address pool is disabled, and the addresses in the address pool are not returned for DNS resolution regardless of whether the health check results are normal or not.
    shared_ptr<string> enableStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
