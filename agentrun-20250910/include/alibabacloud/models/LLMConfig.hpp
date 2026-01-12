// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LLMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class LLMConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LLMConfig& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
    };
    friend void from_json(const Darabonba::Json& j, LLMConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
    };
    LLMConfig() = default ;
    LLMConfig(const LLMConfig &) = default ;
    LLMConfig(LLMConfig &&) = default ;
    LLMConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LLMConfig() = default ;
    LLMConfig& operator=(const LLMConfig &) = default ;
    LLMConfig& operator=(LLMConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(model, model_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(model, model_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->model_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Config& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    protected:
      shared_ptr<string> model_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->modelServiceName_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const LLMConfig::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, LLMConfig::Config) };
    inline LLMConfig::Config getConfig() { DARABONBA_PTR_GET(config_, LLMConfig::Config) };
    inline LLMConfig& setConfig(const LLMConfig::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline LLMConfig& setConfig(LLMConfig::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline LLMConfig& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


  protected:
    shared_ptr<LLMConfig::Config> config_ {};
    shared_ptr<string> modelServiceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
