// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYCONFIGINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYCONFIGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyConfigInfoConfiguration.hpp>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodyConfigInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodyConfigInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodyConfigInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
    };
    DescribeRenderingInstanceResponseBodyConfigInfo() = default ;
    DescribeRenderingInstanceResponseBodyConfigInfo(const DescribeRenderingInstanceResponseBodyConfigInfo &) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfo(DescribeRenderingInstanceResponseBodyConfigInfo &&) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodyConfigInfo() = default ;
    DescribeRenderingInstanceResponseBodyConfigInfo& operator=(const DescribeRenderingInstanceResponseBodyConfigInfo &) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfo& operator=(DescribeRenderingInstanceResponseBodyConfigInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && return this->networkConfig_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration>) };
    inline vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration> configuration() { DARABONBA_PTR_GET(configuration_, vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration>) };
    inline DescribeRenderingInstanceResponseBodyConfigInfo& setConfiguration(const vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline DescribeRenderingInstanceResponseBodyConfigInfo& setConfiguration(vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig) };
    inline Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig) };
    inline DescribeRenderingInstanceResponseBodyConfigInfo& setNetworkConfig(const Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline DescribeRenderingInstanceResponseBodyConfigInfo& setNetworkConfig(Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfiguration>> configuration_ = nullptr;
    std::shared_ptr<Models::DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig> networkConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
