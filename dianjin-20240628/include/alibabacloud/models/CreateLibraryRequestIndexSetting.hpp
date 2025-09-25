// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYREQUESTINDEXSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYREQUESTINDEXSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSettingChunkStrategy.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSettingModelConfig.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSettingQueryEnhancer.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSettingRecallStrategy.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSettingTextIndexSetting.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSettingVectorIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateLibraryRequestIndexSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryRequestIndexSetting& obj) { 
      DARABONBA_PTR_TO_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_TO_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_TO_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_TO_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_TO_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryRequestIndexSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_FROM_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_FROM_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_FROM_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_FROM_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    CreateLibraryRequestIndexSetting() = default ;
    CreateLibraryRequestIndexSetting(const CreateLibraryRequestIndexSetting &) = default ;
    CreateLibraryRequestIndexSetting(CreateLibraryRequestIndexSetting &&) = default ;
    CreateLibraryRequestIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryRequestIndexSetting() = default ;
    CreateLibraryRequestIndexSetting& operator=(const CreateLibraryRequestIndexSetting &) = default ;
    CreateLibraryRequestIndexSetting& operator=(CreateLibraryRequestIndexSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkStrategy_ != nullptr
        && this->modelConfig_ != nullptr && this->promptRoleStyle_ != nullptr && this->queryEnhancer_ != nullptr && this->recallStrategy_ != nullptr && this->textIndexSetting_ != nullptr
        && this->vectorIndexSetting_ != nullptr; };
    // chunkStrategy Field Functions 
    bool hasChunkStrategy() const { return this->chunkStrategy_ != nullptr;};
    void deleteChunkStrategy() { this->chunkStrategy_ = nullptr;};
    inline const Models::CreateLibraryRequestIndexSettingChunkStrategy & chunkStrategy() const { DARABONBA_PTR_GET_CONST(chunkStrategy_, Models::CreateLibraryRequestIndexSettingChunkStrategy) };
    inline Models::CreateLibraryRequestIndexSettingChunkStrategy chunkStrategy() { DARABONBA_PTR_GET(chunkStrategy_, Models::CreateLibraryRequestIndexSettingChunkStrategy) };
    inline CreateLibraryRequestIndexSetting& setChunkStrategy(const Models::CreateLibraryRequestIndexSettingChunkStrategy & chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };
    inline CreateLibraryRequestIndexSetting& setChunkStrategy(Models::CreateLibraryRequestIndexSettingChunkStrategy && chunkStrategy) { DARABONBA_PTR_SET_RVALUE(chunkStrategy_, chunkStrategy) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const Models::CreateLibraryRequestIndexSettingModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, Models::CreateLibraryRequestIndexSettingModelConfig) };
    inline Models::CreateLibraryRequestIndexSettingModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, Models::CreateLibraryRequestIndexSettingModelConfig) };
    inline CreateLibraryRequestIndexSetting& setModelConfig(const Models::CreateLibraryRequestIndexSettingModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline CreateLibraryRequestIndexSetting& setModelConfig(Models::CreateLibraryRequestIndexSettingModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // promptRoleStyle Field Functions 
    bool hasPromptRoleStyle() const { return this->promptRoleStyle_ != nullptr;};
    void deletePromptRoleStyle() { this->promptRoleStyle_ = nullptr;};
    inline string promptRoleStyle() const { DARABONBA_PTR_GET_DEFAULT(promptRoleStyle_, "") };
    inline CreateLibraryRequestIndexSetting& setPromptRoleStyle(string promptRoleStyle) { DARABONBA_PTR_SET_VALUE(promptRoleStyle_, promptRoleStyle) };


    // queryEnhancer Field Functions 
    bool hasQueryEnhancer() const { return this->queryEnhancer_ != nullptr;};
    void deleteQueryEnhancer() { this->queryEnhancer_ = nullptr;};
    inline const Models::CreateLibraryRequestIndexSettingQueryEnhancer & queryEnhancer() const { DARABONBA_PTR_GET_CONST(queryEnhancer_, Models::CreateLibraryRequestIndexSettingQueryEnhancer) };
    inline Models::CreateLibraryRequestIndexSettingQueryEnhancer queryEnhancer() { DARABONBA_PTR_GET(queryEnhancer_, Models::CreateLibraryRequestIndexSettingQueryEnhancer) };
    inline CreateLibraryRequestIndexSetting& setQueryEnhancer(const Models::CreateLibraryRequestIndexSettingQueryEnhancer & queryEnhancer) { DARABONBA_PTR_SET_VALUE(queryEnhancer_, queryEnhancer) };
    inline CreateLibraryRequestIndexSetting& setQueryEnhancer(Models::CreateLibraryRequestIndexSettingQueryEnhancer && queryEnhancer) { DARABONBA_PTR_SET_RVALUE(queryEnhancer_, queryEnhancer) };


    // recallStrategy Field Functions 
    bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
    void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
    inline const Models::CreateLibraryRequestIndexSettingRecallStrategy & recallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, Models::CreateLibraryRequestIndexSettingRecallStrategy) };
    inline Models::CreateLibraryRequestIndexSettingRecallStrategy recallStrategy() { DARABONBA_PTR_GET(recallStrategy_, Models::CreateLibraryRequestIndexSettingRecallStrategy) };
    inline CreateLibraryRequestIndexSetting& setRecallStrategy(const Models::CreateLibraryRequestIndexSettingRecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
    inline CreateLibraryRequestIndexSetting& setRecallStrategy(Models::CreateLibraryRequestIndexSettingRecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


    // textIndexSetting Field Functions 
    bool hasTextIndexSetting() const { return this->textIndexSetting_ != nullptr;};
    void deleteTextIndexSetting() { this->textIndexSetting_ = nullptr;};
    inline const Models::CreateLibraryRequestIndexSettingTextIndexSetting & textIndexSetting() const { DARABONBA_PTR_GET_CONST(textIndexSetting_, Models::CreateLibraryRequestIndexSettingTextIndexSetting) };
    inline Models::CreateLibraryRequestIndexSettingTextIndexSetting textIndexSetting() { DARABONBA_PTR_GET(textIndexSetting_, Models::CreateLibraryRequestIndexSettingTextIndexSetting) };
    inline CreateLibraryRequestIndexSetting& setTextIndexSetting(const Models::CreateLibraryRequestIndexSettingTextIndexSetting & textIndexSetting) { DARABONBA_PTR_SET_VALUE(textIndexSetting_, textIndexSetting) };
    inline CreateLibraryRequestIndexSetting& setTextIndexSetting(Models::CreateLibraryRequestIndexSettingTextIndexSetting && textIndexSetting) { DARABONBA_PTR_SET_RVALUE(textIndexSetting_, textIndexSetting) };


    // vectorIndexSetting Field Functions 
    bool hasVectorIndexSetting() const { return this->vectorIndexSetting_ != nullptr;};
    void deleteVectorIndexSetting() { this->vectorIndexSetting_ = nullptr;};
    inline const Models::CreateLibraryRequestIndexSettingVectorIndexSetting & vectorIndexSetting() const { DARABONBA_PTR_GET_CONST(vectorIndexSetting_, Models::CreateLibraryRequestIndexSettingVectorIndexSetting) };
    inline Models::CreateLibraryRequestIndexSettingVectorIndexSetting vectorIndexSetting() { DARABONBA_PTR_GET(vectorIndexSetting_, Models::CreateLibraryRequestIndexSettingVectorIndexSetting) };
    inline CreateLibraryRequestIndexSetting& setVectorIndexSetting(const Models::CreateLibraryRequestIndexSettingVectorIndexSetting & vectorIndexSetting) { DARABONBA_PTR_SET_VALUE(vectorIndexSetting_, vectorIndexSetting) };
    inline CreateLibraryRequestIndexSetting& setVectorIndexSetting(Models::CreateLibraryRequestIndexSettingVectorIndexSetting && vectorIndexSetting) { DARABONBA_PTR_SET_RVALUE(vectorIndexSetting_, vectorIndexSetting) };


  protected:
    std::shared_ptr<Models::CreateLibraryRequestIndexSettingChunkStrategy> chunkStrategy_ = nullptr;
    std::shared_ptr<Models::CreateLibraryRequestIndexSettingModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> promptRoleStyle_ = nullptr;
    std::shared_ptr<Models::CreateLibraryRequestIndexSettingQueryEnhancer> queryEnhancer_ = nullptr;
    std::shared_ptr<Models::CreateLibraryRequestIndexSettingRecallStrategy> recallStrategy_ = nullptr;
    std::shared_ptr<Models::CreateLibraryRequestIndexSettingTextIndexSetting> textIndexSetting_ = nullptr;
    std::shared_ptr<Models::CreateLibraryRequestIndexSettingVectorIndexSetting> vectorIndexSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
