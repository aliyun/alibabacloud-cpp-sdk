// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteRenderingInstanceConfigurationRequestConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteRenderingInstanceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    DeleteRenderingInstanceConfigurationRequest() = default ;
    DeleteRenderingInstanceConfigurationRequest(const DeleteRenderingInstanceConfigurationRequest &) = default ;
    DeleteRenderingInstanceConfigurationRequest(DeleteRenderingInstanceConfigurationRequest &&) = default ;
    DeleteRenderingInstanceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRenderingInstanceConfigurationRequest() = default ;
    DeleteRenderingInstanceConfigurationRequest& operator=(const DeleteRenderingInstanceConfigurationRequest &) = default ;
    DeleteRenderingInstanceConfigurationRequest& operator=(DeleteRenderingInstanceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && return this->renderingInstanceId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<DeleteRenderingInstanceConfigurationRequestConfiguration> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<DeleteRenderingInstanceConfigurationRequestConfiguration>) };
    inline vector<DeleteRenderingInstanceConfigurationRequestConfiguration> configuration() { DARABONBA_PTR_GET(configuration_, vector<DeleteRenderingInstanceConfigurationRequestConfiguration>) };
    inline DeleteRenderingInstanceConfigurationRequest& setConfiguration(const vector<DeleteRenderingInstanceConfigurationRequestConfiguration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline DeleteRenderingInstanceConfigurationRequest& setConfiguration(vector<DeleteRenderingInstanceConfigurationRequestConfiguration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DeleteRenderingInstanceConfigurationRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<vector<DeleteRenderingInstanceConfigurationRequestConfiguration>> configuration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
