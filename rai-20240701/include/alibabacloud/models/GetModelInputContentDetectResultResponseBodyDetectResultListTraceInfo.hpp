// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord.hpp>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics.hpp>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories.hpp>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_TO_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_TO_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_TO_JSON(PromptAttack, promptAttack_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWord, blockWord_);
      DARABONBA_PTR_FROM_JSON(DenyTopics, denyTopics_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategories, harmfulCategories_);
      DARABONBA_PTR_FROM_JSON(PromptAttack, promptAttack_);
    };
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo &&) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& operator=(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& operator=(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWord_ == nullptr
        && return this->denyTopics_ == nullptr && return this->harmfulCategories_ == nullptr && return this->promptAttack_ == nullptr; };
    // blockWord Field Functions 
    bool hasBlockWord() const { return this->blockWord_ != nullptr;};
    void deleteBlockWord() { this->blockWord_ = nullptr;};
    inline const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord & blockWord() const { DARABONBA_PTR_GET_CONST(blockWord_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord) };
    inline Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord blockWord() { DARABONBA_PTR_GET(blockWord_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setBlockWord(const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord & blockWord) { DARABONBA_PTR_SET_VALUE(blockWord_, blockWord) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setBlockWord(Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord && blockWord) { DARABONBA_PTR_SET_RVALUE(blockWord_, blockWord) };


    // denyTopics Field Functions 
    bool hasDenyTopics() const { return this->denyTopics_ != nullptr;};
    void deleteDenyTopics() { this->denyTopics_ = nullptr;};
    inline const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics & denyTopics() const { DARABONBA_PTR_GET_CONST(denyTopics_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics) };
    inline Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics denyTopics() { DARABONBA_PTR_GET(denyTopics_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setDenyTopics(const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics & denyTopics) { DARABONBA_PTR_SET_VALUE(denyTopics_, denyTopics) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setDenyTopics(Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics && denyTopics) { DARABONBA_PTR_SET_RVALUE(denyTopics_, denyTopics) };


    // harmfulCategories Field Functions 
    bool hasHarmfulCategories() const { return this->harmfulCategories_ != nullptr;};
    void deleteHarmfulCategories() { this->harmfulCategories_ = nullptr;};
    inline const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories & harmfulCategories() const { DARABONBA_PTR_GET_CONST(harmfulCategories_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories) };
    inline Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories harmfulCategories() { DARABONBA_PTR_GET(harmfulCategories_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setHarmfulCategories(const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories & harmfulCategories) { DARABONBA_PTR_SET_VALUE(harmfulCategories_, harmfulCategories) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setHarmfulCategories(Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories && harmfulCategories) { DARABONBA_PTR_SET_RVALUE(harmfulCategories_, harmfulCategories) };


    // promptAttack Field Functions 
    bool hasPromptAttack() const { return this->promptAttack_ != nullptr;};
    void deletePromptAttack() { this->promptAttack_ = nullptr;};
    inline const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack & promptAttack() const { DARABONBA_PTR_GET_CONST(promptAttack_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack) };
    inline Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack promptAttack() { DARABONBA_PTR_GET(promptAttack_, Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setPromptAttack(const Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack & promptAttack) { DARABONBA_PTR_SET_VALUE(promptAttack_, promptAttack) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo& setPromptAttack(Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack && promptAttack) { DARABONBA_PTR_SET_RVALUE(promptAttack_, promptAttack) };


  protected:
    // Detected keywords
    std::shared_ptr<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord> blockWord_ = nullptr;
    // Sensitive topic object list
    std::shared_ptr<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoDenyTopics> denyTopics_ = nullptr;
    // List of harmful category result objects
    std::shared_ptr<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories> harmfulCategories_ = nullptr;
    // Prompt attack information
    std::shared_ptr<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack> promptAttack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
