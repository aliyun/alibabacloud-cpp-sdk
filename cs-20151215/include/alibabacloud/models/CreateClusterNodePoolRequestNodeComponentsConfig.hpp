// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTNODECOMPONENTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTNODECOMPONENTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestNodeComponentsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestNodeComponentsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(custom_config, customConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestNodeComponentsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(custom_config, customConfig_);
    };
    CreateClusterNodePoolRequestNodeComponentsConfig() = default ;
    CreateClusterNodePoolRequestNodeComponentsConfig(const CreateClusterNodePoolRequestNodeComponentsConfig &) = default ;
    CreateClusterNodePoolRequestNodeComponentsConfig(CreateClusterNodePoolRequestNodeComponentsConfig &&) = default ;
    CreateClusterNodePoolRequestNodeComponentsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestNodeComponentsConfig() = default ;
    CreateClusterNodePoolRequestNodeComponentsConfig& operator=(const CreateClusterNodePoolRequestNodeComponentsConfig &) = default ;
    CreateClusterNodePoolRequestNodeComponentsConfig& operator=(CreateClusterNodePoolRequestNodeComponentsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customConfig_ == nullptr; };
    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline const map<string, string> & customConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, string>) };
    inline map<string, string> customConfig() { DARABONBA_PTR_GET(customConfig_, map<string, string>) };
    inline CreateClusterNodePoolRequestNodeComponentsConfig& setCustomConfig(const map<string, string> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
    inline CreateClusterNodePoolRequestNodeComponentsConfig& setCustomConfig(map<string, string> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


  protected:
    std::shared_ptr<map<string, string>> customConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
