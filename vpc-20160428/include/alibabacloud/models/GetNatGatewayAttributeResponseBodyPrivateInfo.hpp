// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYPRIVATEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYPRIVATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyPrivateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyPrivateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyPrivateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    GetNatGatewayAttributeResponseBodyPrivateInfo() = default ;
    GetNatGatewayAttributeResponseBodyPrivateInfo(const GetNatGatewayAttributeResponseBodyPrivateInfo &) = default ;
    GetNatGatewayAttributeResponseBodyPrivateInfo(GetNatGatewayAttributeResponseBodyPrivateInfo &&) = default ;
    GetNatGatewayAttributeResponseBodyPrivateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyPrivateInfo() = default ;
    GetNatGatewayAttributeResponseBodyPrivateInfo& operator=(const GetNatGatewayAttributeResponseBodyPrivateInfo &) = default ;
    GetNatGatewayAttributeResponseBodyPrivateInfo& operator=(GetNatGatewayAttributeResponseBodyPrivateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniInstanceId_ == nullptr
        && return this->izNo_ == nullptr && return this->maxBandwidth_ == nullptr && return this->privateIpAddress_ == nullptr && return this->vswitchId_ == nullptr; };
    // eniInstanceId Field Functions 
    bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
    void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
    inline string eniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eniInstanceId_, "") };
    inline GetNatGatewayAttributeResponseBodyPrivateInfo& setEniInstanceId(string eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string izNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline GetNatGatewayAttributeResponseBodyPrivateInfo& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline int32_t maxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
    inline GetNatGatewayAttributeResponseBodyPrivateInfo& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline GetNatGatewayAttributeResponseBodyPrivateInfo& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetNatGatewayAttributeResponseBodyPrivateInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the elastic network interface (ENI).
    std::shared_ptr<string> eniInstanceId_ = nullptr;
    // The zone where the NAT gateway is deployed.
    std::shared_ptr<string> izNo_ = nullptr;
    // The maximum bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> maxBandwidth_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The ID of the vSwitch to which the NAT gateway belongs.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
