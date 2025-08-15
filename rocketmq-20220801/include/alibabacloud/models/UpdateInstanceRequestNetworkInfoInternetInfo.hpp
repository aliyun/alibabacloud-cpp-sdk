// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTNETWORKINFOINTERNETINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTNETWORKINFOINTERNETINFO_HPP_
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
  class UpdateInstanceRequestNetworkInfoInternetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestNetworkInfoInternetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestNetworkInfoInternetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
    };
    UpdateInstanceRequestNetworkInfoInternetInfo() = default ;
    UpdateInstanceRequestNetworkInfoInternetInfo(const UpdateInstanceRequestNetworkInfoInternetInfo &) = default ;
    UpdateInstanceRequestNetworkInfoInternetInfo(UpdateInstanceRequestNetworkInfoInternetInfo &&) = default ;
    UpdateInstanceRequestNetworkInfoInternetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestNetworkInfoInternetInfo() = default ;
    UpdateInstanceRequestNetworkInfoInternetInfo& operator=(const UpdateInstanceRequestNetworkInfoInternetInfo &) = default ;
    UpdateInstanceRequestNetworkInfoInternetInfo& operator=(UpdateInstanceRequestNetworkInfoInternetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipWhitelist_ != nullptr; };
    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<string> & ipWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
    inline vector<string> ipWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
    inline UpdateInstanceRequestNetworkInfoInternetInfo& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline UpdateInstanceRequestNetworkInfoInternetInfo& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


  protected:
    // The whitelist that includes the IP addresses that are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    // 
    // *   If you do not configure an IP address whitelist, all CIDR blocks are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    // *   If you configure an IP address whitelist, only the IP addresses in the whitelist are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    std::shared_ptr<vector<string>> ipWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
