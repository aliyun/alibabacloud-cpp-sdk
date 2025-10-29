// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityRuleRequestCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/CreateDataQualityRuleRequestCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/CreateDataQualityRuleRequestCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleRequestCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleRequestCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleRequestCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    CreateDataQualityRuleRequestCheckingConfigThresholds() = default ;
    CreateDataQualityRuleRequestCheckingConfigThresholds(const CreateDataQualityRuleRequestCheckingConfigThresholds &) = default ;
    CreateDataQualityRuleRequestCheckingConfigThresholds(CreateDataQualityRuleRequestCheckingConfigThresholds &&) = default ;
    CreateDataQualityRuleRequestCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleRequestCheckingConfigThresholds() = default ;
    CreateDataQualityRuleRequestCheckingConfigThresholds& operator=(const CreateDataQualityRuleRequestCheckingConfigThresholds &) = default ;
    CreateDataQualityRuleRequestCheckingConfigThresholds& operator=(CreateDataQualityRuleRequestCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->expected_ == nullptr && return this->warned_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical) };
    inline Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical) };
    inline CreateDataQualityRuleRequestCheckingConfigThresholds& setCritical(const Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline CreateDataQualityRuleRequestCheckingConfigThresholds& setCritical(Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected) };
    inline Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected) };
    inline CreateDataQualityRuleRequestCheckingConfigThresholds& setExpected(const Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline CreateDataQualityRuleRequestCheckingConfigThresholds& setExpected(Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned) };
    inline Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned) };
    inline CreateDataQualityRuleRequestCheckingConfigThresholds& setWarned(const Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline CreateDataQualityRuleRequestCheckingConfigThresholds& setWarned(Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::CreateDataQualityRuleRequestCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::CreateDataQualityRuleRequestCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::CreateDataQualityRuleRequestCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
