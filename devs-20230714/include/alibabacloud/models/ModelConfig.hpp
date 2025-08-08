// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(framework, framework_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(multiModelConfig, multiModelConfig_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(reversion, reversion_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(framework, framework_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(multiModelConfig, multiModelConfig_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(reversion, reversion_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelConfig() = default ;
    ModelConfig(const ModelConfig &) = default ;
    ModelConfig(ModelConfig &&) = default ;
    ModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelConfig() = default ;
    ModelConfig& operator=(const ModelConfig &) = default ;
    ModelConfig& operator=(ModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->framework_ != nullptr && this->model_ != nullptr && this->multiModelConfig_ != nullptr && this->path_ != nullptr && this->prefix_ != nullptr
        && this->region_ != nullptr && this->reversion_ != nullptr && this->token_ != nullptr && this->type_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline ModelConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // framework Field Functions 
    bool hasFramework() const { return this->framework_ != nullptr;};
    void deleteFramework() { this->framework_ = nullptr;};
    inline string framework() const { DARABONBA_PTR_GET_DEFAULT(framework_, "") };
    inline ModelConfig& setFramework(string framework) { DARABONBA_PTR_SET_VALUE(framework_, framework) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ModelConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // multiModelConfig Field Functions 
    bool hasMultiModelConfig() const { return this->multiModelConfig_ != nullptr;};
    void deleteMultiModelConfig() { this->multiModelConfig_ = nullptr;};
    inline const vector<ModelConfig> & multiModelConfig() const { DARABONBA_PTR_GET_CONST(multiModelConfig_, vector<ModelConfig>) };
    inline vector<ModelConfig> multiModelConfig() { DARABONBA_PTR_GET(multiModelConfig_, vector<ModelConfig>) };
    inline ModelConfig& setMultiModelConfig(const vector<ModelConfig> & multiModelConfig) { DARABONBA_PTR_SET_VALUE(multiModelConfig_, multiModelConfig) };
    inline ModelConfig& setMultiModelConfig(vector<ModelConfig> && multiModelConfig) { DARABONBA_PTR_SET_RVALUE(multiModelConfig_, multiModelConfig) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModelConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ModelConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModelConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // reversion Field Functions 
    bool hasReversion() const { return this->reversion_ != nullptr;};
    void deleteReversion() { this->reversion_ = nullptr;};
    inline string reversion() const { DARABONBA_PTR_GET_DEFAULT(reversion_, "") };
    inline ModelConfig& setReversion(string reversion) { DARABONBA_PTR_SET_VALUE(reversion_, reversion) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ModelConfig& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> framework_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<vector<ModelConfig>> multiModelConfig_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> reversion_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
