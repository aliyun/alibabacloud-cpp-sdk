// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULECHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULECHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataQualityRuleCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/DataQualityRuleCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/DataQualityRuleCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRuleCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    DataQualityRuleCheckingConfigThresholds() = default ;
    DataQualityRuleCheckingConfigThresholds(const DataQualityRuleCheckingConfigThresholds &) = default ;
    DataQualityRuleCheckingConfigThresholds(DataQualityRuleCheckingConfigThresholds &&) = default ;
    DataQualityRuleCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityRuleCheckingConfigThresholds() = default ;
    DataQualityRuleCheckingConfigThresholds& operator=(const DataQualityRuleCheckingConfigThresholds &) = default ;
    DataQualityRuleCheckingConfigThresholds& operator=(DataQualityRuleCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->expected_ != nullptr && this->warned_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::DataQualityRuleCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::DataQualityRuleCheckingConfigThresholdsCritical) };
    inline Models::DataQualityRuleCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::DataQualityRuleCheckingConfigThresholdsCritical) };
    inline DataQualityRuleCheckingConfigThresholds& setCritical(const Models::DataQualityRuleCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline DataQualityRuleCheckingConfigThresholds& setCritical(Models::DataQualityRuleCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::DataQualityRuleCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::DataQualityRuleCheckingConfigThresholdsExpected) };
    inline Models::DataQualityRuleCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::DataQualityRuleCheckingConfigThresholdsExpected) };
    inline DataQualityRuleCheckingConfigThresholds& setExpected(const Models::DataQualityRuleCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline DataQualityRuleCheckingConfigThresholds& setExpected(Models::DataQualityRuleCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::DataQualityRuleCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::DataQualityRuleCheckingConfigThresholdsWarned) };
    inline Models::DataQualityRuleCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::DataQualityRuleCheckingConfigThresholdsWarned) };
    inline DataQualityRuleCheckingConfigThresholds& setWarned(const Models::DataQualityRuleCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline DataQualityRuleCheckingConfigThresholds& setWarned(Models::DataQualityRuleCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    std::shared_ptr<Models::DataQualityRuleCheckingConfigThresholdsCritical> critical_ = nullptr;
    std::shared_ptr<Models::DataQualityRuleCheckingConfigThresholdsExpected> expected_ = nullptr;
    std::shared_ptr<Models::DataQualityRuleCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
