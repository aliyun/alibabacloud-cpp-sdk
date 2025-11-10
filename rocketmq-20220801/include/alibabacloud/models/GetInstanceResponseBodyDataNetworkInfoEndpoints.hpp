// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOENDPOINTS_HPP_
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
  class GetInstanceResponseBodyDataNetworkInfoEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataNetworkInfoEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(endpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(endpointUrl, endpointUrl_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataNetworkInfoEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(endpointUrl, endpointUrl_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
    };
    GetInstanceResponseBodyDataNetworkInfoEndpoints() = default ;
    GetInstanceResponseBodyDataNetworkInfoEndpoints(const GetInstanceResponseBodyDataNetworkInfoEndpoints &) = default ;
    GetInstanceResponseBodyDataNetworkInfoEndpoints(GetInstanceResponseBodyDataNetworkInfoEndpoints &&) = default ;
    GetInstanceResponseBodyDataNetworkInfoEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataNetworkInfoEndpoints() = default ;
    GetInstanceResponseBodyDataNetworkInfoEndpoints& operator=(const GetInstanceResponseBodyDataNetworkInfoEndpoints &) = default ;
    GetInstanceResponseBodyDataNetworkInfoEndpoints& operator=(GetInstanceResponseBodyDataNetworkInfoEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointType_ == nullptr
        && return this->endpointUrl_ == nullptr && return this->ipWhitelist_ == nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoEndpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointUrl Field Functions 
    bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
    void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
    inline string endpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoEndpoints& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<string> & ipWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
    inline vector<string> ipWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
    inline GetInstanceResponseBodyDataNetworkInfoEndpoints& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline GetInstanceResponseBodyDataNetworkInfoEndpoints& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


  protected:
    // The type of the endpoint that is used to access the instance.
    // 
    // Valid values:
    // 
    // *   TCP_VPC: VPC endpoint
    // *   TCP_INTERNET: public endpoint
    std::shared_ptr<string> endpointType_ = nullptr;
    // The endpoint that is used to access the instance.
    std::shared_ptr<string> endpointUrl_ = nullptr;
    // The whitelist that includes the IP addresses that are allowed to access the ApsaraMQ for RocketMQ broker over the Internet. This parameter can be configured only if you use the public endpoint to access the instance.
    // 
    // *   If you do not configure an IP address whitelist, all CIDR blocks are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    // *   If you configure an IP address whitelist, only the IP addresses in the whitelist are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
    // 
    // We recommend that you configure internetInfo.ipWhitelist instead of this parameter.
    std::shared_ptr<vector<string>> ipWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
