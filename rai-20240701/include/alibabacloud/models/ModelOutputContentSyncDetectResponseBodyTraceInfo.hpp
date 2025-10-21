// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFO_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord.hpp>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics.hpp>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories.hpp>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack.hpp>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_TO_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_TO_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_TO_JSON(PromptAttack, promptAttack_);
      DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_FROM_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_FROM_JSON(PromptAttack, promptAttack_);
      DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfo() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfo(const ModelOutputContentSyncDetectResponseBodyTraceInfo &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfo(ModelOutputContentSyncDetectResponseBodyTraceInfo &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfo() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfo& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfo &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfo& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWord_ == nullptr
        && return this->denyTopics_ == nullptr && return this->harmfulCategories_ == nullptr && return this->promptAttack_ == nullptr && return this->sensitiveType_ == nullptr; };
    // blockWord Field Functions 
    bool hasBlockWord() const { return this->blockWord_ != nullptr;};
    void deleteBlockWord() { this->blockWord_ = nullptr;};
    inline const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord & blockWord() const { DARABONBA_PTR_GET_CONST(blockWord_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord) };
    inline Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord blockWord() { DARABONBA_PTR_GET(blockWord_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setBlockWord(const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord & blockWord) { DARABONBA_PTR_SET_VALUE(blockWord_, blockWord) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setBlockWord(Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord && blockWord) { DARABONBA_PTR_SET_RVALUE(blockWord_, blockWord) };


    // denyTopics Field Functions 
    bool hasDenyTopics() const { return this->denyTopics_ != nullptr;};
    void deleteDenyTopics() { this->denyTopics_ = nullptr;};
    inline const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics & denyTopics() const { DARABONBA_PTR_GET_CONST(denyTopics_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics) };
    inline Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics denyTopics() { DARABONBA_PTR_GET(denyTopics_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setDenyTopics(const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics & denyTopics) { DARABONBA_PTR_SET_VALUE(denyTopics_, denyTopics) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setDenyTopics(Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics && denyTopics) { DARABONBA_PTR_SET_RVALUE(denyTopics_, denyTopics) };


    // harmfulCategories Field Functions 
    bool hasHarmfulCategories() const { return this->harmfulCategories_ != nullptr;};
    void deleteHarmfulCategories() { this->harmfulCategories_ = nullptr;};
    inline const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories & harmfulCategories() const { DARABONBA_PTR_GET_CONST(harmfulCategories_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories) };
    inline Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories harmfulCategories() { DARABONBA_PTR_GET(harmfulCategories_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setHarmfulCategories(const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories & harmfulCategories) { DARABONBA_PTR_SET_VALUE(harmfulCategories_, harmfulCategories) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setHarmfulCategories(Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories && harmfulCategories) { DARABONBA_PTR_SET_RVALUE(harmfulCategories_, harmfulCategories) };


    // promptAttack Field Functions 
    bool hasPromptAttack() const { return this->promptAttack_ != nullptr;};
    void deletePromptAttack() { this->promptAttack_ = nullptr;};
    inline const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack & promptAttack() const { DARABONBA_PTR_GET_CONST(promptAttack_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack) };
    inline Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack promptAttack() { DARABONBA_PTR_GET(promptAttack_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setPromptAttack(const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack & promptAttack) { DARABONBA_PTR_SET_VALUE(promptAttack_, promptAttack) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setPromptAttack(Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack && promptAttack) { DARABONBA_PTR_SET_RVALUE(promptAttack_, promptAttack) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType & sensitiveType() const { DARABONBA_PTR_GET_CONST(sensitiveType_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType) };
    inline Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType sensitiveType() { DARABONBA_PTR_GET(sensitiveType_, Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setSensitiveType(const Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType & sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfo& setSensitiveType(Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType && sensitiveType) { DARABONBA_PTR_SET_RVALUE(sensitiveType_, sensitiveType) };


  protected:
    // Detected keywords
    std::shared_ptr<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord> blockWord_ = nullptr;
    // Sensitive topic object list
    std::shared_ptr<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoDenyTopics> denyTopics_ = nullptr;
    // HarmfulCategories
    std::shared_ptr<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories> harmfulCategories_ = nullptr;
    // Prompt attack information
    std::shared_ptr<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack> promptAttack_ = nullptr;
    std::shared_ptr<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType> sensitiveType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
