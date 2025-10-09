// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleRequestCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleRequestCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleRequestCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    UpdateDataQualityRuleRequestCheckingConfigThresholds() = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholds(const UpdateDataQualityRuleRequestCheckingConfigThresholds &) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholds(UpdateDataQualityRuleRequestCheckingConfigThresholds &&) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleRequestCheckingConfigThresholds() = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholds& operator=(const UpdateDataQualityRuleRequestCheckingConfigThresholds &) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholds& operator=(UpdateDataQualityRuleRequestCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->expected_ != nullptr && this->warned_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical) };
    inline Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical) };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholds& setCritical(const Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholds& setCritical(Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected) };
    inline Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected) };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholds& setExpected(const Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholds& setExpected(Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned) };
    inline Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned) };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholds& setWarned(const Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholds& setWarned(Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
