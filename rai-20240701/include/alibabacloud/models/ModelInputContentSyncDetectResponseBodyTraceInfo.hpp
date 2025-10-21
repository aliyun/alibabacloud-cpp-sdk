// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFO_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectResponseBodyTraceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectResponseBodyTraceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_TO_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_TO_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_TO_JSON(PromptAttack, promptAttack_);
      DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectResponseBodyTraceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_FROM_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_FROM_JSON(PromptAttack, promptAttack_);
      DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
    };
    ModelInputContentSyncDetectResponseBodyTraceInfo() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfo(const ModelInputContentSyncDetectResponseBodyTraceInfo &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfo(ModelInputContentSyncDetectResponseBodyTraceInfo &&) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectResponseBodyTraceInfo() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfo& operator=(const ModelInputContentSyncDetectResponseBodyTraceInfo &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfo& operator=(ModelInputContentSyncDetectResponseBodyTraceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWord_ == nullptr
        && return this->denyTopics_ == nullptr && return this->harmfulCategories_ == nullptr && return this->promptAttack_ == nullptr && return this->sensitiveType_ == nullptr; };
    // blockWord Field Functions 
    bool hasBlockWord() const { return this->blockWord_ != nullptr;};
    void deleteBlockWord() { this->blockWord_ = nullptr;};
    inline const Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord & blockWord() const { DARABONBA_PTR_GET_CONST(blockWord_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord) };
    inline Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord blockWord() { DARABONBA_PTR_GET(blockWord_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setBlockWord(const Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord & blockWord) { DARABONBA_PTR_SET_VALUE(blockWord_, blockWord) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setBlockWord(Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord && blockWord) { DARABONBA_PTR_SET_RVALUE(blockWord_, blockWord) };


    // denyTopics Field Functions 
    bool hasDenyTopics() const { return this->denyTopics_ != nullptr;};
    void deleteDenyTopics() { this->denyTopics_ = nullptr;};
    inline const Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics & denyTopics() const { DARABONBA_PTR_GET_CONST(denyTopics_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics) };
    inline Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics denyTopics() { DARABONBA_PTR_GET(denyTopics_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setDenyTopics(const Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics & denyTopics) { DARABONBA_PTR_SET_VALUE(denyTopics_, denyTopics) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setDenyTopics(Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics && denyTopics) { DARABONBA_PTR_SET_RVALUE(denyTopics_, denyTopics) };


    // harmfulCategories Field Functions 
    bool hasHarmfulCategories() const { return this->harmfulCategories_ != nullptr;};
    void deleteHarmfulCategories() { this->harmfulCategories_ = nullptr;};
    inline const Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories & harmfulCategories() const { DARABONBA_PTR_GET_CONST(harmfulCategories_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories) };
    inline Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories harmfulCategories() { DARABONBA_PTR_GET(harmfulCategories_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setHarmfulCategories(const Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories & harmfulCategories) { DARABONBA_PTR_SET_VALUE(harmfulCategories_, harmfulCategories) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setHarmfulCategories(Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories && harmfulCategories) { DARABONBA_PTR_SET_RVALUE(harmfulCategories_, harmfulCategories) };


    // promptAttack Field Functions 
    bool hasPromptAttack() const { return this->promptAttack_ != nullptr;};
    void deletePromptAttack() { this->promptAttack_ = nullptr;};
    inline const Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack & promptAttack() const { DARABONBA_PTR_GET_CONST(promptAttack_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack) };
    inline Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack promptAttack() { DARABONBA_PTR_GET(promptAttack_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setPromptAttack(const Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack & promptAttack) { DARABONBA_PTR_SET_VALUE(promptAttack_, promptAttack) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setPromptAttack(Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack && promptAttack) { DARABONBA_PTR_SET_RVALUE(promptAttack_, promptAttack) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline const Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType & sensitiveType() const { DARABONBA_PTR_GET_CONST(sensitiveType_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType) };
    inline Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType sensitiveType() { DARABONBA_PTR_GET(sensitiveType_, Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setSensitiveType(const Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType & sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo& setSensitiveType(Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType && sensitiveType) { DARABONBA_PTR_SET_RVALUE(sensitiveType_, sensitiveType) };


  protected:
    // Detected keywords
    std::shared_ptr<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord> blockWord_ = nullptr;
    // Sensitive topic object list
    std::shared_ptr<Models::ModelInputContentSyncDetectResponseBodyTraceInfoDenyTopics> denyTopics_ = nullptr;
    // HarmfulCategories
    std::shared_ptr<Models::ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories> harmfulCategories_ = nullptr;
    // Prompt attack information
    std::shared_ptr<Models::ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack> promptAttack_ = nullptr;
    std::shared_ptr<Models::ModelInputContentSyncDetectResponseBodyTraceInfoSensitiveType> sensitiveType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
