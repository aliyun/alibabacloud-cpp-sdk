// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPPLUGINUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPPLUGINUPDATECMD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MobiPluginConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppPluginUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppPluginUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppPluginUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    NeuronAppPluginUpdateCmd() = default ;
    NeuronAppPluginUpdateCmd(const NeuronAppPluginUpdateCmd &) = default ;
    NeuronAppPluginUpdateCmd(NeuronAppPluginUpdateCmd &&) = default ;
    NeuronAppPluginUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppPluginUpdateCmd() = default ;
    NeuronAppPluginUpdateCmd& operator=(const NeuronAppPluginUpdateCmd &) = default ;
    NeuronAppPluginUpdateCmd& operator=(NeuronAppPluginUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->id_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const MobiPluginConfig & getConfig() const { DARABONBA_PTR_GET_CONST(config_, MobiPluginConfig) };
    inline MobiPluginConfig getConfig() { DARABONBA_PTR_GET(config_, MobiPluginConfig) };
    inline NeuronAppPluginUpdateCmd& setConfig(const MobiPluginConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline NeuronAppPluginUpdateCmd& setConfig(MobiPluginConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronAppPluginUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<MobiPluginConfig> config_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
