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
      // The unique ID of the address pool.
      // 
      // - If you specify this parameter, the existing address pools associated with the target instance are deleted and replaced with the address pools that you specify.
      // 
      // - If you leave this parameter empty, all address pools associated with the target instance are deleted.
      shared_ptr<string> addressPoolId_ {};
      // A list of request sources.
      shared_ptr<vector<string>> requestSource_ {};
      // The ordinal number. For DNS requests from any source, address pools with smaller ordinal numbers are returned first. A smaller ordinal number indicates a higher priority. This parameter takes effect for the updated address pools.
      shared_ptr<int32_t> serialNumber_ {};
      // The weight of the address pool. Valid values are integers from 1 to 100. You can set a different weight for each address pool. DNS queries are resolved based on the specified weights. This parameter takes effect for the updated address pools.
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
    // - zh-CN: Chinese
    // 
    // - en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // A list of address pools.
    shared_ptr<vector<ReplaceCloudGtmInstanceConfigAddressPoolRequest::AddressPools>> addressPools_ {};
    // A client-generated token that you use to ensure the idempotence of the request. Make sure that the token is unique among different requests. The token can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The ID of the instance configuration. For the same access domain name and GTM instance, you can configure both A and AAAA records. In this case, the GTM instance has two instance configurations. The ConfigId parameter uniquely identifies an instance configuration.
    // 
    // Call the [ListCloudGtmInstanceConfigs](https://help.aliyun.com/document_detail/2797349.html) operation to query the ConfigId of the instance configuration.
    shared_ptr<string> configId_ {};
    // The ID of the GTM 3.0 instance for which you want to replace address pools.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
