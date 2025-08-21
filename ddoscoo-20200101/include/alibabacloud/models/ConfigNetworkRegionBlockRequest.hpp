// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGNETWORKREGIONBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGNETWORKREGIONBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigNetworkRegionBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigNetworkRegionBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigNetworkRegionBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ConfigNetworkRegionBlockRequest() = default ;
    ConfigNetworkRegionBlockRequest(const ConfigNetworkRegionBlockRequest &) = default ;
    ConfigNetworkRegionBlockRequest(ConfigNetworkRegionBlockRequest &&) = default ;
    ConfigNetworkRegionBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigNetworkRegionBlockRequest() = default ;
    ConfigNetworkRegionBlockRequest& operator=(const ConfigNetworkRegionBlockRequest &) = default ;
    ConfigNetworkRegionBlockRequest& operator=(ConfigNetworkRegionBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->instanceId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ConfigNetworkRegionBlockRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigNetworkRegionBlockRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The details of the configurations of blocked locations. This parameter is a JSON string. The value consists of the following fields:
    // 
    // *   **RegionBlockSwitch**: the status of the location blacklist feature. This field is required and must be of the string type. Valid values:
    // 
    //     *   **on**
    //     *   **off**
    // 
    // *   **Countries**: the codes of the countries and areas from which you want to block requests. This field is optional and must be of the array type.
    // 
    //     **
    // 
    //     **Note** For more information about the codes of countries and areas, see [Location parameters](https://help.aliyun.com/document_detail/167926.html).
    // 
    // *   **Provinces**: the codes of the administrative regions in China from which you want to block requests. This field is optional and must be of the array type.
    // 
    //     **
    // 
    //     **Note** For more information about the codes of administrative regions in China, see [Location parameters](https://help.aliyun.com/document_detail/167926.html).
    // 
    //     For example, `[11,12]` specifies Beijing and Tianjin.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
