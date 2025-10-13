// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUESTBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUESTBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMcpServerRequestBackendConfigServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateMcpServerRequestBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerRequestBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerRequestBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    CreateMcpServerRequestBackendConfig() = default ;
    CreateMcpServerRequestBackendConfig(const CreateMcpServerRequestBackendConfig &) = default ;
    CreateMcpServerRequestBackendConfig(CreateMcpServerRequestBackendConfig &&) = default ;
    CreateMcpServerRequestBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerRequestBackendConfig() = default ;
    CreateMcpServerRequestBackendConfig& operator=(const CreateMcpServerRequestBackendConfig &) = default ;
    CreateMcpServerRequestBackendConfig& operator=(CreateMcpServerRequestBackendConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scene_ != nullptr
        && this->services_ != nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateMcpServerRequestBackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Models::CreateMcpServerRequestBackendConfigServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<Models::CreateMcpServerRequestBackendConfigServices>) };
    inline vector<Models::CreateMcpServerRequestBackendConfigServices> services() { DARABONBA_PTR_GET(services_, vector<Models::CreateMcpServerRequestBackendConfigServices>) };
    inline CreateMcpServerRequestBackendConfig& setServices(const vector<Models::CreateMcpServerRequestBackendConfigServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline CreateMcpServerRequestBackendConfig& setServices(vector<Models::CreateMcpServerRequestBackendConfigServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<vector<Models::CreateMcpServerRequestBackendConfigServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
