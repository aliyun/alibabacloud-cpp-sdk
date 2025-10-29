// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds() = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds(const UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds(UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &&) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds() = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& operator=(const UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& operator=(UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->expected_ == nullptr && return this->warned_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical) };
    inline Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setCritical(const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setCritical(Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected) };
    inline Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setExpected(const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setExpected(Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned) };
    inline Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setWarned(const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setWarned(Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
