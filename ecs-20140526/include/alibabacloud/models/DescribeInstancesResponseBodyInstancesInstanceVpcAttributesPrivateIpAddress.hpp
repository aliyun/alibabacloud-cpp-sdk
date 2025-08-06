// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEVPCATTRIBUTESPRIVATEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEVPCATTRIBUTESPRIVATEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
    };
    DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress() = default ;
    DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress(const DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress(DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress() = default ;
    DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress& operator=(const DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress& operator=(DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipAddress_ != nullptr; };
    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<string> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
    inline vector<string> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
    inline DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline DescribeInstancesResponseBodyInstancesInstanceVpcAttributesPrivateIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


  protected:
    std::shared_ptr<vector<string>> ipAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
