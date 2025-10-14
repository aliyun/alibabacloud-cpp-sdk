// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmAddressPoolResponseBodyAddressesAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressPoolResponseBodyAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolResponseBodyAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolResponseBodyAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    DescribeCloudGtmAddressPoolResponseBodyAddresses() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddresses(const DescribeCloudGtmAddressPoolResponseBodyAddresses &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddresses(DescribeCloudGtmAddressPoolResponseBodyAddresses &&) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolResponseBodyAddresses() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddresses& operator=(const DescribeCloudGtmAddressPoolResponseBodyAddresses &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddresses& operator=(DescribeCloudGtmAddressPoolResponseBodyAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress> & address() const { DARABONBA_PTR_GET_CONST(address_, vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress>) };
    inline vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress> address() { DARABONBA_PTR_GET(address_, vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress>) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddresses& setAddress(const vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddresses& setAddress(vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddress>> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
