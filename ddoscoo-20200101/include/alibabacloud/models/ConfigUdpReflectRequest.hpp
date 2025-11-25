// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUDPREFLECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUDPREFLECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigUdpReflectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigUdpReflectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigUdpReflectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ConfigUdpReflectRequest() = default ;
    ConfigUdpReflectRequest(const ConfigUdpReflectRequest &) = default ;
    ConfigUdpReflectRequest(ConfigUdpReflectRequest &&) = default ;
    ConfigUdpReflectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigUdpReflectRequest() = default ;
    ConfigUdpReflectRequest& operator=(const ConfigUdpReflectRequest &) = default ;
    ConfigUdpReflectRequest& operator=(ConfigUdpReflectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ConfigUdpReflectRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigUdpReflectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigUdpReflectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The configuration of the filtering policy for UDP reflection attacks.
    // 
    // The value is a string that consists of a JSON struct. The JSON struct contains the following field:
    // 
    // *   **UdpSports**: the source ports of the UDP traffic that you want to block. This field is required and must be of the ARRAY type. Example: `[17,19]`.
    // 
    //     We recommend that you block the following source ports of UDP traffic:
    // 
    //     *   UDP 17: QOTD reflection attacks
    //     *   UDP 19: CharGEN reflection attacks
    //     *   UDP 69: TFTP reflection attacks
    //     *   UDP 111: Portmap reflection attacks
    //     *   UDP 123: NTP reflection attacks
    //     *   UDP 137: NetBIOS reflection attacks
    //     *   UDP 161: SNMPv2 reflection attacks
    //     *   UDP 389: CLDAP reflection attacks
    //     *   UDP 1194: OpenVPN reflection attacks
    //     *   UDP 1900: SSDP reflection attacks
    //     *   UDP 3389: RDP reflection attacks
    //     *   UDP 11211: memcached reflection attacks
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the Anti-DDoS Proxy instance. Valid values:
    // 
    // *   **cn-hangzhou**: indicates an Anti-DDoS Proxy (Chinese Mainland) instance. This is the default value.
    // *   **ap-southeast-1**: indicates an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
