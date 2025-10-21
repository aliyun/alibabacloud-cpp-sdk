// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord.hpp>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics.hpp>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories.hpp>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_TO_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_TO_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_TO_JSON(PromptAttack, promptAttack_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_FROM_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_FROM_JSON(PromptAttack, promptAttack_);
    };
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo &&) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& operator=(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& operator=(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWord_ == nullptr
        && return this->denyTopics_ == nullptr && return this->harmfulCategories_ == nullptr && return this->promptAttack_ == nullptr; };
    // blockWord Field Functions 
    bool hasBlockWord() const { return this->blockWord_ != nullptr;};
    void deleteBlockWord() { this->blockWord_ = nullptr;};
    inline const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord & blockWord() const { DARABONBA_PTR_GET_CONST(blockWord_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord) };
    inline Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord blockWord() { DARABONBA_PTR_GET(blockWord_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setBlockWord(const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord & blockWord) { DARABONBA_PTR_SET_VALUE(blockWord_, blockWord) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setBlockWord(Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord && blockWord) { DARABONBA_PTR_SET_RVALUE(blockWord_, blockWord) };


    // denyTopics Field Functions 
    bool hasDenyTopics() const { return this->denyTopics_ != nullptr;};
    void deleteDenyTopics() { this->denyTopics_ = nullptr;};
    inline const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics & denyTopics() const { DARABONBA_PTR_GET_CONST(denyTopics_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics) };
    inline Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics denyTopics() { DARABONBA_PTR_GET(denyTopics_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setDenyTopics(const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics & denyTopics) { DARABONBA_PTR_SET_VALUE(denyTopics_, denyTopics) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setDenyTopics(Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics && denyTopics) { DARABONBA_PTR_SET_RVALUE(denyTopics_, denyTopics) };


    // harmfulCategories Field Functions 
    bool hasHarmfulCategories() const { return this->harmfulCategories_ != nullptr;};
    void deleteHarmfulCategories() { this->harmfulCategories_ = nullptr;};
    inline const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories & harmfulCategories() const { DARABONBA_PTR_GET_CONST(harmfulCategories_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories) };
    inline Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories harmfulCategories() { DARABONBA_PTR_GET(harmfulCategories_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setHarmfulCategories(const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories & harmfulCategories) { DARABONBA_PTR_SET_VALUE(harmfulCategories_, harmfulCategories) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setHarmfulCategories(Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories && harmfulCategories) { DARABONBA_PTR_SET_RVALUE(harmfulCategories_, harmfulCategories) };


    // promptAttack Field Functions 
    bool hasPromptAttack() const { return this->promptAttack_ != nullptr;};
    void deletePromptAttack() { this->promptAttack_ = nullptr;};
    inline const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack & promptAttack() const { DARABONBA_PTR_GET_CONST(promptAttack_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack) };
    inline Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack promptAttack() { DARABONBA_PTR_GET(promptAttack_, Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setPromptAttack(const Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack & promptAttack) { DARABONBA_PTR_SET_VALUE(promptAttack_, promptAttack) };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo& setPromptAttack(Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack && promptAttack) { DARABONBA_PTR_SET_RVALUE(promptAttack_, promptAttack) };


  protected:
    // Detected keywords
    std::shared_ptr<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord> blockWord_ = nullptr;
    // Sensitive topic object list
    std::shared_ptr<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics> denyTopics_ = nullptr;
    // List of harmful category result objects
    std::shared_ptr<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories> harmfulCategories_ = nullptr;
    // PromptAttack
    std::shared_ptr<Models::GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack> promptAttack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
