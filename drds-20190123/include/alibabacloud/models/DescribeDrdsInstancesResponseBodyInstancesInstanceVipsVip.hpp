// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCEVIPSVIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCEVIPSVIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& obj) { 
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(dns, dns_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& obj) { 
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(dns, dns_);
    };
    DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip(const DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip(DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip &&) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& operator=(const DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& operator=(DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IP_ != nullptr
        && this->port_ != nullptr && this->type_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr && this->dns_ != nullptr; };
    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // dns Field Functions 
    bool hasDns() const { return this->dns_ != nullptr;};
    void deleteDns() { this->dns_ = nullptr;};
    inline string dns() const { DARABONBA_PTR_GET_DEFAULT(dns_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip& setDns(string dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };


  protected:
    // The virtual IP address.
    std::shared_ptr<string> IP_ = nullptr;
    // The ports that are opened on the VIP.
    std::shared_ptr<string> port_ = nullptr;
    // The type of the VIP. Valid values:
    // 
    // *   intranet: a private IP address
    // *   internet: a public IP address
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The domain name that is mapped to the VIP.
    std::shared_ptr<string> dns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
