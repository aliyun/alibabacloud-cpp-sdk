// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPRIVATEIPADDRESSESPRIVATEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPRIVATEIPADDRESSESPRIVATEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& obj) { 
      DARABONBA_PTR_TO_JSON(GateWay, gateWay_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(GateWay, gateWay_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
    };
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress() = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress(const DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress(DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress &&) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress() = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& operator=(const DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& operator=(DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gateWay_ == nullptr
        && return this->ip_ == nullptr && return this->isp_ == nullptr; };
    // gateWay Field Functions 
    bool hasGateWay() const { return this->gateWay_ != nullptr;};
    void deleteGateWay() { this->gateWay_ = nullptr;};
    inline string gateWay() const { DARABONBA_PTR_GET_DEFAULT(gateWay_, "") };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& setGateWay(string gateWay) { DARABONBA_PTR_SET_VALUE(gateWay_, gateWay) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateIpAddressesPrivateIpAddress& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


  protected:
    // The gateway.
    std::shared_ptr<string> gateWay_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The ISP.
    std::shared_ptr<string> isp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
