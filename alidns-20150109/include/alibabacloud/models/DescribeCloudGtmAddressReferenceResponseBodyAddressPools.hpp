// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODYADDRESSPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODYADDRESSPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressReferenceResponseBodyAddressPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressReferenceResponseBodyAddressPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPool, addressPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressReferenceResponseBodyAddressPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPool, addressPool_);
    };
    DescribeCloudGtmAddressReferenceResponseBodyAddressPools() = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPools(const DescribeCloudGtmAddressReferenceResponseBodyAddressPools &) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPools(DescribeCloudGtmAddressReferenceResponseBodyAddressPools &&) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressReferenceResponseBodyAddressPools() = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPools& operator=(const DescribeCloudGtmAddressReferenceResponseBodyAddressPools &) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPools& operator=(DescribeCloudGtmAddressReferenceResponseBodyAddressPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressPool_ != nullptr; };
    // addressPool Field Functions 
    bool hasAddressPool() const { return this->addressPool_ != nullptr;};
    void deleteAddressPool() { this->addressPool_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool> & addressPool() const { DARABONBA_PTR_GET_CONST(addressPool_, vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool>) };
    inline vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool> addressPool() { DARABONBA_PTR_GET(addressPool_, vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool>) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPools& setAddressPool(const vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool> & addressPool) { DARABONBA_PTR_SET_VALUE(addressPool_, addressPool) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPools& setAddressPool(vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool> && addressPool) { DARABONBA_PTR_SET_RVALUE(addressPool_, addressPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool>> addressPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
