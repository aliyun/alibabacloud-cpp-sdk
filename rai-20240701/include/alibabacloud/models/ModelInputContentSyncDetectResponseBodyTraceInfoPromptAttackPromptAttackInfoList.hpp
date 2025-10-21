// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOPROMPTATTACKPROMPTATTACKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOPROMPTATTACKPROMPTATTACKINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList(const ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList(ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &&) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& operator=(const ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& operator=(ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList &&) = default ;
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
    inline ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Category name
    std::shared_ptr<string> categoryLabel_ = nullptr;
    // 0: Text
    // 1: Image
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    // 0: No risk
    // 1: Risk exists
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
