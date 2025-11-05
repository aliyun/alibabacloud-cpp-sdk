// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECOMPONENTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECOMPONENTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(custom_config, customConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(custom_config, customConfig_);
    };
    DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig(const DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig(DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig& operator=(const DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig& operator=(DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customConfig_ == nullptr; };
    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline const map<string, string> & customConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, string>) };
    inline map<string, string> customConfig() { DARABONBA_PTR_GET(customConfig_, map<string, string>) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig& setCustomConfig(const map<string, string> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeComponentsConfig& setCustomConfig(map<string, string> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


  protected:
    std::shared_ptr<map<string, string>> customConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
