// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUESTBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUESTBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHttpApiRouteRequestBackendConfigServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRouteRequestBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRouteRequestBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRouteRequestBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    CreateHttpApiRouteRequestBackendConfig() = default ;
    CreateHttpApiRouteRequestBackendConfig(const CreateHttpApiRouteRequestBackendConfig &) = default ;
    CreateHttpApiRouteRequestBackendConfig(CreateHttpApiRouteRequestBackendConfig &&) = default ;
    CreateHttpApiRouteRequestBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRouteRequestBackendConfig() = default ;
    CreateHttpApiRouteRequestBackendConfig& operator=(const CreateHttpApiRouteRequestBackendConfig &) = default ;
    CreateHttpApiRouteRequestBackendConfig& operator=(CreateHttpApiRouteRequestBackendConfig &&) = default ;
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
    inline CreateHttpApiRouteRequestBackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Models::CreateHttpApiRouteRequestBackendConfigServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<Models::CreateHttpApiRouteRequestBackendConfigServices>) };
    inline vector<Models::CreateHttpApiRouteRequestBackendConfigServices> services() { DARABONBA_PTR_GET(services_, vector<Models::CreateHttpApiRouteRequestBackendConfigServices>) };
    inline CreateHttpApiRouteRequestBackendConfig& setServices(const vector<Models::CreateHttpApiRouteRequestBackendConfigServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline CreateHttpApiRouteRequestBackendConfig& setServices(vector<Models::CreateHttpApiRouteRequestBackendConfigServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The scenario of the backend service.
    // 
    // *   SingleService
    // *   MultiServiceByRatio
    // *   Mock
    // *   Redirect
    std::shared_ptr<string> scene_ = nullptr;
    // The backend services.
    std::shared_ptr<vector<Models::CreateHttpApiRouteRequestBackendConfigServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
