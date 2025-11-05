// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyNodeComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyNodeComponents& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyNodeComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeClusterNodePoolDetailResponseBodyNodeComponents() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponents(const DescribeClusterNodePoolDetailResponseBodyNodeComponents &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponents(DescribeClusterNodePoolDetailResponseBodyNodeComponents &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyNodeComponents() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponents& operator=(const DescribeClusterNodePoolDetailResponseBodyNodeComponents &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponents& operator=(DescribeClusterNodePoolDetailResponseBodyNodeComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->name_ == nullptr && return this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig config() { DARABONBA_PTR_GET(config_, Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeComponents& setConfig(const Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeComponents& setConfig(Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodeComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodeComponents& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig> config_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
