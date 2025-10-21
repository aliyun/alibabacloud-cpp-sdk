// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOPROMPTATTACKPROMPTATTACKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOPROMPTATTACKPROMPTATTACKINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList(const ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList(ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryLabel_ == nullptr
        && return this->categoryType_ == nullptr && return this->riskResult_ == nullptr && return this->securityLevel_ == nullptr; };
    // categoryLabel Field Functions 
    bool hasCategoryLabel() const { return this->categoryLabel_ != nullptr;};
    void deleteCategoryLabel() { this->categoryLabel_ = nullptr;};
    inline string categoryLabel() const { DARABONBA_PTR_GET_DEFAULT(categoryLabel_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Category name
    std::shared_ptr<string> categoryLabel_ = nullptr;
    // 0: Text
    // 1: Image
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    // 0: No risk
    // 1: Risk present
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    // Security level
    // 0: Low
    // 1: Medium
    // 2: High
    std::shared_ptr<int32_t> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
