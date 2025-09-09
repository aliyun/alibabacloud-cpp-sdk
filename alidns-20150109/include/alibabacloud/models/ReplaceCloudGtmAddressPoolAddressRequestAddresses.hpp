// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMADDRESSPOOLADDRESSREQUESTADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMADDRESSPOOLADDRESSREQUESTADDRESSES_HPP_
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
  class ReplaceCloudGtmAddressPoolAddressRequestAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceCloudGtmAddressPoolAddressRequestAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceCloudGtmAddressPoolAddressRequestAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
    };
    ReplaceCloudGtmAddressPoolAddressRequestAddresses() = default ;
    ReplaceCloudGtmAddressPoolAddressRequestAddresses(const ReplaceCloudGtmAddressPoolAddressRequestAddresses &) = default ;
    ReplaceCloudGtmAddressPoolAddressRequestAddresses(ReplaceCloudGtmAddressPoolAddressRequestAddresses &&) = default ;
    ReplaceCloudGtmAddressPoolAddressRequestAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceCloudGtmAddressPoolAddressRequestAddresses() = default ;
    ReplaceCloudGtmAddressPoolAddressRequestAddresses& operator=(const ReplaceCloudGtmAddressPoolAddressRequestAddresses &) = default ;
    ReplaceCloudGtmAddressPoolAddressRequestAddresses& operator=(ReplaceCloudGtmAddressPoolAddressRequestAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressId_ != nullptr
        && this->requestSource_ != nullptr && this->serialNumber_ != nullptr && this->weightValue_ != nullptr; };
    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string addressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline ReplaceCloudGtmAddressPoolAddressRequestAddresses& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline const vector<string> & requestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, vector<string>) };
    inline vector<string> requestSource() { DARABONBA_PTR_GET(requestSource_, vector<string>) };
    inline ReplaceCloudGtmAddressPoolAddressRequestAddresses& setRequestSource(const vector<string> & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
    inline ReplaceCloudGtmAddressPoolAddressRequestAddresses& setRequestSource(vector<string> && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline int32_t serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
    inline ReplaceCloudGtmAddressPoolAddressRequestAddresses& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // weightValue Field Functions 
    bool hasWeightValue() const { return this->weightValue_ != nullptr;};
    void deleteWeightValue() { this->weightValue_ = nullptr;};
    inline int32_t weightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
    inline ReplaceCloudGtmAddressPoolAddressRequestAddresses& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


  protected:
    // The ID of the new address. This ID uniquely identifies the address.
    // 
    // *   If you specify this parameter, the original addresses in the address pool will be deleted and replaced with new addresses.
    // *   If you do not specify this parameter, all addresses in the address pool will be deleted and the address pool will be left empty.
    std::shared_ptr<string> addressId_ = nullptr;
    // The DNS request sources.
    std::shared_ptr<vector<string>> requestSource_ = nullptr;
    // The sequence number that specifies the priority for returning the new address. A smaller sequence number specifies a higher priority. This setting takes effect for new addresses.
    std::shared_ptr<int32_t> serialNumber_ = nullptr;
    // The weight value of the new address. You can set a different weight value for each address. This way, addresses are returned based on the weight values for Domain Name System (DNS) requests. A weight value must be an integer that ranges from 1 to 100. This setting takes effect for new addresses.
    std::shared_ptr<int32_t> weightValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
