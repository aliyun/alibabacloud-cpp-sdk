// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmAddressReferenceResponseBodyAddressPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressReferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressReferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressReferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmAddressReferenceResponseBody() = default ;
    DescribeCloudGtmAddressReferenceResponseBody(const DescribeCloudGtmAddressReferenceResponseBody &) = default ;
    DescribeCloudGtmAddressReferenceResponseBody(DescribeCloudGtmAddressReferenceResponseBody &&) = default ;
    DescribeCloudGtmAddressReferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressReferenceResponseBody() = default ;
    DescribeCloudGtmAddressReferenceResponseBody& operator=(const DescribeCloudGtmAddressReferenceResponseBody &) = default ;
    DescribeCloudGtmAddressReferenceResponseBody& operator=(DescribeCloudGtmAddressReferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->addressId_ != nullptr && this->addressPools_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string addressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const DescribeCloudGtmAddressReferenceResponseBodyAddressPools & addressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, DescribeCloudGtmAddressReferenceResponseBodyAddressPools) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPools addressPools() { DARABONBA_PTR_GET(addressPools_, DescribeCloudGtmAddressReferenceResponseBodyAddressPools) };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddressPools(const DescribeCloudGtmAddressReferenceResponseBodyAddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddressPools(DescribeCloudGtmAddressReferenceResponseBodyAddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // IP address or domain name.
    std::shared_ptr<string> address_ = nullptr;
    // The address ID. This ID uniquely identifies the address.
    std::shared_ptr<string> addressId_ = nullptr;
    // The address pools.
    std::shared_ptr<DescribeCloudGtmAddressReferenceResponseBodyAddressPools> addressPools_ = nullptr;
    // Address name.
    std::shared_ptr<string> name_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
