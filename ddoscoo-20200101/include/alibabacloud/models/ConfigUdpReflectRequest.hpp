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
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ConfigUdpReflectRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigUdpReflectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigUdpReflectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The configuration of the UDP reflection attack attack prevention protection policy to add.
    // 
    // This parameter is a string that represents a JSON structure transformed into a character string. The JSON structure contains the following field:
    // 
    // - **UdpSports**: Array type. Required. The UDP reflection source ports to block. Example: `[17,19]`.
    // 
    //     Block the following source ports that are commonly used in UDP reflection attacks:
    // 
    //     - UDP 17: QOTD reflection attacks
    //     - UDP 19: CharGEN reflection attacks
    //     - UDP 69: TFTP reflection attacks
    //     - UDP 111: Portmap reflection attacks
    //     - UDP 123: NTP reflection attacks
    //     - UDP 137: NetBIOS reflection attacks
    //     - UDP 161: SNMPv2 reflection attacks
    //     - UDP 389: CLDAP reflection attacks
    //     - UDP 1194: OpenVPN reflection attacks
    //     - UDP 1900: SSDP reflection attacks
    //     - UDP 3389: RDP reflection attacks
    //     - UDP 11211: Memcached reflection attacks
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance to manage.
    // 
    // > You can invoke [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) to query the IDs of all Anti-DDoS Pro or Anti-DDoS Premium instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the Anti-DDoS Pro or Anti-DDoS Premium instance. Valid values:
    // 
    // - **cn-hangzhou** (default): the Chinese mainland, which indicates an Anti-DDoS Pro instance.
    // - **ap-southeast-1**: outside the Chinese mainland, which indicates an Anti-DDoS Premium instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
