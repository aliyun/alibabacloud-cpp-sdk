// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRenderingInstanceConfigurationRequestConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    UpdateRenderingInstanceConfigurationRequest() = default ;
    UpdateRenderingInstanceConfigurationRequest(const UpdateRenderingInstanceConfigurationRequest &) = default ;
    UpdateRenderingInstanceConfigurationRequest(UpdateRenderingInstanceConfigurationRequest &&) = default ;
    UpdateRenderingInstanceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceConfigurationRequest() = default ;
    UpdateRenderingInstanceConfigurationRequest& operator=(const UpdateRenderingInstanceConfigurationRequest &) = default ;
    UpdateRenderingInstanceConfigurationRequest& operator=(UpdateRenderingInstanceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && return this->renderingInstanceId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<UpdateRenderingInstanceConfigurationRequestConfiguration> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<UpdateRenderingInstanceConfigurationRequestConfiguration>) };
    inline vector<UpdateRenderingInstanceConfigurationRequestConfiguration> configuration() { DARABONBA_PTR_GET(configuration_, vector<UpdateRenderingInstanceConfigurationRequestConfiguration>) };
    inline UpdateRenderingInstanceConfigurationRequest& setConfiguration(const vector<UpdateRenderingInstanceConfigurationRequestConfiguration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline UpdateRenderingInstanceConfigurationRequest& setConfiguration(vector<UpdateRenderingInstanceConfigurationRequestConfiguration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateRenderingInstanceConfigurationRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateRenderingInstanceConfigurationRequestConfiguration>> configuration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
