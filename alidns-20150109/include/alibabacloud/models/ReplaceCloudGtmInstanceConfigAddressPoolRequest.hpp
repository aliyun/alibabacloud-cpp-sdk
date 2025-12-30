// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLREQUEST_HPP_
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
    class AddressPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddressPools& obj) { 
        DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
        DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
      };
      friend void from_json(const Darabonba::Json& j, AddressPools& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
        DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
      };
      AddressPools() = default ;
      AddressPools(const AddressPools &) = default ;
      AddressPools(AddressPools &&) = default ;
      AddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddressPools() = default ;
      AddressPools& operator=(const AddressPools &) = default ;
      AddressPools& operator=(AddressPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressPoolId_ == nullptr
        && this->requestSource_ == nullptr && this->serialNumber_ == nullptr && this->weightValue_ == nullptr; };
      // addressPoolId Field Functions 
      bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
      void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
      inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
      inline AddressPools& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


      // requestSource Field Functions 
      bool hasRequestSource() const { return this->requestSource_ != nullptr;};
      void deleteRequestSource() { this->requestSource_ = nullptr;};
      inline const vector<string> & getRequestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, vector<string>) };
      inline vector<string> getRequestSource() { DARABONBA_PTR_GET(requestSource_, vector<string>) };
      inline AddressPools& setRequestSource(const vector<string> & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
      inline AddressPools& setRequestSource(vector<string> && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline int32_t getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
      inline AddressPools& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // weightValue Field Functions 
      bool hasWeightValue() const { return this->weightValue_ != nullptr;};
      void deleteWeightValue() { this->weightValue_ = nullptr;};
      inline int32_t getWeightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
      inline AddressPools& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


    protected:
      // The ID of the address pool. This ID uniquely identifies the address pool.
      // 
      // *   If you specify this parameter, the address pools that are associated with the desired instance are removed and the instance is associated with new address pools.
      // *   If this parameter is left empty, the address pools that are associated with the desired instance are removed and no address pool is associated with the instance.
      shared_ptr<string> addressPoolId_ {};
      // The DNS request sources.
      shared_ptr<vector<string>> requestSource_ {};
      // The sequence number of the new address pool. The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number specifies the priority for returning the address pool. A smaller sequence number specifies a higher priority.
      shared_ptr<int32_t> serialNumber_ {};
      // The weight value of the new address pool. You can set a different weight value for each address pool. This way, address pools are returned based on the weight values for Domain Name System (DNS) requests. A weight value must be an integer that ranges from 1 to 100.
      shared_ptr<int32_t> weightValue_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->addressPools_ == nullptr && this->clientToken_ == nullptr && this->configId_ == nullptr && this->instanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools> & getAddressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools>) };
    inline vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools> getAddressPools() { DARABONBA_PTR_GET(addressPools_, vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools>) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setAddressPools(const vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools> & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setAddressPools(vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools> && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // The address pools.
    shared_ptr<vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools>> addressPools_ {};
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
