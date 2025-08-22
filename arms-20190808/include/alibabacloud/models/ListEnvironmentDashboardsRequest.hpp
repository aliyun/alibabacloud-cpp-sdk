// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentDashboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentDashboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentDashboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    ListEnvironmentDashboardsRequest() = default ;
    ListEnvironmentDashboardsRequest(const ListEnvironmentDashboardsRequest &) = default ;
    ListEnvironmentDashboardsRequest(ListEnvironmentDashboardsRequest &&) = default ;
    ListEnvironmentDashboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentDashboardsRequest() = default ;
    ListEnvironmentDashboardsRequest& operator=(const ListEnvironmentDashboardsRequest &) = default ;
    ListEnvironmentDashboardsRequest& operator=(ListEnvironmentDashboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->environmentId_ != nullptr && this->regionId_ != nullptr && this->scene_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListEnvironmentDashboardsRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvironmentDashboardsRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvironmentDashboardsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListEnvironmentDashboardsRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Name of Addon,One of AddonName and Scene must be filled in.
    std::shared_ptr<string> addonName_ = nullptr;
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The scenario of Addon. Either AddonName or Scene is required.
    std::shared_ptr<string> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
