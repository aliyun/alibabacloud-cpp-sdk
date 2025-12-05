// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATAGRAYMCPSERVERCONFIGSBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATAGRAYMCPSERVERCONFIGSBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig() = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig(const GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig &) = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig(GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig &&) = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig() = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& operator=(const GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig &) = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& operator=(GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig &&) = default ;
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
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices>) };
    inline vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices> services() { DARABONBA_PTR_GET(services_, vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices>) };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& setServices(const vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig& setServices(vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<vector<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfigServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
