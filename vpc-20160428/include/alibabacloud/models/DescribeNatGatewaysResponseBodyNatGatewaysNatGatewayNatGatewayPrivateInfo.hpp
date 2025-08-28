// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYNATGATEWAYPRIVATEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYNATGATEWAYPRIVATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
      DARABONBA_PTR_TO_JSON(EniType, eniType_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_TO_JSON(MaxSessionEstablishRate, maxSessionEstablishRate_);
      DARABONBA_PTR_TO_JSON(MaxSessionQuota, maxSessionQuota_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
      DARABONBA_PTR_FROM_JSON(EniType, eniType_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_FROM_JSON(MaxSessionEstablishRate, maxSessionEstablishRate_);
      DARABONBA_PTR_FROM_JSON(MaxSessionQuota, maxSessionQuota_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eniInstanceId_ != nullptr
        && this->eniType_ != nullptr && this->izNo_ != nullptr && this->maxBandwidth_ != nullptr && this->maxSessionEstablishRate_ != nullptr && this->maxSessionQuota_ != nullptr
        && this->privateIpAddress_ != nullptr && this->vswitchId_ != nullptr; };
    // eniInstanceId Field Functions 
    bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
    void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
    inline string eniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eniInstanceId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setEniInstanceId(string eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };


    // eniType Field Functions 
    bool hasEniType() const { return this->eniType_ != nullptr;};
    void deleteEniType() { this->eniType_ = nullptr;};
    inline string eniType() const { DARABONBA_PTR_GET_DEFAULT(eniType_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setEniType(string eniType) { DARABONBA_PTR_SET_VALUE(eniType_, eniType) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string izNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline int32_t maxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // maxSessionEstablishRate Field Functions 
    bool hasMaxSessionEstablishRate() const { return this->maxSessionEstablishRate_ != nullptr;};
    void deleteMaxSessionEstablishRate() { this->maxSessionEstablishRate_ = nullptr;};
    inline int32_t maxSessionEstablishRate() const { DARABONBA_PTR_GET_DEFAULT(maxSessionEstablishRate_, 0) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setMaxSessionEstablishRate(int32_t maxSessionEstablishRate) { DARABONBA_PTR_SET_VALUE(maxSessionEstablishRate_, maxSessionEstablishRate) };


    // maxSessionQuota Field Functions 
    bool hasMaxSessionQuota() const { return this->maxSessionQuota_ != nullptr;};
    void deleteMaxSessionQuota() { this->maxSessionQuota_ = nullptr;};
    inline int32_t maxSessionQuota() const { DARABONBA_PTR_GET_DEFAULT(maxSessionQuota_, 0) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setMaxSessionQuota(int32_t maxSessionQuota) { DARABONBA_PTR_SET_VALUE(maxSessionQuota_, maxSessionQuota) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayNatGatewayPrivateInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the elastic network interface (ENI).
    std::shared_ptr<string> eniInstanceId_ = nullptr;
    // The mode in which the ENI is associated with the NAT gateway.
    // 
    // *   **indirect**: non-cut-through mode
    // *   If an empty value is returned, it indicates that the cut-through mode is used.
    std::shared_ptr<string> eniType_ = nullptr;
    // The zone to which the NAT gateway belongs.
    std::shared_ptr<string> izNo_ = nullptr;
    // The maximum bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> maxBandwidth_ = nullptr;
    // The number of new connections to the NAT gateway. Unit: connections per second.
    std::shared_ptr<int32_t> maxSessionEstablishRate_ = nullptr;
    // The number of concurrent connections to the NAT gateway. Unit: connections.
    std::shared_ptr<int32_t> maxSessionQuota_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The ID of the vSwitch to which the NAT gateway belongs.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
