// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMADDRESSPOOLADDRESSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMADDRESSPOOLADDRESSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ReplaceCloudGtmAddressPoolAddressShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceCloudGtmAddressPoolAddressShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(Addresses, addressesShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceCloudGtmAddressPoolAddressShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(Addresses, addressesShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    ReplaceCloudGtmAddressPoolAddressShrinkRequest() = default ;
    ReplaceCloudGtmAddressPoolAddressShrinkRequest(const ReplaceCloudGtmAddressPoolAddressShrinkRequest &) = default ;
    ReplaceCloudGtmAddressPoolAddressShrinkRequest(ReplaceCloudGtmAddressPoolAddressShrinkRequest &&) = default ;
    ReplaceCloudGtmAddressPoolAddressShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceCloudGtmAddressPoolAddressShrinkRequest() = default ;
    ReplaceCloudGtmAddressPoolAddressShrinkRequest& operator=(const ReplaceCloudGtmAddressPoolAddressShrinkRequest &) = default ;
    ReplaceCloudGtmAddressPoolAddressShrinkRequest& operator=(ReplaceCloudGtmAddressPoolAddressShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->addressPoolId_ != nullptr && this->addressesShrink_ != nullptr && this->clientToken_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReplaceCloudGtmAddressPoolAddressShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string addressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline ReplaceCloudGtmAddressPoolAddressShrinkRequest& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // addressesShrink Field Functions 
    bool hasAddressesShrink() const { return this->addressesShrink_ != nullptr;};
    void deleteAddressesShrink() { this->addressesShrink_ = nullptr;};
    inline string addressesShrink() const { DARABONBA_PTR_GET_DEFAULT(addressesShrink_, "") };
    inline ReplaceCloudGtmAddressPoolAddressShrinkRequest& setAddressesShrink(string addressesShrink) { DARABONBA_PTR_SET_VALUE(addressesShrink_, addressesShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceCloudGtmAddressPoolAddressShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US (default)**: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the address pool for which you want to replace addresses. This ID uniquely identifies the address pool.
    std::shared_ptr<string> addressPoolId_ = nullptr;
    // The addresses.
    std::shared_ptr<string> addressesShrink_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
