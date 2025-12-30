// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMADDRESSPOOLADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMADDRESSPOOLADDRESSREQUEST_HPP_
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
  class ReplaceCloudGtmAddressPoolAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceCloudGtmAddressPoolAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceCloudGtmAddressPoolAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    ReplaceCloudGtmAddressPoolAddressRequest() = default ;
    ReplaceCloudGtmAddressPoolAddressRequest(const ReplaceCloudGtmAddressPoolAddressRequest &) = default ;
    ReplaceCloudGtmAddressPoolAddressRequest(ReplaceCloudGtmAddressPoolAddressRequest &&) = default ;
    ReplaceCloudGtmAddressPoolAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceCloudGtmAddressPoolAddressRequest() = default ;
    ReplaceCloudGtmAddressPoolAddressRequest& operator=(const ReplaceCloudGtmAddressPoolAddressRequest &) = default ;
    ReplaceCloudGtmAddressPoolAddressRequest& operator=(ReplaceCloudGtmAddressPoolAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addresses& obj) { 
        DARABONBA_PTR_TO_JSON(AddressId, addressId_);
        DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
      };
      friend void from_json(const Darabonba::Json& j, Addresses& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
        DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
      };
      Addresses() = default ;
      Addresses(const Addresses &) = default ;
      Addresses(Addresses &&) = default ;
      Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addresses() = default ;
      Addresses& operator=(const Addresses &) = default ;
      Addresses& operator=(Addresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressId_ == nullptr
        && this->requestSource_ == nullptr && this->serialNumber_ == nullptr && this->weightValue_ == nullptr; };
      // addressId Field Functions 
      bool hasAddressId() const { return this->addressId_ != nullptr;};
      void deleteAddressId() { this->addressId_ = nullptr;};
      inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
      inline Addresses& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


      // requestSource Field Functions 
      bool hasRequestSource() const { return this->requestSource_ != nullptr;};
      void deleteRequestSource() { this->requestSource_ = nullptr;};
      inline const vector<string> & getRequestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, vector<string>) };
      inline vector<string> getRequestSource() { DARABONBA_PTR_GET(requestSource_, vector<string>) };
      inline Addresses& setRequestSource(const vector<string> & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
      inline Addresses& setRequestSource(vector<string> && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline int32_t getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
      inline Addresses& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // weightValue Field Functions 
      bool hasWeightValue() const { return this->weightValue_ != nullptr;};
      void deleteWeightValue() { this->weightValue_ = nullptr;};
      inline int32_t getWeightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
      inline Addresses& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


    protected:
      // The ID of the new address. This ID uniquely identifies the address.
      // 
      // *   If you specify this parameter, the original addresses in the address pool will be deleted and replaced with new addresses.
      // *   If you do not specify this parameter, all addresses in the address pool will be deleted and the address pool will be left empty.
      shared_ptr<string> addressId_ {};
      // The DNS request sources.
      shared_ptr<vector<string>> requestSource_ {};
      // The sequence number that specifies the priority for returning the new address. A smaller sequence number specifies a higher priority. This setting takes effect for new addresses.
      shared_ptr<int32_t> serialNumber_ {};
      // The weight value of the new address. You can set a different weight value for each address. This way, addresses are returned based on the weight values for Domain Name System (DNS) requests. A weight value must be an integer that ranges from 1 to 100. This setting takes effect for new addresses.
      shared_ptr<int32_t> weightValue_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->addressPoolId_ == nullptr && this->addresses_ == nullptr && this->clientToken_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReplaceCloudGtmAddressPoolAddressRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline ReplaceCloudGtmAddressPoolAddressRequest& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses>) };
    inline vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses>) };
    inline ReplaceCloudGtmAddressPoolAddressRequest& setAddresses(const vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline ReplaceCloudGtmAddressPoolAddressRequest& setAddresses(vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceCloudGtmAddressPoolAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US (default)**: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the address pool for which you want to replace addresses. This ID uniquely identifies the address pool.
    shared_ptr<string> addressPoolId_ {};
    // The addresses.
    shared_ptr<vector<ReplaceCloudGtmAddressPoolAddressRequest::Addresses>> addresses_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
