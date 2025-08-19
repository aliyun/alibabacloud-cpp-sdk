// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ContainerdConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerdConfig& obj) { 
      DARABONBA_PTR_TO_JSON(insecureRegistries, insecureRegistries_);
      DARABONBA_PTR_TO_JSON(registryMirrors, registryMirrors_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerdConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(insecureRegistries, insecureRegistries_);
      DARABONBA_PTR_FROM_JSON(registryMirrors, registryMirrors_);
    };
    ContainerdConfig() = default ;
    ContainerdConfig(const ContainerdConfig &) = default ;
    ContainerdConfig(ContainerdConfig &&) = default ;
    ContainerdConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerdConfig() = default ;
    ContainerdConfig& operator=(const ContainerdConfig &) = default ;
    ContainerdConfig& operator=(ContainerdConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insecureRegistries_ != nullptr
        && this->registryMirrors_ != nullptr; };
    // insecureRegistries Field Functions 
    bool hasInsecureRegistries() const { return this->insecureRegistries_ != nullptr;};
    void deleteInsecureRegistries() { this->insecureRegistries_ = nullptr;};
    inline const vector<string> & insecureRegistries() const { DARABONBA_PTR_GET_CONST(insecureRegistries_, vector<string>) };
    inline vector<string> insecureRegistries() { DARABONBA_PTR_GET(insecureRegistries_, vector<string>) };
    inline ContainerdConfig& setInsecureRegistries(const vector<string> & insecureRegistries) { DARABONBA_PTR_SET_VALUE(insecureRegistries_, insecureRegistries) };
    inline ContainerdConfig& setInsecureRegistries(vector<string> && insecureRegistries) { DARABONBA_PTR_SET_RVALUE(insecureRegistries_, insecureRegistries) };


    // registryMirrors Field Functions 
    bool hasRegistryMirrors() const { return this->registryMirrors_ != nullptr;};
    void deleteRegistryMirrors() { this->registryMirrors_ = nullptr;};
    inline const vector<string> & registryMirrors() const { DARABONBA_PTR_GET_CONST(registryMirrors_, vector<string>) };
    inline vector<string> registryMirrors() { DARABONBA_PTR_GET(registryMirrors_, vector<string>) };
    inline ContainerdConfig& setRegistryMirrors(const vector<string> & registryMirrors) { DARABONBA_PTR_SET_VALUE(registryMirrors_, registryMirrors) };
    inline ContainerdConfig& setRegistryMirrors(vector<string> && registryMirrors) { DARABONBA_PTR_SET_RVALUE(registryMirrors_, registryMirrors) };


  protected:
    std::shared_ptr<vector<string>> insecureRegistries_ = nullptr;
    std::shared_ptr<vector<string>> registryMirrors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
