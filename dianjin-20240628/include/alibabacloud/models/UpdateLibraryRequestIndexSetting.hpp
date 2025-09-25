// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIBRARYREQUESTINDEXSETTING_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIBRARYREQUESTINDEXSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSettingChunkStrategy.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSettingModelConfig.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSettingQueryEnhancer.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSettingRecallStrategy.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSettingTextIndexSetting.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSettingVectorIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateLibraryRequestIndexSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLibraryRequestIndexSetting& obj) { 
      DARABONBA_PTR_TO_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_TO_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_TO_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_TO_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_TO_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLibraryRequestIndexSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_FROM_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_FROM_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_FROM_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_FROM_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    UpdateLibraryRequestIndexSetting() = default ;
    UpdateLibraryRequestIndexSetting(const UpdateLibraryRequestIndexSetting &) = default ;
    UpdateLibraryRequestIndexSetting(UpdateLibraryRequestIndexSetting &&) = default ;
    UpdateLibraryRequestIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLibraryRequestIndexSetting() = default ;
    UpdateLibraryRequestIndexSetting& operator=(const UpdateLibraryRequestIndexSetting &) = default ;
    UpdateLibraryRequestIndexSetting& operator=(UpdateLibraryRequestIndexSetting &&) = default ;
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
    inline const Models::UpdateLibraryRequestIndexSettingChunkStrategy & chunkStrategy() const { DARABONBA_PTR_GET_CONST(chunkStrategy_, Models::UpdateLibraryRequestIndexSettingChunkStrategy) };
    inline Models::UpdateLibraryRequestIndexSettingChunkStrategy chunkStrategy() { DARABONBA_PTR_GET(chunkStrategy_, Models::UpdateLibraryRequestIndexSettingChunkStrategy) };
    inline UpdateLibraryRequestIndexSetting& setChunkStrategy(const Models::UpdateLibraryRequestIndexSettingChunkStrategy & chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };
    inline UpdateLibraryRequestIndexSetting& setChunkStrategy(Models::UpdateLibraryRequestIndexSettingChunkStrategy && chunkStrategy) { DARABONBA_PTR_SET_RVALUE(chunkStrategy_, chunkStrategy) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const Models::UpdateLibraryRequestIndexSettingModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, Models::UpdateLibraryRequestIndexSettingModelConfig) };
    inline Models::UpdateLibraryRequestIndexSettingModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, Models::UpdateLibraryRequestIndexSettingModelConfig) };
    inline UpdateLibraryRequestIndexSetting& setModelConfig(const Models::UpdateLibraryRequestIndexSettingModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline UpdateLibraryRequestIndexSetting& setModelConfig(Models::UpdateLibraryRequestIndexSettingModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // promptRoleStyle Field Functions 
    bool hasPromptRoleStyle() const { return this->promptRoleStyle_ != nullptr;};
    void deletePromptRoleStyle() { this->promptRoleStyle_ = nullptr;};
    inline string promptRoleStyle() const { DARABONBA_PTR_GET_DEFAULT(promptRoleStyle_, "") };
    inline UpdateLibraryRequestIndexSetting& setPromptRoleStyle(string promptRoleStyle) { DARABONBA_PTR_SET_VALUE(promptRoleStyle_, promptRoleStyle) };


    // queryEnhancer Field Functions 
    bool hasQueryEnhancer() const { return this->queryEnhancer_ != nullptr;};
    void deleteQueryEnhancer() { this->queryEnhancer_ = nullptr;};
    inline const Models::UpdateLibraryRequestIndexSettingQueryEnhancer & queryEnhancer() const { DARABONBA_PTR_GET_CONST(queryEnhancer_, Models::UpdateLibraryRequestIndexSettingQueryEnhancer) };
    inline Models::UpdateLibraryRequestIndexSettingQueryEnhancer queryEnhancer() { DARABONBA_PTR_GET(queryEnhancer_, Models::UpdateLibraryRequestIndexSettingQueryEnhancer) };
    inline UpdateLibraryRequestIndexSetting& setQueryEnhancer(const Models::UpdateLibraryRequestIndexSettingQueryEnhancer & queryEnhancer) { DARABONBA_PTR_SET_VALUE(queryEnhancer_, queryEnhancer) };
    inline UpdateLibraryRequestIndexSetting& setQueryEnhancer(Models::UpdateLibraryRequestIndexSettingQueryEnhancer && queryEnhancer) { DARABONBA_PTR_SET_RVALUE(queryEnhancer_, queryEnhancer) };


    // recallStrategy Field Functions 
    bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
    void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
    inline const Models::UpdateLibraryRequestIndexSettingRecallStrategy & recallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, Models::UpdateLibraryRequestIndexSettingRecallStrategy) };
    inline Models::UpdateLibraryRequestIndexSettingRecallStrategy recallStrategy() { DARABONBA_PTR_GET(recallStrategy_, Models::UpdateLibraryRequestIndexSettingRecallStrategy) };
    inline UpdateLibraryRequestIndexSetting& setRecallStrategy(const Models::UpdateLibraryRequestIndexSettingRecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
    inline UpdateLibraryRequestIndexSetting& setRecallStrategy(Models::UpdateLibraryRequestIndexSettingRecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


    // textIndexSetting Field Functions 
    bool hasTextIndexSetting() const { return this->textIndexSetting_ != nullptr;};
    void deleteTextIndexSetting() { this->textIndexSetting_ = nullptr;};
    inline const Models::UpdateLibraryRequestIndexSettingTextIndexSetting & textIndexSetting() const { DARABONBA_PTR_GET_CONST(textIndexSetting_, Models::UpdateLibraryRequestIndexSettingTextIndexSetting) };
    inline Models::UpdateLibraryRequestIndexSettingTextIndexSetting textIndexSetting() { DARABONBA_PTR_GET(textIndexSetting_, Models::UpdateLibraryRequestIndexSettingTextIndexSetting) };
    inline UpdateLibraryRequestIndexSetting& setTextIndexSetting(const Models::UpdateLibraryRequestIndexSettingTextIndexSetting & textIndexSetting) { DARABONBA_PTR_SET_VALUE(textIndexSetting_, textIndexSetting) };
    inline UpdateLibraryRequestIndexSetting& setTextIndexSetting(Models::UpdateLibraryRequestIndexSettingTextIndexSetting && textIndexSetting) { DARABONBA_PTR_SET_RVALUE(textIndexSetting_, textIndexSetting) };


    // vectorIndexSetting Field Functions 
    bool hasVectorIndexSetting() const { return this->vectorIndexSetting_ != nullptr;};
    void deleteVectorIndexSetting() { this->vectorIndexSetting_ = nullptr;};
    inline const Models::UpdateLibraryRequestIndexSettingVectorIndexSetting & vectorIndexSetting() const { DARABONBA_PTR_GET_CONST(vectorIndexSetting_, Models::UpdateLibraryRequestIndexSettingVectorIndexSetting) };
    inline Models::UpdateLibraryRequestIndexSettingVectorIndexSetting vectorIndexSetting() { DARABONBA_PTR_GET(vectorIndexSetting_, Models::UpdateLibraryRequestIndexSettingVectorIndexSetting) };
    inline UpdateLibraryRequestIndexSetting& setVectorIndexSetting(const Models::UpdateLibraryRequestIndexSettingVectorIndexSetting & vectorIndexSetting) { DARABONBA_PTR_SET_VALUE(vectorIndexSetting_, vectorIndexSetting) };
    inline UpdateLibraryRequestIndexSetting& setVectorIndexSetting(Models::UpdateLibraryRequestIndexSettingVectorIndexSetting && vectorIndexSetting) { DARABONBA_PTR_SET_RVALUE(vectorIndexSetting_, vectorIndexSetting) };


  protected:
    std::shared_ptr<Models::UpdateLibraryRequestIndexSettingChunkStrategy> chunkStrategy_ = nullptr;
    std::shared_ptr<Models::UpdateLibraryRequestIndexSettingModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> promptRoleStyle_ = nullptr;
    std::shared_ptr<Models::UpdateLibraryRequestIndexSettingQueryEnhancer> queryEnhancer_ = nullptr;
    std::shared_ptr<Models::UpdateLibraryRequestIndexSettingRecallStrategy> recallStrategy_ = nullptr;
    std::shared_ptr<Models::UpdateLibraryRequestIndexSettingTextIndexSetting> textIndexSetting_ = nullptr;
    std::shared_ptr<Models::UpdateLibraryRequestIndexSettingVectorIndexSetting> vectorIndexSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
