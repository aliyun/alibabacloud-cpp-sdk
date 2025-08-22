// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGRAFANAWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGRAFANAWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteGrafanaWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGrafanaWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGrafanaWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteGrafanaWorkspaceRequest() = default ;
    DeleteGrafanaWorkspaceRequest(const DeleteGrafanaWorkspaceRequest &) = default ;
    DeleteGrafanaWorkspaceRequest(DeleteGrafanaWorkspaceRequest &&) = default ;
    DeleteGrafanaWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGrafanaWorkspaceRequest() = default ;
    DeleteGrafanaWorkspaceRequest& operator=(const DeleteGrafanaWorkspaceRequest &) = default ;
    DeleteGrafanaWorkspaceRequest& operator=(DeleteGrafanaWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grafanaWorkspaceId_ != nullptr
        && this->regionId_ != nullptr; };
    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline DeleteGrafanaWorkspaceRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteGrafanaWorkspaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    // The region ID. Default value: cn-hangzhou.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
