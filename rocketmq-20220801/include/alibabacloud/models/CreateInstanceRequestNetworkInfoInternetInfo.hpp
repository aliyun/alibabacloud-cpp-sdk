// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFOINTERNETINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFOINTERNETINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceRequestNetworkInfoInternetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestNetworkInfoInternetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(flowOutBandwidth, flowOutBandwidth_);
      DARABONBA_PTR_TO_JSON(flowOutType, flowOutType_);
      DARABONBA_PTR_TO_JSON(internetSpec, internetSpec_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestNetworkInfoInternetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(flowOutBandwidth, flowOutBandwidth_);
      DARABONBA_PTR_FROM_JSON(flowOutType, flowOutType_);
      DARABONBA_PTR_FROM_JSON(internetSpec, internetSpec_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
    };
    CreateInstanceRequestNetworkInfoInternetInfo() = default ;
    CreateInstanceRequestNetworkInfoInternetInfo(const CreateInstanceRequestNetworkInfoInternetInfo &) = default ;
    CreateInstanceRequestNetworkInfoInternetInfo(CreateInstanceRequestNetworkInfoInternetInfo &&) = default ;
    CreateInstanceRequestNetworkInfoInternetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestNetworkInfoInternetInfo() = default ;
    CreateInstanceRequestNetworkInfoInternetInfo& operator=(const CreateInstanceRequestNetworkInfoInternetInfo &) = default ;
    CreateInstanceRequestNetworkInfoInternetInfo& operator=(CreateInstanceRequestNetworkInfoInternetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowOutBandwidth_ != nullptr
        && this->flowOutType_ != nullptr && this->internetSpec_ != nullptr && this->ipWhitelist_ != nullptr; };
    // flowOutBandwidth Field Functions 
    bool hasFlowOutBandwidth() const { return this->flowOutBandwidth_ != nullptr;};
    void deleteFlowOutBandwidth() { this->flowOutBandwidth_ = nullptr;};
    inline int32_t flowOutBandwidth() const { DARABONBA_PTR_GET_DEFAULT(flowOutBandwidth_, 0) };
    inline CreateInstanceRequestNetworkInfoInternetInfo& setFlowOutBandwidth(int32_t flowOutBandwidth) { DARABONBA_PTR_SET_VALUE(flowOutBandwidth_, flowOutBandwidth) };


    // flowOutType Field Functions 
    bool hasFlowOutType() const { return this->flowOutType_ != nullptr;};
    void deleteFlowOutType() { this->flowOutType_ = nullptr;};
    inline string flowOutType() const { DARABONBA_PTR_GET_DEFAULT(flowOutType_, "") };
    inline CreateInstanceRequestNetworkInfoInternetInfo& setFlowOutType(string flowOutType) { DARABONBA_PTR_SET_VALUE(flowOutType_, flowOutType) };


    // internetSpec Field Functions 
    bool hasInternetSpec() const { return this->internetSpec_ != nullptr;};
    void deleteInternetSpec() { this->internetSpec_ = nullptr;};
    inline string internetSpec() const { DARABONBA_PTR_GET_DEFAULT(internetSpec_, "") };
    inline CreateInstanceRequestNetworkInfoInternetInfo& setInternetSpec(string internetSpec) { DARABONBA_PTR_SET_VALUE(internetSpec_, internetSpec) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<string> & ipWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
    inline vector<string> ipWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
    inline CreateInstanceRequestNetworkInfoInternetInfo& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline CreateInstanceRequestNetworkInfoInternetInfo& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


  protected:
    // The Internet bandwidth. Unit: MB/s.
    // 
    // This parameter is required only if you set flowOutType to payByBandwidth.
    // 
    // Valid values: 1 to 1000.
    std::shared_ptr<int32_t> flowOutBandwidth_ = nullptr;
    // The metering method of Internet usage.
    // 
    // Valid values:
    // 
    // *   payByBandwidth: pay-by-bandwidth. This value is valid only if you enable Internet access.
    // *   payByTraffic: pay-by-traffic. This value is valid only if you enable Internet access.
    // *   uninvolved: No metering method is involved. This value is valid only if you disable Internet access.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowOutType_ = nullptr;
    // Specifies whether to enable the Internet access feature.
    // 
    // Valid values:
    // 
    // *   enable
    // *   disable
    // 
    // By default, ApsaraMQ for RocketMQ allows you to access instances in VPCs. If you enable Internet access for an instance, you can access the instance over the Internet. After you enable this feature, you are charged for outbound Internet traffic. For more information, see [Internet access fees](https://help.aliyun.com/document_detail/427240.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> internetSpec_ = nullptr;
    // The whitelist that includes the CIDR blocks that are allowed to access the ApsaraMQ for RocketMQ broker over the Internet. This parameter can be configured only if you use the public endpoint to access the instance.
    // 
    // *   If you do not configure an IP address whitelist, all CIDR blocks are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    // *   If you configure an IP address whitelist, only the CIDR blocks in the whitelist are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    std::shared_ptr<vector<string>> ipWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
