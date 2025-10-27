// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODYENGINECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODYENGINECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormEngineConfigResponseBodyEngineConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormEngineConfigResponseBodyEngineConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigFiles, configFiles_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormEngineConfigResponseBodyEngineConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigFiles, configFiles_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
    };
    GetLindormEngineConfigResponseBodyEngineConfigs() = default ;
    GetLindormEngineConfigResponseBodyEngineConfigs(const GetLindormEngineConfigResponseBodyEngineConfigs &) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigs(GetLindormEngineConfigResponseBodyEngineConfigs &&) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormEngineConfigResponseBodyEngineConfigs() = default ;
    GetLindormEngineConfigResponseBodyEngineConfigs& operator=(const GetLindormEngineConfigResponseBodyEngineConfigs &) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigs& operator=(GetLindormEngineConfigResponseBodyEngineConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configFiles_ == nullptr
        && return this->engine_ == nullptr; };
    // configFiles Field Functions 
    bool hasConfigFiles() const { return this->configFiles_ != nullptr;};
    void deleteConfigFiles() { this->configFiles_ = nullptr;};
    inline const vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles> & configFiles() const { DARABONBA_PTR_GET_CONST(configFiles_, vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles>) };
    inline vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles> configFiles() { DARABONBA_PTR_GET(configFiles_, vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles>) };
    inline GetLindormEngineConfigResponseBodyEngineConfigs& setConfigFiles(const vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles> & configFiles) { DARABONBA_PTR_SET_VALUE(configFiles_, configFiles) };
    inline GetLindormEngineConfigResponseBodyEngineConfigs& setConfigFiles(vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles> && configFiles) { DARABONBA_PTR_SET_RVALUE(configFiles_, configFiles) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetLindormEngineConfigResponseBodyEngineConfigs& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    std::shared_ptr<vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles>> configFiles_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
