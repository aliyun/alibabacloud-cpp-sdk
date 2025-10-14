// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPRIVATEIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPRIVATEIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses() = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses(const DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses(DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses &&) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses() = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses& operator=(const DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses& operator=(DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpAddress_ == nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress> & privateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress> privateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress>) };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses& setPrivateIpAddress(const vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses& setPrivateIpAddress(vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress>> privateIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
