// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JUICEFSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JUICEFSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/JuiceFsMountConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class JuiceFsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JuiceFsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(envs, envs_);
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, JuiceFsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(envs, envs_);
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
    };
    JuiceFsConfig() = default ;
    JuiceFsConfig(const JuiceFsConfig &) = default ;
    JuiceFsConfig(JuiceFsConfig &&) = default ;
    JuiceFsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JuiceFsConfig() = default ;
    JuiceFsConfig& operator=(const JuiceFsConfig &) = default ;
    JuiceFsConfig& operator=(JuiceFsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envs_ == nullptr
        && this->mountPoints_ == nullptr; };
    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline JuiceFsConfig& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline JuiceFsConfig& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<JuiceFsMountConfig> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<JuiceFsMountConfig>) };
    inline vector<JuiceFsMountConfig> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<JuiceFsMountConfig>) };
    inline JuiceFsConfig& setMountPoints(const vector<JuiceFsMountConfig> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline JuiceFsConfig& setMountPoints(vector<JuiceFsMountConfig> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    shared_ptr<map<string, string>> envs_ {};
    shared_ptr<vector<JuiceFsMountConfig>> mountPoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
