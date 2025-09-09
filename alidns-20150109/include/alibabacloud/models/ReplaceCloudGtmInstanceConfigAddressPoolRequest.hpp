// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ReplaceCloudGtmInstanceConfigAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceCloudGtmInstanceConfigAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceCloudGtmInstanceConfigAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ReplaceCloudGtmInstanceConfigAddressPoolRequest() = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequest(const ReplaceCloudGtmInstanceConfigAddressPoolRequest &) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequest(ReplaceCloudGtmInstanceConfigAddressPoolRequest &&) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceCloudGtmInstanceConfigAddressPoolRequest() = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequest& operator=(const ReplaceCloudGtmInstanceConfigAddressPoolRequest &) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequest& operator=(ReplaceCloudGtmInstanceConfigAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->addressPools_ != nullptr && this->clientToken_ != nullptr && this->configId_ != nullptr && this->instanceId_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools> & addressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools>) };
    inline vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools> addressPools() { DARABONBA_PTR_GET(addressPools_, vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools>) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setAddressPools(const vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools> & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setAddressPools(vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools> && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The address pools.
    std::shared_ptr<vector<ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools>> addressPools_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    // 
    // You can call the [ListCloudGtmInstanceConfigs](~~ListCloudGtmInstanceConfigs~~) operation to query the configuration ID of the access domain name.
    std::shared_ptr<string> configId_ = nullptr;
    // The ID of the GTM 3.0 instance for which you want to change address pools.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
