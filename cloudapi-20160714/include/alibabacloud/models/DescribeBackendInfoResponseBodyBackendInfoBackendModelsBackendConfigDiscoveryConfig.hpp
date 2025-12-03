// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGDISCOVERYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGDISCOVERYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NacosConfig, nacosConfig_);
      DARABONBA_PTR_TO_JSON(RcType, rcType_);
      DARABONBA_PTR_TO_JSON(ZookeeperConfig, zookeeperConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NacosConfig, nacosConfig_);
      DARABONBA_PTR_FROM_JSON(RcType, rcType_);
      DARABONBA_PTR_FROM_JSON(ZookeeperConfig, zookeeperConfig_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nacosConfig_ == nullptr
        && return this->rcType_ == nullptr && return this->zookeeperConfig_ == nullptr; };
    // nacosConfig Field Functions 
    bool hasNacosConfig() const { return this->nacosConfig_ != nullptr;};
    void deleteNacosConfig() { this->nacosConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig & nacosConfig() const { DARABONBA_PTR_GET_CONST(nacosConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig nacosConfig() { DARABONBA_PTR_GET(nacosConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& setNacosConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig & nacosConfig) { DARABONBA_PTR_SET_VALUE(nacosConfig_, nacosConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& setNacosConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig && nacosConfig) { DARABONBA_PTR_SET_RVALUE(nacosConfig_, nacosConfig) };


    // rcType Field Functions 
    bool hasRcType() const { return this->rcType_ != nullptr;};
    void deleteRcType() { this->rcType_ = nullptr;};
    inline string rcType() const { DARABONBA_PTR_GET_DEFAULT(rcType_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& setRcType(string rcType) { DARABONBA_PTR_SET_VALUE(rcType_, rcType) };


    // zookeeperConfig Field Functions 
    bool hasZookeeperConfig() const { return this->zookeeperConfig_ != nullptr;};
    void deleteZookeeperConfig() { this->zookeeperConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig & zookeeperConfig() const { DARABONBA_PTR_GET_CONST(zookeeperConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig zookeeperConfig() { DARABONBA_PTR_GET(zookeeperConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& setZookeeperConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig & zookeeperConfig) { DARABONBA_PTR_SET_VALUE(zookeeperConfig_, zookeeperConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig& setZookeeperConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig && zookeeperConfig) { DARABONBA_PTR_SET_RVALUE(zookeeperConfig_, zookeeperConfig) };


  protected:
    // The Nacos configurations.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig> nacosConfig_ = nullptr;
    // The registry type.
    std::shared_ptr<string> rcType_ = nullptr;
    // The ZooKeeper configuration.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig> zookeeperConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
