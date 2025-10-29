// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds() = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds(const CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds(CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &&) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds() = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& operator=(const CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& operator=(CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->expected_ == nullptr && return this->warned_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical) };
    inline Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setCritical(const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setCritical(Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected) };
    inline Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setExpected(const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setExpected(Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned) };
    inline Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setWarned(const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds& setWarned(Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
