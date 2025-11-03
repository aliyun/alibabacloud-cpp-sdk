// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODYEIPINFOSEIPINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODYEIPINFOSEIPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipGatewayInfoResponseBodyEipInfosEipInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpGw, ipGw_);
      DARABONBA_PTR_TO_JSON(IpMask, ipMask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpGw, ipGw_);
      DARABONBA_PTR_FROM_JSON(IpMask, ipMask_);
    };
    DescribeEipGatewayInfoResponseBodyEipInfosEipInfo() = default ;
    DescribeEipGatewayInfoResponseBodyEipInfosEipInfo(const DescribeEipGatewayInfoResponseBodyEipInfosEipInfo &) = default ;
    DescribeEipGatewayInfoResponseBodyEipInfosEipInfo(DescribeEipGatewayInfoResponseBodyEipInfosEipInfo &&) = default ;
    DescribeEipGatewayInfoResponseBodyEipInfosEipInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipGatewayInfoResponseBodyEipInfosEipInfo() = default ;
    DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& operator=(const DescribeEipGatewayInfoResponseBodyEipInfosEipInfo &) = default ;
    DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& operator=(DescribeEipGatewayInfoResponseBodyEipInfosEipInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->ipGw_ == nullptr && return this->ipMask_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipGw Field Functions 
    bool hasIpGw() const { return this->ipGw_ != nullptr;};
    void deleteIpGw() { this->ipGw_ = nullptr;};
    inline string ipGw() const { DARABONBA_PTR_GET_DEFAULT(ipGw_, "") };
    inline DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& setIpGw(string ipGw) { DARABONBA_PTR_SET_VALUE(ipGw_, ipGw) };


    // ipMask Field Functions 
    bool hasIpMask() const { return this->ipMask_ != nullptr;};
    void deleteIpMask() { this->ipMask_ = nullptr;};
    inline string ipMask() const { DARABONBA_PTR_GET_DEFAULT(ipMask_, "") };
    inline DescribeEipGatewayInfoResponseBodyEipInfosEipInfo& setIpMask(string ipMask) { DARABONBA_PTR_SET_VALUE(ipMask_, ipMask) };


  protected:
    // The IP address of the EIP.
    std::shared_ptr<string> ip_ = nullptr;
    // The IP address of the gateway that is associated with the EIP.
    std::shared_ptr<string> ipGw_ = nullptr;
    // The subnet mask of the EIP.
    std::shared_ptr<string> ipMask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
