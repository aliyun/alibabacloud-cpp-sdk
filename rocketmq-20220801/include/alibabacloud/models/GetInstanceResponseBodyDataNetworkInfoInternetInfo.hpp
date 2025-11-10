// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOINTERNETINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOINTERNETINFO_HPP_
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
  class GetInstanceResponseBodyDataNetworkInfoInternetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataNetworkInfoInternetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(flowOutBandwidth, flowOutBandwidth_);
      DARABONBA_PTR_TO_JSON(flowOutType, flowOutType_);
      DARABONBA_PTR_TO_JSON(internetSpec, internetSpec_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataNetworkInfoInternetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(flowOutBandwidth, flowOutBandwidth_);
      DARABONBA_PTR_FROM_JSON(flowOutType, flowOutType_);
      DARABONBA_PTR_FROM_JSON(internetSpec, internetSpec_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
    };
    GetInstanceResponseBodyDataNetworkInfoInternetInfo() = default ;
    GetInstanceResponseBodyDataNetworkInfoInternetInfo(const GetInstanceResponseBodyDataNetworkInfoInternetInfo &) = default ;
    GetInstanceResponseBodyDataNetworkInfoInternetInfo(GetInstanceResponseBodyDataNetworkInfoInternetInfo &&) = default ;
    GetInstanceResponseBodyDataNetworkInfoInternetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataNetworkInfoInternetInfo() = default ;
    GetInstanceResponseBodyDataNetworkInfoInternetInfo& operator=(const GetInstanceResponseBodyDataNetworkInfoInternetInfo &) = default ;
    GetInstanceResponseBodyDataNetworkInfoInternetInfo& operator=(GetInstanceResponseBodyDataNetworkInfoInternetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowOutBandwidth_ == nullptr
        && return this->flowOutType_ == nullptr && return this->internetSpec_ == nullptr && return this->ipWhitelist_ == nullptr; };
    // flowOutBandwidth Field Functions 
    bool hasFlowOutBandwidth() const { return this->flowOutBandwidth_ != nullptr;};
    void deleteFlowOutBandwidth() { this->flowOutBandwidth_ = nullptr;};
    inline int32_t flowOutBandwidth() const { DARABONBA_PTR_GET_DEFAULT(flowOutBandwidth_, 0) };
    inline GetInstanceResponseBodyDataNetworkInfoInternetInfo& setFlowOutBandwidth(int32_t flowOutBandwidth) { DARABONBA_PTR_SET_VALUE(flowOutBandwidth_, flowOutBandwidth) };


    // flowOutType Field Functions 
    bool hasFlowOutType() const { return this->flowOutType_ != nullptr;};
    void deleteFlowOutType() { this->flowOutType_ = nullptr;};
    inline string flowOutType() const { DARABONBA_PTR_GET_DEFAULT(flowOutType_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoInternetInfo& setFlowOutType(string flowOutType) { DARABONBA_PTR_SET_VALUE(flowOutType_, flowOutType) };


    // internetSpec Field Functions 
    bool hasInternetSpec() const { return this->internetSpec_ != nullptr;};
    void deleteInternetSpec() { this->internetSpec_ = nullptr;};
    inline string internetSpec() const { DARABONBA_PTR_GET_DEFAULT(internetSpec_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoInternetInfo& setInternetSpec(string internetSpec) { DARABONBA_PTR_SET_VALUE(internetSpec_, internetSpec) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<string> & ipWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
    inline vector<string> ipWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
    inline GetInstanceResponseBodyDataNetworkInfoInternetInfo& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline GetInstanceResponseBodyDataNetworkInfoInternetInfo& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


  protected:
    // The Internet bandwidth. Unit: MB/s.
    std::shared_ptr<int32_t> flowOutBandwidth_ = nullptr;
    // The metering method for Internet usage.
    // 
    // Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth. If the Internet access feature is enabled, specify this value for the parameter.
    // *   uninvolved: N/A. If the Internet access feature is not enabled, specify this value for the parameter.
    std::shared_ptr<string> flowOutType_ = nullptr;
    // Specifies whether to enable the Internet access feature.
    // 
    // Valid values:
    // 
    // *   enable
    // *   disable
    // 
    // By default, ApsaraMQ for RocketMQ instances are accessed in virtual private clouds (VPCs). If you enable the Internet access feature, you are charged for Internet outbound bandwidth. For more information, see [Internet access fee](https://help.aliyun.com/document_detail/427240.html).
    std::shared_ptr<string> internetSpec_ = nullptr;
    // The whitelist that includes the IP addresses that are allowed to access the ApsaraMQ for RocketMQ broker.
    // 
    // *   If this parameter is not configured, all IP addresses are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    // *   If this parameter is configured, only the IP addresses that are included in the whitelist can access the ApsaraMQ for RocketMQ broker over the Internet.
    std::shared_ptr<vector<string>> ipWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
