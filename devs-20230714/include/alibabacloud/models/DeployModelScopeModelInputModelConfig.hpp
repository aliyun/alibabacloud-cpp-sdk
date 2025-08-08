// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTMODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTMODELCONFIG_HPP_
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
  class DeployModelScopeModelInputModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployModelScopeModelInputModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(framework, framework_);
      DARABONBA_PTR_TO_JSON(multiModelConfig, multiModelConfig_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(srcModelScopeModelID, srcModelScopeModelID_);
      DARABONBA_PTR_TO_JSON(srcModelScopeModelRevision, srcModelScopeModelRevision_);
      DARABONBA_PTR_TO_JSON(srcModelScopeToken, srcModelScopeToken_);
      DARABONBA_PTR_TO_JSON(srcOssBucket, srcOssBucket_);
      DARABONBA_PTR_TO_JSON(srcOssPath, srcOssPath_);
      DARABONBA_PTR_TO_JSON(srcOssRegion, srcOssRegion_);
      DARABONBA_PTR_TO_JSON(syncStrategy, syncStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, DeployModelScopeModelInputModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(framework, framework_);
      DARABONBA_PTR_FROM_JSON(multiModelConfig, multiModelConfig_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(srcModelScopeModelID, srcModelScopeModelID_);
      DARABONBA_PTR_FROM_JSON(srcModelScopeModelRevision, srcModelScopeModelRevision_);
      DARABONBA_PTR_FROM_JSON(srcModelScopeToken, srcModelScopeToken_);
      DARABONBA_PTR_FROM_JSON(srcOssBucket, srcOssBucket_);
      DARABONBA_PTR_FROM_JSON(srcOssPath, srcOssPath_);
      DARABONBA_PTR_FROM_JSON(srcOssRegion, srcOssRegion_);
      DARABONBA_PTR_FROM_JSON(syncStrategy, syncStrategy_);
    };
    DeployModelScopeModelInputModelConfig() = default ;
    DeployModelScopeModelInputModelConfig(const DeployModelScopeModelInputModelConfig &) = default ;
    DeployModelScopeModelInputModelConfig(DeployModelScopeModelInputModelConfig &&) = default ;
    DeployModelScopeModelInputModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployModelScopeModelInputModelConfig() = default ;
    DeployModelScopeModelInputModelConfig& operator=(const DeployModelScopeModelInputModelConfig &) = default ;
    DeployModelScopeModelInputModelConfig& operator=(DeployModelScopeModelInputModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->framework_ != nullptr
        && this->multiModelConfig_ != nullptr && this->prefix_ != nullptr && this->sourceType_ != nullptr && this->srcModelScopeModelID_ != nullptr && this->srcModelScopeModelRevision_ != nullptr
        && this->srcModelScopeToken_ != nullptr && this->srcOssBucket_ != nullptr && this->srcOssPath_ != nullptr && this->srcOssRegion_ != nullptr && this->syncStrategy_ != nullptr; };
    // framework Field Functions 
    bool hasFramework() const { return this->framework_ != nullptr;};
    void deleteFramework() { this->framework_ = nullptr;};
    inline string framework() const { DARABONBA_PTR_GET_DEFAULT(framework_, "") };
    inline DeployModelScopeModelInputModelConfig& setFramework(string framework) { DARABONBA_PTR_SET_VALUE(framework_, framework) };


    // multiModelConfig Field Functions 
    bool hasMultiModelConfig() const { return this->multiModelConfig_ != nullptr;};
    void deleteMultiModelConfig() { this->multiModelConfig_ = nullptr;};
    inline const vector<Models::ModelConfig> & multiModelConfig() const { DARABONBA_PTR_GET_CONST(multiModelConfig_, vector<Models::ModelConfig>) };
    inline vector<Models::ModelConfig> multiModelConfig() { DARABONBA_PTR_GET(multiModelConfig_, vector<Models::ModelConfig>) };
    inline DeployModelScopeModelInputModelConfig& setMultiModelConfig(const vector<Models::ModelConfig> & multiModelConfig) { DARABONBA_PTR_SET_VALUE(multiModelConfig_, multiModelConfig) };
    inline DeployModelScopeModelInputModelConfig& setMultiModelConfig(vector<Models::ModelConfig> && multiModelConfig) { DARABONBA_PTR_SET_RVALUE(multiModelConfig_, multiModelConfig) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DeployModelScopeModelInputModelConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeployModelScopeModelInputModelConfig& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // srcModelScopeModelID Field Functions 
    bool hasSrcModelScopeModelID() const { return this->srcModelScopeModelID_ != nullptr;};
    void deleteSrcModelScopeModelID() { this->srcModelScopeModelID_ = nullptr;};
    inline string srcModelScopeModelID() const { DARABONBA_PTR_GET_DEFAULT(srcModelScopeModelID_, "") };
    inline DeployModelScopeModelInputModelConfig& setSrcModelScopeModelID(string srcModelScopeModelID) { DARABONBA_PTR_SET_VALUE(srcModelScopeModelID_, srcModelScopeModelID) };


    // srcModelScopeModelRevision Field Functions 
    bool hasSrcModelScopeModelRevision() const { return this->srcModelScopeModelRevision_ != nullptr;};
    void deleteSrcModelScopeModelRevision() { this->srcModelScopeModelRevision_ = nullptr;};
    inline string srcModelScopeModelRevision() const { DARABONBA_PTR_GET_DEFAULT(srcModelScopeModelRevision_, "") };
    inline DeployModelScopeModelInputModelConfig& setSrcModelScopeModelRevision(string srcModelScopeModelRevision) { DARABONBA_PTR_SET_VALUE(srcModelScopeModelRevision_, srcModelScopeModelRevision) };


    // srcModelScopeToken Field Functions 
    bool hasSrcModelScopeToken() const { return this->srcModelScopeToken_ != nullptr;};
    void deleteSrcModelScopeToken() { this->srcModelScopeToken_ = nullptr;};
    inline string srcModelScopeToken() const { DARABONBA_PTR_GET_DEFAULT(srcModelScopeToken_, "") };
    inline DeployModelScopeModelInputModelConfig& setSrcModelScopeToken(string srcModelScopeToken) { DARABONBA_PTR_SET_VALUE(srcModelScopeToken_, srcModelScopeToken) };


    // srcOssBucket Field Functions 
    bool hasSrcOssBucket() const { return this->srcOssBucket_ != nullptr;};
    void deleteSrcOssBucket() { this->srcOssBucket_ = nullptr;};
    inline string srcOssBucket() const { DARABONBA_PTR_GET_DEFAULT(srcOssBucket_, "") };
    inline DeployModelScopeModelInputModelConfig& setSrcOssBucket(string srcOssBucket) { DARABONBA_PTR_SET_VALUE(srcOssBucket_, srcOssBucket) };


    // srcOssPath Field Functions 
    bool hasSrcOssPath() const { return this->srcOssPath_ != nullptr;};
    void deleteSrcOssPath() { this->srcOssPath_ = nullptr;};
    inline string srcOssPath() const { DARABONBA_PTR_GET_DEFAULT(srcOssPath_, "") };
    inline DeployModelScopeModelInputModelConfig& setSrcOssPath(string srcOssPath) { DARABONBA_PTR_SET_VALUE(srcOssPath_, srcOssPath) };


    // srcOssRegion Field Functions 
    bool hasSrcOssRegion() const { return this->srcOssRegion_ != nullptr;};
    void deleteSrcOssRegion() { this->srcOssRegion_ = nullptr;};
    inline string srcOssRegion() const { DARABONBA_PTR_GET_DEFAULT(srcOssRegion_, "") };
    inline DeployModelScopeModelInputModelConfig& setSrcOssRegion(string srcOssRegion) { DARABONBA_PTR_SET_VALUE(srcOssRegion_, srcOssRegion) };


    // syncStrategy Field Functions 
    bool hasSyncStrategy() const { return this->syncStrategy_ != nullptr;};
    void deleteSyncStrategy() { this->syncStrategy_ = nullptr;};
    inline string syncStrategy() const { DARABONBA_PTR_GET_DEFAULT(syncStrategy_, "") };
    inline DeployModelScopeModelInputModelConfig& setSyncStrategy(string syncStrategy) { DARABONBA_PTR_SET_VALUE(syncStrategy_, syncStrategy) };


  protected:
    std::shared_ptr<string> framework_ = nullptr;
    std::shared_ptr<vector<Models::ModelConfig>> multiModelConfig_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> srcModelScopeModelID_ = nullptr;
    std::shared_ptr<string> srcModelScopeModelRevision_ = nullptr;
    std::shared_ptr<string> srcModelScopeToken_ = nullptr;
    std::shared_ptr<string> srcOssBucket_ = nullptr;
    std::shared_ptr<string> srcOssPath_ = nullptr;
    std::shared_ptr<string> srcOssRegion_ = nullptr;
    std::shared_ptr<string> syncStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
