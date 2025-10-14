// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPUBLICIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPUBLICIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
    };
    DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses() = default ;
    DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses(const DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses(DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses &&) = default ;
    DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses() = default ;
    DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses& operator=(const DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses& operator=(DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicIpAddress_ == nullptr; };
    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress> & publicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress> publicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress>) };
    inline DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses& setPublicIpAddress(const vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress> & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses& setPublicIpAddress(vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress> && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddressesPublicIpAddress>> publicIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
