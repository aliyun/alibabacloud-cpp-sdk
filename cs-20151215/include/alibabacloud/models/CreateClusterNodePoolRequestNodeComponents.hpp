// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTNODECOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTNODECOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestNodeComponentsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestNodeComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestNodeComponents& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestNodeComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    CreateClusterNodePoolRequestNodeComponents() = default ;
    CreateClusterNodePoolRequestNodeComponents(const CreateClusterNodePoolRequestNodeComponents &) = default ;
    CreateClusterNodePoolRequestNodeComponents(CreateClusterNodePoolRequestNodeComponents &&) = default ;
    CreateClusterNodePoolRequestNodeComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestNodeComponents() = default ;
    CreateClusterNodePoolRequestNodeComponents& operator=(const CreateClusterNodePoolRequestNodeComponents &) = default ;
    CreateClusterNodePoolRequestNodeComponents& operator=(CreateClusterNodePoolRequestNodeComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->name_ == nullptr && return this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestNodeComponentsConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::CreateClusterNodePoolRequestNodeComponentsConfig) };
    inline Models::CreateClusterNodePoolRequestNodeComponentsConfig config() { DARABONBA_PTR_GET(config_, Models::CreateClusterNodePoolRequestNodeComponentsConfig) };
    inline CreateClusterNodePoolRequestNodeComponents& setConfig(const Models::CreateClusterNodePoolRequestNodeComponentsConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateClusterNodePoolRequestNodeComponents& setConfig(Models::CreateClusterNodePoolRequestNodeComponentsConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterNodePoolRequestNodeComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateClusterNodePoolRequestNodeComponents& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<Models::CreateClusterNodePoolRequestNodeComponentsConfig> config_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
