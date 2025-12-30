// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPoolsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPoolsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest() = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest(const ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest &) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest(ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest &&) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest() = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& operator=(const ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest &) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& operator=(ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->addressPoolsShrink_ == nullptr && this->clientToken_ == nullptr && this->configId_ == nullptr && this->instanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressPoolsShrink Field Functions 
    bool hasAddressPoolsShrink() const { return this->addressPoolsShrink_ != nullptr;};
    void deleteAddressPoolsShrink() { this->addressPoolsShrink_ = nullptr;};
    inline string getAddressPoolsShrink() const { DARABONBA_PTR_GET_DEFAULT(addressPoolsShrink_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& setAddressPoolsShrink(string addressPoolsShrink) { DARABONBA_PTR_SET_VALUE(addressPoolsShrink_, addressPoolsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // The address pools.
    shared_ptr<string> addressPoolsShrink_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    // 
    // You can call the [ListCloudGtmInstanceConfigs](~~ListCloudGtmInstanceConfigs~~) operation to query the configuration ID of the access domain name.
    shared_ptr<string> configId_ {};
    // The ID of the GTM 3.0 instance for which you want to change address pools.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
