// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPAPIROUTEREQUESTBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPAPIROUTEREQUESTBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateHttpApiRouteRequestBackendConfigServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateHttpApiRouteRequestBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpApiRouteRequestBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpApiRouteRequestBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    UpdateHttpApiRouteRequestBackendConfig() = default ;
    UpdateHttpApiRouteRequestBackendConfig(const UpdateHttpApiRouteRequestBackendConfig &) = default ;
    UpdateHttpApiRouteRequestBackendConfig(UpdateHttpApiRouteRequestBackendConfig &&) = default ;
    UpdateHttpApiRouteRequestBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpApiRouteRequestBackendConfig() = default ;
    UpdateHttpApiRouteRequestBackendConfig& operator=(const UpdateHttpApiRouteRequestBackendConfig &) = default ;
    UpdateHttpApiRouteRequestBackendConfig& operator=(UpdateHttpApiRouteRequestBackendConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr
        && return this->services_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline UpdateHttpApiRouteRequestBackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Models::UpdateHttpApiRouteRequestBackendConfigServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<Models::UpdateHttpApiRouteRequestBackendConfigServices>) };
    inline vector<Models::UpdateHttpApiRouteRequestBackendConfigServices> services() { DARABONBA_PTR_GET(services_, vector<Models::UpdateHttpApiRouteRequestBackendConfigServices>) };
    inline UpdateHttpApiRouteRequestBackendConfig& setServices(const vector<Models::UpdateHttpApiRouteRequestBackendConfigServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline UpdateHttpApiRouteRequestBackendConfig& setServices(vector<Models::UpdateHttpApiRouteRequestBackendConfigServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The backend service scenario.
    // 
    // Valid values:
    // 
    // *   SingleService
    // *   MultiServiceByRatio
    // *   Redirect
    // *   Mock
    std::shared_ptr<string> scene_ = nullptr;
    // The backend services.
    std::shared_ptr<vector<Models::UpdateHttpApiRouteRequestBackendConfigServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
