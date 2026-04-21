// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETMODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETMODELCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketHttpRoute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(modelAPIConfig, modelAPIConfig_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(modelAPIConfig, modelAPIConfig_);
    };
    HiMarketModelConfig() = default ;
    HiMarketModelConfig(const HiMarketModelConfig &) = default ;
    HiMarketModelConfig(HiMarketModelConfig &&) = default ;
    HiMarketModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketModelConfig() = default ;
    HiMarketModelConfig& operator=(const HiMarketModelConfig &) = default ;
    HiMarketModelConfig& operator=(HiMarketModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelAPIConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelAPIConfig& obj) { 
        DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
        DARABONBA_PTR_TO_JSON(modelCategory, modelCategory_);
        DARABONBA_PTR_TO_JSON(routes, routes_);
      };
      friend void from_json(const Darabonba::Json& j, ModelAPIConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
        DARABONBA_PTR_FROM_JSON(modelCategory, modelCategory_);
        DARABONBA_PTR_FROM_JSON(routes, routes_);
      };
      ModelAPIConfig() = default ;
      ModelAPIConfig(const ModelAPIConfig &) = default ;
      ModelAPIConfig(ModelAPIConfig &&) = default ;
      ModelAPIConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelAPIConfig() = default ;
      ModelAPIConfig& operator=(const ModelAPIConfig &) = default ;
      ModelAPIConfig& operator=(ModelAPIConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aiProtocols_ == nullptr
        && this->modelCategory_ == nullptr && this->routes_ == nullptr; };
      // aiProtocols Field Functions 
      bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
      void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
      inline const vector<string> & getAiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
      inline vector<string> getAiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
      inline ModelAPIConfig& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
      inline ModelAPIConfig& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


      // modelCategory Field Functions 
      bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
      void deleteModelCategory() { this->modelCategory_ = nullptr;};
      inline string getModelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
      inline ModelAPIConfig& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


      // routes Field Functions 
      bool hasRoutes() const { return this->routes_ != nullptr;};
      void deleteRoutes() { this->routes_ = nullptr;};
      inline const vector<HiMarketHttpRoute> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<HiMarketHttpRoute>) };
      inline vector<HiMarketHttpRoute> getRoutes() { DARABONBA_PTR_GET(routes_, vector<HiMarketHttpRoute>) };
      inline ModelAPIConfig& setRoutes(const vector<HiMarketHttpRoute> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
      inline ModelAPIConfig& setRoutes(vector<HiMarketHttpRoute> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    protected:
      shared_ptr<vector<string>> aiProtocols_ {};
      shared_ptr<string> modelCategory_ {};
      shared_ptr<vector<HiMarketHttpRoute>> routes_ {};
    };

    virtual bool empty() const override { return this->modelAPIConfig_ == nullptr; };
    // modelAPIConfig Field Functions 
    bool hasModelAPIConfig() const { return this->modelAPIConfig_ != nullptr;};
    void deleteModelAPIConfig() { this->modelAPIConfig_ = nullptr;};
    inline const HiMarketModelConfig::ModelAPIConfig & getModelAPIConfig() const { DARABONBA_PTR_GET_CONST(modelAPIConfig_, HiMarketModelConfig::ModelAPIConfig) };
    inline HiMarketModelConfig::ModelAPIConfig getModelAPIConfig() { DARABONBA_PTR_GET(modelAPIConfig_, HiMarketModelConfig::ModelAPIConfig) };
    inline HiMarketModelConfig& setModelAPIConfig(const HiMarketModelConfig::ModelAPIConfig & modelAPIConfig) { DARABONBA_PTR_SET_VALUE(modelAPIConfig_, modelAPIConfig) };
    inline HiMarketModelConfig& setModelAPIConfig(HiMarketModelConfig::ModelAPIConfig && modelAPIConfig) { DARABONBA_PTR_SET_RVALUE(modelAPIConfig_, modelAPIConfig) };


  protected:
    shared_ptr<HiMarketModelConfig::ModelAPIConfig> modelAPIConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
