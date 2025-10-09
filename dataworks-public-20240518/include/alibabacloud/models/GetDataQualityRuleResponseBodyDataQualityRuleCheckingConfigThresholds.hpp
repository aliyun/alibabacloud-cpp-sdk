// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODYDATAQUALITYRULECHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODYDATAQUALITYRULECHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds() = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds(const GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds &) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds(GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds &&) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds() = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& operator=(const GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds &) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& operator=(GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->expected_ != nullptr && this->warned_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical) };
    inline Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& setCritical(const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& setCritical(Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected) };
    inline Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& setExpected(const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& setExpected(Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned) };
    inline Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& setWarned(const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds& setWarned(Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
