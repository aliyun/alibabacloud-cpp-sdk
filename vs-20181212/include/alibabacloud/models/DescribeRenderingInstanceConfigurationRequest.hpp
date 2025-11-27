// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceConfigurationRequestConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    DescribeRenderingInstanceConfigurationRequest() = default ;
    DescribeRenderingInstanceConfigurationRequest(const DescribeRenderingInstanceConfigurationRequest &) = default ;
    DescribeRenderingInstanceConfigurationRequest(DescribeRenderingInstanceConfigurationRequest &&) = default ;
    DescribeRenderingInstanceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceConfigurationRequest() = default ;
    DescribeRenderingInstanceConfigurationRequest& operator=(const DescribeRenderingInstanceConfigurationRequest &) = default ;
    DescribeRenderingInstanceConfigurationRequest& operator=(DescribeRenderingInstanceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && return this->renderingInstanceId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<DescribeRenderingInstanceConfigurationRequestConfiguration> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<DescribeRenderingInstanceConfigurationRequestConfiguration>) };
    inline vector<DescribeRenderingInstanceConfigurationRequestConfiguration> configuration() { DARABONBA_PTR_GET(configuration_, vector<DescribeRenderingInstanceConfigurationRequestConfiguration>) };
    inline DescribeRenderingInstanceConfigurationRequest& setConfiguration(const vector<DescribeRenderingInstanceConfigurationRequestConfiguration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline DescribeRenderingInstanceConfigurationRequest& setConfiguration(vector<DescribeRenderingInstanceConfigurationRequestConfiguration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DescribeRenderingInstanceConfigurationRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<vector<DescribeRenderingInstanceConfigurationRequestConfiguration>> configuration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
