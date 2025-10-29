// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUESTBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUESTBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMcpServerRequestBackendConfigServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateMcpServerRequestBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServerRequestBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServerRequestBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    UpdateMcpServerRequestBackendConfig() = default ;
    UpdateMcpServerRequestBackendConfig(const UpdateMcpServerRequestBackendConfig &) = default ;
    UpdateMcpServerRequestBackendConfig(UpdateMcpServerRequestBackendConfig &&) = default ;
    UpdateMcpServerRequestBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServerRequestBackendConfig() = default ;
    UpdateMcpServerRequestBackendConfig& operator=(const UpdateMcpServerRequestBackendConfig &) = default ;
    UpdateMcpServerRequestBackendConfig& operator=(UpdateMcpServerRequestBackendConfig &&) = default ;
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
    inline UpdateMcpServerRequestBackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Models::UpdateMcpServerRequestBackendConfigServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<Models::UpdateMcpServerRequestBackendConfigServices>) };
    inline vector<Models::UpdateMcpServerRequestBackendConfigServices> services() { DARABONBA_PTR_GET(services_, vector<Models::UpdateMcpServerRequestBackendConfigServices>) };
    inline UpdateMcpServerRequestBackendConfig& setServices(const vector<Models::UpdateMcpServerRequestBackendConfigServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline UpdateMcpServerRequestBackendConfig& setServices(vector<Models::UpdateMcpServerRequestBackendConfigServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<vector<Models::UpdateMcpServerRequestBackendConfigServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
