// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATAVIPSVIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATAVIPSVIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceResponseBodyDataVipsVip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceResponseBodyDataVipsVip& obj) { 
      DARABONBA_PTR_TO_JSON(Dns, dns_);
      DARABONBA_PTR_TO_JSON(ExpireDays, expireDays_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RemoveWeight, removeWeight_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceResponseBodyDataVipsVip& obj) { 
      DARABONBA_PTR_FROM_JSON(Dns, dns_);
      DARABONBA_PTR_FROM_JSON(ExpireDays, expireDays_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RemoveWeight, removeWeight_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DescribeDrdsInstanceResponseBodyDataVipsVip() = default ;
    DescribeDrdsInstanceResponseBodyDataVipsVip(const DescribeDrdsInstanceResponseBodyDataVipsVip &) = default ;
    DescribeDrdsInstanceResponseBodyDataVipsVip(DescribeDrdsInstanceResponseBodyDataVipsVip &&) = default ;
    DescribeDrdsInstanceResponseBodyDataVipsVip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceResponseBodyDataVipsVip() = default ;
    DescribeDrdsInstanceResponseBodyDataVipsVip& operator=(const DescribeDrdsInstanceResponseBodyDataVipsVip &) = default ;
    DescribeDrdsInstanceResponseBodyDataVipsVip& operator=(DescribeDrdsInstanceResponseBodyDataVipsVip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dns_ != nullptr
        && this->expireDays_ != nullptr && this->port_ != nullptr && this->removeWeight_ != nullptr && this->type_ != nullptr && this->vpcId_ != nullptr
        && this->vswitchId_ != nullptr; };
    // dns Field Functions 
    bool hasDns() const { return this->dns_ != nullptr;};
    void deleteDns() { this->dns_ = nullptr;};
    inline string dns() const { DARABONBA_PTR_GET_DEFAULT(dns_, "") };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setDns(string dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };


    // expireDays Field Functions 
    bool hasExpireDays() const { return this->expireDays_ != nullptr;};
    void deleteExpireDays() { this->expireDays_ = nullptr;};
    inline int64_t expireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0L) };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setExpireDays(int64_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // removeWeight Field Functions 
    bool hasRemoveWeight() const { return this->removeWeight_ != nullptr;};
    void deleteRemoveWeight() { this->removeWeight_ = nullptr;};
    inline bool removeWeight() const { DARABONBA_PTR_GET_DEFAULT(removeWeight_, false) };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setRemoveWeight(bool removeWeight) { DARABONBA_PTR_SET_VALUE(removeWeight_, removeWeight) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeDrdsInstanceResponseBodyDataVipsVip& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The domain name that is mapped to the VIP.
    std::shared_ptr<string> dns_ = nullptr;
    // The number of remaining days before the VIP expires.
    std::shared_ptr<int64_t> expireDays_ = nullptr;
    // The ports that are opened on the VIP.
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<bool> removeWeight_ = nullptr;
    // The type of the VIP. Valid values: intranet and internet.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
