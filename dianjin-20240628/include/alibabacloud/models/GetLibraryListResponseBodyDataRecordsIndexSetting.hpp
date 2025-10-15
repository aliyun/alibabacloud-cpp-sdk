// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDSINDEXSETTING_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDSINDEXSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListResponseBodyDataRecordsIndexSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListResponseBodyDataRecordsIndexSetting& obj) { 
      DARABONBA_PTR_TO_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_TO_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_TO_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_TO_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_TO_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListResponseBodyDataRecordsIndexSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkStrategy, chunkStrategy_);
      DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(promptRoleStyle, promptRoleStyle_);
      DARABONBA_PTR_FROM_JSON(queryEnhancer, queryEnhancer_);
      DARABONBA_PTR_FROM_JSON(recallStrategy, recallStrategy_);
      DARABONBA_PTR_FROM_JSON(textIndexSetting, textIndexSetting_);
      DARABONBA_PTR_FROM_JSON(vectorIndexSetting, vectorIndexSetting_);
    };
    GetLibraryListResponseBodyDataRecordsIndexSetting() = default ;
    GetLibraryListResponseBodyDataRecordsIndexSetting(const GetLibraryListResponseBodyDataRecordsIndexSetting &) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSetting(GetLibraryListResponseBodyDataRecordsIndexSetting &&) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListResponseBodyDataRecordsIndexSetting() = default ;
    GetLibraryListResponseBodyDataRecordsIndexSetting& operator=(const GetLibraryListResponseBodyDataRecordsIndexSetting &) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSetting& operator=(GetLibraryListResponseBodyDataRecordsIndexSetting &&) = default ;
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
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy & chunkStrategy() const { DARABONBA_PTR_GET_CONST(chunkStrategy_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy chunkStrategy() { DARABONBA_PTR_GET(chunkStrategy_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setChunkStrategy(const Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy & chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setChunkStrategy(Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy && chunkStrategy) { DARABONBA_PTR_SET_RVALUE(chunkStrategy_, chunkStrategy) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setModelConfig(const Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setModelConfig(Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // promptRoleStyle Field Functions 
    bool hasPromptRoleStyle() const { return this->promptRoleStyle_ != nullptr;};
    void deletePromptRoleStyle() { this->promptRoleStyle_ = nullptr;};
    inline string promptRoleStyle() const { DARABONBA_PTR_GET_DEFAULT(promptRoleStyle_, "") };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setPromptRoleStyle(string promptRoleStyle) { DARABONBA_PTR_SET_VALUE(promptRoleStyle_, promptRoleStyle) };


    // queryEnhancer Field Functions 
    bool hasQueryEnhancer() const { return this->queryEnhancer_ != nullptr;};
    void deleteQueryEnhancer() { this->queryEnhancer_ = nullptr;};
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer & queryEnhancer() const { DARABONBA_PTR_GET_CONST(queryEnhancer_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer queryEnhancer() { DARABONBA_PTR_GET(queryEnhancer_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setQueryEnhancer(const Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer & queryEnhancer) { DARABONBA_PTR_SET_VALUE(queryEnhancer_, queryEnhancer) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setQueryEnhancer(Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer && queryEnhancer) { DARABONBA_PTR_SET_RVALUE(queryEnhancer_, queryEnhancer) };


    // recallStrategy Field Functions 
    bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
    void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy & recallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy recallStrategy() { DARABONBA_PTR_GET(recallStrategy_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setRecallStrategy(const Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setRecallStrategy(Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


    // textIndexSetting Field Functions 
    bool hasTextIndexSetting() const { return this->textIndexSetting_ != nullptr;};
    void deleteTextIndexSetting() { this->textIndexSetting_ = nullptr;};
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting & textIndexSetting() const { DARABONBA_PTR_GET_CONST(textIndexSetting_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting textIndexSetting() { DARABONBA_PTR_GET(textIndexSetting_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setTextIndexSetting(const Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting & textIndexSetting) { DARABONBA_PTR_SET_VALUE(textIndexSetting_, textIndexSetting) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setTextIndexSetting(Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting && textIndexSetting) { DARABONBA_PTR_SET_RVALUE(textIndexSetting_, textIndexSetting) };


    // vectorIndexSetting Field Functions 
    bool hasVectorIndexSetting() const { return this->vectorIndexSetting_ != nullptr;};
    void deleteVectorIndexSetting() { this->vectorIndexSetting_ = nullptr;};
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting & vectorIndexSetting() const { DARABONBA_PTR_GET_CONST(vectorIndexSetting_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting vectorIndexSetting() { DARABONBA_PTR_GET(vectorIndexSetting_, Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setVectorIndexSetting(const Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting & vectorIndexSetting) { DARABONBA_PTR_SET_VALUE(vectorIndexSetting_, vectorIndexSetting) };
    inline GetLibraryListResponseBodyDataRecordsIndexSetting& setVectorIndexSetting(Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting && vectorIndexSetting) { DARABONBA_PTR_SET_RVALUE(vectorIndexSetting_, vectorIndexSetting) };


  protected:
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy> chunkStrategy_ = nullptr;
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> promptRoleStyle_ = nullptr;
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer> queryEnhancer_ = nullptr;
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy> recallStrategy_ = nullptr;
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting> textIndexSetting_ = nullptr;
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting> vectorIndexSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
