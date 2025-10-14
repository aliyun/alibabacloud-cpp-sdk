// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLREQUESTADDRESSPOOLS_HPP_
#define ALIBABACLOUD_MODELS_REPLACECLOUDGTMINSTANCECONFIGADDRESSPOOLREQUESTADDRESSPOOLS_HPP_
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
  class ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
    };
    ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools() = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools(const ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools &) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools(ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools &&) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools() = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& operator=(const ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools &) = default ;
    ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& operator=(ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressPoolId_ == nullptr
        && return this->requestSource_ == nullptr && return this->serialNumber_ == nullptr && return this->weightValue_ == nullptr; };
    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string addressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline const vector<string> & requestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, vector<string>) };
    inline vector<string> requestSource() { DARABONBA_PTR_GET(requestSource_, vector<string>) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& setRequestSource(const vector<string> & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& setRequestSource(vector<string> && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline int32_t serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // weightValue Field Functions 
    bool hasWeightValue() const { return this->weightValue_ != nullptr;};
    void deleteWeightValue() { this->weightValue_ = nullptr;};
    inline int32_t weightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
    inline ReplaceCloudGtmInstanceConfigAddressPoolRequestAddressPools& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


  protected:
    // The ID of the address pool. This ID uniquely identifies the address pool.
    // 
    // *   If you specify this parameter, the address pools that are associated with the desired instance are removed and the instance is associated with new address pools.
    // *   If this parameter is left empty, the address pools that are associated with the desired instance are removed and no address pool is associated with the instance.
    std::shared_ptr<string> addressPoolId_ = nullptr;
    // The DNS request sources.
    std::shared_ptr<vector<string>> requestSource_ = nullptr;
    // The sequence number of the new address pool. The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number specifies the priority for returning the address pool. A smaller sequence number specifies a higher priority.
    std::shared_ptr<int32_t> serialNumber_ = nullptr;
    // The weight value of the new address pool. You can set a different weight value for each address pool. This way, address pools are returned based on the weight values for Domain Name System (DNS) requests. A weight value must be an integer that ranges from 1 to 100.
    std::shared_ptr<int32_t> weightValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
