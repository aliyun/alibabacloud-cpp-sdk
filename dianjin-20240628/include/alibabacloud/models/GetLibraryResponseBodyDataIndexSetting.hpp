// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYRESPONSEBODYDATAINDEXSETTING_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYRESPONSEBODYDATAINDEXSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLibraryResponseBodyDataIndexSettingChunkStrategy.hpp>
#include <alibabacloud/models/GetLibraryResponseBodyDataIndexSettingModelConfig.hpp>
#include <alibabacloud/models/GetLibraryResponseBodyDataIndexSettingQueryEnhancer.hpp>
#include <alibabacloud/models/GetLibraryResponseBodyDataIndexSettingRecallStrategy.hpp>
#include <alibabacloud/models/GetLibraryResponseBodyDataIndexSettingTextIndexSetting.hpp>
#include <alibabacloud/models/GetLibraryResponseBodyDataIndexSettingVectorIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryResponseBodyDataIndexSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryResponseBodyDataIndexSetting& obj) { 
      DARABONBA_PTR_TO_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_TO_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_TO_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_TO_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_TO_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryResponseBodyDataIndexSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_FROM_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_FROM_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_FROM_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_FROM_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    GetLibraryResponseBodyDataIndexSetting() = default ;
    GetLibraryResponseBodyDataIndexSetting(const GetLibraryResponseBodyDataIndexSetting &) = default ;
    GetLibraryResponseBodyDataIndexSetting(GetLibraryResponseBodyDataIndexSetting &&) = default ;
    GetLibraryResponseBodyDataIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryResponseBodyDataIndexSetting() = default ;
    GetLibraryResponseBodyDataIndexSetting& operator=(const GetLibraryResponseBodyDataIndexSetting &) = default ;
    GetLibraryResponseBodyDataIndexSetting& operator=(GetLibraryResponseBodyDataIndexSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkStrategy_ == nullptr
        && return this->modelConfig_ == nullptr && return this->promptRoleStyle_ == nullptr && return this->queryEnhancer_ == nullptr && return this->recallStrategy_ == nullptr && return this->textIndexSetting_ == nullptr
        && return this->vectorIndexSetting_ == nullptr; };
    // chunkStrategy Field Functions 
    bool hasChunkStrategy() const { return this->chunkStrategy_ != nullptr;};
    void deleteChunkStrategy() { this->chunkStrategy_ = nullptr;};
    inline const Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy & chunkStrategy() const { DARABONBA_PTR_GET_CONST(chunkStrategy_, Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy) };
    inline Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy chunkStrategy() { DARABONBA_PTR_GET(chunkStrategy_, Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy) };
    inline GetLibraryResponseBodyDataIndexSetting& setChunkStrategy(const Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy & chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };
    inline GetLibraryResponseBodyDataIndexSetting& setChunkStrategy(Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy && chunkStrategy) { DARABONBA_PTR_SET_RVALUE(chunkStrategy_, chunkStrategy) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const Models::GetLibraryResponseBodyDataIndexSettingModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, Models::GetLibraryResponseBodyDataIndexSettingModelConfig) };
    inline Models::GetLibraryResponseBodyDataIndexSettingModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, Models::GetLibraryResponseBodyDataIndexSettingModelConfig) };
    inline GetLibraryResponseBodyDataIndexSetting& setModelConfig(const Models::GetLibraryResponseBodyDataIndexSettingModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline GetLibraryResponseBodyDataIndexSetting& setModelConfig(Models::GetLibraryResponseBodyDataIndexSettingModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // promptRoleStyle Field Functions 
    bool hasPromptRoleStyle() const { return this->promptRoleStyle_ != nullptr;};
    void deletePromptRoleStyle() { this->promptRoleStyle_ = nullptr;};
    inline string promptRoleStyle() const { DARABONBA_PTR_GET_DEFAULT(promptRoleStyle_, "") };
    inline GetLibraryResponseBodyDataIndexSetting& setPromptRoleStyle(string promptRoleStyle) { DARABONBA_PTR_SET_VALUE(promptRoleStyle_, promptRoleStyle) };


    // queryEnhancer Field Functions 
    bool hasQueryEnhancer() const { return this->queryEnhancer_ != nullptr;};
    void deleteQueryEnhancer() { this->queryEnhancer_ = nullptr;};
    inline const Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer & queryEnhancer() const { DARABONBA_PTR_GET_CONST(queryEnhancer_, Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer) };
    inline Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer queryEnhancer() { DARABONBA_PTR_GET(queryEnhancer_, Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer) };
    inline GetLibraryResponseBodyDataIndexSetting& setQueryEnhancer(const Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer & queryEnhancer) { DARABONBA_PTR_SET_VALUE(queryEnhancer_, queryEnhancer) };
    inline GetLibraryResponseBodyDataIndexSetting& setQueryEnhancer(Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer && queryEnhancer) { DARABONBA_PTR_SET_RVALUE(queryEnhancer_, queryEnhancer) };


    // recallStrategy Field Functions 
    bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
    void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
    inline const Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy & recallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy) };
    inline Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy recallStrategy() { DARABONBA_PTR_GET(recallStrategy_, Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy) };
    inline GetLibraryResponseBodyDataIndexSetting& setRecallStrategy(const Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
    inline GetLibraryResponseBodyDataIndexSetting& setRecallStrategy(Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


    // textIndexSetting Field Functions 
    bool hasTextIndexSetting() const { return this->textIndexSetting_ != nullptr;};
    void deleteTextIndexSetting() { this->textIndexSetting_ = nullptr;};
    inline const Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting & textIndexSetting() const { DARABONBA_PTR_GET_CONST(textIndexSetting_, Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting) };
    inline Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting textIndexSetting() { DARABONBA_PTR_GET(textIndexSetting_, Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting) };
    inline GetLibraryResponseBodyDataIndexSetting& setTextIndexSetting(const Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting & textIndexSetting) { DARABONBA_PTR_SET_VALUE(textIndexSetting_, textIndexSetting) };
    inline GetLibraryResponseBodyDataIndexSetting& setTextIndexSetting(Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting && textIndexSetting) { DARABONBA_PTR_SET_RVALUE(textIndexSetting_, textIndexSetting) };


    // vectorIndexSetting Field Functions 
    bool hasVectorIndexSetting() const { return this->vectorIndexSetting_ != nullptr;};
    void deleteVectorIndexSetting() { this->vectorIndexSetting_ = nullptr;};
    inline const Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting & vectorIndexSetting() const { DARABONBA_PTR_GET_CONST(vectorIndexSetting_, Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting) };
    inline Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting vectorIndexSetting() { DARABONBA_PTR_GET(vectorIndexSetting_, Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting) };
    inline GetLibraryResponseBodyDataIndexSetting& setVectorIndexSetting(const Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting & vectorIndexSetting) { DARABONBA_PTR_SET_VALUE(vectorIndexSetting_, vectorIndexSetting) };
    inline GetLibraryResponseBodyDataIndexSetting& setVectorIndexSetting(Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting && vectorIndexSetting) { DARABONBA_PTR_SET_RVALUE(vectorIndexSetting_, vectorIndexSetting) };


  protected:
    std::shared_ptr<Models::GetLibraryResponseBodyDataIndexSettingChunkStrategy> chunkStrategy_ = nullptr;
    std::shared_ptr<Models::GetLibraryResponseBodyDataIndexSettingModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> promptRoleStyle_ = nullptr;
    std::shared_ptr<Models::GetLibraryResponseBodyDataIndexSettingQueryEnhancer> queryEnhancer_ = nullptr;
    std::shared_ptr<Models::GetLibraryResponseBodyDataIndexSettingRecallStrategy> recallStrategy_ = nullptr;
    std::shared_ptr<Models::GetLibraryResponseBodyDataIndexSettingTextIndexSetting> textIndexSetting_ = nullptr;
    std::shared_ptr<Models::GetLibraryResponseBodyDataIndexSettingVectorIndexSetting> vectorIndexSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
