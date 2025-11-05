// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSNODECOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSNODECOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents(const DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents(DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->name_ == nullptr && return this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig config() { DARABONBA_PTR_GET(config_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& setConfig(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& setConfig(Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponentsConfig> config_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
